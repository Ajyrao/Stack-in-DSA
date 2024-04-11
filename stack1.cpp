#include<iostream>
#include<stack>
using namespace std;
int main(){
    //creation of stack
    stack<int> s;
    //push operation
    s.push(2);
    s.push(3);
    //pop
    s.pop();
    cout<<"print the top element of the stack"<<s.top()<<endl;

    if(s.empty()){
        cout<<"the stack is empty "<<endl;
    }
    else{
        cout<<"the stack is not empty"<<endl;
    }
      return 0;
}