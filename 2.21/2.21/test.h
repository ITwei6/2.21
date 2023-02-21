#pragma once
////静态顺序表--缺点--开多了浪费，开少了不够用
//#define N 10
//typedef int SLDataType;
//typedef struct SeqList
//{
//	int a[N];
//	int size;
//}SeqList;
//动态顺序表--按需申请
typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* a;
	int size;//有效数据个数
	int capacity;//空间容量
}SeqList ;
//柔性数组与之区别?
//数据结构--数据管理--增删查改
SeqList s;
//初始化
void SeqInit(SeqList s);
//销毁
void SeqDestroy(SeqList s);
//头插头删
//尾插尾删

void SeqInit(SeqList s);