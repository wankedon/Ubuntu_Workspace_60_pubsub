#include <iostream>
#include "ZCZHSubcriber.h"
#include <vector>
#include "string.h"
#include <signal.h>  // 关于信号的头文件
#include <unistd.h>

using namespace std;
using namespace ZCZHSubcriber;

class UseExample
{
public:
	UseExample();
	~UseExample();

private:
	static void SubcribePScanResult(uint32_t subcriberId, const PScanResult& pscanResult, void* ptr);
	void onPScanResult(uint32_t subcriberId, const PScanResult& pscanResult);
	static void SubcribeIFScanResult(uint32_t subcriberId, const IFAnalysisResult& ifResult, void* ptr);
	void onIFScanResult(uint32_t subcriberId, const IFAnalysisResult& ifResult);
	static void SubcribeDFResult(uint32_t subcriberId, const DirectionResult& ifResult, void* ptr);
	void onDFResult(uint32_t subcriberId, const DirectionResult& ifResult);
	static void SubcribePosResult(uint32_t subcriberId, const PositionResult& posResult, void* ptr);
	void onPosResult(uint32_t subcriberId, const PositionResult& posResult);
	static void SubcribeDeviceInfo(uint32_t subcriberId, const DeviceInformation& devicestatus, void* ptr);
	void onDeviceInfo(uint32_t subcriberId, const DeviceInformation& devicestatus);
	//static void SubcribeIntelligenceInformation(uint32_t subcriberId, const IntelligenceInformation& info, void* ptr);
	//void onIntelligenceInformation(uint32_t subcriberId, const IntelligenceInformation& info);


private:
	int m_id;
};

UseExample::UseExample()
{
	//��ʼ����
	auto erro = InitLib();
	if (erro == ZCZH_ERR_NONE)
	{
		std::cout << "InitLib sucessed" << std::endl;
	}
	else
	{
		std::cout << "InitLib failed erroCode: " << erro << std::endl;
		return;
	}
	//�������������
	ResultCallBacks rcbs;
	rcbs.owner = this;
	rcbs.pscanResultHandler = SubcribePScanResult;
	rcbs.ifResultHandler = SubcribeIFScanResult;
	rcbs.dfResultHandler = SubcribeDFResult;
	rcbs.posResultHandler = SubcribePosResult;
	rcbs.deviceInfoHandler = SubcribeDeviceInfo;
	//rcbs.itelligenceInformationHandler = SubcribeIntelligenceInformation;
	//ע�ᶩ����
	erro = RegisterSubscriber(&m_id, rcbs);
	if (erro == ZCZH_ERR_NONE)
	{
		std::cout << "RegisterSubscriber sucessed Id " << m_id << std::endl;
		std::cout << "Start Receive ZCZHData ..." << std::endl;
	}
	else
	{
		std::cout << "RegisterSubscriber failed erroCode: " << erro << std::endl;
		return;
	}
}

UseExample::~UseExample()
{
	//ע��������
	auto erro = UnregisterSubscriber(m_id);
	if (erro == ZCZH_ERR_NONE)
	{
		std::cout << "UnregisterSubscriber " << m_id << " sucessed" << std::endl;
	}
	else
	{
		std::cout << "UnregisterSubscriber failed erroCode: " << erro << std::endl;
		return;
	}
	//�رտ�
	erro = DeInitLib();
	if (erro == ZCZH_ERR_NONE)
	{
		std::cout << "DeInitLib sucessed" << std::endl;
	}
	else
	{
		std::cout << "DeInitLib failed erroCode: " << erro << std::endl;
		return;
	}
}

//����ȫ�����ݻص�����
void UseExample::SubcribePScanResult(uint32_t subcriberId, const PScanResult& pscanResult, void* ptr)
{
	UseExample* self = (UseExample*)(ptr);
	self->onPScanResult(subcriberId,pscanResult);
}

void UseExample::onPScanResult(uint32_t subcriberId, const PScanResult& pscanResult)
{
	std::cout << "subcriberId " << subcriberId << " ReceivePScanResult: " << /*pscanResult.header.sweep_count << */std::endl;
	//ȫ��Ƶ������
	Spectrum spectrum = pscanResult.spectrum;
	std::vector<float> data(spectrum.trace.length);
	memcpy(data.data(), spectrum.trace.addr, data.size() * sizeof(float));
	//�ź��б�
	SignalList signalList = pscanResult.signalList;
	std::vector<SignalSegment> signals(signalList.signalCount);
	memcpy(signals.data(), signalList.signalAddr, signals.size() * sizeof(SignalSegment));
	int a = 0;
}

void UseExample::SubcribeIFScanResult(uint32_t subcriberId, const IFAnalysisResult& ifResult, void* ptr)
{
	UseExample* self = (UseExample*)(ptr);
	self->onIFScanResult(subcriberId, ifResult);
}

void UseExample::onIFScanResult(uint32_t subcriberId, const IFAnalysisResult& ifResult)
{
	std::cout << "subcriberId " << subcriberId << " ReceiveIFResult: " << /*ifResult.header.sweep_count << */std::endl;
	//Ƶ������
	Spectrum spectrum = ifResult.spectrum;
	std::vector<float> data(spectrum.trace.length);
	memcpy(data.data(), spectrum.trace.addr, data.size() * sizeof(float));
	//����ʶ����
	RecognizeResult rec_result = ifResult.recResult;
	//��ʽʶ����
	TransmissionType trans_result = ifResult.transResult;
	int a = 0;
}

void UseExample::SubcribeDFResult(uint32_t subcriberId, const DirectionResult& ifResult, void* ptr)
{
	UseExample* self = (UseExample*)(ptr);
	self->onDFResult(subcriberId, ifResult);
}

void UseExample::onDFResult(uint32_t subcriberId, const DirectionResult& dfResult)
{
	std::cout << "subcriberId " << subcriberId << " ReceiveDFResult: " << /*dfResult.header.sweep_count << */std::endl;
	//Ƶ������
	Spectrum spectrum = dfResult.spectrum;
	std::vector<float> data(spectrum.trace.length);
	memcpy(data.data(), spectrum.trace.addr, data.size() * sizeof(float));
	//Ŀ�귽λ
	TargetDirection target= dfResult.target; 
	int  a = 0;
}

void UseExample::SubcribePosResult(uint32_t subcriberId, const PositionResult& posResult, void* ptr)
{
	UseExample* self = (UseExample*)(ptr);
	self->onPosResult(subcriberId, posResult);
}

void UseExample::onPosResult(uint32_t subcriberId, const PositionResult& posResult)
{
	std::cout << "subcriberId " << subcriberId << " ReceivePosResult:" << std::endl;
	//Ŀ��λ��
	Position pos = posResult.position;
	int  a = 0;
}

void UseExample::SubcribeDeviceInfo(uint32_t subcriberId, const DeviceInformation& devicestatus, void* ptr)
{
	UseExample* self = (UseExample*)(ptr);
	self->onDeviceInfo(subcriberId, devicestatus);
}

void UseExample::onDeviceInfo(uint32_t subcriberId, const DeviceInformation& devicestatus)
{
	std::cout << "subcriberId " << subcriberId << " DeviceInformation:" << std::endl;
}

int main()
{
	UseExample useExample;
	pause();
	return 0;
}