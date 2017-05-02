/*
Author: Mohammad Hijazi
Create Date: 01/16/2014
Project Name: Basic Calculator
*/



# include <iostream>
using namespace std;
int main()
{
    char operation;
    float num1,num2;
    while(1){

    cout << "Enter operator either + or - or * or /: ";
    cin >> operation;
    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    switch(operation) {
        case '+':
            cout <<"Answer = "<< num1+num2<<endl;
            break;
        case '-':
            cout <<"Answer = "<< num1-num2<<endl;
            break;
        case '*':
            cout <<"Answer = "<<num1*num2<<endl;
            break;
        case '/':
            cout <<"Answer = "<< num1/num2<<endl;
            break;
        default:
            /* If operator is other than +, -, * or /, error message is shown */
            cout << "Error! operator is not correct";
            break;
    }

    }

    return 0;
}
