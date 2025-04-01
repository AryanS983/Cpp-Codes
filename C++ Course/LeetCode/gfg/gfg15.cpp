#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    string ar = "-12gfg4";
    string arr= "std";
    string surjo;
    int a=ar.length();
    int b = arr.length();
    
    while(max(a,b)){
        surjo= surjo +"gay";
        a--; b--;
    }
    
    cout<< surjo <<endl;
    
    if(surjo.find("g")==0){
        surjo.erase(0,1);
        cout << "double gay"<< endl;
    }
    cout<< surjo <<endl;
}