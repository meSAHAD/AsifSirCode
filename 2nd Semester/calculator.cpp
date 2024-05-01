#include <iostream>
using namespace std;

// Function to add two numbers
void add()
{
    cout << "Enter two numbers: ";
    float num1, num2;
    cin >> num1 >> num2;
    float result = num1+num2;
    cout<<"The sum of "<<num1<<" and "<<num2<<" is "<<result<<endl;
}

// Function to subtract two numbers
void subtract()
{
    cout << "Enter two numbers: ";
    float num1, num2;
    cin >> num1 >> num2;
    float result = num1 - num2;
    cout << "The subtraction of " << num1 << " and " << num2 << " is " << result << endl;
}

// Function to multiply two numbers
void multiply()
{
    cout << "Enter two numbers: ";
    float num1, num2;
    cin >> num1 >> num2;
    float result = num1 * num2;
    cout << "The multiplication of " << num1 << " and " << num2 << " is " << result << endl;
}

// Function to divide two numbers
void divide()
{
    cout << "Enter two numbers: ";
    float num1, num2;
    cin >> num1 >> num2;
   
    if (num2 == 0)
    {
        cout << "Not dividable by 0" << endl
             << endl;
        return;
    }
    else
    {
        float result = num1 / num2;

        cout << "The division of " << num1 << " and " << num2 << " is " << result << endl;
    }

}

int main()
{
    while (true){  
        cout << "Menu \n 1.Add\n 2.Subtract \n 3.Multiplication \n 4.Division \n 5.Exit \n Enter your choice: ";
        int choice;
        cin >> choice;

        if (choice > 5)  cout << "Please enter a valid choice " << endl;
        else{
            if (choice == 5)    break;
            else if (choice == 1)   add();
            else if (choice == 2)  subtract();
            else if (choice == 3)  multiply();
            else if (choice == 4)  divide();  
        }
    }
 
    return 0;
}
