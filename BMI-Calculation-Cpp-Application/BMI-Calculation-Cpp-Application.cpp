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
        cout << "\t\t\t\t------ Welcome BMI Calculator ------\n\n\n";
        SetConsoleTextAttribute(consoleColor, 7);
        cout << "Enter the Weight(kg): ";
        cin >> weight;
        cout << "\nEnter the Height(m): ";
        cin >> height;

        bmi = weight / (height * height);

        if (bmi < 18.5)
        {
            cout << "\n\nYou are currently Underweight.";
        }
        else
        {
            if (bmi > 25)
            {
                cout << "\n\nYou are currently Overweight.";
            }
            else
            {
                cout << "\n\nYou have a normall BMI rating.";
            }
        }
        cout << "\n\nYour current BMI rating is: " << bmi;

        repeat = repeatProgram();

    } while (repeat);

    return 0;
}

bool repeatProgram()
{
    char repeat;

    SetConsoleTextAttribute(consoleColor, 79);
    cout << "\n\nEnter 'Y' or 'y' to check another BMI. " << endl;
    cout << "Enter 'N' or 'n' to exit the programme." << endl;
    SetConsoleTextAttribute(consoleColor, 7);
    cout << "\nEnter Your Response: ";
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
