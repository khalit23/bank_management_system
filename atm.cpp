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
    string get_customer_name(); 
    void verify_account_created(); 
    void deposit_amount();
    void withdraw_amount();
    void exit_option(); 
    void exit();
    string return_account_details();
    int return_account_balance();
};

void ATM::menu(){
    /*
    Acts as the menu of the ATM and allows customers to
    select a variety of different actions
    */

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
    
    case 2:
        deposit_amount();
        break;
    
    case 3:
        withdraw_amount();
        break;
    
    case 5:
        exit();
        break;
    
    default:
        break;
    }

} 


void ATM::exit(){
    /*
    Function used to exit the ATM menu
    */

    cout << "We hope to see you again soon!" << endl;
}


void ATM::exit_option(){
    /*
    Function used to check if the user wishes to carry out another action
    after they have already completed one
    */

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
    /*
    Used to store customer details with the bank.
    Customers are asked for three inputs:
    Name
    DOB
    account_number associated with their account
    all of these are private variables within the ATM class
    */

    cout << "What is your name: "; cin >> name;
    cout << "What is your date of birth: "; cin >> DOB;
    cout << "Enter your account number: "; cin >>account_number;
    balance = 0;
    cout << "Your account has successfully been created and your balance is set to £0" << endl;
    exit_option();
}


string ATM::get_customer_name(){
    /*
    Simple function to return customer name if it has been set.
    Will be used to verify an account has been created with the bank
    */
    return name;
}

void ATM::verify_account_created(){
    /*
    Check if an account has been registered with the bank.
    If an account has not been created,
    customers will not be able to carry out operations like,
    depositing, withdrawing and viewing their balance.
    */

    string current_customer_name = get_customer_name();
    if (current_customer_name == "")
    {
        cout << "You will first need to create an account with the bank!" << endl;
        register_account();
    }
}



void ATM::deposit_amount(){
    /*
    Allow customers to deposit cash into their bank account.
    We will first verify they have created an account.
    */

   verify_account_created();

   int amount;
   cout << "How much would you like to deposit: "; cin >> amount;
   balance = balance + amount;
   
   cout << "Your cash has been succesfully deposited!" << endl;
   
   exit_option();
}


void ATM::withdraw_amount(){
    /*
    Allow customers to withdraw cash from their bank account, 
    as long as it is available.
    We will first verify they have created an account.
    */

   verify_account_created();
   int amount;
   cout << "How much would you like to withdraw: "; cin >> amount;
   
   if (amount > balance)
   {
        cout << "You do not have enough cash to be able to carry out this process!" << endl;
   }
    else{
        balance = balance - amount;

        cout << "Your cash has been succesfully deposited!" << endl;
    }

    exit_option();
}

int main() {
    ATM atm;

    atm.menu();

    return 0;
}