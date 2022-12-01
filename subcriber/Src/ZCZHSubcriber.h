#pragma once

#ifdef PLATFROM_WINDOWS
#ifdef ZCZHSUBCRIBER_EXPORTS
#define ZCZHSUBCRIBER_API __declspec(dllexport)
#else
#define ZCZHSUBCRIBER_API __declspec(dllimport)
#endif
#else
#define ZCZHSUBCRIBER_API
#endif

#include "SubComDef.h" //�ṹ������ͷ�ļ�
namespace ZCZHSubcriber
{
	/** ������
	*  @note:  ��̬��ӿں�������ֵ
	*/
	enum ZCZH_Error
	{
		ZCZH_ERR_NONE = 0,                //�޴���
		ZCZH_ERR_INIT = -1,               //��ʼ������
		ZCZH_ERR_INVALID_HANDLE = -2,     //�����Ч
		ZCZH_ERR_READ_CONFIG = -3,        //�����ļ���ȡ����
		ZCZH_ERR_NO_HANDLE_RESOURCE = -4, //�޾����Դ
	};

	/** ����ȫ�����ݻص�����
	*  @param:  const uint32_t subcriberId��������Id����ʶ�����������ĸ�������
	*  @param:  const PScanResult& pscanResult�����յ���ȫ������
	*  @param:  void* ptr����������ָ�룬�������Ա����ʱʹ��
	*  @note:   ���ڽ���ȫ������
	*����������  �ú������û�Ԥ�ȶ��壬��ֵ���ص��������ϼ��ɣ�����̬����յ�ȫ�����ݺ��ᴥ���ú���
	*/
	typedef void PScanResultHandler(const uint32_t subcriberId, const PScanResult& pscanResult, void* ptr);

	/** ���ն�Ƶ�������ݻص�����
    *  @param:  const uint32_t subcriberId��������Id����ʶ�����������ĸ�������
	*  @param:  const IFAnalysisResult& ifResult�����յ��Ķ�Ƶ��������
	*  @param:  void* ptr����������ָ�룬�������Ա����ʱʹ��
	*  @note:   ���ڽ��ն�Ƶ��������
	*����������  �ú������û�Ԥ�ȶ��壬��ֵ���ص��������ϼ��ɣ�����̬����յ���Ƶ�������ݺ��ᴥ���ú���
	*/
	typedef void IFAnalysisResultHandler(const uint32_t subcriberId, const IFAnalysisResult& ifResult, void* ptr);

	/** ���ղ������ݻص�����
	*  @param:  const uint32_t subcriberId��������Id����ʶ�����������ĸ�������
	*  @param:  const DirectionResult& dfResult�����յ��Ĳ�������
	*  @param:  void* ptr����������ָ�룬�������Ա����ʱʹ��
	*  @note:   ���ڽ��ղ�������
	*����������  �ú������û�Ԥ�ȶ��壬��ֵ���ص��������ϼ��ɣ�����̬����յ��������ݺ��ᴥ���ú���
	*/
	typedef void DirectionResultHandler(const uint32_t subcriberId, const DirectionResult& dfResult, void* ptr);

	/** ���ն�λ���ݻص�����
	*  @param:  const uint32_t subcriberId��������Id����ʶ�����������ĸ�������
	*  @param:  const PositionResult& posResult�����յ��Ķ�λ����
	*  @param:  void* ptr����������ָ�룬�������Ա����ʱʹ��
	*  @note:   ���ڽ��ն�λ����
	*����������  �ú������û�Ԥ�ȶ��壬��ֵ���ص��������ϼ��ɣ�����̬����յ���λ���ݺ��ᴥ���ú���
	*/
	typedef void PositionResultHandler(const uint32_t subcriberId, const PositionResult& posResult, void* ptr);

	/** �����豸״̬�ص�����
	*  @param:  const uint32_t subcriberId��������Id����ʶ�����������ĸ�������
	*  @param:  const DeviceStatus& deviceStatus�����յ����豸״̬
	*  @param:  void* ptr����������ָ�룬�������Ա����ʱʹ��
	*  @note:   ���ڽ����豸״̬
	*����������  �ú������û�Ԥ�ȶ��壬��ֵ���ص��������ϼ��ɣ�����̬����յ��豸״̬���ᴥ���ú���
	*/
	typedef void DeviceInfoHandler(const uint32_t subcriberId, const DeviceInformation& deviceStatus, void* ptr);

	/** �ص���������
	*  @param:  void* owner ��������ָ�룬�������Ա����ʱʹ�ã���ֵΪnullptr��ͨ����ֵΪthisָ�뼴��
	*  @param:  pscanResultHandler* ����ȫ�����ݻص�����ָ�룬��ֵΪnullptr��
	*  @note:   ����һϵ�н������ݵĻص�����
	*����������  �ýṹ�����û�Ԥ�ȶ��壬ͨ��ע�ᶩ���߽ӿڽ��䴫�ݸ���̬�⼴��
	*/
	struct ResultCallBacks
	{
		void* owner = nullptr;
		PScanResultHandler* pscanResultHandler = nullptr;
		IFAnalysisResultHandler* ifResultHandler = nullptr;
		DirectionResultHandler* dfResultHandler = nullptr;
		PositionResultHandler* posResultHandler = nullptr;
		DeviceInfoHandler* deviceInfoHandler = nullptr;
	};

	/** ��ʼ����
	*  @return: ZCZH_Error ��ʼ�����Ƿ�ɹ�
	*  @note:   ���ڻ�ȡ���ÿ⺯��ʱ�������Դ
	*����������  �ú���Ϊʹ�ö�̬��ʱ��һ�����õĺ�������������ҽ�����һ��
	*/
	ZCZHSUBCRIBER_API ZCZH_Error InitLib();

	/** ע�ᶩ����
	*  @param:  int* subcriberId ���������ע�ᶩ���߳ɹ���᷵��һ��������Id
	*  @param:  const ResultCallBacks& rcbs �ص��������ϣ����ڽ�������
	*  @return: ZCZH_Error ע�ᶩ���Ƿ�ɹ�
	*  @note:   ͨ���ýӿ�ע�ᶩ���߲����������ݵĻص��������ݸ���̬��  
	*           �ú����ɵ��ö�Σ�ÿ����һ�ξͻ�ע��һ��������
	*/
	ZCZHSUBCRIBER_API ZCZH_Error RegisterSubscriber(int* subcriberId, const ResultCallBacks& rcbs);

	/** ע��������
	*  @param:  int subcriberId ����������ò���Ϊע�ᶩ����ʱ���ص��Ǹ�Id
	*  @return: ZCZH_Error ע���������Ƿ�ɹ�
	*  @note:   ͨ���ýӿ�ע��һ��ָ��Id�Ķ����ߣ��ú����ɵ��ö�Σ�ÿ����һ�ξͻ�ע��һ�������ߡ�
	*/
	ZCZHSUBCRIBER_API ZCZH_Error UnregisterSubscriber(int subcriberId);

	/** �رտ�
	*  @return: ZCZH_Error �رտ��Ƿ�ɹ�
	*  @note:   �����ͷ�ͨ����ʼ���⺯����õ���Դ
	*����������  �ú���Ϊʹ�ö�̬��ʱ���һ�����õĺ�����������һ�Σ����ô˺���֮�󣬳���InitLib()�������ٵ��������ӿں���
	*/
	ZCZHSUBCRIBER_API ZCZH_Error DeInitLib();
}