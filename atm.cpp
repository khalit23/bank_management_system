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
    void exit_option(); //Used to ask the user if they wish to return to menu or exit after carrying out a task
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

    switch (option)
    {
    case 1:
        register_account();
        break;
    
    default:
        break;
    }

} 

void ATM::exit(){
    cout << "We hope to see you again soon!" << endl;
}

void ATM::exit_option(){
    string choice;
    cout << "Would you like to return to the main menu? Type 'yes' or 'no': "; cin >> choice;
    if (choice == "yes")
    {
        menu();
    }
    else{
        exit();
    }
}

void ATM::register_account(){
    cout << "What is your name: "; cin >> name;
    cout << "What is your date of birth: "; cin >> DOB;
    cout << "Enter your account number: "; cin >>account_number;
    balance = 0;
    cout << "Your account has successfully been created and your balance is set to £0" << endl;
    exit_option();
}

int main() {
    ATM atm;

    atm.menu();

    return 0;
}