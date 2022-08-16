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

int main() {

    return 0;
}