#include <stdio.h>
int main()
{
//	const int number=10;//int a[]={1,2,3,4,5,6,7,8,9]数组的集成初始化 
//	int prime[number];//在C中，使用变量来定义数组长度时，这个数组可以定义，却不能同时进行初始化赋值，需要在之后赋值。
	int prime[10]={2};//因为2说第一个素数
	int i=3;
	int count=1;//因为本身有一个0装着2 
	while(count<10){//可用两个数来试，如设number为2，来判断边界值 
	    if(isPrime(i,prime,count)){
	    	prime[count++]=i; 
			printf("%d\t"); 
		}i++; 	
	}	
}
int isPrime(int x,int knownPrime[],int numberofknownPrime)//判断是否能被已知的素数整除，若能被已知的素数整除，则不是素数。 
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

