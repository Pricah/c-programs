// execution of variables outside the main and any other function  
#include <stdio.h>
//what will be displayed 
int c =30;
int main() {
   // int c =20;//local variable
    printf("The value of c is %d \n",c);
   
    area();
return 0;
}
int area(){
   // int c=12;
    printf("the value of c is %d",c);
    
}