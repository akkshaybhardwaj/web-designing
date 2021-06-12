#include <stdio.h>
#include<conio.h>
int main ()
{
    int age;
    printf("Please enter your age = ");
    scanf("%d",&age);
    if(age<30){
        printf("You are a Student ");
    }
    else{
        printf(" You are a gental man");
    }
    getch();
}