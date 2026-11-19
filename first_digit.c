#include<stdio.h>
int main (){


    int A;
    scanf("%d",&A);
    int first = A / 1000;
   
    if(first % 2 == 0){
        printf("EVEN");
    }
    else{
        printf("ODD");
    }
    return 0;
}