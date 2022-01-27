#include <stdio.h>
int main()
{
	int a,n,i;
	int sum=0;
	
	scanf("%d %d",&a,&n);
	  //2 2*10+2 (2*10+2)*10+2
	  int y=a;
	for(i=0;i<n;i++){
		sum+=a;
		a=a*10+y;//因为a会变动，所以在循环之前要用一个y来装a的值 。老问题，需要注意。 
		}
		printf("sum=%d",sum);
}
//sizeof是静态运算符 
