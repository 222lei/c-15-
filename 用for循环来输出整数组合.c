#include <stdio.h>
int main()
{
	int x,i,j,k;
	int count=0;
	scanf("%d",&x);
	for(i=x;i<=x+3;i++){
		for(j=x;j<=x+3;j++){
			for(k=x;k<=x+3;k++){
			   if(i!=j&&j!=k&&i!=k){
					count++;
					printf("%d%d%d",i,j,k);
					if(count%6!=0){
						printf(" ");
					}
					else {
						printf("\n");
					}
			}  }
		}
	}
	return 0;
 } 
