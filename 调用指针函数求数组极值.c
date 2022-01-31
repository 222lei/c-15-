#include <stdio.h>
void minmax(int a[],int size,int *min,int *max);
int main()
{    int a[]={1,2,3,4,5,6,7,8,9,};
     int min,max;
     minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);//要返回两个值，于是构造函数引入两个指针来改变min和max的值，再返回 
     printf("min=%d,max=%d",min,max);
	 return 0; 
}
void minmax(int a[],int size,int *min,int *max)//指针应用场景一：函数的结果不只一个，于是想到指针 
{   
    int i;
	*min=*max=a[0];
	for(i=1;i<size;i++){
		if(a[i]<*min){
			*min=a[i];
		}else if(a[i]>*max){
			*max=a[i];
		}
	}
	
}
