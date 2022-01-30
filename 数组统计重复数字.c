#include <stdio.h>
int main()
{   
    const int number=10;
    int x,a;
	int count[number];//count[i]就是i出现的次数 
	for(a=0;a<number;a++){
		count[a]=0; //也可以直接int count[number]= {0}  如果是{2}，会将第一个数设为2，其他为0. 
	}//数组变量也是本地变量，也得自己初始化。 
	scanf("%d",&x);
	while(x!=-1){
	    if(x>=0&&x<=9){
	    	count[x]++;	
		}
		scanf("%d",&x);
	}
	   int i;
	for(i=0;i<number;i++){
		printf("count[%d]=%d\n",i,count[i]);	
	}
	return 0;
 } 
 //十个，for(i<0;i<10;i++) 
