//Jerica Thrift Project 2

#ifndef banking_h
#define banking_h

using namespace std;



class BankingApp
{

public:
	
	//setters and getters
	void SetInitialInvestment(double initialInvestment);
	double GetInitialInvestment();
	void SetMonthlyDeposit(double monthlyDeposit);
	double GetMonthlyDeposit();
	void SetAnnualInterest(double annualInterest);
	double GetAnnualInterest();
	void SetNumYears(int numYears);
	int GetNumYears();
	double balancewithdeposits(double initialInvestment, double monthlyDeposit, double annualInterest, int numYears);
	double balancewithoutdeposits(double initialInvestment, double annualInterest, int numYears);


private:
	double initial_Investment;
	double monthly_Deposit;
	double annual_Interest;
	int num_Years;
	double total_Balance;
	double annual_Interest_withDeposits;


};


#endif // !banking_h


