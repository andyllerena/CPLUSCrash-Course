#include <iostream>
using namespace std;

int main(){

    char input;
    double temp;
    double result;

    cout << "Type 'F' to convert to Fahrenheit or Type 'C' to convert to Celsius" << endl;
    cin >> input;

    cout << "Enter temp value: " << endl;
    cin >> temp;

    cout << "************ Temp Converter ************\n";

    for (int i = 0; i < 3; i++)
    {
        cout << "LOADING..." << endl;
    }

    if (input == 'F'){
        result = (temp - 32) * 5 / 9;
    }

    else{
        result = (temp * 1.8) + 32;
    }
    cout << "************************************\n";

    cout << "Conversion: " << result;
    return 0;
}