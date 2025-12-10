#include <iostream>

using namespace std;

int practiceQuestion3(int n)
{
    if (n == 1)
        return 0;
    else
        return 1 + practiceQuestion3(n / 2);
}

void practiceQuestion4(int n)
{
    if (n == 0)
        return;
    practiceQuestion4(n / 2);
    cout << n % 2;
}

int main()
{
    // cout << practiceQuestion3(16) << endl;

    practiceQuestion4(13);
    return 0;
}