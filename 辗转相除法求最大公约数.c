#include <stdio.h>
int main()
{
	int a,b,t;
	printf("请输入两个数来求他们的最大公约数：");
	scanf("%d %d",&a,&b); 
	while(b!=0){
		t=a%b;
		a=b;
		b=t;
	} 
	printf("最大公约数是%d",a);
	return 0;
}
