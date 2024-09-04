#include<iostream>
using namespace std;

int main()
{
    string food = "Pizza";
    // Pointer variable with the name ptr, that stores the address of food
    string* ptr = &food;

    // Reference: Output the memory address of food with the pointer
    cout << ptr << "\n";
    // Dereference: Output the value of food with the pointer
    cout << *ptr << "\n";

    return 0;
}