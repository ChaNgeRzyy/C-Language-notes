#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#define MAX 10
//ö�ٳ���
/*ö��-һһ�о�

�Ա���ԭɫ������*/
//ö�ٹؼ���-enum

enum Sex
{
	MEALE,
	FEMALE,  //ö�ٳ���
	SECRET
};// ; ����ȱ�٣� ö�ٳ�����Ҫ�� , 

int main()
{
	//����
	
	3;
	3.14;	//���泣��
	const int num = 4;  //const���εĳ�����  const-������
	//num = 8;  error
	//const int n = 10;
	//	int arr[n] = {0};  error //n�Ǳ����������г����ԣ���������˵n�ǳ�����
	int arr[MAX] = { 0 };//#define����ı�ʶ������

	//printf("%d\n", MEALE); //0
	//printf("%d\n", FEMALE);//1
	//printf("%d\n", SECRET);//2
	//ö�ٳ�����ֵ�Ҳ��ɱ��ı�

	enum Sex sex = MEALE;
	sex = SECRET;
	//������ö�������������ı����ǿ��Ըı��


	//�ַ���

	"abcdef";
	"hello bit";
	"";//���ַ���
	char arr1[] = "abc";	
	//"abc" -- 'a' 'b' 'c' '\0'
	char arr2[] = { 'a', 'b', 'c' };
	//'a'  'b'  'c'
	char arr3[] = { 'a', 'b', 'c' ,'\0'};
	//'a' - 97
	//'\0' - 0
	//�����ڼ�����ϴ���ʱ���洢���Ƕ�����    
	//A - 65 
	//a - 97
	//....
	//ASCII����
	//ASCII��ֵ
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	//printf("%d\n", strlen(arr1)); //3 -- \0���ַ����Ľ�����־��������
	//printf("%d\n", strlen(arr2)); //35 -- ���ֵ
	//printf("%d\n", strlen(arr3)); //3
	//strlen - �����ַ�������


	//ת���ַ�
	
	//  \a		���壬�����ַ�(BEL)	                    007
	//	\b		�˸�(BS) ������ǰλ���Ƶ�ǰһ��  		008
	//	\f		��ҳ(FF)������ǰλ���Ƶ���ҳ��ͷ		012
	//	\n		����(LF) ������ǰλ���Ƶ���һ�п�ͷ		010
	//	\r		�س�(CR) ������ǰλ���Ƶ����п�ͷ		013
	//	\t		ˮƽ�Ʊ�(HT) 							009
	//	\v		��ֱ�Ʊ�(VT)							011
	//	\'		�ַ�����������							039
	//	\"		�ַ����ڲ���˫����						034
	//	\\		��б�ܣ���ֹ��������Ϊһ��ת�����з�	092 ��ASCII��ֵ��
	//  \ddd    1-3���˽��Ƶ����֣���\130X
 	//  \xdd    dd��ʾ2��ʮ���������֣���\x30 0


	//printf("f:\\text\\32\\text.c"); //F:\c\code\20220507\x64\Debug\20220507.exe
	
	printf("%c\n", '\'');
	printf("%d\n", strlen("f:\text\32\text.c"));

	return 0;

}
	// printf("f:\text\32\text.c"); //f:      ext    ext.c 

/*�������Ľ����:�� ��
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


strlen����ȡ�ַ�������Ч���ȣ�������'\0'
"c:\test\121": �ڸ��ַ����У�\t��ת���ַ���ˮƽ�Ʊ�������һ��tab��λ�ã�
��\121��ʾһ���ַ����ǽ�121����8�������飬ת��Ϊ10���ƺ��81��
��ҵΪASCII��ֵ���ַ��������ַ�'Q' ��
�������ַ���ʵ��Ϊ��"c:  estq",ֻ��7����Ч�ַ�
��ˣ�ѡ��A
*/