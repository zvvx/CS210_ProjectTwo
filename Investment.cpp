#include <iostream>
using namespace std;

#include "Investment.h"

//Investment default variables
Investment::Investment() {
	initialInvestment = 0.0;
	monthlyDeposit = 0.0;
	annualInterest = 0.0;
	numYears = 1;
}

//Investment Class setters
void Investment::SetInitialInvestment(double initialInvestment) {
	this->initialInvestment = initialInvestment;
}

void Investment::SetMonthlyDeposit(double monthlyDeposit) {
	this->monthlyDeposit = monthlyDeposit;
}

void Investment::SetAnnualInterest(double annualInterest) {
	this->annualInterest = annualInterest;
}

void Investment::SetNumYears(int numYears) {
	this->numYears = numYears;
}

//Investment Class getters
double Investment::GetInitialInvestment() const {
	return initialInvestment;
}

double Investment::GetMonthlyDeposit() const {
	return monthlyDeposit;
}

double Investment::GetAnnualInterest() const {
	return annualInterest;
}

int Investment::GetNumYears() const {
	return numYears;
}