#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>

int main()
{
	//printf("%s\n", __FILE__);//�ļ������Դ�ļ�
	//printf("%d\n", __LINE__);//�ļ���ǰ���к�
	//printf("%s\n", __DATE__);//�ļ���������
	//printf("%s\n", __TIME__);//�ļ������ʱ��
	////printf("%d\n", __STDC__);//�����������ѭANSI C����ֵΪ1������δ����
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
