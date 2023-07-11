#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 10;
    cout << &i << endl; // it will print address
    char c = 'a';
    cout << (int *)&c << endl; // here i did type casting to print address bcz simply we cant print address of c
    void *ptr;
    ptr = &i;
    cout << ptr << endl;  // here we get address of i
    cout << &ptr << endl; // here we get address of pointer
    void *ptr1;
    ptr1 = &c;
    cout << ptr1 << endl;          // here we get address of c
    cout << *((int *)ptr) << endl; // type casting of void print to print value
    cout << *((char *)ptr1);       // type casting of void print to print value
    return 0;
}