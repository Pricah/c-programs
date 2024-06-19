// cost of mangoes in wholesale in c
#include <stdio.h> //scanf(), printf()
int main()
{
  int mangoes;   //%d
  float deposit; //%f
  double cost;   //%lf
  char h;        //%c
  // prompts the user to add the values
  printf("please enter the value of mangoes:");
  scanf("%d", &mangoes);
  printf("enter the value of deposit:");
  scanf("%f", &deposit);
  printf("please enter the value of cost:");
  scanf("%lf", &cost);
  printf("please enter the value of character:");
  scanf("%c", &h);
  // printing the user input to the screeen
  // printf("The value of mangoes is %d\n",mangoes);
  // printf("The value of deposite is %10.2f \n",deposit);
  // printf("The value of cost is %.2lf \n",cost);
  // printf("The value of h is %c \n",h);

  return 0;
}