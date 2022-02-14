#include <stdio.h>
#include <stdlib.h>//malloc必备 
int main()
{
	int number;
	int i;
	int *a;
	printf("请输入数量"); 
	scanf("%d",&number);
//	int a[number]; 	
    a=(int*)malloc(number*sizeof(int));//动态分配空间之后，对于指针的操作可以当作数组
	for(i=0;i<number;i++){
		printf("%d\n",a[i]);
	}
	for(i=number-1;i>=0;i--){//一共number个，没有a[number] 
		printf("%d\n",a[i]); 	
	} 
	free(a);//有借有还 
}
//没空间了，会返回null或者0； 
