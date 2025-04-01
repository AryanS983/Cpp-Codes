#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr = {2, 4, 3, 9, 9, 10, 9, 7, 1, 2};
    int k= 4;
    sort(arr.begin(),arr.end());
    for(int i : arr){
        cout << i <<" ";
    }
    cout <<endl;
    vector <int> sub;
    vector <int> add;
    sort(arr.begin(),arr.end());
    
    for (int i = 0 ; i<arr.size(); i++){
            if((arr[i]-k) >= 0){
                sub.push_back(arr[i]-k);
            }
            add.push_back(arr[i]+k);
    }
    
    for(int i : sub){
        cout << i <<" ";
    }
    cout  <<endl;
    for(int i : add){
        cout << i <<" ";
    }
    cout  <<endl;

    if(!sub.empty()){
        if (sub.back()>add.front()){
            cout<< sub.back()-add.front();
        }
        else{
            cout<< (add.back())-(add.front());
        }
    }
    else{
        cout<< (add.back())-(add.front());
    }

}