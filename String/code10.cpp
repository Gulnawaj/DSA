#include <iostream>
#include <string>
using namespace std;
//string properties

int main() {
    string str = "Hello World";

    // 1. Length of string
    cout << "Length: " << str.length() << endl;
    cout << "Size: " << str.size() << endl;

    // 2. Check if string is empty
    cout << "Is Empty: " << str.empty() << endl;

    // 3. First and last character
    cout << "First Character: " << str.front() << endl;
    cout << "Last Character: " << str.back() << endl;

    // 4. Access characters
    cout << "Character at index 1: " << str[1] << endl;
    cout << "Character at index 4: " << str.at(4) << endl;

    // 5. Append another string
    str.append(" C++");
    cout << "After Append: " << str << endl;

    // 6. Push back a character
    str.push_back('!');
    cout << "After Push Back: " << str << endl;

    // 7. Pop last character
    str.pop_back();
    cout << "After Pop Back: " << str << endl;

    // 8. Insert string
    str.insert(5, " Everyone");
    cout << "After Insert: " << str << endl;

    // 9. Erase characters
    str.erase(5, 10); // erase 10 characters from index 5
    cout << "After Erase: " << str << endl;

    // 10. Replace characters
    str.replace(6, 5, "Universe");
    cout << "After Replace: " << str << endl;

    // 11. Find substring
    int pos = str.find("Universe");
    cout << "Position of Universe: " << pos << endl;

    // 12. Substring
    string sub = str.substr(6, 8);
    cout << "Substring: " << sub << endl;

    // 13. Compare strings
    string s1 = "Apple";
    string s2 = "Apple";

    if (s1 == s2)
        cout << "Strings are Equal" << endl;
    else
        cout << "Strings are Not Equal" << endl;

    // 14. Clear string
    s1.clear();
    cout << "After Clear: '" << s1 << "'" << endl;
    cout << "Is Empty: " << s1.empty() << endl;

    return 0;
}