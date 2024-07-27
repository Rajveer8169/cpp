#include <iostream>
#include <string>
using namespace std;

void helper(string s, string temp, int i) {
    if (i == s.size()) {
        cout << temp << " ";
        return;
    }
    // Include current character
    helper(s, temp + s[i], i + 1);
    // Exclude current character
    helper(s, temp, i + 1);
}

int main() {
    string temp = "";
    string s;
    cout << "Enter string: ";
    cin >> s;
    helper(s, temp, 0);
    return 0;
}
