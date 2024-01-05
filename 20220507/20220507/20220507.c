#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#define MAX 10
//枚举常量
/*枚举-一一列举

性别、三原色、星期*/
//枚举关键字-enum

enum Sex
{
	MEALE,
	FEMALE,  //枚举常量
	SECRET
};// ; 不可缺少！ 枚举常量间要有 , 

int main()
{
	//常量
	
	3;
	3.14;	//字面常量
	const int num = 4;  //const修饰的常变量  const-常属性
	//num = 8;  error
	//const int n = 10;
	//	int arr[n] = {0};  error //n是变量，但是有常属性，所以我们说n是常变量
	int arr[MAX] = { 0 };//#define定义的标识符常量

	//printf("%d\n", MEALE); //0
	//printf("%d\n", FEMALE);//1
	//printf("%d\n", SECRET);//2
	//枚举常量有值且不可被改变

	enum Sex sex = MEALE;
	sex = SECRET;
	//但是由枚举类型所创建的变量是可以改变的


	//字符串

	"abcdef";
	"hello bit";
	"";//空字符串
	char arr1[] = "abc";	
	//"abc" -- 'a' 'b' 'c' '\0'
	char arr2[] = { 'a', 'b', 'c' };
	//'a'  'b'  'c'
	char arr3[] = { 'a', 'b', 'c' ,'\0'};
	//'a' - 97
	//'\0' - 0
	//数据在计算机上储存时，存储的是二进制    
	//A - 65 
	//a - 97
	//....
	//ASCII编码
	//ASCII码值
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	//printf("%d\n", strlen(arr1)); //3 -- \0是字符串的结束标志而非内容
	//printf("%d\n", strlen(arr2)); //35 -- 随机值
	//printf("%d\n", strlen(arr3)); //3
	//strlen - 计算字符串长度


	//转义字符
	
	//  \a		响铃，警告字符(BEL)	                    007
	//	\b		退格(BS) ，将当前位置移到前一列  		008
	//	\f		换页(FF)，将当前位置移到下页开头		012
	//	\n		换行(LF) ，将当前位置移到下一行开头		010
	//	\r		回车(CR) ，将当前位置移到本行开头		013
	//	\t		水平制表(HT) 							009
	//	\v		垂直制表(VT)							011
	//	\'		字符常量单引号							039
	//	\"		字符串内部的双引号						034
	//	\\		反斜杠，防止它被解释为一个转义序列符	092 （ASCII码值）
	//  \ddd    1-3个八进制的数字，如\130X
 	//  \xdd    dd表示2个十六进制数字，如\x30 0


	//printf("f:\\text\\32\\text.c"); //F:\c\code\20220507\x64\Debug\20220507.exe
	
	printf("%c\n", '\'');
	printf("%d\n", strlen("f:\text\32\text.c"));

	return 0;

}
	// printf("f:\text\32\text.c"); //f:      ext    ext.c 

/*下面程序的结果是:（ ）
#include <stdio.h>
#include <string.h>
int main()
{
	printf("%d\n", strlen("c:\test\121"));
		return 0;
}


A.    7
B.    8
C.    9
D.    10


strlen：获取字符串的有效长度，不包括'\0'
"c:\test\121": 在该字符串中，\t是转移字符，水平制表，跳到下一个tab的位置；
而\121表示一个字符，是讲121看做8进制数组，转换为10进制后的81，
作业为ASCII码值的字符，即：字符'Q' ，
故上述字符串实际为："c:  estq",只有7个有效字符
因此：选择A
*/