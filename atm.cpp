#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

class ATM{
    private:
    string name;
    string DOB;
    int account_number;
    int balance;

    public:
    void menu();
    void register_account();
    void deposit_amount();
    void withdraw_amount();
    void exit();
    string return_account_details();
    int return_account_balance();
};

void ATM::menu(){
    cout << "************************** MENU ******************************" << endl;
    cout << "1) Register a bank account" << endl;
    cout << "2) Deposit money into your bank account" << endl;
    cout << "3) Withdraw money from your bank account" << endl;
    cout << "4) Display your balance" << endl;
    cout << "5) Exit" << endl;
    cout << "***************************************************************" << endl;
    
    int option; //Used to store the menu selection of the user
    cout << "Please select an option: "; cin >> option;

} 

int main() {
    ATM atm;

    atm.menu();

    return 0;
}