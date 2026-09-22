//确定顾客是否超出信用额度

//初始化变量
//输入信息
//判断是否透支信用额度

/*初始化变量及标记值
* 确定是否结束
* 循环（标记值！=-1）
*   输入
*   计算新欠款
*   判断 if新欠款>信用额度
*     输出四条（控制精度2）
*   确定是否结束
* 
、*/





#include <iostream>
#include <iomanip>
#include "Credit.h"

using namespace std;

void Credit::checkCredit()
{
	int account = 0;
	float balance = 0;
	float charges = 0;
	float credits = 0;
	float creditLimit = 0;
	float newbalance = 0;

	cout << "Enter account number (-1 to end):";
	cin >> account;

	while (account != -1)
	{
		cout << "Enter begining balance: ";
		cin >> balance;
		cout << "Enter total charges: ";
		cin >> charges;
		cout << "Enter total credits: ";
		cin >> credits;
		cout << "Enter credit limit: ";
		cin >> creditLimit;

		newbalance = balance + charges - credits;
		cout << "New balance is " << newbalance << endl;
		if (newbalance > creditLimit)
		{
			cout << setprecision(2) << fixed;
			cout <<"Account: "<< account << endl;
			cout << "Credit limit: " << creditLimit<<endl;
			cout << "Balance: " << newbalance << endl;
			cout << "Credit Limit Exceeded." << endl;
		}
		cout << "\n" << endl;
		cout << "Enter Account Number (or -1 to quit): ";
		cin >> account;
	}
}
