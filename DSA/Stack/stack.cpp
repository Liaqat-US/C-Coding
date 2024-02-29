#include<iostream>
using namespace std;

//Stack
class Stack {
    //properties
    int *arr;
    int size;
    int top;

public:
    Stack(int s) {
        this->size = s;
        this->arr = new int[size];
        top = -1;
    }

    //isEmpty
    bool isEmpty() {
        if (top == -1)
        {
            return true;
        }else{
            return false;
        }
    }

    //push
    void push(int n) {
        if (isEmpty() || top < size-1)
        {
            top++;
            arr[top] = n;
        }else{
            cout<<"Stack overflow."<<endl;
        } 
    }

    //pop
    void pop(){
        if (!isEmpty())
        {
            int element = arr[top];
            top--;
        }else{
            cout<<"Stack is Empty."<<endl;
        }
        
    }

    //top element
    void peek(){
        if (!isEmpty())
        {
            cout<<arr[top]<<endl;
        }else{
            cout<<"Stack is Empty."<<endl;
        }
        
    }
};

int main(){
    Stack s1(5);

    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    // s1.push(6);

    // s1.peek();

    // s1.pop();
    // s1.pop();
    // s1.pop();
    // s1.pop();
    // s1.pop();
    // s1.pop();

    while (!s1.isEmpty())
    {
        s1.peek();
        s1.pop();
    }
    
}