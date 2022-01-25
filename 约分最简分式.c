#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d/%d",&a,&b);
	int t=a,h=b;//因为后面还要用到a和b的值，所以先做个代换 
	while(h!=0){
		c=t%h;
		t=h;
		h=c;	
	}printf("%d/%d",a/t,b/t);
	return 0;	
}
