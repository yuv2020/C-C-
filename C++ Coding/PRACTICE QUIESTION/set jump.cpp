#include<iostream>
#include<csetjmp>
using namespace std;

class Rainbow{
	public:
		Rainbow(){cout<<"Rainbow()"<<endl;
		}
		~Rainbow(){cout<<"~Rainbow()"<<endl;
		}
		
};

jmp_buf kansas;
	void oz(){
		Rainbow rb;
			for(int i=0; i<3; i++)
			cout<< "There's no place like home"<<endl;
			longjmp(kansas, 47);
			
}

int main(){
	if(setjmp(kansas)==0){
		cout<<"Tornado,witch, munchkins..."<<endl;
		oz();
	}
	
	else{
		cout<<"Mom Uv! "<<"I had a strange dream..."<<endl;
		
	}
}///:~
