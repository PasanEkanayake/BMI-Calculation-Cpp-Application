#include <iostream>
#include <string>
using namespace std;

int main()
{
    char repeat;

    do
    {
        float weight, height, bmi;

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

        cout << "\n\nEnter 'Y' or 'y' to check another BMI." << endl;
        cout << "Enter 'N' or 'n' to exit the application." << endl;
        cout << "\nEnter Your Response: ";
        cin >> repeat;
        cout << endl;

        repeat = toupper(repeat);


        if (repeat == 'Y')
        {
            repeat = true;
        }
        else
        {
            repeat = false;
        }

    } while (repeat);

    return 0;
}
