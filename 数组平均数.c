#include <stdio.h>
int main()
{
	int num,count=0,sum=0;
	int number[100]; 
	double av=0;
	scanf("%d",&num);
	while(num!=-1){
	   number[count]=num;
	   int i;
	   printf("%d\t",count);
	   for(i=0;i<=count;i++){
	   	printf("%d\t",number[i]);
	   } printf("\n");
	   sum+=num;
	   count++;
	   av=1.0*sum/count;
	   scanf("%d",&num);
	    }//���ﶨ��������i,ȴû�д���Ϊ�������ھ���һ���飬���������͹ܲ����ˡ� 
	    if(count>0){
	    	int i;
	    	for(i=0;i<count;i++){
	    		if(number[i]>av){
	    			printf("%d\n",number[i]);//�������顣������ƽ��ֵ������� 
				}
			}
		printf("ƽ��ֵ��%f,��Ϊ%d",av,sum);
}
	return 0;
}	
//av=1.0*sum/count;   �ؼ���1.0	


