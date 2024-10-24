#include <iostream>
using namespace std;
int main(){
int n=8;
  for(int i=1;i<=5;i++){
    for(int x=n;x>=1;x--){
      cout<<" ";
    }
    for(int j=i;j>=1;j--){
      cout<<j<<' ';
    }
    for(int k=2;k<=i;k++){
      cout<<k<<' ';
    }
    n=n-2;
    cout<<endl;
  }
}
