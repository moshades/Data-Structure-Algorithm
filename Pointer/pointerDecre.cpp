#include <iostream>
using namespace std;

const int MAX = 3;
int main ()
{
    int var[MAX] = {10, 100, 200};
    int* ptr;
    ptr = &var[MAX-1]; // let us have address of the last element in pointer
    for (int i = MAX; i > 0; i--)
    {
        cout << "Address of var[" << i << "] = ";
        cout << ptr << endl; cout << "Value of var[" << i << "] = ";
        cout << *ptr << endl; // point to the previous location
        ptr--;
    }
    
return 0;
}