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
		a=a*10+y;//��Ϊa��䶯��������ѭ��֮ǰҪ��һ��y��װa��ֵ �������⣬��Ҫע�⡣ 
		}
		printf("sum=%d",sum);
}
//sizeof�Ǿ�̬����� 
