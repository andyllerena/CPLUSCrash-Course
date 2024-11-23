#include <cmath>
#include <iostream>
using namespace std;

int main() {
    // double x = -16.0, y = 2.0, a = 10.0, b = 20.0;

    // cout << "Absolute: " << abs(x) << endl;
    // cout << "Square root: " << sqrt(abs(x)) << endl;
    // cout << "Power: " << pow(y, 3) << endl;
    // cout << "Sine: " << sin(y) << endl;
    // cout << "Cosine: " << cos(y) << endl;
    // cout << "Tangent: " << tan(y) << endl;
    // cout << "Logarithm: " << log(y) << endl;
    // cout << "Exponential: " << exp(y) << endl;
    // cout << "Maximum: " << max(a, b) << endl;
    // cout << "Minimum: " << min(a, b) << endl;

    
    double a;
    double b;
    double c;

    cout << "Enter a: " << endl;
    cin >> a; 
    cout << "Enter b: " << endl;
    cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    cout << "The hyptoneuse of this triangle is: " << c << endl;

    return 0;
}
