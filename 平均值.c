#include <stdio.h>
int main()
{
	int num,count=0,sum=0;
	double av=0;
	scanf("%d",&num);
	while(num!=-1){
	   sum+=num;
	   count++;
	   av=1.0*sum/count;
	   scanf("%d",&num);
	    }
	printf("ƽ��ֵ��%f,��Ϊ%d",av,sum);
	return 0;
}	
//av=1.0*sum/count;   �ؼ���1.0	


 
