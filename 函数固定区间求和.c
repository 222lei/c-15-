#include <stdio.h>
int sum(int begin,int end);//�������� ��ԭ�� 
int main()
{
    sum(1,10);
    sum(20,30);
    sum(35,45);
}
int sum(int begin,int end){  //�������� 
	int sum;
	int i;
		for(i=begin,sum=0;i<=end;i++){
		sum+=i;
	}
	printf("sum=%d\n",sum);
} 

//	int i,sum;
//	for(i=1,sum=0;i<=10;i++){
//		sum+=i;
//	}
//	printf("sum=%d\n",sum);
//		for(i=20,sum=0;i<=30;i++){
//		sum+=i;
//	}
//	printf("sum=%d\n",sum);
//		for(i=35,sum=0;i<=45;i++){
//		sum+=i;
//	}
//	printf("sum=%d\n",sum);
//	return 0;
//}

//cheer()�������ñ�����Բ���� 
//return ֹͣ���������У�������ֵ 
//��������һ���� 
//swap������̫�У�����ֻ�Ǵ���ֵ
//�βκ�ʵ�β��У�̫���ˣ�Ҫ�ò�����ֵ�����档
//����������ļ�Ϊ�飬���ڵı��������ظ����塣
//�뿪����飬�����������ʧ�ˡ� 
