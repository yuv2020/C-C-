#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main(){
	pid_t pid;
	
	pid=fork();
	
	if(pid<0){
		printf(stderr,"Fork failed.\n");
		return 1;
	}
	else if(pid==0){
		printf("Child process: Hello!\n");
		printf("Child process: myPID is%d.\n", getpid());
		
		
	}
	
	else{
		printf("Parent process: Child ID is%.\n",pid);
		printf("Parent process: MY PID is %d.\n", getpid());
	}
	return 0;
	
	
}
