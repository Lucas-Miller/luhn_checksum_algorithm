#ifndef LUHN_CHECK_ALGORITHM
#define LUHN_CHECK_ALGORITHM

#include <iostream>
#include <string>

bool check(std::string num) {
	int digits = num.length();
	
	int dblSum = 0;
	for (int i = digits - 2; i >= 0; i -= 2) { // double every second digit starting from the right		
		int dblDigit = ((num[i] - '0') * 2);
		if (dblDigit > 9)	// if doubled digit has more than one digit, add them together to make a single digit int
			dblDigit = (dblDigit / 10) + (dblDigit % 10);
		dblSum += dblDigit;
	}

	for (int i = digits - 1; i >= 0; i -= 2) // add every odd number
		dblSum += (num[i] - '0');

	if (dblSum % 10 == 0) // if sum is a multiple of 10, number is valid
		return true;
	else
		return false;

}


#endif // !LUHN_CHECK_ALGORITHM
