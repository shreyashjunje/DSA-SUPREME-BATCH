#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int size;
    int top;
    int *arr;

    Stack(int size)
    {
        top = -1;
        arr = new int[size];
        this->size = size;
    }

    void push(int data)
    {
        if (size - top > 1)
        {
           top++;
            arr[top] = data;
        }
        else
        {
            
             cout << "stack is full" << endl;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "stack is empty" << endl;
        }
        else
        {
            top--;
        }
    }

    int getSize()
    {
        return top + 1;
    }

    int getTop()
    {
        if (top == -1)
        {
            cout << "stack is empty" << endl;
        }
        else
        {
            return arr[top];
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{

    Stack s(5);

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout << s.getSize()<<endl;

    while(!s.isEmpty()){
        cout<<s.getTop()<<" ";
        s.pop();
    }
}