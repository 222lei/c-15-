#include <stdio.h>
int main()
{
	const int maxnumber=25;
	int isprime[maxnumber];
	int i,x;
	for(i=0;i<maxnumber;i++){
		isprime[i]=1;
	}
	for(x=2;x<maxnumber;x++){
		if(isprime[x]==1){
			for(i=2;i*x<maxnumber;i++){
				isprime[i*x]=0;
			}
		}
	}
	for(i=2;i<maxnumber;i++){
		if(isprime[i]==1){
			printf("%d\t",i);//在这个数组里，isprime[i]中的i就是 数本身，isprime[i]代表是否是素数 
		}
	}
	return 0;
}
