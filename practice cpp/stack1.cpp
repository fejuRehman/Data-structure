// stack using dynamic array
#include <bits/stdc++.h>
using namespace std;
class Stack
{
    int *data;
    int next_index;
    int capacity;

public:
    Stack()
    {
        data = new int[4];
        next_index = 0;
        capacity = 4;
    }
    void push(int element)
    {
        if (next_index == capacity)
        {
            int *newdata = new int[2 * capacity];
            for (int i = 0; i < capacity; i++)
            {
                newdata[i] = data[i];
            }
            capacity *= 2;
            delete[] data;
            data = newdata;
        }
        data[next_index] = element;
        next_index++;
    }
    int pop()
    {
        if (empty()){
            return 0;
        }
        
        next_index--;
        return data[next_index];
        
    }
    int top()
    {
        if (empty())
            return 0;
        
            return data[next_index - 1];
    }
    int size()
    {
        return next_index;
    }
    bool empty()
    {
        return next_index == 0;
    }
};
int main(){
 Stack s;
s.push(10);
s.push(20);
s.push(30);
s.push(40);
//s.push(50);
cout<<s.top()<<endl;
cout<<s.pop()<<endl;
cout<<s.pop()<<endl;
cout<<s.pop()<<endl;
cout<<s.empty()<<endl;
cout<<s.size()<<endl;

    return 0;
}