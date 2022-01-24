#include <stdio.h>
int main()
{   int x,t,c=0;
	scanf("%d",&x);
	t=x;
	while(x>1){
		x/=2;
		c++;
	}
	printf("log2 of %d is %d",t,c);
	return 0;
 } 
