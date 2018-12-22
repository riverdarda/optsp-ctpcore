#ifndef OPTSP_CTPCORE_CONFIG_H_
#define OPTSP_CTPCORE_CONFIG_H_

#include <sstream>
#include <mutex>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/ini_parser.hpp>
#include <boost/filesystem.hpp>
#include "datatype.hpp"

//typedef void(*parse_config_callback_fn) (bool);


class Config
{
private:
	boost::property_tree::ptree pt;
	std::mutex lock;

public:
	const int VERSION = 0;
	const int SUBVERSION = 1;
	const int EXTRAVERSION = 0;
	const char* APP_TITLE = "OPTSP�����򻯽��� CTP �������";
	const char *APP_NAME = "optsp";
	const char *AUTH_CODE = "optsp";

	const char* HOME_FILE = ".optsp";					///������Ŀ¼
	const char* CONFIG_FILE = "config.ini";				///�����ļ�
	const char* RUNNING_LOG_FILE = "running.log";		///����������־
	const char* MATCH_LOG_FILE = "match.csv";			///�ɽ���Ϣ�����ļ�
	const char* POSITION_LOG_FILE = "position.csv";		///�ֲ���Ϣ�����ļ�
	const char* STATE_LOG_FILE = "state.csv";			///״̬��Ϣ�����ļ�
	const char* INSTRUMENT_FILE = "instrument.csv";		///��Լ�б������ļ�
	const char* MD_CSV_FORMAT = "md-%s-tick.csv";		///���ݱ�����ļ���ʽ
	



public:
	boost::filesystem::path homepath;				///��Ŀ¼
	boost::filesystem::path datapath;				///����Ŀ¼
	int loglevel;									///��־���˵ȼ�

public:
	BrokerIDType brokerID;							///���͹�˾����
	UserIDType userID;								///�û��˺�
	InvestorIDType investorID;						///Ͷ�����˺�
	PasswordType password;							///����
	FrontAddrType quoteFrontAddr;					///����APIǰ�õ�ַ
	FrontAddrType tradeFrontAddr;					///����APIǰ�õ�ַ


public:
	Config();


};

#endif // !OPTSP_CTPCORE_CONFIG_H_