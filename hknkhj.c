#include<stdio.h>
void main()
{
int a,b,c;
printf("a");
scanf("%d",&a);
printf("b");
scanf("%d",&b);
printf("c");
scanf("%d",&c);
if(a>b && a>c)
printf("a is greater ");
if(b>a && b>c)
printf("b is greater");
else if(c>a && c>b)
printf("c is greater");
getch();
}
