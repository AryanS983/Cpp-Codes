#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5] = {10,21,31,19};
     int largest = INT_MIN;
        int sec = INT_MIN;

        for (int i = 0; i < 5; i++) {
            if (arr[i] > largest) {
                sec = largest;
                largest = arr[i];
            } else if (arr[i] > sec && arr[i] != largest) {
                sec = arr[i];
            }
        }

    cout << largest << endl;
    cout << sec << endl;
}