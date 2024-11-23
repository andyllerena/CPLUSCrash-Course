#include <iostream>
using namespace std;

int main(){
    const double PI = 3.1459;
    double radius = 10;
    double circumference = 2 * PI * radius;
    cout << "The circumference is " << circumference << "cm";
}

//const secures the value. You cant change it afterwards