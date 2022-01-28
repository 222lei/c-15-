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
	} //因为1不是素数，所以直接不考虑 
	for(i=m;i<=n;i++){
		      if(isprime(i)){
				h++;
				sum+=i;
				printf("%d ",i);
			}
	}printf("sum=%d,h=%d",sum,h);
 }
 //增加一个变量isprime来表示是否是素数。 
