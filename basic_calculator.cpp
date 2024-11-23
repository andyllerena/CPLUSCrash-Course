#include <iostream>
using namespace std;

int main(){
    char operation;
    double num1;
    double num2;
    double result;

    cout << "************ Calculator ************\n ";

    cout << "Enter either (+ - * /): ";
    cin >> operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "************************************\n ";


    switch(operation){
        case '+':
            result = num1 + num2;
            break;
        
        case '-':
            result = num1 - num2;
            break;
        
        case '*':
            result = num1 * num2;
            break;
        
        case '/':
            result = num1 / num2;
            break;
        
        default:
            cout << "Please try again" << endl;

       
}

    cout << "The result of " << num1 << " " << operation << " " << num2 << " is: " << result << endl;

}