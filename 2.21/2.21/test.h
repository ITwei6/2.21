#pragma once
////��̬˳���--ȱ��--�������˷ѣ������˲�����
//#define N 10
//typedef int SLDataType;
//typedef struct SeqList
//{
//	int a[N];
//	int size;
//}SeqList;
//��̬˳���--��������
typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* a;
	int size;//��Ч���ݸ���
	int capacity;//�ռ�����
}SeqList ;
//����������֮����?
//���ݽṹ--���ݹ���--��ɾ���
SeqList s;
//��ʼ��
void SeqInit(SeqList s);
//����
void SeqDestroy(SeqList s);
//ͷ��ͷɾ
//β��βɾ

void SeqInit(SeqList s);