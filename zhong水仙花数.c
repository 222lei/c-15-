#include <stdio.h>
#include <math.h>
int main()
{
	int n,i,t,sum;
	double c,d;//nλ�� 
	int first=1;
	scanf("%d",&n);
	for(i=1;i<n;i++){
		first*=10;
	}
	for(i=first;i<first*10;i++){
		t=i;
		sum=0;
		while(t>0){
			c=t%10;
			d=pow(c,n);
			sum+=d;
			t/=10;			
		}
		if(sum==i){
			printf("%d\n",i);
		}
	}
	return 0;
}
//�������Ȥ����Ϊ�ܶ�ϸ��û��ע�⵼�����˺ܾá� 
