#pragma once
#include<fstream>
#include"friends.h"
#include"Code.h"
#include"AdminAccount.h"
#include"SavingAccount.h"
using namespace std;
class BankSystem//ע�⣺�κβ������Ĺرճ��򶼿��ܵ��º�˵���������δ�������ã��⽫�����ڴ�����ݶ�ʧ��
{
public:
	string solvemomey(string);
	friends friendsys;
	BankSystem();
	~BankSystem();
	bool saveall();
	bool clearAll();
	void change(std::vector<char>&);
	void change2(std::vector<char>&);
	bool registerAccount(bool judge,string name,string password,string id,string phone,
		bool judge2=0 , double rate = 0, string workid = "",  string money = "0", string savingMoney = "0", string email = "");
	//judge�����Ƿ�Ϊadmin�˻���judge2�����Ƿ��������˻�
	//rate�������ʣ�������СΪ4λС��������0����Ҫ��֤����ĺϷ���
	vector<int> login(string id, string password);
	bool deleteUserAccount(int);
	bool deleteAdminAccount(int);
	void save();
	SavingAccount* getUserAccount(int);
	AdminAccount* getAdminAccount(int);
	int transfer(SavingAccount*, string, double);
	//return 0�����˻������ڣ�1����ת�˳ɹ���2��������
private:
	const std::string AccountFileName="D:\\cppsave\\UserAccount.code";//�˻������ļ��Ĵ洢·��
	const std::string AccountFileName2 = "D:\\cppsave\\AdminAccount.code";
	std::vector<SavingAccount>* SavingAccounts;
	std::vector<AdminAccount>* AdminAccounts;
};

