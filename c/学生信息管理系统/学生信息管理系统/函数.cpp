#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"函数.h"

struct students *students_creat(struct students *h)
{
	struct students *p1, *p2;
	p1=p2= (struct students *)malloc(sizeof(struct students));
	char chioce[5]=" ";
	while (strcmp(chioce,"quit")!=0)
	{
		students *p3 = h;
		if (h == NULL&&p2!=NULL)//判断是否有表头，同时判断是否申请到空间
		{
			h = p2;                   //若无表头接入表头
			printf("学生班级:");
			gets_s(p2->students_class);
			printf("学生学号：");
			scanf_s("%d", &p2->students_id);
			printf("学生姓名：");
			getchar();      //使用该函数清除scanf_s函数在缓冲区留下的回车符；
			gets_s(p2->students_name);
			printf("学生性别：");
			//getchar();gets_s函数在输入后不会留下回车符，若随意使用丢失数据
			gets_s(p2->students_sex);
			printf("学生年龄：");
			scanf_s("%d", &p2->students_age);
			printf("学生选修课程编号:");
			scanf_s("%d", &p2->first.class_id);
			printf("课程名称：");
			getchar();
			gets_s(p2->first.class_name);
			printf("学分：");
			scanf_s("%d", &p2->first.study_grades);
			printf("考试成绩:");
			scanf_s("%d", &p2->first.exam_grades);
			printf("平时成绩：");
			scanf_s("%d", &p2->first.pr_grades);
			printf("综合成绩：");
			scanf_s("%d", &p2->first.all_grades);
			p2->next = NULL;
			printf("创建建成功！\n");
			printf("退出创建系统还是继续创建，退出请输入'quit'，按任意键继续\n");
			getchar();
			gets_s(chioce);

		}
		else
		{
			p1 = p2;
			p2 = (struct students *)malloc(sizeof(struct students));
			if (p2 != NULL)
			{
				printf("学生班级:");
				gets_s(p2->students_class);
				printf("学生学号：");
				scanf_s("%d", &p2->students_id);
				printf("学生姓名：");
				getchar();      //使用该函数清除scanf_s函数在缓冲区留下的回车符；
				gets_s(p2->students_name);
				printf("学生性别：");
				//getchar();gets_s函数在输入后不会留下回车符，若随意使用丢失数据
				gets_s(p2->students_sex);
				printf("学生年龄：");
				scanf_s("%d", &p2->students_age);
				printf("学生选修课程编号:");
				scanf_s("%d", &p2->first.class_id);
				printf("课程名称：");
				getchar();
				gets_s(p2->first.class_name);
				printf("学分：");
				scanf_s("%d", &p2->first.study_grades);
				printf("考试成绩:");
				scanf_s("%d", &p2->first.exam_grades);
				printf("平时成绩：");
				scanf_s("%d", &p2->first.pr_grades);
				printf("综合成绩：");
				scanf_s("%d", &p2->first.all_grades);
				while (p3!= NULL)   //判断要创建的学号在链表中是否存在
				{
					if (p2->students_id == p3->students_id)
					{
						break;
					}
					else
					{
						p3 = p3->next;
					}
				}
				if (p3 != NULL)
				{
					printf("你想要插入的学生已经存在。\n");
					free(p2);//释放掉重复的空间。
					p2 = p1;       //曾经少了这一句，释放后没有返回，使链表断裂。
					printf("退出增加系统还是继续增加，退出请输入'quit'，按任意键继续\n");
					getchar();
					gets_s(chioce);
				}
				else
				{
					p1->next = p2;
					p2->next = NULL;
					printf("创建建成功！\n");
					printf("退出创建系统还是继续创建，退出请输入'quit'，按任意键继续\n");
					getchar();
					gets_s(chioce);
				}
			}
			else
			{
				printf("出现严重错误\n");
			}
		}
		
	}
	return h;

}
void insert(students *h)
{
	char chioce[5]=" ";
	while (strcmp(chioce,"quit")!=0)
	{
		students *p1 ,*p3;
		p1 = p3 = h;
		students *p2 = NULL;
		while (p1->next!=NULL)
		{
			p1 = p1->next;//将p1移到链表的最后一位
		}
		p2= (struct students *)malloc(sizeof(struct students));
		if (p2 != NULL)//判断是否申请到空间
		{
			printf("学生班级:");
			gets_s(p2->students_class);
			printf("学生学号：");
			scanf_s("%d", &p2->students_id);
			printf("学生姓名：");
			getchar();      //使用该函数清除scanf_s函数在缓冲区留下的回车符；
			gets_s(p2->students_name);
			printf("学生性别：");
			//getchar();gets_s函数在输入后不会留下回车符，若随意使用丢失数据
			gets_s(p2->students_sex);
			printf("学生年龄：");
			scanf_s("%d", &p2->students_age);
			printf("学生选修课程编号:");
			scanf_s("%d", &p2->first.class_id);
			printf("课程名称：");
			getchar();
			gets_s(p2->first.class_name);
			printf("学分：");
			scanf_s("%d", &p2->first.study_grades);
			printf("考试成绩:");
			scanf_s("%d", &p2->first.exam_grades);
			printf("平时成绩：");
			scanf_s("%d", &p2->first.pr_grades);
			printf("综合成绩：");
			scanf_s("%d", &p2->first.all_grades);
			while (p3 != NULL)//判断要创建的学号在链表中是否存在
			{
				if (p2->students_id == p3->students_id)
				{
					break;
				}
				else
				{
					p3 = p3->next;
				}
			}
			if (p3 != NULL)
			{
				printf("你想要插入的学生已经存在。\n");
				free(p2);//释放掉重复的空间。
				printf("退出增加系统还是继续增加，退出请输入'quit'，按任意键继续\n");
				getchar();
				gets_s(chioce);
			}
			else
			{
				p1->next = p2;  //将p2接入表尾。
				p2->next = NULL;//表尾置零；
				printf("增加成功！\n");
				printf("退出增加系统还是继续增加，退出请输入'quit'，按任意键继续\n");
				getchar();
				gets_s(chioce);
			}
		}
		else//报错。
		{
			printf("出现严重错误\n");
			printf("退出增加系统还是继续增加，退出请输入'quit'，按任意键继续\n");
			getchar();
			gets_s(chioce);
		}

	}
}
void select(struct students *h)
{
	char chioce[5] = " ";
	while (strcmp(chioce, "quit") != 0)
	{
		students *p1 = h;
		students *result[100];
		char chioce2[13] = " ";
		int i = 0;
		printf("请选择使用学号或是学生姓名进行查询，输入'name'使用姓名进行查询，输入'students_id'使用学号查询\n");
		//getchar();   前面的使用的是gets_s函数在此次使用使数据丢失
		gets_s(chioce2);
		if (strcmp(chioce2,"name") == 0)
		{
			char chioce3[3] = " ";
			while (strcmp(chioce3,"q")!=0)
			{
				char name[20] = " ";
				p1 = h;
				printf("请输入学生的姓名：");
				gets_s(name);
				while (p1 != NULL)    //因为可能存在重名的学生，故须遍历整个链表。
				{
					if (strcmp(name, p1->students_name)==0)
					{
						result[i] = p1;
						++i;
						p1 = p1->next;
					}
					else
					{
						p1 = p1->next;
					}
				}
				printf("继续查询或者退出打印结果,退出请输入‘q’，按任意键继续\n");
				gets_s(chioce3);
			}
			for (int j = 0; j < i; ++j)
			{
				if (result[j] == NULL)
				{
					printf("你查询的学生不存在\n");
				}
				else
				{
					cout(result[j]);
				}
			}
		}
		else if (strcmp(chioce2, "students_id") == 0)
		{
			char chioce3[3] = " ";
			while (strcmp(chioce3,"q")!=0)
			{
				int id = 0;
				p1 = h;
				printf("请输入学生的学号：");
				scanf_s("%d", &id);
				while (p1!=NULL) //因为不存在相同学号的，找到就停止。
				{
					if (id == p1->students_id)
					{
						break;
					}
					else
					{
						p1 = p1->next;
					}
				}
				result[i] = p1;
				++i;
				printf("继续查询或者退出打印结果,退出请输入‘q’，按任意键继续\n");
				getchar();     //前面输入了数字在缓冲区留下了回车符，需要清除。
				gets_s(chioce3);
			}
			for (int j = 0; j < i; ++j)
			{
				if (result[j] == NULL)
				{
					printf("你查询的学生不存在\n");
				}
				else
				{
					cout(result[j]);
				}
			}
		}
		else
		{
			printf("你的输入有误！！！\n");
		}
		
		printf("退出查询系统还是继续查询，退出请输入'quit'，按任意键继续\n");
		gets_s(chioce);
		
	}
}
void cout(students *x) //输出显示函数
{
	printf("学生的班级是：%s\n", x->students_class);
	printf("学生的学号是：%d\n", x->students_id);
	printf("学生的姓名是：%s\n", x->students_name);
	printf("学生的性别是：%s\n", x->students_sex);
	printf("学生的年龄是：%d\n", x->students_age);
	printf("学生选修课程编号: %d\n", x->first.class_id);
	printf("课程名称：%s\n",x->first.class_name);
	printf("学分：%d\n", x->first.study_grades);
	printf("考试成绩: %d\n",x->first.exam_grades);
	printf("平时成绩：%d\n", x->first.pr_grades);
	printf("综合成绩：%d\n", x->first.all_grades);
}
void change(students *h)
{
	char chioce[5] = " ";
	while (strcmp(chioce,"quit")!=0)
	{
		students *p3 = h,*p2;
		students temp;
		students *p1 = h;
		p2 = &temp;
		int number = 0;
		printf("请输入你想修改的学生的学号：");
		scanf_s("%d", &number);
		while (p1!=NULL)
		{
			if (p1->students_id==number)
			{
				break;
			}
			else
			{
				p1 = p1->next;
			}
		}
		if (p1 == NULL)
		{
			printf("你想要修改的学生不存在。\n");
		}
		else
		{
			printf("这是原来的信息：\n");
			cout(p1);
			printf("请输入你想修改的信息：\n");
			printf("学生班级:");
			getchar();
			gets_s(p2->students_class);
			printf("学生学号：");
			scanf_s("%d", &p2->students_id);
			printf("学生姓名:");
			getchar();
			gets_s(p2->students_name);
			printf("学生性别：");
			//getchar(); 错误使用使数据丢失；
			gets_s(p2->students_sex);
			printf("学生年龄：");
			scanf_s("%d", &p2->students_age);
			printf("学生选修课程编号:");
			scanf_s("%d", &p2->first.class_id);
			printf("课程名称：");
			getchar();
			gets_s(p2->first.class_name);
			printf("学分：");
			scanf_s("%d", &p2->first.study_grades);
			printf("考试成绩:");
			scanf_s("%d", &p2->first.exam_grades);
			printf("平时成绩：");
			scanf_s("%d", &p2->first.pr_grades);
			printf("综合成绩：");
			scanf_s("%d", &p2->first.all_grades);
			p2->next = p1->next;
			while (p3 != NULL)//判断要创建的学号在链表中是否存在
			{
				if (p2->students_id == p3->students_id)
				{
					break;
				}
				else
				{
					p3 = p3->next;
				}
			}
			if (p3 == NULL)
			{
				*p1 = temp;
				printf("修改成功！\n");
			}
			else
			{
				printf("该学生已经存在，请选择重新输入");
			}
			
		}
		printf("是否退出修改系统，退出请输入’quit'，按任意键继续 。\n");
		getchar();//缓冲区留下了回车符，用这个好烦啊，下次找个更方便的函数。
		gets_s(chioce);
	}
}
students *delete_students(students *h)
{
	students *p2,*p1;
	p1 = p2 = h;
	char chioce[5] = " ";
	while (strcmp(chioce, "quit") != 0)
	{
		int number = 0;
		printf("请输入你想要删除的学生的学号：");
		scanf_s("%d", &number);
		while (p2->students_id != number&&p2 != NULL)//将p2移至需要删除的节点，p1移至p2之前的节点。
		{
			if (p2->students_id == number)
			{
				break;
			}
			else
			{
				p1 = p2;
				p2 = p2->next;
			}
		}
		if (p2 == NULL)
		{
			printf("你想要删除的学生不存在。\n");
		}
		else
		{
			if (p2 = h)
			{
				h = p2->next;
				free(p2);
			}
			else if (p2->next == NULL)
			{
				p1->next = NULL;
				free(p2);
			}
			else
			{
				p1->next = p2->next;
				free(p2);
			}
			printf("删除成功！！！\n");
		}
		printf("是否退出删除系统，退出请输入’quit'，按任意键继续 。\n");
		getchar();
		gets_s(chioce);
		return h;
	}
}
void showall(students *h)
{
	students *p1 = h;
	while (p1!=NULL)
	{
		cout(p1);
		p1 = p1->next;
	}
}
void wquit(students *h)
{

}