#include <bits/stdc++.h>
using namespace std;
int main(){
    //Difference b/w Arrays and vectors
    //Arrays once created their size cannot be modified 
    //Vectors dont have a fixed size its dynamic in nature and we can always change its size

    vector<int> v;
    v.push_back(10);
    v.emplace_back(20);         //[10,20]
    cout << v.capacity()<<endl;
    cout << v.front()<<endl;
    
    // declaring vectors with pairs
    vector <pair <int, int>> vec;
    vec.push_back({2,4});
    vec.emplace_back(3,7);      //No need to write {} in case of emplace_back it automatically detects pairs
    //[{2,4},{3,7}]
    cout << vec.back().first <<endl;

    // vector<int> v(5,60);
    //v = [60,60,60,60,60]

    vector<int> v1(5);   
    //v1=[0,0,0,0,0]
    //Even after declaring the innitial size of a vector one can always increase the size using push_back
    v1.push_back(8);        //v1=[0,0,0,0,0,8]
    cout << v1.back() <<endl;

    vector<int> v2(v);
    //Copies the content of v into another vector named v2      
    
    //Iterators
    vector<int> v3 = {20,30,40,50,60};
    vector <int>::iterator it = v3.begin();
    //v3.begin() returns the pointer to the first value in the vector, in this case its 20, so it returns the address of 20
    cout << "it = " <<"Value inside it = " << *(it) <<endl;
    it ++;
    cout << "it = "<<"Value inside it = " << *(it) <<endl;

    vector <int>::iterator it1 = v3.end();
    // v3.end points to the very next memory location after the last variable, in this case end points to the memory after 60
    it1--;
    cout << *(it1) <<endl;

    //Printing the  vector using iterator
    for (auto i = v3.begin(); i != v3.end(); i++){
        cout << *(i) << " ";        //We can also do it using traditional array approach v3[index] 
    }
    cout <<endl;

    // instead of writing (vector<int>::iterator) this, we can simply write auto and c++ compiler will automatically understand the datatype fiven the value assigned to it
    // ex:- auto t = 10         //t becomes integer

    // For each loop in c++
    for (int x : v3){
        cout << x << " ";
    }
    cout<<endl;

    vector <int> test;
    test = v3;

    for (int x : test){
        cout << x << " ";
    }
    cout<<endl;

    auto f = test.begin()+1;
    test.erase(f);

    test.insert(test.end(),100);
    for (int x : test){
        cout << x << " ";
    }
    cout<<endl;

    reverse(test.begin(), test.end());              //reverse takes pointers as parameters
    for (int x : test){
        cout << x << " ";
    }
    cout<<endl;

    swap(test[1], test[3]);             //Swap takes varibles as parameters
    for (int x : test){
        cout << x << " ";
    }
    cout<<endl;

    vector <int> test2 = {test[0]};
    for (int x : test2){
        cout << x << " ";
    }
    cout<<endl;

    // Majority Element 2
    vector <int> test3 = {2,1,5,5,5,5,6,6,6,6,6,6};
    vector <int> test3_1;
    // for(int i=0; i< test3.size(); i++){
    //     cout<< count
    // }
    sort(test3.begin(),test3.end());
    

    // Using remove() with Vector pop_back()
    // The remove() function shift an element that have to be remove to the end of vector. 
    //The last element is then deleted by vector pop_back() method.
    
    
    // Stock Buy and Sell – Multiple Transaction Allowed
    vector <int> test4 = {2,5,6,7,62};
    cout<< test4.back()<<endl;
    test4.pop_back();
    cout<< *max_element(test4.begin(),test4.end())<<endl;
    
}