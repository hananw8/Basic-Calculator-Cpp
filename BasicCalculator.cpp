#include <iostream>
using namespace std;

int main()
    {
        double num1, num2;
        char op;
        char choice = 'y';

        while (choice == 'y' || choice == 'Y')
        {
                cout << "\n===== Basic Calculator =====\n";
                cout << "Enter first number: ";
                cin >> num1;

                cout << "Enter operator (+, -, *, /): ";
                cin >> op;

                cout << "Enter second number: ";
                cin >> num2;

                cout << "\nResult: ";

                switch (op)
                {
                    case '+':
                        cout << num1 + num2;
                        break;
                    case '-':
                        cout << num1 - num2;
                        break;
                    case '*':
                        cout << num1 * num2;
                        break;
                    case '/':
                        if (num2 == 0)
                            cout << "Error! Cannot divid by zero.";
                        else
                            cout << num1 / num2;
                    break;
                
                    default:
                        cout << "Invalid operator!";
                }
                cout << "\n\nDo you want to calculate again? (y/n): ";
                cin >> choice;
        }
        cout << "\nThank you for using the calculator!\n";
        return 0;
        
    }