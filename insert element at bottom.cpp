#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int>&s,int x){
if(s.empty()){
    s.push(x);
    return;}
int num=s.top();
s.pop();
//recurcive call
solve(s,x);
s.push(num);
}
int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(4);
    s.push(5);
    cout<<"origanel "<<endl;
    while (!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    s.push(1);
    s.push(2);
    s.push(4);
    s.push(5);
    int x;
    cout<<"enter the value of bottom element"<<endl;
    cin>>x;
    solve(s,x);
    cout<<"after"<<x<<"insertion"<<endl;
    while (!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    
return 0;
}