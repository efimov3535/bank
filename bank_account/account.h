#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class account
{
private:
	string m_name;
	double m_balance;
	vector <string> m_transaction_history;


public:
	account(string name, double initial_balance);
	void deposit(double amount);
	void withdraw(double amount);
	void display_balance();
	void display_transaction_history();
};

