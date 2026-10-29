#pragma once

#include <cstdint>
#include <iostream>

class Bank;

class Account {
	public:
		Account(void) = delete;
		Account(const Account &other) = delete;
		Account &operator=(const Account &other) = delete;

		friend std::ostream &operator<<(std::ostream  &os_,
										const Account &account_);

	private:
		Account(int id, int value = 0);
		~Account(void) = default;

		int id_;
		int balance_;

		void deposit_money(int64_t amount);
		void withdraw_money(int64_t amount);

		friend class Bank;
};
