#include <stdio.h>
void main()
{
 char ch;
 float a,b;
 int c;
 printf("enter first number");
 scanf("%f",&a);
 printf("enter second number");
 scanf("%f",&b);  
 printf("\n 1. Add \n 2.Subtract \n 3. Multiply 4. Divide");
 printf("enter a number");
 scanf("%d",&c);
 switch(c)
 {
    case 1:printf("%d",a+b);break;
    case 2:printf("%d",a-b);break;
    case 3:printf("%d",a*b);break;
    case 4:printf("%d",a/b);break;
    default:printf("invalid number");break;
 }
}