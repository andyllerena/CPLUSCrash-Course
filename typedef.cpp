#include <vector>
#include <iostream>
using namespace std;

typedef vector<int> IntVector; // Define a shorthand for vector<int>

int main() {
    IntVector myVector; // Use the shorthand to declare a vector of integers
    myVector.push_back(10); // Example usage
    myVector.push_back(20);

    for (int val : myVector) {
        cout << val << " ";
    }
    return 0;
}
