#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20];
    int age;
    float height;
    FILE *file_pointer;
    file_pointer = fopen("person.txt", "w");
    if(file_pointer == NULL){
        printf("failed to open file.");
        exit(1);
    }
    printf("Enter name:");
    scanf("%s", name);
    printf("Enter Age:");
    scanf("%d", &age);
    printf("Enter height:");
    scanf("%f", &height);
    fprintf(file_pointer, " %s %d %f", name, age, height);
    fclose(file_pointer);
    file_pointer = fopen("student.txt", "r");
    if(file_pointer == NULL){
        printf("failed to open file.");
        exit(1);
    }
    printf("Information read from file are :\n\n");
    fscanf(file_pointer, " %s %d %f", name, &age, &height);
    printf("Name:%s\n", name);
    printf("Age:%d\n", age);
    printf("Height:%f\n", height);
    fclose(file_pointer);
    return 0;
}