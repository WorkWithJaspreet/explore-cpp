#include <iostream>

using namespace std;

void practiceQuestion1(int n)
{
    if (n == 0)
        return;
    cout << n << endl;
    practiceQuestion1(n - 1);
    cout << n << endl;
}

void practiceQuestion2(int n)
{
    if (n == 0)
        return;
    practiceQuestion2(n - 1);
    cout << n << endl;
    practiceQuestion2(n - 1);
}

int main()
{
    // practiceQuestion1(3);

    practiceQuestion2(3);
    return 0;
}