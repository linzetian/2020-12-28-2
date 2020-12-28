//打开文件以及关闭文件操作（文件指针）
#include<stdio.h>
#include<string.h>//strerror的头文件
int main()
{
	FILE* spwrite = fopen("F:\\c语言基础\\test1.txt", "w");//只写(只能写进去)
	if (spwrite == NULL)
	{
		printf("%s", strerror(errno));
		return 0;
	}
	fputc('b' ,spwrite);
	fputc('i' ,spwrite);
	fputc('t' ,spwrite);
	fclose(spwrite);//关闭文件
	spwrite = NULL;//防止出现野指针
	return 0;
}