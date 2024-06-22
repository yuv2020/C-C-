#include<stdio.h>
#include<conio.h>
void main(){
	int x1,y1,x2,y2;
	int xwmin,ywmin,xwmax,ywmax;
	int delx,dely;
	int p1,p2,p3,p4;
	int q1,q2,q3,q4;
	
	printf("Enter the points coordinates x1,x2,y1,y2");
	scanf("%d%d%d%d",&x1,&x2&y1&y2);
	
	printf("Enter the window_coordinates xwmin, ywmin, xwmax, ywmax");
	scanf("%d%d%d%d",&xwmin,&ywmin,&xwmax,&ywmax);
	
	delx=x2-x1;
	dely=y2-y1;
	
	p1=-delx;
	q1=x1-xwmin;
	
	p2=delx;
	q2=xwmax-x1;
	
	p3=-dely;
	q3=y1-ywmin;
	
	p4=dely;
	q4=ywmax-y1;
	
	if(p1==0 || p2==0 || p3==0 || p4==0){
		printf("Line is parallel to any boundary")
	}
	if(q1==0 || q2==0 || q3==0 q4==0){
		printf("Line is completely outside")
	}
	for i in 
	

	
	
}
