#include <stdio.h>
#include <string.h>
#include <ctype.h>

//12.��дһ�����򣬶�ȡ���룬ֱ������#���������ĵ���������д��ĸ����Сд��ĸ�������������������ַ�����
//ʹ��ctype.hͷ�ļ��еĺ��� isupper islower isdigit isalpha
int checkwords(char* input);
int checkupper(char* input);
int checklower(char* input);
int checkpunct(char* input);
int checkdigit(char* input);
//int main()
//{
//	printf("�������ַ�����\n");
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
	printf("һ����%d������%d����д��ĸ%d��Сд��ĸ%d������%d���ַ�\n",count, up, low, digt,punct);*///����1
	
	//����2
//	while ((input[i++] = getchar()) != '#')
//		{
//			if (i >= 80)
//			{
//				printf("������\n");
//				break;
//			}
//		}
//		printf("�ո������һ����%d������\n", checkwords(input));//����ȥ����һ������
//		printf("һ����%d����д��ĸ%d��Сд��ĸ\n",checkupper(input), checklower(input));
//		printf("һ����%d�����\n%d������", checkpunct(input),checkisdigit(input));
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

//13.��дһ�����򣬵�����ʾ��������ĵ��ʣ����磬����see you later���ó���Ӧ�ô�ӡlater you see
//#define max 30
//#define num 10
//#define Max 300
//int fenpei(char arr1[][max],char arr2[Max]);
//int main()
//{
//	char arr1[num][max];
//	char arr2[Max];
//	printf("������һ���ַ���(#end)\n");
//	fgets(arr2, Max, stdin);
//	printf("��������Ϊ��\n");
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


//14.��дһ������ͨ�����������еĳ�������ݡ���һ�����������double���͵�������Ϊ�ݵĵ������ڶ�����������������Ϊ�ݵ�ָ����
//#include <stdlib.h>
//int main(int argc, char* argv[])
//{
//	if (argc != 3)
//	{
//		printf("�����д���!\n");
//		return 0;
//	}
//	double f = atof (argv[1]);//����������ת��Ϊfloat
//	int i = atoi(argv[2]);//����������ת��Ϊint
//	double result = 1;
//	for (int k = 0;k < i;k++)
//		result = result * f;
//	printf("%lf��%d����Ϊ%lf\n", f, i, result);
//	return 0;
//}


//15.ʹ���ַ����ຯ��ʵ��atoi���������������ȥ���ַ������Ǵ����֣��ú�������0
//#include <ctype.h>
//#include <string.h>
//int atoii(char arr1[10]);
//int main()
//{
//	printf("����������:\n");
//		char arr2[10];
//		gets(arr2);
//		int x=atoii(arr2);
//		printf("���������Ϊ%d\n", x);
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
//			printf("�������\n");
//			return 0;
//		}
//		result += (arr1[i - 1] - '0')*bit_mark;
//		bit_mark *= 10;
//	}
//	return result;
//}

//16.��дһ�������ȡ���룬ֱ������#��Ȼ����ַ�����ӡ�������ó���ʶ���ʵ������Ĳ���
//p��ԭ����ӡ
//u������ȫ��ת��Ϊ��д
//l������ȫ��ת��ΪСд

#include <ctype.h>
#include <string.h>
#include <stdlib.h>
void menu();
void Toupper(char* st);
void Tolower(char* st);
int main()
{
	printf("������һ���ַ���()\n");
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
	printf("p.��ԭ����ӡ       u.������ȫ��ת��Ϊ��д    l.������ȫ��ת��ΪСд\n");
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