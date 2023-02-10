#include <stdio.h>

int main() 
{
    int n,i;
    printf("Enter a positive integer:");
    scanf("%d",&n);
    printf("odd number series up to %d:\n",n);
    for (i=1;i<=n;i+=2) 
	{
    printf("%d\n",i);
    }
   return 0;
}
