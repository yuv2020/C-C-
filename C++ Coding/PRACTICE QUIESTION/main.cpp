/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main(){
    int i,n;
    bool is_prime = true;
    cout<<"Enter a positive integer:";
    cin>>n;
    
    // 0 and 1 are not prime numbers.
    if(n == 0 || n == 1){
        is_prime=false;
        
    }
    
    // loop to check if n is prime number.
    
    for(i=2; i<=n/2; ++i){
        if (n%i==0){
            is_prime=false;
            break;
        }
    }
    
    if(is_prime)
    cout<<n<<"is a prime number";
    else
    cout<<n<<"is not a prime number";
    return 0;
}