#pragma once
#include<fstream>
#include"Code.h"
class BankSystem
{
public:
	BankSystem();
	void saveAdd();
	void clearAll();
	void Register();
private:
	const std::string AccountFileName="Account.code";//�˻��ļ��Ĵ洢·��
	std::vector<char> AllAccount;  //�洢�����˻�����Ϣ
	std::vector<char> AddAccount;
};

