#include <iostream>
using namespace std;
void display(int A[], int n){
  for(int i=0;i<n;i++){
    cout<<A[i]<<endl;  
  }
}
void insertion(int A[],int n){
  int key,j;
  for(int i=1;i<n;i++){
    key=A[i];
    j=i-1;
    while(j>=0 && A[j]>key){
      A[j+1]=A[j];
      j=j-1;
    }
    A[j+1]=key;
  }
  
}
int main(){
  int A[]={8,1,0,4,9,6};
  int n=6;
  cout<<"Original Array: "<<endl;
  display(A,n);
  insertion(A,n);
  cout<<"Sorted Array: "<<endl;
  display(A,n);
  return 0;
}
