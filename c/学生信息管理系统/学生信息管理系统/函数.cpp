#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"����.h"

struct students *students_creat(struct students *h)
{
	struct students *p1, *p2;
	p1=p2= (struct students *)malloc(sizeof(struct students));
	char chioce[5]=" ";
	while (strcmp(chioce,"quit")!=0)
	{
		students *p3 = h;
		if (h == NULL&&p2!=NULL)//�ж��Ƿ��б�ͷ��ͬʱ�ж��Ƿ����뵽�ռ�
		{
			h = p2;                   //���ޱ�ͷ�����ͷ
			printf("ѧ���༶:");
			gets_s(p2->students_class);
			printf("ѧ��ѧ�ţ�");
			scanf_s("%d", &p2->students_id);
			printf("ѧ��������");
			getchar();      //ʹ�øú������scanf_s�����ڻ��������µĻس�����
			gets_s(p2->students_name);
			printf("ѧ���Ա�");
			//getchar();gets_s����������󲻻����»س�����������ʹ�ö�ʧ����
			gets_s(p2->students_sex);
			printf("ѧ�����䣺");
			scanf_s("%d", &p2->students_age);
			printf("ѧ��ѡ�޿γ̱��:");
			scanf_s("%d", &p2->first.class_id);
			printf("�γ����ƣ�");
			getchar();
			gets_s(p2->first.class_name);
			printf("ѧ�֣�");
			scanf_s("%d", &p2->first.study_grades);
			printf("���Գɼ�:");
			scanf_s("%d", &p2->first.exam_grades);
			printf("ƽʱ�ɼ���");
			scanf_s("%d", &p2->first.pr_grades);
			printf("�ۺϳɼ���");
			scanf_s("%d", &p2->first.all_grades);
			p2->next = NULL;
			printf("�������ɹ���\n");
			printf("�˳�����ϵͳ���Ǽ����������˳�������'quit'�������������\n");
			getchar();
			gets_s(chioce);

		}
		else
		{
			p1 = p2;
			p2 = (struct students *)malloc(sizeof(struct students));
			if (p2 != NULL)
			{
				printf("ѧ���༶:");
				gets_s(p2->students_class);
				printf("ѧ��ѧ�ţ�");
				scanf_s("%d", &p2->students_id);
				printf("ѧ��������");
				getchar();      //ʹ�øú������scanf_s�����ڻ��������µĻس�����
				gets_s(p2->students_name);
				printf("ѧ���Ա�");
				//getchar();gets_s����������󲻻����»س�����������ʹ�ö�ʧ����
				gets_s(p2->students_sex);
				printf("ѧ�����䣺");
				scanf_s("%d", &p2->students_age);
				printf("ѧ��ѡ�޿γ̱��:");
				scanf_s("%d", &p2->first.class_id);
				printf("�γ����ƣ�");
				getchar();
				gets_s(p2->first.class_name);
				printf("ѧ�֣�");
				scanf_s("%d", &p2->first.study_grades);
				printf("���Գɼ�:");
				scanf_s("%d", &p2->first.exam_grades);
				printf("ƽʱ�ɼ���");
				scanf_s("%d", &p2->first.pr_grades);
				printf("�ۺϳɼ���");
				scanf_s("%d", &p2->first.all_grades);
				while (p3!= NULL)   //�ж�Ҫ������ѧ�����������Ƿ����
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
					printf("����Ҫ�����ѧ���Ѿ����ڡ�\n");
					free(p2);//�ͷŵ��ظ��Ŀռ䡣
					p2 = p1;       //����������һ�䣬�ͷź�û�з��أ�ʹ������ѡ�
					printf("�˳�����ϵͳ���Ǽ������ӣ��˳�������'quit'�������������\n");
					getchar();
					gets_s(chioce);
				}
				else
				{
					p1->next = p2;
					p2->next = NULL;
					printf("�������ɹ���\n");
					printf("�˳�����ϵͳ���Ǽ����������˳�������'quit'�������������\n");
					getchar();
					gets_s(chioce);
				}
			}
			else
			{
				printf("�������ش���\n");
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
			p1 = p1->next;//��p1�Ƶ���������һλ
		}
		p2= (struct students *)malloc(sizeof(struct students));
		if (p2 != NULL)//�ж��Ƿ����뵽�ռ�
		{
			printf("ѧ���༶:");
			gets_s(p2->students_class);
			printf("ѧ��ѧ�ţ�");
			scanf_s("%d", &p2->students_id);
			printf("ѧ��������");
			getchar();      //ʹ�øú������scanf_s�����ڻ��������µĻس�����
			gets_s(p2->students_name);
			printf("ѧ���Ա�");
			//getchar();gets_s����������󲻻����»س�����������ʹ�ö�ʧ����
			gets_s(p2->students_sex);
			printf("ѧ�����䣺");
			scanf_s("%d", &p2->students_age);
			printf("ѧ��ѡ�޿γ̱��:");
			scanf_s("%d", &p2->first.class_id);
			printf("�γ����ƣ�");
			getchar();
			gets_s(p2->first.class_name);
			printf("ѧ�֣�");
			scanf_s("%d", &p2->first.study_grades);
			printf("���Գɼ�:");
			scanf_s("%d", &p2->first.exam_grades);
			printf("ƽʱ�ɼ���");
			scanf_s("%d", &p2->first.pr_grades);
			printf("�ۺϳɼ���");
			scanf_s("%d", &p2->first.all_grades);
			while (p3 != NULL)//�ж�Ҫ������ѧ�����������Ƿ����
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
				printf("����Ҫ�����ѧ���Ѿ����ڡ�\n");
				free(p2);//�ͷŵ��ظ��Ŀռ䡣
				printf("�˳�����ϵͳ���Ǽ������ӣ��˳�������'quit'�������������\n");
				getchar();
				gets_s(chioce);
			}
			else
			{
				p1->next = p2;  //��p2�����β��
				p2->next = NULL;//��β���㣻
				printf("���ӳɹ���\n");
				printf("�˳�����ϵͳ���Ǽ������ӣ��˳�������'quit'�������������\n");
				getchar();
				gets_s(chioce);
			}
		}
		else//����
		{
			printf("�������ش���\n");
			printf("�˳�����ϵͳ���Ǽ������ӣ��˳�������'quit'�������������\n");
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
		printf("��ѡ��ʹ��ѧ�Ż���ѧ���������в�ѯ������'name'ʹ���������в�ѯ������'students_id'ʹ��ѧ�Ų�ѯ\n");
		//getchar();   ǰ���ʹ�õ���gets_s�����ڴ˴�ʹ��ʹ���ݶ�ʧ
		gets_s(chioce2);
		if (strcmp(chioce2,"name") == 0)
		{
			char chioce3[3] = " ";
			while (strcmp(chioce3,"q")!=0)
			{
				char name[20] = " ";
				p1 = h;
				printf("������ѧ����������");
				gets_s(name);
				while (p1 != NULL)    //��Ϊ���ܴ���������ѧ�������������������
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
				printf("������ѯ�����˳���ӡ���,�˳������롮q���������������\n");
				gets_s(chioce3);
			}
			for (int j = 0; j < i; ++j)
			{
				if (result[j] == NULL)
				{
					printf("���ѯ��ѧ��������\n");
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
				printf("������ѧ����ѧ�ţ�");
				scanf_s("%d", &id);
				while (p1!=NULL) //��Ϊ��������ͬѧ�ŵģ��ҵ���ֹͣ��
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
				printf("������ѯ�����˳���ӡ���,�˳������롮q���������������\n");
				getchar();     //ǰ�������������ڻ����������˻س�������Ҫ�����
				gets_s(chioce3);
			}
			for (int j = 0; j < i; ++j)
			{
				if (result[j] == NULL)
				{
					printf("���ѯ��ѧ��������\n");
				}
				else
				{
					cout(result[j]);
				}
			}
		}
		else
		{
			printf("����������󣡣���\n");
		}
		
		printf("�˳���ѯϵͳ���Ǽ�����ѯ���˳�������'quit'�������������\n");
		gets_s(chioce);
		
	}
}
void cout(students *x) //�����ʾ����
{
	printf("ѧ���İ༶�ǣ�%s\n", x->students_class);
	printf("ѧ����ѧ���ǣ�%d\n", x->students_id);
	printf("ѧ���������ǣ�%s\n", x->students_name);
	printf("ѧ�����Ա��ǣ�%s\n", x->students_sex);
	printf("ѧ���������ǣ�%d\n", x->students_age);
	printf("ѧ��ѡ�޿γ̱��: %d\n", x->first.class_id);
	printf("�γ����ƣ�%s\n",x->first.class_name);
	printf("ѧ�֣�%d\n", x->first.study_grades);
	printf("���Գɼ�: %d\n",x->first.exam_grades);
	printf("ƽʱ�ɼ���%d\n", x->first.pr_grades);
	printf("�ۺϳɼ���%d\n", x->first.all_grades);
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
		printf("�����������޸ĵ�ѧ����ѧ�ţ�");
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
			printf("����Ҫ�޸ĵ�ѧ�������ڡ�\n");
		}
		else
		{
			printf("����ԭ������Ϣ��\n");
			cout(p1);
			printf("�����������޸ĵ���Ϣ��\n");
			printf("ѧ���༶:");
			getchar();
			gets_s(p2->students_class);
			printf("ѧ��ѧ�ţ�");
			scanf_s("%d", &p2->students_id);
			printf("ѧ������:");
			getchar();
			gets_s(p2->students_name);
			printf("ѧ���Ա�");
			//getchar(); ����ʹ��ʹ���ݶ�ʧ��
			gets_s(p2->students_sex);
			printf("ѧ�����䣺");
			scanf_s("%d", &p2->students_age);
			printf("ѧ��ѡ�޿γ̱��:");
			scanf_s("%d", &p2->first.class_id);
			printf("�γ����ƣ�");
			getchar();
			gets_s(p2->first.class_name);
			printf("ѧ�֣�");
			scanf_s("%d", &p2->first.study_grades);
			printf("���Գɼ�:");
			scanf_s("%d", &p2->first.exam_grades);
			printf("ƽʱ�ɼ���");
			scanf_s("%d", &p2->first.pr_grades);
			printf("�ۺϳɼ���");
			scanf_s("%d", &p2->first.all_grades);
			p2->next = p1->next;
			while (p3 != NULL)//�ж�Ҫ������ѧ�����������Ƿ����
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
				printf("�޸ĳɹ���\n");
			}
			else
			{
				printf("��ѧ���Ѿ����ڣ���ѡ����������");
			}
			
		}
		printf("�Ƿ��˳��޸�ϵͳ���˳������롯quit'������������� ��\n");
		getchar();//�����������˻س�����������÷������´��Ҹ�������ĺ�����
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
		printf("����������Ҫɾ����ѧ����ѧ�ţ�");
		scanf_s("%d", &number);
		while (p2->students_id != number&&p2 != NULL)//��p2������Ҫɾ���Ľڵ㣬p1����p2֮ǰ�Ľڵ㡣
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
			printf("����Ҫɾ����ѧ�������ڡ�\n");
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
			printf("ɾ���ɹ�������\n");
		}
		printf("�Ƿ��˳�ɾ��ϵͳ���˳������롯quit'������������� ��\n");
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