#include <iostream>
using namespace std;

int main(){

    bool con = true;

    while (con)
    {
        float num1, num2;

        cout << "Enter your first number: ";
        while (!(cin >> num1)) {
            cout << "Error: Invalid input. Please enter a number: ";
            cin.clear(); // clear the error flag
            cin.ignore(10000, '\n'); // discard invalid input
        }

        cout << "Enter your second number: ";
        while (!(cin >> num2)) {
            cout << "Error: Invalid input. Please enter a number: ";
            cin.clear();
            cin.ignore(10000, '\n');
        }

        int cal;

        cout << "What do you want to do? Options>> Type> 0 for 'plus', 1 for 'minus', 2 for 'multiplication', 3 for 'division' >>> ";
        while (!(cin >> cal) || cal < 0 || cal > 3) {
            cout << "Error: Please enter a valid option (0-3): ";
            cin.clear();
            cin.ignore(10000, '\n');
        }

        switch (cal) {
            case 0: {
                double addi = (num1 + num2);
                cout << "Your addition result is: " << addi << endl;
                break;
            }
            case 1: {
                double sub = (num1 - num2);
                cout << "Your subtraction result is: " << sub << endl;
                break;
            }
            case 2: {
                double mul = (num1 * num2);
                cout << "Your multiplication result is: " << mul << endl;
                break;
            }
            case 3: {
                if (num2 == 0) {
                    cout << "Error: Division by zero" << endl;
                    continue;
                }
                double div = (num1 / num2);
                cout << "Your division result is: " << div << endl;
                break;
            }
            default: {
                cout << "I think you have written something wrong or something wrong happened!" << endl;
            }
        }

        cout << "If you want to continue again, type '1' and hit enter, If not type '0' >>> ";
        while (!(cin >> con)) {
            cout << "Error: Please enter 1 to continue or 0 to stop: ";
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }

    return 0;
}
