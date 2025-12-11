#include <iostream>

using namespace std;

// This recursive function has time complexity of O(n) = T(n-2) + O(1)
// and space complexity of O(n) due to function call stack
bool isPalindrome(string &str, int left, int right)
{
    if (left >= right)
        return true;
    return (str[left] == str[right]) && isPalindrome(str, left + 1, right - 1);
}

int main()
{
    cout << "Enter a string: ";
    string str;
    getline(cin, str);
    if (str.empty())
    {
        cout << "Empty string is considered a palindrome." << endl;
        return 0;
    }
    (isPalindrome(str, 0, str.length() - 1)) ? cout << "'" << str << "'" << " is a palindrome." << endl : cout << "'" << str << "'" << " is not a palindrome." << endl;
    return 0;
}