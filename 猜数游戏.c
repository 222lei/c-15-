#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(0));
	int number =rand()%100+1;
	int a,count=0;
	printf("请输入一个1到100的数：");
	do{ scanf("%d",&a);
		count++;
		if(a>number){
			printf("大了\n");
		}else if(a<number) printf("小了\n");	
	}while(a!=number);
	printf("猜了%d次才猜对%d",count,number);
	return 0;	
}
//二分查找法最快 
