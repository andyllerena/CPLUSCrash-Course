#include <iostream>
#include <string> // Include string library for std::string
using namespace std;

// int main() {
//     string name;

//     cout << "Enter your name: "; // Prompt for input
//     getline(cin, name);          // Read the entire line into 'name'

//     cout << "Hello, " << name << "!" << endl; // Output the input

//     if(name.length() > 12 || name.empty()){
//         cout << "Your name can't be over 12 characters or empty" << endl;
//     } 


//     else{
//         name.append("@gmail.com");
//         cout << "Welcome " << name; 
//     }
//     return 0;
// }
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello, World!";

    // 1. Length
    cout << "Length: " << str.length() << endl;

    // 2. Substring
    cout << "Substring (0, 5): " << str.substr(0, 5) << endl;

    // 3. Find
    cout << "Find 'World': " << str.find("World") << endl;

    // 4. Append
    str.append(" How are you?");
    cout << "After Append: " << str << endl;

    // 5. Concatenation with +
    string greeting = str + " Nice to meet you!";
    cout << "Concatenation: " << greeting << endl;

    // 6. Insert
    str.insert(7, "Beautiful ");
    cout << "After Insert: " << str << endl;

    // 7. Erase
    str.erase(7, 10); // Remove "Beautiful "
    cout << "After Erase: " << str << endl;

    // 8. Replace
    str.replace(7, 5, "Universe");
    cout << "After Replace: " << str << endl;

    // 9. Compare
    string anotherStr = "Hello, Universe!";
    cout << "Compare with 'Hello, Universe!': " << str.compare(anotherStr) << endl; // 0 if equal

    return 0;
}
