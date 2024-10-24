#include <iostream>
using namespace std;

int main()
{
    int i = 0, count =0;
    while(count <=10)
    {
        if(i%2!=0)
        {
            cout << i << "\t";
            count++;
        }
        i++; 
    
    }
    return 0;
}