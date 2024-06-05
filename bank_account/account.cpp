#include "account.h"

account::account(string name, double initial_balance)
{
	m_name = name;
	m_balance = initial_balance;
}

void account::deposit(double amount)
{
	m_balance += amount;
	m_transaction_history.push_back("Deposit: + " + to_string(amount));
}

void account::withdraw(double amount)
{
	if (amount <= m_balance)
	{
		m_balance -= amount;
		m_transaction_history.push_back("Withdrawal: - " + to_string(amount));
	}
	else
	{
		cout << "Error: No money!" << endl;
	}
}

void account::display_balance()
{
	cout << "Account balance = " << m_balance << endl;
}

void account::display_transaction_history()
{
	cout << "Transaction History: " << endl;
	for (int i = 0; i < m_transaction_history.size(); i++)
	{
		cout << "- " << m_transaction_history[i] << endl;
	}
}
