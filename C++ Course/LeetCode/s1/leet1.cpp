#include <iostream>
#include <vector>
using namespace std;
void targ(int nums[],int size, int t) {
    for(int i=0;i<size;i++){
         for(int j=i+1;j<size;j++){
            if(nums[i]+nums[j]==t){
                cout<<i<<j<<endl;
            }
         }
    }
    cout<<"No solution found"<<endl;
}
int main() {
    int num[] = {1, 5, 3, 7, 6};
    int target = 8;
    int size=sizeof(num)/sizeof(num[0]);
    targ(num,size,target);
    vector<int> num1{1,2,4,6,7};
    cout << "\n size of vector =" << num1.size();
    return 0;
}