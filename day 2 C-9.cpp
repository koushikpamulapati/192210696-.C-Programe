#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("odd numbers between 1 and %d are: \n",n);
    for(i=1;i<=n;i+=2)
    {
        printf("%d,",i);
    }
    return 0;
}
