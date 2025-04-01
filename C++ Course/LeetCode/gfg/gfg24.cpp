#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	vector<vector<int>> arr = {{6,8},{1,9},{2,4},{4,7}};
    sort(arr.begin(),arr.end());
    vector<vector<int>> temp;
    temp[0] = arr[0];
    for(int i =1; i<arr.size();i++){
        if(arr[i][0] > arr[i-1][1]){
            temp.push_back(arr[i]);
        }
        else{
            if(arr[i][1] > arr[i-1][1]){
                temp.back()[1] = arr[i][1];
            }
            else continue;
        }
    }
    
    for(int i=0; i<arr.size();i++){
        for(int j=0;j<2;j++){
            cout<< arr[i][j]<< '\t';
        }
        cout<<endl;
    }
}