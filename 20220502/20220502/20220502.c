#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


int num1 = 20;//全局变量-定义在代码块（{}）之外的变量
/*局部变量和全局变量名字建议不要相同，容易误会，产生bug
但局部变量和全局变量名字相同时，局部变量优先*/
int main()
{
	//创建变量--向内存申请空间
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
	/*字节
	计算机中的单位
	bit - 比特位 --  一个二进制位
	byte- 字节  1byte=8bit
	kb  1kb=1024byte
	mb      1024
	gb      1024 
	tb      1024
	pb      1024
	计算机是硬件--通电
	正电         负电
	1（1bit）     0（1bit）*/

	short int age = 20;//2byte=16bit=2^16=65535(最大能表示的数值) 相比于int age更合理和节省空间 
	float weight = 95.6f; //f是规定为单精度浮点型
	char ch = 'w';

	int num = 10;//局部变量-定义在代码块内部
	/*c语言标准规定
	sizeof(long)>=sizeof(int)*/

	int num2 = 0;
	int num3 = 0;
	int sum = 0;
	//*c语言语法规定：变量要定义在当前代码块的最前面
	scanf("%d%d", &num2, &num3);//取地址符号&
	sum = num2 + num3;
	printf("sum=%d\n", sum);
	/*作用域  全局变量的作用域是整个工程 局部变量就是其所在代码块
	子函数中全局变量在其他文件中引用要进行声明（extern）*/
	/*变量的生命周期--局部变量在其作用域中
	                --全局变量是整个程序的周期*/
	return 0;
	//%c-打印字符
	//%p-以地址形式打印
	//%x-打印十六进制数字
	//short int-短整型
}
