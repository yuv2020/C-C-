#include<iostream>
using namespace std;

class A{
    public:
    
    void final_print(){
        display();
        
    }
    
    virtual void display(){
        cout<<"Printing name from the base class"<<endl;
        
    }
};

class B: public A{
public:


virtual void display(){
    cout<<"Printing name from the derived class"<<endl;
}
};

int main (){
    A obj1;
    obj1.final_print();
    B obj2;
    obj2.final_print();
    
    return 0;
    
}