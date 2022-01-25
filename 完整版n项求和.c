#include<stdio.h>
int main()
{
	int n=20,i;
	double t,a=2.0,b=1.0,sum=0.0;
//	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum+=a/b;
		t=a; //两边要换，最好找一个中间物 
		a=a+b;
		b=t;	
	}printf("%.2f",sum);
	return 0;	
 } 
