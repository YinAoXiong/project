#include<stdio.h>
#include<string.h>
#include"����.h"
int main()
{
	
	struct students *head;
	head = NULL;
	
	
	while (true)
	{
		char chioce[10] = " ";
		printf("��ӭ����ѧ����Ϣ����ϵͳ\n");
		printf("���������´�����ʵ����Ҫʵ�ֵĹ��ܣ�\n");
		printf("����'creat'��ʾ����������ѧ����Ϣ\t����'insert'��ʾ��ԭ���ı�������ѧ��\n");
		printf("����'select'��ʾ��ѯѧ����Ϣ\t\t����'change'��ʾ����ѧ������Ϣ��\n");
		printf("����'delect'��ʾɾ��ѧ����Ϣ\t\t����'showall'�鿴����ѧ������Ϣ��\n");
		printf("����'wquit'���潫ѧ����Ϣ���浽ָ��λ�ò��˳���\n");
		gets_s(chioce);
		if (strcmp(chioce,"creat")==0)
		{
			if (head == NULL)
			{
				printf("������ѧ����Ϣ����������ɺ�����'quit'��ʾ�˳��������������\n");
				head = students_creat(head);
			}
			else
				printf("�Ծ��ɹ������б������ظ����������ѧ����ѡ��insert���������±������˳��˱�\n");
			
			
		}
		else if(strcmp(chioce,"insert")==0)
		{
			printf("��������Ҫ���ӵ�ѧ������Ϣ,��������ɺ�����'quit'��ʾ�˳��������������\n");
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
			printf("������������밴���������ʾ�����������\n");
		}
	}

}
