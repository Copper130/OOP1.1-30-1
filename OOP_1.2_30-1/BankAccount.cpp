#include <iostream>
#include <string>

class BankAccount {
    // initializing the attributes of the accounts.
    std::string AccountHolder;
    double Balance;

public:

    // Used the set the initial account information!
    void SetAccount(std::string NameOfHolder, double InitialBal) {
        AccountHolder = NameOfHolder;
        Balance = InitialBal;
    }

    // Its the Deposit function. It deposits into the account
    void Deposit(double DepositAmount) {
        Balance += DepositAmount;
        std::cout << "\n$" << DepositAmount << " Has been deposited!\n";
    }

    // Its the withdraw function. It withdraws from an account.
    void Withdraw(double WithdrawAmount) {
        Balance -= WithdrawAmount; 
        std::cout << "\n$" << WithdrawAmount << " Has been withdrawn!\n";

    }
    
    // Displays the current balance and account info
    void DisplayBalance() {

        std::cout << "Account Holder: "<< AccountHolder <<"\nCurrent Balance is $" << Balance << std::endl;

    }

};



int main()
{
    std::string Name = "Cooper"; // Set the default name to mine, can very easily be user input.

    BankAccount Account_1; // Create Object
    Account_1.SetAccount(Name, 100); // Set Accounts information
    Account_1.DisplayBalance(); // Displays the info of the account before depositing or withdrawing anything.
    Account_1.Deposit(200); // Test the Deposit Function!
    Account_1.DisplayBalance(); // Just showing that it worked!
    Account_1.Withdraw(250); // You'll never believe this but its testing the withdraw function.
    Account_1.DisplayBalance(); // I mean I feel like it is self explanatory at this point.
}

