#include <stdio.h>
int main()
{   
    const int number=10;
    int x,a;
	int count[number];//count[i]����i���ֵĴ��� 
	for(a=0;a<number;a++){
		count[a]=0; //Ҳ����ֱ��int count[number]= {0}  �����{2}���Ὣ��һ������Ϊ2������Ϊ0. 
	}//�������Ҳ�Ǳ��ر�����Ҳ���Լ���ʼ���� 
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
 //ʮ����for(i<0;i<10;i++) 
