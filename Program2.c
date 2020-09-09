#include <stdio.h>
int main() 
{
    int i=1, a, n;
	printf("Enter a: ");
	scanf("%d",&a);
	n=a;
	n=a*2;
    for(i=1;i<=n;i+=2)
	{
		printf("if a= %d then the output is %d\n",a,i);
	}
    return 0;
}
