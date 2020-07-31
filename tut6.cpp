#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}
// THis will not swap a and b
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Call by refernce using pointers
void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Call by refernce using C++ reference Variables
void swapReferenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    // return a;
}

int main()
{
    int x = 4, y = 5;
    // cout << "The sum of 4 and 5 is " << sum(4, 5);
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    // swap(x, y); // This will not swap a and b
    // swapPointer(&x ,&y); //This will not swap a and b using pointer refernce
    swapReferenceVar(x, y); //This will swap a and b using reference variable
    // swapReferenceVar(x, y) = 766; //This will swap a and b using refernce variable
    cout << "This value of x is " << x << " and the value of y is " << y << endl;
    return 0;
}