#include <stdio.h>
int main()
{
	int x=456;
//	scanf("%d",&x);
	int t=x;
	int b=1;
	int d;
	while(x>9){
		x/=10;
		b*=10;
	}printf("%d ",b); 
	do{
		d=t/b;
		printf("%d",d);
		if(b>1){
			printf(" ");
		}
		t%=b;
		b/=10;		
	}while(b!=0);
	return 0;
}
//如果不清楚，可以在循环的最后printf("d=%d x=%d b=%d",d,x,b); //为了应对70000这种情况，需要对循环跳出的条件进行更改 ，对循环中if输出空格的条件也要更改。
//为了让输入任何值都可以成功，还得对b做些改变 
//若一个循环后，下一个循环要用的变量要变，则需要 用一个值先把它代换掉，即int t=x 
