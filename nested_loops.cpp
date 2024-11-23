#include <iostream>
using namespace std;

// multiplaction table using nested loops
// int main() {

//     for (int i = 1; i <= 10; i++){
        
//         for (int j = 1; j <= 10; j++){
            
//             cout << i * j << "\t";
//         }
//         cout << endl;
//     }

// }

int main() {
    // char c = '*';
    int c = 1;

    for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}