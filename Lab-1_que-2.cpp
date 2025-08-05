#include<bits/stdc++.h>

using namespace std;

class Bank
{
    private:
        long long int phone_no,acc_no, cus_id;
        string acc_name;
        double balance=10000;
    public:
        void input_details(string acc_name_1, long long int acc_no_1, long long int cus_id_1, long long int phone_no_1)
        {
            acc_name=acc_name_1;
            acc_no=acc_no_1;
            cus_id=cus_id_1;
            phone_no=phone_no_1;
        }
        void display_details()
        {
            cout<<"Account holder name: "<<acc_name<<endl;
            cout<<"Account number: "<<acc_no<<endl;
            cout<<"Customer ID: "<<cus_id<<endl;
            cout<<"Phone number: "<<phone_no<<endl;
            cout<<"Balance: "<<balance<<endl;
        }
        void withdraw(double amt)
        {
            if (amt>=balance)
            {
                cout<<"Insufficient balance"<<endl;
                cout<<"Withdrawal not possible"<<endl;
                display_details();
            }
            else
            {
                balance-=amt;
                display_details();
            }
        }
        void deposit(double amt)
        {
            balance+=amt;
            display_details();
        }
};

int main()
{
    Bank b1;
    long long int phone_no,acc_no, cus_id;
    string acc_name;
    cout<<"Enter the name of account holder: ";
    cin>>acc_name;
    cout<<"Enter the account number: ";
    cin>>acc_no;
    cout<<"Enter the Customer ID: ";
    cin>>cus_id;
    cout<<"Enter the phone number: ";
    cin>>phone_no;
    b1.input_details(acc_name,acc_no,cus_id,phone_no);
    b1.display_details();
    int choice;
    cout<<"Press"<<endl;
    cout<<"1-Withdraw"<<endl;
    cout<<"2-Deposit"<<endl;
    cout<<"Enter you choice: ";
    cin>>choice;
    switch (choice)
    {
        case 1:
        {
            int amount = 0;
            std::cout << "Enter the amount to withdraw: ";
            std::cin >> amount;
            b1.withdraw(amount);
            break;
        }
        case 2:
        {
            int amount = 0;
            std::cout << "Enter the amount to deposit: ";
            std::cin >> amount;
            b1.deposit(amount);
            break;
        }
        default:
            std::cout << "Enter a valid choice." << std::endl;
            break;
    }

    return 0;
}