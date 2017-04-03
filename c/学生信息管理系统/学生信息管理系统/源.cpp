#include<stdio.h>
#include<string.h>
#include"函数.h"
int main()
{
	
	struct students *head;
	head = NULL;
	
	
	while (true)
	{
		char chioce[10] = " ";
		printf("欢迎来到学生信息管理系统\n");
		printf("请输入以下代号来实现你要实现的功能：\n");
		printf("输入'creat'表示创建并输入学生信息\t输入'insert'表示在原来的表中增加学生\n");
		printf("输入'select'表示查询学生信息\t\t输入'change'表示更改学生的信息。\n");
		printf("输入'delect'表示删除学生信息\t\t输入'showall'查看所有学生的信息。\n");
		printf("输入'wquit'保存将学生信息保存到指定位置并退出。\n");
		gets_s(chioce);
		if (strcmp(chioce,"creat")==0)
		{
			if (head == NULL)
			{
				printf("请输入学生信息，在输入完成后，输入'quit'表示退出，按任意键继续\n");
				head = students_creat(head);
			}
			else
				printf("以经成功创建列表请勿重复创建，添加学生请选择‘insert’，创建新表请先退出此表。\n");
			
			
		}
		else if(strcmp(chioce,"insert")==0)
		{
			printf("请输入你要增加的学生的信息,在输入完成后输入'quit'表示退出，按任意键继续\n");
			insert(head);
		}
		else if (strcmp(chioce, "select") == 0)
		{
			select(head);
		}
		else if (strcmp(chioce, "change") == 0)
		{
			change(head);
		}
		else if (strcmp(chioce, "delect") == 0)
		{
			head=delete_students(head);
		}
		else if (strcmp(chioce, "showall")==0)
		{
			showall(head);
		}
		else if (strcmp(chioce, "wquit") == 0)
		{

		}
		else
		{
			printf("你的输入有误，请按照上面的提示输入命令！！！\n");
		}
	}

}
