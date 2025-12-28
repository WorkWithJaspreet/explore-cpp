#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // There are two types of arrays: 1. Fixed sized arrays 2. Dynamic sized arrays
    // ================ Fixed sized arrays ================
    // int arr[100]; -- This is stack allocated
    // int arr[n]; -- This is stack allocated
    // int *arr = new int[n]; -- This is heap allocated
    // int arr[] = {10, 30, 56}; -- This is stack allocated
    // ================ Dynamic sized arrays (vectors) ================
    // vector<int> numbers; -- vector with default size set by OS
    // vector<int> numbers(7); -- vector with 7 size
    // vector<int> numbers(7, 0); -- vector with 7 size with every element as 0
    // vector<int> numbers = {10, 20, 30}; -- vector with 7 size with every element as 0
    return 0;
}