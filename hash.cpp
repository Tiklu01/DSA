
#include <iostream>
#include <map>
//can also use unordered_map
// #include <unordered_map>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //precompte
    map<int,int>mpp;
    // unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    // for(auto it : mpp){
    //     cout<<it.first<<"->"<<it.second<<endl;
    // }

    int q;
    while(q--){
        int number;
        cin>>number;
        //fetch
        cout<<mpp[number]<<endl;
    }

    return 0;
}