#include <iostream>
#include <string>
#include <stdlib.h>
#include <Windows.h>
using namespace std;

bool repeatProgram();

HANDLE consoleColor = GetStdHandle(STD_OUTPUT_HANDLE);

int main()
{
    bool repeat;

    

    do
    {
        float weight, height, bmi;

        SetConsoleTextAttribute(consoleColor, 79);
        cout << "\t\t\t\t---------------- Welcome BMI Calculator ----------------\n\n\n";
        SetConsoleTextAttribute(consoleColor, 7);
        cout << "\n\n\n\n\t\t\t\t\tEnter the WEIGHT(kg)\t:  ";
        cin >> weight;
        cout << "\n\t\t\t\t\tEnter the HEIGHT(m)\t:  ";
        cin >> height;

        bmi = weight / (height * height);

        if (bmi < 18.5)
        {
            cout << "\n\n\t\t\t\t\tYou are currently UNDERWEIGHT.";
        }
        else
        {
            if (bmi > 25)
            {
                cout << "\n\n\t\t\t\t\tYou are currently OVERWEIGHT.";
            }
            else
            {
                cout << "\n\n\t\t\t\t\tYou have a normall BMI rating.";
            }
        }
        cout << "\n\n\t\t\t\t\tYour current BMI rating is\t:  " << bmi;

        repeat = repeatProgram();

    } while (repeat);

    return 0;
}

bool repeatProgram()
{
    char repeat;

    SetConsoleTextAttribute(consoleColor, 79);
    cout << "\n\n\t\t\t\t\tEnter 'Y' or 'y' to check another BMI. " << endl;
    cout << "\t\t\t\t\tEnter 'N' or 'n' to exit the programme." << endl;
    SetConsoleTextAttribute(consoleColor, 7);
    cout << "\n\n\n\t\t\t\t\tEnter Your Response: ";
    cin >> repeat;
    cout << endl;

    repeat = toupper(repeat);

    if (repeat == 'Y')
    {
        repeat = true;
        system("cls");
    }
    else
    {
        repeat = false;

    }

    return repeat;
}
