//enum color {red,yellow,green,numcolors};0 1 2���ε���  С��·�Զ����� 
//void f(enum color c);
//����ʵ����������������������� 
#include <stdio.h> 
enum color {red,yellow,green,numcolors};
int main(int argc,char const *argv[])
{
	int color=-1;
	char *cn[numcolors]={"red","yellow","green"};
	char *colorname=NULL;
	printf("��������ϲ������ɫ�Ĵ��룻");
	scanf("%d",&color); 
	if(color>=0&&color<numcolors){
		colorname=cn[color];
	}else{colorname="unknown";
}
    printf("��ϲ������ɫ��%s",colorname);	
    return 0;	
}


