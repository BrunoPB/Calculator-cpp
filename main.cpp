#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <stdbool.h>

using namespace std;

void soma();
void sub();
void multi();
void divi();
//void pow();

class resultDivi
{
public:
    int resto;
    int result;
};

int main()
{
    bool quit = false;
    while (quit == false)
    {
        int r;
        cout << "1: Start" << endl;
        cout << "2: Quit" << endl;

        cin >> r;

        if (r == 1)
        {
            system("cls");
            cout << "Choose the operation (X to quit):" << endl;
            cout << "| + | - | * | / | ^ |" << endl;
            char ro;
            cin >> ro;

            switch (ro)
            {
            case '+':
                soma();
                break;
            case '-':
                sub();
                break;
            case '*':
                multi();
                break;
            case '/':
                divi();
                break;
            /*case '^':
                pow();*/
            case 'x':
                quit = true;
                break;
            case 'X':
                quit = true;
                break;
            default:
                cout << "Invalid operator." << endl;
            }
            getchar();
            getchar();
            system("cls");
        }
        else
        {
            quit = true;
        }
    }

    return 0;
}

void soma()
{
    float a, b;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter another number: ";
    cin >> b;
    cout << endl;
    cout << a << " + " << b << " = " << a + b;
}

void sub()
{
    float a, b;
    cout << "Enter the minuend: ";
    cin >> a;
    cout << "Enter the subtrahend: ";
    cin >> b;
    cout << endl;
    cout << a << " - " << b << " = " << a - b;
}

void multi()
{
    float a, b;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter another number: ";
    cin >> b;
    cout << endl;
    cout << a << " * " << b << " = " << a * b;
}

void divi()
{
    int a, b;
    cout << "Enter the dividend: ";
    cin >> a;
    cout << "Enter the divisor: ";
    cin >> b;
    cout << endl;
    cout << a << " / " << b << " = " << a / b;
    if (a % b != 0)
    {
        cout << endl;
        cout << "Remainder: " << a % b;
    }
}