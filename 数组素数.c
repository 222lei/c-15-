#include <stdio.h>
int main()
{
//	const int number=10;//int a[]={1,2,3,4,5,6,7,8,9]����ļ��ɳ�ʼ�� 
//	int prime[number];//��C�У�ʹ�ñ������������鳤��ʱ�����������Զ��壬ȴ����ͬʱ���г�ʼ����ֵ����Ҫ��֮��ֵ��
	int prime[10]={2};//��Ϊ2˵��һ������
	int i=3;
	int count=1;//��Ϊ������һ��0װ��2 
	while(count<10){//�������������ԣ�����numberΪ2�����жϱ߽�ֵ 
	    if(isPrime(i,prime,count)){
	    	prime[count++]=i; 
			printf("%d\t"); 
		}i++; 	
	}	
}
int isPrime(int x,int knownPrime[],int numberofknownPrime)//�ж��Ƿ��ܱ���֪���������������ܱ���֪���������������������� 
{    
     int ret=1;
     int i;
     for(i=0;i<numberofknownPrime;i++){
     	if(x%knownPrime[i]==0){
     		ret=0;
     		break;
		 }
	 }return ret;	
}

