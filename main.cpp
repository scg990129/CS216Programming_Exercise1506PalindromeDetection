#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(const std::string& s, int index);

int main() {
    string text;
    cin >> text;

    bool isPal = isPalindrome(text, 0);

    printf("%s is %s palindrome", text.c_str(), isPal ? "a" : "not a");
    return 0;
}

bool isPalindrome(const std::string& s, int index) {
    if (index == s.length() / 2 + 1) {
        return true;
    }

    return s[index] == s[s.length() - index - 1] && isPalindrome(s, index + 1);
}
