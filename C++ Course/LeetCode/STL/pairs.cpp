#include <bits/stdc++.h>
using namespace std;
int main(){
    pair <int , int> p = {7,9};
    pair <int , int> p2 = {4,3};
    p.swap(p2);
    cout << p.first << p.second <<endl;
    cout << p2.first << p2.second<<endl;

    pair<int , pair<int,int>> p3 = {12,{6,13}};
    cout << p3.second.second<<endl;

    pair <int , int> arr[] = {{2,3},{10,23},{40,69},{70,80}};
    cout << arr[2].second<<endl;

}

//Pair lies inside the utillity library