// Online C++ compiler to run C++ program online
#include <iostream>
#include<stack>
using namespace std;
void insert(stack<int>&s,int temp);
void reverse(stack<int>&s){
    if(s.size()==1){
        return ;
    }
    int temp = s.top();
    s.pop();
    reverse(s);
    insert(s,temp);
    
   
}
void insert(stack<int>&s,int temp){
    if(s.empty()){
        s.push(temp);
        return;
    }
    int val = s.top();
    s.pop();
    insert(s,temp);
    s.push(val); 
}

int main() {
   stack<int> s;
   s.push(1);
   s.push(2);
   s.push(3);
   s.push(4);
   s.push(5);
  
    reverse(s);
  while(!s.empty()){
      cout<<s.top()<<endl;
      s.pop();
  }
    return 0;
}