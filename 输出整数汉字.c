#include <stdio.h>
int main()
{
	int x,min=1;
	scanf("%d",&x);
	if(x<0){
		x=-x;
		printf("fu");
	}
	//��������12345��Ϊ��һλһλ��ʾ����Ҫ�õ�10000�İ��� 
	int t=x;
	while(t>9){
		t/=10;//����ʮ��125���12 
		min*=10;
	} printf("%d",min);
	do{
		int d=x/min;
		switch(d){
		case 0:printf("ling");break;
		case 1:printf("yi");break;
		case 2:printf("er");break;
		case 3:printf("san");break;
		case 4:printf("si");break;
		case 5:printf("wu");break;
		case 6:printf("liu");break;
		case 7:printf("qi");break;
		case 8:printf("ba");break;
		case 9:printf("jiu");break;	
	 }
	 if(min>=10) printf(" ");
	    x%=min;
	 	min/=10;//���ȭ������ð��ա� 
	 }while(min>0);//�߽�����������Ҫ��ϰ 
	 return 0;
 } 
