#include<stdio.h>
#define NUM 10//宏定义数组大小，要更改数组大小就直接修改这里的就可以了
int main()
{
	int s[NUM];
	int i, sum = 0;

	for (i = 0; i < 10; i++)
	{
		printf("请输入第%d位同学的成绩：", i+1);//数组第一位是0
		scanf_s("%d", &s[i]);
		sum += s[i];       //用到指针了，暂时跳过-2.5
	}
	printf("成绩录入完毕，这次开始的平均分是：%2f\n", (double)sum / NUM);//强制转换double类型

	return 0;
    


}