#include <stdio.h>
//�ڴ���������ס����//���ٲ�����û����
//�ݹ� ��һ��Ƕ�׵���
//��  void f1 f2�ǲ�һ����
//�ݹ�--���ù�ϵ��ʲô���ģ�
//ʱ�䲻���ظ����õ�
//�ռ����˿��Թ黹�������ظ�����
//io����ӿ���
//1G--ʮ���ֽ�
//int main()//�Կռ任ʱ��
//{//�ȿ���k���浽tmp
//	//�ٽ�n-k��������tmp��k�ĺ���
//	//���tmp������nums
//	int* tmp = malloc(sizeof(int) *numsSize);//����һ���ռ�
//	memcpy(tmp,nums+n-k)
//}
#include <stdlib.h>
#include "test.h"
void SeqInit(SeqList s)
{
	s.a = NULL;
	s.capacity = 0;
	s.size = 0;
}