#include <stdio.h>
//内存的申请就像住房间//销毁并不是没有了
//递归 是一种嵌套调用
//而  void f1 f2是不一样的
//递归--调用关系是什么样的？
//时间不能重复利用的
//空间用了可以归还，可以重复利用
//io型与接口型
//1G--十亿字节
//int main()//以空间换时间
//{//先拷贝k后面到tmp
//	//再将n-k个拷贝到tmp的k的后面
//	//最后将tmp拷贝到nums
//	int* tmp = malloc(sizeof(int) *numsSize);//开辟一个空间
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