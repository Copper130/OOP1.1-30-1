#include <iostream>
#include <string>

class BankAccount {
    std::string AccountHolder;
    double Balance;

public:

    void SetAccount(std::string NameOfHolder, double InitialBal) {
        AccountHolder = NameOfHolder;
        Balance = InitialBal;
    }


    void Deposit(double DepositAmount) {
        Balance += DepositAmount;
        std::cout << "\n$" << DepositAmount << " Has been deposited!\n";
    }

    void Withdraw(double WithdrawAmount) {
        Balance -= WithdrawAmount; 
        std::cout << "\n$" << WithdrawAmount << " Has been withdrawn!\n";

    }

    void DisplayBalance() {

        std::cout << "Account Holder: "<< AccountHolder <<"\nCurrent Balance is $" << Balance << std::endl;

    }

};



int main()
{
    std::string Name = "Cooper";

    BankAccount Account_1; // Create Object
    Account_1.SetAccount(Name, 100); // Set Accounts information
    Account_1.DisplayBalance(); // Displays the info of the account before depositing or withdrawing anything.
    Account_1.Deposit(200);
    Account_1.DisplayBalance();
    Account_1.Withdraw(250);
    Account_1.DisplayBalance();
}

