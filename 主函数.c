#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>	/*I/O����*/
#include<stdlib.h>	/*����˵��*/
#include<string.h>	/*�ַ�������*/

#define LEN 15		/* ѧ�ź���������ַ���,ʵ�������*/
#define N 50		/* ���ѧ������,ʵ�������*/

int k = 1, n = 0, m = 0;/* n����ǰ��¼��ѧ������*/

//��������
void seek();
void insert();
void display();
void save();
void menu();

//�ṹ�屣��ѧ����Ϣ
struct student{
	char StudentId[LEN+1];
	char StudentName[LEN+1];
	int StudentAge;
	char StudentSex;
	float score[3];
}stu[N];

//������
int main()
{
	while (k)
	{
		menu();
	}
	system("pause");
	return 0;
}
