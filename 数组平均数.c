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
	    }//这里定义了两个i,却没有错，因为大括号内就是一个块，隔绝开来就管不着了。 
	    if(count>0){
	    	int i;
	    	for(i=0;i<count;i++){
	    		if(number[i]>av){
	    			printf("%d\n",number[i]);//遍历数组。将大于平均值的数输出 
				}
			}
		printf("平均值是%f,和为%d",av,sum);
}
	return 0;
}	
//av=1.0*sum/count;   关键乘1.0	


