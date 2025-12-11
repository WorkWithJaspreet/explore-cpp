#include <iostream>

using namespace std;

// This recursive function has time complexity of O(2^n)
void printSubsets(string &str, string curr, int i)
{
    if (i == str.length())
    {
        cout << "'" << curr << "'" << endl;
        return;
    }
    printSubsets(str, curr, i + 1);
    printSubsets(str, curr + str[i], i + 1);
}

int main()
{
    cout << "Enter a string: ";
    string str;
    getline(cin, str);
    cout << "All subsets of the string are:" << endl;
    printSubsets(str, "", 0);
    return 0;
}