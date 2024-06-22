#include<iostream>
using namespace std;
class Student{
	public:
		string name;
		int id;
		void print(){
			cout<<"Ther name of the student is"<<name<<"and his id is"<<id;
			
		}
		
};

int main(){
	Student s1;
	s1.name="yuvraj";
	s1.id=1;
	s1.print();
	
}
