#include <bits/stdc++.h>
using namespace std;
int main(){
    int n =3;
    for (int i = 0; i < n; i++) {
        for(int j=0;j<=i; j++){            
            // printf("%c ",j+65);
            cout<< (char)(j+65)<<" ";
        }
        cout<<endl;
    }

    
    for (int i = 0,j=n; i < n; i++,j--) {
        for(int k=j-1;  k>0; k--){
            cout<<"  ";
        }
        for(int k = 0; k<=i; k++){
            cout<<(char)(k+65)<<" ";
        }
        int x =i-1;
        for(int k=0; k<i; k++){
            cout<<(char)(x+65)<<" ";
            x--;

        }
        cout<<endl;
  }
    
}