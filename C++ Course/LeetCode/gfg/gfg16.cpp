// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s = "billy butcher";
    map <char, int> m1;
    vector <int> ind ({0,2,5,7,8});
    for(auto i: s){
        m1[i]++;
    }
    for(auto i: m1){
        cout<< i.first<< "\t\t"<< i.second<< endl;
    }
    
    for(auto x : s){
        if(x == 'b')continue;
        cout<< x;
    }
    cout<< *(ind.begin()+1)<<endl;
    for(int i =0  ; i<ind.size(); i++){
        if(ind[i]==5){
            cout<< i;
        }
    }
    
    return 0;
}