#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(0));
	int number =rand()%100+1;
	int a,count=0;
	printf("������һ��1��100������");
	do{ scanf("%d",&a);
		count++;
		if(a>number){
			printf("����\n");
		}else if(a<number) printf("С��\n");	
	}while(a!=number);
	printf("����%d�βŲ¶�%d",count,number);
	return 0;	
}
//���ֲ��ҷ���� 
