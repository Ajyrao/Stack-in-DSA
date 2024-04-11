#include<iostream>
//#include<stack>
using namespace std;
class stack{
    public:
        int *arr;
        int size;
        int top;
       // public:
   stack(int size){
        this->size=size;
        arr = new int[size];
        top=-1;
    }
void push(int element){
    if(size - top > 1 ){
        top++;
        arr[top]=element;
    }
    else{
        cout<<"stack is overflow"<<endl;

    }
}
    void pop()
    {
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack is underflow"<<endl;
        }
    }
    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"stack is empty"<<endl;
            return -1;

        }
    }
    bool isempty(){
       if(top==-1){
        return true;
       }
       else{
        return false;
       }
    }
};

int main(){
    stack st(5);
    st.push(11);
    st.push(12);
    st.push(13);
    st.push(14);
    st.push(15);
    cout<<st.peek()<<endl;
    st.pop();
    cout<<"the peek"<<st.peek()<<endl;
}



