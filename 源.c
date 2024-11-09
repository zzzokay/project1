#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//#include<stdlib.h>
////
////qsort排序数组
//	//倒序—>正序
//int cmp1(const void* e1,const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void test1()
//{
//	int arr[10] = {9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr,sz,sizeof(int),cmp1);
//	int i = 0;
//	for (i = 0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//
//}
//	//正序->倒序
//int cmp2(const void* e1, const void* e2)
//{
//	return *(int*)e2 - *(int*)e1;
//}
//
//void test2()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(int), cmp2);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//}
//
////qsort排序结构体
//#include<string.h>
//struct Stu
//{
//	char name[30];
//	int age;
//};
//
//int cmp_stu_by_name(const void* e1,const void* e2)
//{
//	return strcmp(((struct Stu*)e1) -> name,((struct Stu*)e2) -> name);//注意强制转换后再加一个括号
//
//}
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;//错误示例return *(int*)e1 - *(int*)e2;
//														   //因为这是排序结构体
//				
//}
//
//
//void print_Stu(struct Stu s[])
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s %d\n", s[i].name, s[i].age);
//	}
//}
//
//void test3()
//{
//	struct Stu s[] = { {"zhangsan",15},{"lisi",17}, {"wangwu",14 }};
//	int sz = sizeof(s) / sizeof(s[0]);
//	//qsort(s, sz, sizeof(s[0]),cmp_stu_by_name);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	print_Stu(s);
//
//}
//
////my_qsort排序数组(升序)
//
//int cmp3(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//
//}
//
//
//
//void Swap(void* e1,void*e2 ,int width)
//{
//	int j = 0;
//	for (j = 0; j < width; j++)
//	{
//		int tmp = *((char*)e1 + j);
//		*((char*)e1 + j) =  *((char*)e2  + j);
//		*((char*)e2 + j) = tmp;
//
//	}
//
//}
//
//
//void my_qsort(void* base,int num,int width,int(* cmp)(const void* e1,const void* e2))
//{
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		int j = 0;
//		for (j = 0; j < num - 1 - i; j++)
//		{
//			if ( cmp(((char*)base + j * width) , ((char*)base + (j + 1) * width)) > 0)
//			{
//				Swap(((char*)base + j * width), ((char*)base + (j + 1) * width),width);
//
//			}
//
//
//		}
//
//	}
//
//
//}
//
//void test4()
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1,0};
//	my_qsort(arr,10,4,cmp3);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);
//
//
//	}
//
//
//
//}
//
//
//
//int main()
//{
//	//test1();
//	//test2();
//	test3();
//	//test4();
//
//	return 0;
//}
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[])
{
   int K, H, W, N, a , i;
    scanf_s("%d %d", &N, &K);

     int Arr[N][2] ;
    for (i = 0; i < N; i++)
    {
        scanf_s("%d %d", Arr[i][0], Arr[i][1]);
        a += (( int)sqrt(Arr[i][0] * Arr[i][1] / K));

    }



    return 0;
}