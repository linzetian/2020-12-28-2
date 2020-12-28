//打开文件以及关闭文件操作（文件指针）
#include<stdio.h>
#include<string.h>//strerror的头文件
int main()
{
	FILE* spwrite = fopen("F:\\c语言基础\\test1.txt","r");//只读（只可以读出来（只能输出），不能写进去）
	if (spwrite == NULL)
	{
		printf("%s",strerror(errno));
		return 0;
	}
	printf("%c", fgetc(spwrite));
	printf("%c",fgetc(spwrite));
	printf("%c",fgetc(spwrite));
	fclose(spwrite);//关闭文件
	spwrite = NULL;//防止出现野指针
	return 0;
}