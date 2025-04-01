//make a vector and basic corresponding functions
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {5,97,96,4,7,8,91,69};
    vector<int> v1(v);
    

    v.push_back(6);
    v.pop_back();

    cout << "Size of vector: " << v.size() << endl;
    cout << "Is vector empty: " << v.empty() << endl;
    cout << "Element at index 2: " << v[2] << endl;
    cout << "First element: " << v.front() << endl;
    cout << "Last element: " << v.back() << endl;
    cout << "Data: ";
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    for(auto i: v1){
        cout << i << " ";
    }


    int n = INT_MIN;
    cout << n << endl;
}