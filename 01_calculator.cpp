#include <iostream>
#include <cmath>
using namespace std;

class Calculator
{
    float a, b, pi = 3.14;

public:
    Calculator(float x, float y)
    {
        a = x;
        b = y;
    }
    void addition(void);
    void subtraction(void);
    void multiplication(void);
    void division(void);
    void percentage(void);
    void value_sin_theta(void);
    void value_cos_theta(void);
    void value_tan_theta(void);
};
void Calculator::addition(void)
{
    cout << "The addition of " << a << " and " << b << " is: " << (a + b) << endl;
}
void Calculator::subtraction(void)
{
    cout << "The subtraction of " << a << " and " << b << " is: " << (a - b) << endl;
}
void Calculator::multiplication(void)
{
    cout << "The multiplication of " << a << " and " << b << " is: " << (a * b) << endl;
}
void Calculator::division(void)
{
    cout << "The division of " << a << " and " << b << " is: " << (a / b) << endl;
}
void Calculator::percentage(void)
{
    cout << "The percentage of " << a << " out of " << b << " is: " << (a / b) * 100 << endl;
}
void Calculator::value_cos_theta(void)
{
    cout << "The value of cos(" << a << ") is: " << cos(a * pi / 180.0) << endl;
}
void Calculator::value_sin_theta(void)
{
    cout << "The value of sin(" << a << ") is: " << sin(a * pi / 180.0) << endl;
}
void Calculator::value_tan_theta(void)
{
    cout << "The value of tan(" << a << ") is: " << tan(a * pi / 180.0) << endl;
}

int main()
{
    system("color b");
    int option;
    float a, b;
    cout << "Write the which number calculator operation you want to do" << endl
         << "------Choose from given below-------" << endl
         << "1 - For Addition " << endl
         << "2 - For Subtraction " << endl
         << "3 - For Multiplication" << endl
         << "4 - For Division" << endl
         << "5 - For percentage" << endl
         << "6 - For sin(theta)" << endl
         << "7 - For cos(theta)" << endl
         << "8 - For tan(theta)" << endl;
    cin >> option;

    switch (option)
    {
    case 1:
    {
        cout << "Enter any real number" << endl;
        cin >> a;
        cout << "Enter any another real number" << endl;
        cin >> b;
        cout << endl;
        Calculator calc(a, b);
        calc.addition();
        break;
    }

    case 2:
    {
        cout << "Enter any real number" << endl;
        cin >> a;
        cout << "Enter any another real number" << endl;
        cin >> b;
        cout << endl;
        Calculator calc(a, b);
        calc.subtraction();
        break;
    }

    case 3:
    {
        cout << "Enter any real number" << endl;
        cin >> a;
        cout << "Enter any another real number" << endl;
        cin >> b;
        cout << endl;
        Calculator calc(a, b);
        calc.multiplication();
        break;
    }

    case 4:
    {
        cout << "Enter any real number" << endl;
        cin >> a;
        cout << "Enter any another real number" << endl;
        cin >> b;
        cout << endl;
        Calculator calc(a, b);
        calc.division();
        break;
    } 

    case 5:
    {
        cout << "Enter which number percentage you want" << endl;
        cin >> a;
        cout << "Enter out of which that number you owned" << endl;
        cin >> b;
        cout << endl;
        Calculator calc(a, b);
        calc.percentage();
        break;
    }

    case 6:
    {
        cout << "Enter degree" << endl;
        cin >> a;
        cout << endl;
        Calculator calc(a, b);
        calc.value_sin_theta();
        break;
    }

     case 7:
    {
        cout << "Enter degree" << endl;
        cin >> a;
        cout << endl;
        Calculator calc(a, b);
        calc.value_cos_theta();
        break;
    }

    case 8:
    {
        cout << "Enter degree" << endl;
        cin >> a;
        cout << endl;
        Calculator calc(a, b);
        calc.value_tan_theta();
        break;
    }

    default:
    {
        cout<<"You have entered the Invalid Number!!"<<endl;
        break;
    }


    }

   
    

    

    

    return 0;
}