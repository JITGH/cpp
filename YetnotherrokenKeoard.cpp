#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string process_string(string s) {
    string typed;
    int last_lower = -1;
    int last_upper = -1;
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c == 'b') {
            if (last_lower != -1) {
                typed.erase(typed.begin() + last_lower);
                last_lower = -1;
            }
        } else if (c == 'B') {
            if (last_upper != -1) {
                typed.erase(typed.begin() + last_upper);
                last_upper = -1;
            }
        } else {
            typed += c;
            if (islower(c)) {
                last_lower = typed.length() - 1;
            } else if (isupper(c)) {
                last_upper = typed.length() - 1;
            }
        }
    }
    return typed;
}

int main() {
    string s ;
    cin>>s;
    cout << process_string(s) << endl;  // Output: "ity"
    return 0;
}
