#include <stdio.h>
int search(int key,int a[],int length);
int main()
{
    int a[]={5,8,9,16,32,66,7,6,1,2,3,10,11}; 
    int x;
	int log;
	printf("������һ������:");
	scanf("%d",&x);
	log=search(x,a,sizeof(a)/sizeof(a[0]));//������a[],ֻ����a 
	if(log!=-1){
		printf("%d�ǵ�%d��\n",x,log);
	} else{
		printf("������"); 
	} 
	return 0;
 }
 int search(int key,int a[],int length)
 {   int ret=-1;
     int i;
 	for(i=0;i<length;i++){
 		if(a[i]==key){
 			ret=i+1;
 			break;
		 }
	 }return ret;
 }
 //sizeof���ֽ�����sizeof(a)/sizeof(a[0])��Զ�����鳤��
 //������������ܱ���ֵ������������ 
 //������λ����ʱ����������һ����������������ĳ��ȡ���������a[?]��sizeof����ʾ 
