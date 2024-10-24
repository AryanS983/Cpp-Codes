#include <iostream>    
using namespace std;   

class Animal {                                          //  base class declaration.  
    public:    
    string color = "Black"; 
    Animal(){
    }  
    Animal(Dog D){
        color=D.color;
    }   
};

class Dog: public Animal{                      // inheriting Animal class.  
    
 public:    
    string color = "Grey";      
    Dog(){
        color="Brown";
    }
};    
  
int main(void) {
    Dog D;
    Animal d=D;      
    cout<<d.color;     
}    