#include <bits/stdc++.h>
using namespace std;
int sum = INT_MIN;

void addition(vector<int> arr, int start, int end){
    int temp=0;
    if(start>end){
        return;
    }
    else {
        for(int i = start; i<=end; i++){
            temp = temp + arr[i]; 
        }
        if(temp>sum){
            sum = temp;
        }
        addition(arr, start, end-1);
        addition(arr, start+1, end);
    }

}



int main(){
    vector <int> arr = {5, 4, 1, 7, 8};
    for(int i = 0, j=arr.size()-1; i<arr.size(); i++, j--){        
        addition(arr, i, j);
    }
    cout<< sum;
}