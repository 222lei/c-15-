#include <stdio.h>
int main()
{
	int a,b,t;
	printf("�������������������ǵ����Լ����");
	scanf("%d %d",&a,&b); 
	while(b!=0){
		t=a%b;
		a=b;
		b=t;
	} 
	printf("���Լ����%d",a);
	return 0;
}
