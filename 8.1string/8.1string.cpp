#include <iostream>
#include <string>

using namespace std;

int find(const string& s) {
    int k = 0;
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == '.') {
            k++;
            if (k == 3) {
                return i; 
            }
        }
    }
    return -1; 
}

string change(string& s) {
    for (size_t i = 3; i < s.length(); i += 4) {
        s[i] = '.'; 
    }
    return s;
}

int main() {
    string str;

    cout << "Enter string:" << endl;
    getline(cin, str);

    int third_dot_index = find(str);
    if (third_dot_index != -1)
        cout << "Index of third dot: " << third_dot_index << endl;
    else
        cout << "The string does not contain three dots." << endl;

    string modified_str = change(str);
    cout << "Modified string (result): " << modified_str << endl;

    return 0;
}
