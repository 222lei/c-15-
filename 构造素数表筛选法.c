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
			printf("%d\t",i);//����������isprime[i]�е�i���� ������isprime[i]�����Ƿ������� 
		}
	}
	return 0;
}
