#include <stdio.h>
int main()
{
	int a,b,min,i,anw;
	scanf("%d %d",&a,&b);
	if(a>=b){
		min=b;
	}
	else{
		min=a;
	}
	for(i=1;i<=min;i++){
		if(a%i==0){
			if(b%i==0){
				anw=i;
			}
		}
	}
	printf("%d和%d的最大公约数是%d",a,b,anw);
	return 0;
}
