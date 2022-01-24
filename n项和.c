#include <stdio.h>
int main() 
{   int n,i;
    double sign=1.0; 
    double sum=0.0; 
	scanf("%d",&n);
	 //注意0.0 
	 for(i=1;i<=n;i++){
	 	sum+=sign/i;//浮点数1.0 
	 	sign=-sign; 
	 }
	 printf("n项和是%f",sum);	
}
