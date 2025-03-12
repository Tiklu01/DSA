// Online C++ compiler to run C++ program online
#include <iostream>
#include<stack>
using namespace std;
void solve(stack<int>&s,int k){
    if(k==1){
        s.pop();
        return;
    }
    
    int val = s.top();
    s.pop();
    solve(s,k-1);
    s.push(val);
}
int main() {
   stack<int> s;
   s.push(1);
   s.push(2);
   s.push(3);
   s.push(4);
   s.push(5);
  int  k=s.size()/2+1;
    solve(s,k);
  while(!s.empty()){
      cout<<s.top()<<endl;
      s.pop();
  }
    return 0;
}