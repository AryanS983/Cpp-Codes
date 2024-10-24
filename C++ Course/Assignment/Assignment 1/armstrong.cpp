#include<iostream>
#include<cmath>

using namespace std;

int main() {
    cout << "Armstrong numbers between 1 and 500 are:" << endl;

    for (int num = 1; num <= 500; ++num) {
        int sum = 0;
        int temp = num;
        int n = log10(num) + 1;

        while (temp != 0) {
            int digit = temp % 10;
            sum += pow(digit, n);
            temp /= 10;
        }

        if (sum == num) {
            cout << num << " ";
        }
    }

    return 0;
}
