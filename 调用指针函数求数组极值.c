#include <stdio.h>
void minmax(int a[],int size,int *min,int *max);
int main()
{    int a[]={1,2,3,4,5,6,7,8,9,};
     int min,max;
     minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);//Ҫ��������ֵ�����ǹ��캯����������ָ�����ı�min��max��ֵ���ٷ��� 
     printf("min=%d,max=%d",min,max);
	 return 0; 
}
void minmax(int a[],int size,int *min,int *max)//ָ��Ӧ�ó���һ�������Ľ����ֻһ���������뵽ָ�� 
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
