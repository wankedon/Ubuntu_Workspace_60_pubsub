
#include "pch.h"
#ifndef STRICT
#define STRICT
#endif

#include "SubPub.h"
#include "Logger.h"
#include "StringConv.h"
#include "ConfigLoader.h"
using namespace std;

static atomic_bool int_flag(false);
static std::unique_ptr<Broker> broker;
static void SignHandler(int sig)
{
	if (sig == SIGINT)
	{
		broker.reset();
		zsys_shutdown();
		int_flag = true;
	}
}

int main()
{
	signal(SIGINT, SignHandler);
	char *path = getcwd(NULL, 0);
	string strPath = path;
	time_t ttnow = time(NULL);
	tm *tmnow;
	tmnow = localtime(&ttnow);
	Logger::PATH = fmt::format("{}/serverlog/serverlog{:04}-{:02}-{:02}.log", strPath, tmnow->tm_year + 1900, tmnow->tm_mon + 1, tmnow->tm_mday);
    ConfigLoader cl(StrConvert::UTF8Towstring(path) +  L"/BusConfigFile.xml");
	auto config = cl.load();
	if (!config)
		return -1;
	zsys_init();
	broker = make_unique<Broker>(config->name, config->pubConfig, config->subConfig);
	broker->subTopic("");	//broker转发所有消息
	LOG("---------------message bus start------------------");
	while (!int_flag)
	{
		std::this_thread::sleep_for(chrono::milliseconds(100));
	}
	LOG("---------------message bus quit------------------");
	LOGFlush();
}
