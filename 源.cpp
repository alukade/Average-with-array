#include<stdio.h>
#define NUM 10//�궨�������С��Ҫ���������С��ֱ���޸�����ľͿ�����
int main()
{
	int s[NUM];
	int i, sum = 0;

	for (i = 0; i < 10; i++)
	{
		printf("�������%dλͬѧ�ĳɼ���", i+1);//�����һλ��0
		scanf_s("%d", &s[i]);
		sum += s[i];       //�õ�ָ���ˣ���ʱ����-2.5
	}
	printf("�ɼ�¼����ϣ���ο�ʼ��ƽ�����ǣ�%2f\n", (double)sum / NUM);//ǿ��ת��double����

	return 0;
    


}