#pragma once
#include"users.h"
#include"bktime.h"
class SavingAccount:public User
{
private:
	double fuc(double);//�������뱣����λС��
	std::string fuc2(double);//תstring����
public:
	std::string money;//�����˻�
	std::string savingMoney;//�����˻�
	long savingTime;//�����˻�ʱ���
	bool judge;//�ж��Ƿ��ж����˻�
	double rate;//����
	bool getmoney(double);
	bool getSavingMoney(double);
	bool savemoney(double);
	bool saveSavingMoney(double);
	bool transfertm(double);//return 0��ʾǮ����
	bool transfertsm(double);
	void update();
};

