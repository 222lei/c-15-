#include <stdio.h>
int main()
{
	int a=700;
	int b=0;
	int c=0;
	while(a!=0){
		b=a%10;
		printf("%d",b); 
		c=c*10+b;
		a/=10;
//		printf("a=%d b=%d c=%d\n",a,b,c);
	}
//	printf("aµÄÄæĞòÊÇ%d",c);
 } 
