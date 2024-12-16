#include <iostream>
#include <iomanip>
#include "PrintHeader.h"

//Defines CalculateInterest Class and its two methods of calculating with or without monthly deposit
class CalculateInterest {
	public:
		void calculateWithMD(double intialInvestment, double monthlyDeposit, double annualInterest, int numYears);
		void calculateWithoutMD(double intialInvestment, double annualInterest, int numYears);
};

