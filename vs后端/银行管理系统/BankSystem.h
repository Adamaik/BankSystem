#pragma once
#include<fstream>
#include"Code.h"
#include"AdminAccount.h"
#include"FlexibleAccount.h"
#include"SavingAccount.h"
class BankSystem
{
public:
	BankSystem();
	bool saveAdd();//��д
	bool clearAll();
	bool change(vector<char>);
private:
	const std::string AccountFileName="Account.code";//�˻��ļ��Ĵ洢·��
	std::vector<FlexibleAccount> FlexibleAccounts;
	std::vector<SavingAccount> SavingAccounts;
	std::vector<AdminAccount> AdminAccounts;
};

