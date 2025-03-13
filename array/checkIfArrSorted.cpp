#include<iostream>
using namespace std;
bool isSorted(vector<int>&a){
    if(a.size() == 1){
        return true;
    }
    for(int i=0; i<a.size();i++){
        if(a[i] >= a[i-1]){ // if a[i] > a[i-1] then it is sorted in ascending order else it is not sorted , tried with a[i+1]>a[i] but it's not working properly
            continue;
        }
        return false;
    }
    return true;
}
int main(){
    vector<int> a = {1,2,3,4,5};
    cout<<isSorted(a)<<endl;
    return 0;
}