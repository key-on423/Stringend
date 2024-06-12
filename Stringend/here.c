#include <stdio.h>
#include <string.h>
#include <ctype.h>

//12.编写一个程序，读取输入，直至读到#，报告读入的单词数，大写字母数，小写字母数，标点符号数和数字字符数。
//使用ctype.h头文件中的函数 isupper islower isdigit isalpha
int checkwords(char* input);
int checkupper(char* input);
int checklower(char* input);
int checkpunct(char* input);
int checkdigit(char* input);
//int main()
//{
//	printf("请输入字符串：\n");
//	char input[80];
//	int i = 0;
//	fgets(input, 80, stdin);
//	int up = 0;
//	int low = 0;
//	int digt = 0;
//	int punct = 0;
	/*while (input[i]!='#')
	{
		if (isupper(input[i]) != 0)
			up++;
		if (islower(input[i]) != 0)
			low++;
		if (isdigit(input[i]) != 0)
			digt++;
		if (ispunct(input[i]) != 0)
			punct++;
		i++;
	}
	i = 0;
	int panbie = 0;
	int count = 0;
	while (input[i] != '#')
	{
		if (isalpha(input[i]) == 0 && panbie == 0)
		{
			i++;
		}
		if (isalpha(input[i]) == 0 && panbie == 1)
		{
			i++;
			count++;
			panbie = 0;
		}
		if (isalpha(input[i]) != 0) 
		{
			i++;
			panbie = 1;
		}
	}
	printf("一共有%d个单词%d个大写字母%d个小写字母%d个数字%d个字符\n",count, up, low, digt,punct);*///方法1
	
	//方法2
//	while ((input[i++] = getchar()) != '#')
//		{
//			if (i >= 80)
//			{
//				printf("超出了\n");
//				break;
//			}
//		}
//		printf("刚刚输入的一共有%d个单词\n", checkwords(input));//传过去的是一个数组
//		printf("一共有%d个大写字母%d个小写字母\n",checkupper(input), checklower(input));
//		printf("一共有%d个标点\n%d个数字", checkpunct(input),checkisdigit(input));
//}
//int checkwords(char* input)
//{
//	int count = 0;
//	int start = 0;
//	while (*input != '#')
//	{
//		if (isalpha(*input) == 0 && start == 0)
//		{
//			input++;
//		}
//		else if (isalpha(*input) == 0 && start == 1)
//		{
//			input++;
//			count++;
//			start = 0;
//		}
//		else if (isalpha(*input) != 0)
//		{
//			input++;
//			start = 1;
//		}
//	}
//		if (start == 1)
//			count++;
//		return count;
//	
//}
//int checkupper(char* input)
//{
//	int count = 0;
//	while (*input != '#')
//	{
//		if (isupper(*input++) != 0)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int checklower(char* input)
//{
//	int count = 0;
//	while (*input != '#')
//	{
//		if (islower(*input++) != 0)
//		{
//			count++;
//			
//		}
//	}
//	return count;
//}
//int checkpunct(char* input)
//{
//	int count = 0;
//	while (*input != '#')
//	{
//		if (ispunct(*input++) != 0)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int checkdigit(char* input)
//{
//	int count = 0;
//	while (*input != '#')
//	{
//		if (isdigit(*input++) != 0)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//13.编写一个程序，倒序显示输入参数的单词，例如，输入see you later，该程序应该打印later you see
//#define max 30
//#define num 10
//#define Max 300
//int fenpei(char arr1[][max],char arr2[Max]);
//int main()
//{
//	char arr1[num][max];
//	char arr2[Max];
//	printf("请输入一串字符：(#end)\n");
//	fgets(arr2, Max, stdin);
//	printf("倒序输入为：\n");
//	int x=fenpei(arr1, arr2);
//	for (x;x >= 0;x--)
//	{
//		printf("%s ", arr1[x]);
//	}
//}
//int fenpei(char arr1[][max],char arr2[Max])
//{
//	int i = 0;
//	int y = 0;
//	int z = 0;
//	int panbie = 1;
//	while (arr2[z] != '\n')
//	{
//
//	
//			
//		if (arr2[z] != ' ')
//		{
//			arr1[i][y] = arr2[z];
//			z++;
//			y++;
//			panbie = 1;
//		}
//		if (arr2[z] == ' '&&panbie==1)
//		{
//			arr1[i][y] = '\0';
//			z++;
//			i++;
//			y = 0;
//			panbie = 0;
//		}
//	}
//	arr1[i][y] = '\0';
//	/*for (i ;i >= 0;i--)
//	{
//		printf("%s ", arr1[i]);
//	}*/
//	return i;
//}


//14.编写一个程序通过命令行运行的程序计算幂。第一个命令参数是double类型的数，作为幂的底数，第二个参数是整数，作为幂的指数；
//#include <stdlib.h>
//int main(int argc, char* argv[])
//{
//	if (argc != 3)
//	{
//		printf("命令行错误!\n");
//		return 0;
//	}
//	double f = atof (argv[1]);//命令行输入转换为float
//	int i = atoi(argv[2]);//命令行输入转化为int
//	double result = 1;
//	for (int k = 0;k < i;k++)
//		result = result * f;
//	printf("%lf的%d次幂为%lf\n", f, i, result);
//	return 0;
//}


//15.使用字符分类函数实现atoi（）函数。如果数去的字符串不是纯数字，该函数返回0
//#include <ctype.h>
//#include <string.h>
//int atoii(char arr1[10]);
//int main()
//{
//	printf("请输入数字:\n");
//		char arr2[10];
//		gets(arr2);
//		int x=atoii(arr2);
//		printf("输入的数字为%d\n", x);
//}
//int atoii(char arr1[10])
//{
//	int result = 0;
//	int bit_mark = 1;
//	int len = strlen(arr1);
//	printf("len=%d\n", len);
//	int i;
//	for (i=len;i > 0;i--)
//	{
//		if (isdigit(arr1[i - 1])== 0)
//		{
//			printf("输入错误！\n");
//			return 0;
//		}
//		result += (arr1[i - 1] - '0')*bit_mark;
//		bit_mark *= 10;
//	}
//	return result;
//}

//16.编写一个程序读取输入，直到读到#，然后把字符串打印出来。该程序识别和实现下面的操作
//p按原样打印
//u把输入全部转化为大写
//l把输入全部转化为小写

#include <ctype.h>
#include <string.h>
#include <stdlib.h>
void menu();
void Toupper(char* st);
void Tolower(char* st);
int main()
{
	printf("请输入一串字符串()\n");
	char arr1[80];
	fgets(arr1,80,stdin);
	menu();
	char ch;
	ch = getchar();
	if (ch == 'p')
		puts(arr1);
	if (ch == 'u')
	{
		Toupper(arr1);
		puts(arr1);
	}
	if (ch == 'l')
	{
		Tolower(arr1);
		puts(arr1);
	}
	return 0;
}
void menu()
{
	printf("p.按原样打印       u.把输入全部转化为大写    l.把输入全部转化为小写\n");
}
void Toupper(char* st)
{
	while (*st != '\n')
	{
		*st = toupper(*st);
		st++;
		
	}
}
void Tolower(char* st)
{
	while (*st!= '\n')
	{
		*st = tolower(*st);
		st++;
	}
}