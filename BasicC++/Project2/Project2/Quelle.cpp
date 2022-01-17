#include <iostream>
using namespace std;
void swap(int*, int*);
int main()
{
    int x = 1;
    int y = 2;
    int* ptr;
    ptr = &x;
    int* ptr2;
    ptr2 = &y;
    cout << "x = " << ptr << endl;
    cout << "y = " << ptr2<< endl;
    return 0;
}
void swap(int *s, int *f)
{
    int temp = *s;
    *s = *f;
    *f = temp;
}
/*

x = 000000E6C66FFB94
y = 000000E6C66FFBB4
*/
/*
void swap(int &s, int &f)
{
    int temp = s;
    s = f;
    f = temp;
} ergebniss :
x = 000000ED6B6FFBB4
y = 000000ED6B6FFBD4
*/