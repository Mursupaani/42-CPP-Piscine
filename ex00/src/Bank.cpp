#include "Bank.hpp"

std::ostream& operator<<(std::ostream& os, const Bank& bank) {
	os << "Bank informations : " << std::endl;
	os << "Liquidity : " << bank.liquidity_ << std::endl;
	for (auto& clientAccount : bank.clientAccounts_)
		os << *clientAccount << std::endl;
	return (os);
}
