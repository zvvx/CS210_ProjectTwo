#ifndef INVESTMENT_H
#define INVESTMENT_H

//Defines Investment Class and creates setters, getters, and variables
class Investment {
	public:
		Investment();
		void SetInitialInvestment(double initialInvestment);
		void SetMonthlyDeposit(double monthlyDeposit);
		void SetAnnualInterest(double annualInterest);
		void SetNumYears(int numYears);
		double GetInitialInvestment() const;
		double GetMonthlyDeposit() const;
		double GetAnnualInterest() const;
		int GetNumYears() const;
	private:
		double initialInvestment;
		double monthlyDeposit;
		double annualInterest;
		int numYears;
};

#endif