#include "manager_account.h"

void manager_account::start()
{
	account* acc = new account("John Doe", 1000.15);

	acc->deposit(500.0);
	acc->withdraw(250.0);

	acc->display_balance();
	acc->display_transaction_history();
}
