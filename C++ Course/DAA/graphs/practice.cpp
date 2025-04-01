#include <bits/stdc++.h>
using namespace std;
int main(){
    // vector <vector<int>> v(5);
    // v[2].push_back(10);
    // for(auto i: v){
    //     for(auto j: i){
    //         cout << j << " ";
    //     }
    //     cout << endl;

    // }

    vector <int> v = {2,3,4,6,6,88,8};
    auto it = v.begin();
    for(it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }

    
}