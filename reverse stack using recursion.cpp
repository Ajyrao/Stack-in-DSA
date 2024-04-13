#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack<int>&st,int element){
    if(st.empty()){
       st.push(element);
       return;
    }
    int num =st.top();
    st.pop();
    //recurrsive call
    insertatbottom(st,element);
    st.push(num);

}

void reversestack(stack<int>&st){
    //base case
    if(st.empty()){
        return ;
    }
    int num=st.top();
    st.pop();
    //recurrsive call
    reversestack(st);
    insertatbottom(st,num);
}

int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<"orginal stack:";
    stack<int>temp=st;
    while(!temp.empty()){
        cout<<temp.top()<<endl;
        temp.pop();
    }

    
    reversestack(st);
    cout<<"after reverse"<<endl;;
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    cout<<endl;
return 0;
}
