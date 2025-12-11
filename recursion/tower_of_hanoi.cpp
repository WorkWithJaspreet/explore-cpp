#include <iostream>

using namespace std;

// This recursive function has time complexity of O(2^n)
void tower_of_hanoi(int n, char source, char auxiliary, char destination)
{
    if (n == 1)
    {
        cout << "Move disk 1 from rod " << source << " to rod " << destination << endl;
        return;
    }
    tower_of_hanoi(n - 1, source, destination, auxiliary);
    cout << "Move disk " << n << " from rod " << source << " to rod " << destination << endl;
    tower_of_hanoi(n - 1, auxiliary, source, destination);
}

int main()
{
    cout << "Enter the number of disks: ";
    int n;
    cin >> n;
    cout << "All subsets of the string are:" << endl;
    tower_of_hanoi(n, 'A', 'B', 'C');
    return 0;
}