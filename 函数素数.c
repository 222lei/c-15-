#include <stdio.h>
 int isprime(int i){	
    int ret=1;
    int j; 
	for(j=2;j<i;j++){
		if(i%j==0){
			ret=0;
			break; 
		}
	}return ret;
 }   
	
int main()
{   
    int i,j;
	int m,n;
	int h=0,sum=0;
	scanf("%d %d",&m,&n);
	if(m=1){
		m=2;
	} //��Ϊ1��������������ֱ�Ӳ����� 
	for(i=m;i<=n;i++){
		      if(isprime(i)){
				h++;
				sum+=i;
				printf("%d ",i);
			}
	}printf("sum=%d,h=%d",sum,h);
 }
 //����һ������isprime����ʾ�Ƿ��������� 
