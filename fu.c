#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>

int main()
{
	//printf("%s\n", __FILE__);//文件编译的源文件
	//printf("%d\n", __LINE__);//文件当前的行号
	//printf("%s\n", __DATE__);//文件编译日期
	//printf("%s\n", __TIME__);//文件编译的时间
	////printf("%d\n", __STDC__);//如果编译器遵循ANSI C，其值为1，否则未定义
	//printf("%s\n", __FUNCTION__);

	int i = 0;
	FILE* pf = fopen("text.txt", "a");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	for (i = 0; i < 10; i++)
	{
		fprintf(pf, "%s %d %s %s %d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
	}

	fclose(pf);
	pf = NULL;

	return 0;
}
