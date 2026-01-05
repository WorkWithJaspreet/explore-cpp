// 1411. Number of Ways to Paint N × 3 Grid

#include <iostream>
#include <vector>

using namespace std;

int M = 1e9 + 7;
vector<vector<int>> t;

string states[12] = {"RYG", "RGY", "RYR", "RGR", "YGR", "YRG", "YGY", "YRY", "GRY", "GYR", "GRG", "GYG"};

int solve(int n, int previous)
{
    if (n == 0)
        return 1;
    if (t[n][previous] != -1)
        return t[n][previous];
    int result = 0;
    string last = states[previous];
    for (int current = 0; current < 12; current++)
    {
        if (current == previous)
            continue;
        string currentPattern = states[current];
        bool conflict = false;
        for (int column = 0; column < 3; column++)
            if (currentPattern[column] == last[column])
            {

                conflict = true;
                break;
            }
        if (!conflict)
            result = (result + solve(n - 1, current)) % M;
    }
    return t[n][previous] = result;
}

int numOfWays(int n)
{
    t.resize(n, vector<int>(12, -1));
    int result = 0;
    for (int i = 0; i < 12; i++)
        result = (result + solve(n - 1, i)) % M;
    return result;
}

int main()
{
    int n = 25;
    int result = numOfWays(n);
    cout << result << "\n";
    return 0;
}