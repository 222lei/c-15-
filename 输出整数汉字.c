#include <stdio.h>
int main()
{
	int x,min=1;
	scanf("%d",&x);
	if(x<0){
		x=-x;
		printf("fu");
	}
	//比如输入12345，为了一位一位表示，需要得到10000的帮助 
	int t=x;
	while(t>9){
		t/=10;//除以十是125变成12 
		min*=10;
	} printf("%d",min);
	do{
		int d=x/min;
		switch(d){
		case 0:printf("ling");break;
		case 1:printf("yi");break;
		case 2:printf("er");break;
		case 3:printf("san");break;
		case 4:printf("si");break;
		case 5:printf("wu");break;
		case 6:printf("liu");break;
		case 7:printf("qi");break;
		case 8:printf("ba");break;
		case 9:printf("jiu");break;	
	 }
	 if(min>=10) printf(" ");
	    x%=min;
	 	min/=10;//组合拳，必须得把握。 
	 }while(min>0);//边界条件还是需要练习 
	 return 0;
 } 
