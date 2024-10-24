#include <bits/stdc++.h>
using namespace std;
int main(){
    int n =3; 
    int k =1;
    for(int i=1; i<=n;i++){
        for (int j = 1; j <= i ; j++) {
            cout<<k<<" ";
            k=!k;
        }
        for (int j = (4 * n) - 1; j > 0; j = j - 4) {
            cout<< string(j,' ');
        }  
        cout << string(n,'G');
        cout<<endl;
    }
    
}
