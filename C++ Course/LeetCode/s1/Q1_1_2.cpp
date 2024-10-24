#include <bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    int n  =4;
    for (int i = 0, i2 = n; i < n; i++, i2-- ) {
		for (int j = (i2-1); j >0 ; j--) {
			cout<<" ";	
		}
        for(int k=0; k<(2*i+1); k++ ){
            cout<< "*";
        }
		cout<<endl;
  }
}