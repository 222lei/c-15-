#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d/%d",&a,&b);
	int t=a,h=b;//��Ϊ���滹Ҫ�õ�a��b��ֵ���������������� 
	while(h!=0){
		c=t%h;
		t=h;
		h=c;	
	}printf("%d/%d",a/t,b/t);
	return 0;	
}
