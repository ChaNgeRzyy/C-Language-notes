#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


int num1 = 20;//ȫ�ֱ���-�����ڴ���飨{}��֮��ı���
/*�ֲ�������ȫ�ֱ������ֽ��鲻Ҫ��ͬ��������ᣬ����bug
���ֲ�������ȫ�ֱ���������ͬʱ���ֲ���������*/
int main()
{
	//��������--���ڴ�����ռ�
	/*float f =5.0;
	printf("%f\n", f);
	double d = 3.14;
	printf("%lf\n", d);*/

	printf("%d\n", sizeof(char));  //1byte
	printf("%d\n", sizeof(short)); //2
	printf("%d\n", sizeof(int));   //4
	printf("%d\n", sizeof(long));  //4 or 8
	printf("%d\n", sizeof(long long));  //8
	printf("%d\n", sizeof(float));  //4
	printf("%d\n", sizeof(double));  //8
	/*�ֽ�
	������еĵ�λ
	bit - ����λ --  һ��������λ
	byte- �ֽ�  1byte=8bit
	kb  1kb=1024byte
	mb      1024
	gb      1024 
	tb      1024
	pb      1024
	�������Ӳ��--ͨ��
	����         ����
	1��1bit��     0��1bit��*/

	short int age = 20;//2byte=16bit=2^16=65535(����ܱ�ʾ����ֵ) �����int age������ͽ�ʡ�ռ� 
	float weight = 95.6f; //f�ǹ涨Ϊ�����ȸ�����
	char ch = 'w';

	int num = 10;//�ֲ�����-�����ڴ�����ڲ�
	/*c���Ա�׼�涨
	sizeof(long)>=sizeof(int)*/

	int num2 = 0;
	int num3 = 0;
	int sum = 0;
	//*c�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ��
	scanf("%d%d", &num2, &num3);//ȡ��ַ����&
	sum = num2 + num3;
	printf("sum=%d\n", sum);
	/*������  ȫ�ֱ��������������������� �ֲ��������������ڴ����
	�Ӻ�����ȫ�ֱ����������ļ�������Ҫ����������extern��*/
	/*��������������--�ֲ�����������������
	                --ȫ�ֱ������������������*/
	return 0;
	//%c-��ӡ�ַ�
	//%p-�Ե�ַ��ʽ��ӡ
	//%x-��ӡʮ����������
	//short int-������
}
