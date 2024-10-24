#include <iostream>
#include <string>
using namespace std;

void generate (string arr, int left, int right){
    if (left == right){
        cout << arr << endl;
    }
    else{
        for (int i=left; i<=right; i++){
            swap(arr[left],arr[i]);
            generate(arr,left+1,right);
            swap(arr[left],arr[i]);
        }
    }
}

int main () {
    string input;
    getline(cin, input);
    generate(input,0,input.length()-1);
}