#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("even numbers between 1 and %d\n",n);
    for(i=2;i<=n;i+=2)
    {
    printf("%d,",i);
    }
    return 0;
}
