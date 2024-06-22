#include<stdio.h>
#define PI 3.14157;

int main(){
    double area = 0.0, radius = 0.0; /*area in km*/
    printf("Enter radius of circle:");
    scanf("%lf", &radius);
    area = 3.14157 * radius * radius; //calssic formula
    printf("The radius %lf of the circle is %lf sq. meters\n", radius, area);
    
    return 0;
    
}
