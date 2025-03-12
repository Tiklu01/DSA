#include<iostream>
#include<stack>
using namespace std;
void insert(stack<int> & stack, int temp);
void sort(stack <int> & stack){
    if(stack.size()==1){
        return;
    }
    int temp = stack.top();
    stack.pop();
    sort(stack);
    insert(stack,temp);
    
}
void insert(stack<int> & stack, int temp){
    if(stack.empty() || stack.top() <= temp){
        stack.push(temp);
        return;
    }
    int val = stack.top();
    stack.pop();
    insert(stack,temp);
    stack.push(val);
    
}
int main(){
    stack <int> stack ;
    stack.push(2);
    stack.push(0);
    stack.push(1);
    stack.push(5);
    sort(stack);
    while(!stack.empty()){
        cout<<stack.top()<<" ";
        stack.pop();
    }
    return 0;
}
