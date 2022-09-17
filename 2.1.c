#include<stdio.h>
int main()
{
int a,b,c;

printf("Enter Number\n",a);
printf("Enter Number\n",b);
printf("Enter Number\n",c);
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(a>b && a>c)
{
    
    printf("a");
}
if(b>a && b>c)
{
    printf("b");
}
if(c>a && c>b)
{
    printf("c");
}

return 0 ;

}

