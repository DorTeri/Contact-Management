#include <iostream>
#include <conio.h>
using namespace std;

// global variables

string fname, lname, phone_num;

// Functions

void addContact();
void searchContact();
void help();
void self_exit();
bool check_digits(string);
bool check_numbers();

int main()
{
    short int choice;
    system("cls");
    system("color 0A");

    cout << "\n\n\n\t\t\tContact Management.";
    cout << "\n\n\t1. Add Contact\n\t2. Search Contact\n\t3. Help\n\t4. Exit\n\t > ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        addContact();
        break;
    case 2:
        searchContact();
        break;
    case 3:
        help();
        break;
    case 4:
        self_exit();
        break;
    default:
        cout << "\n\n\tInvalid Input !";
        cout << "\n\tPress Any Key To Continue..";
        getch();
        main();
    }
    return 0;
}

void self_exit()
{
    system("cls");
    cout << "\n\n\n\t\tThank You For Using !";
    exit(1);
}

void help()
{
    cout << "This displays help";
}

void addContact()
{
    system("cls");
    cout << "\n\n\tEnter First Name : ";
    cin >> fname;
    cout << "\n\tEnter Last Name : ";
    cin >> lname;
    cout << "\n\tEnter 10-Digit Phone Number : ";
    cin >> phone_num;

    if (check_digits(phone_num))
    {
        if(check_numbers())
        {

        }
    }
    else
    {
        cout << "\n\tA Phone Number Must Contain 10 Digits.";
    }
}
void searchContact()
{
}

bool check_digits(string x)
{
    if (x.length() == 10)
        return true;
    else
        return false;
}

bool check_numbers(string x)
{
    bool check = true;

    for (int i = 0; i < x.length(); i++)
    {
        if(!(int(x[i]) >= 48 && int(x[i]) <= 57))
        {
            check = false;
        }
    }

    return check;
    
}
