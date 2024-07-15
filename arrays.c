/*
Author: Priscilla
Registration:BSE-01-0051/2024
Date: 20/6/2024
*/
#include  <stdio.h>

int main() {
    int sum=0;
    int marks[7]={50,40,60,87,42,32,85};
    for(int i=0;i<7;i++){
        printf("marks[%d] id %d\n",i,marks[i]);
        sum=sum+marks[i];
    }
printf("the sum is %d",sum);
    return 0;
}