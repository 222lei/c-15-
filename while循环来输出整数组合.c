#include <stdio.h>
int main()
{
	int a,i,j,k;
	int count=0;
	scanf("%d",&a);
	i=a;
	while(i<=a+3){
		j=a;
		while(j<=a+3){
			k=a;
			while(k<=a+3){
				if(i!=j&&j!=k&&i!=k){
					count++;
					printf("%d%d%d",i,j,k);
					if(count%6!=0){
						printf(" ");
					}
					else {
						printf("\n");
					}
				}k++;
			}j++;
		}i++;
	}
}

