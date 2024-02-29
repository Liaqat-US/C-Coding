#include<iostream>
#include<stack>
using namespace std;

//using stl: standard template language
int main(){
    stack<int> s;

    s.push(11);
    s.push(22);
    s.push(33);

    cout<<"Top Of Stack :"<<s.top()<<endl;
    cout<<"Size Of Stack :"<<s.size()<<endl;

    s.pop();

    cout<<endl<<"============After Pop============="<<endl;
    cout<<"Top Of Stack :"<<s.top()<<endl;
    cout<<"Size Of Stack :"<<s.size()<<endl;
}