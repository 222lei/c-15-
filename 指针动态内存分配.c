#include <stdio.h>
#include <stdlib.h>//malloc�ر� 
int main()
{
	int number;
	int i;
	int *a;
	printf("����������"); 
	scanf("%d",&number);
//	int a[number]; 	
    a=(int*)malloc(number*sizeof(int));//��̬����ռ�֮�󣬶���ָ��Ĳ������Ե�������
	for(i=0;i<number;i++){
		printf("%d\n",a[i]);
	}
	for(i=number-1;i>=0;i--){//һ��number����û��a[number] 
		printf("%d\n",a[i]); 	
	} 
	free(a);//�н��л� 
}
//û�ռ��ˣ��᷵��null����0�� 
