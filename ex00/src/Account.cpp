#include "Account.hpp"

Account::Account(int id, int value) : id_(id), balance_(value) {}

std::ostream& operator<<(std::ostream& os_, const Account& account_) {
	os_ << "[" << account_.id_ << "] - [" << account_.balance_ << "]";
	return (os_);
}
