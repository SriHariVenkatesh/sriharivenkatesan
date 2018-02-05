#include<stdio.h>
int main()
{
   int a,b,c;
   scanf("%d%d%d",&a,&b,&c);
    
   if(a>b && a>c)
    
   printf("%d a is a largest num",a);
    
   else if(b>c)
    {
        printf("%d b is a largest num",b);
    }
    else
    {
        printf("%d c is a largest num",c);
    
        return 0;
    }
}
