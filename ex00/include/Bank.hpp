#pragma once

#include <cstdint>
#include <iostream>
#include <map>
#include <vector>

#include "Account.hpp"

class Bank {
	public:
		Bank() = default;
		~Bank() = default;
		Bank(const int liquidity = 0);
		Bank(const Bank& other) = delete;
		Bank& operator=(const Bank& other) = delete;

		Account& new_account(const int initial_balance = 0);
		void	 delete_account(void);

		friend std::ostream& operator<<(std::ostream& os, const Bank& bank);

	private:
		int					  currend_id_ = 0;
		int64_t				  liquidity_;
		std::vector<Account*> clientAccounts_;

		// map<Account id, loan amount>
		std::map<int, int64_t> given_loans_;
};
