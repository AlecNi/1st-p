#include<iostream>
#include<vector>
#define MAX_MENU 10
#define MAX_LEN 50
using namespace std;
char version[10] = { "0.1" };

struct way {
	int no;
	char name[100];
};

vector<way> m{
	{0,"��������"},
	{1,"�ӷ�"},
	{2,"����"},
	{3,"�ֽ�����"},
	{4,"�߾��ӷ�"},
	{5,"�߾�����"},
	{6,"��������"},
	{7,"�߾�������"},
	{8,"��һԪһ�η������"},
};

void menu()
{
	system("cls");

	cout << "process for fresh fish | version:" << ' ' << version << endl;

	for (int i = 0; i < MAX_LEN; ++i)
		cout << '*';
	cout << endl;

	for (int i = 0; i < m.size(); ++i)
		cout << m[i].no << "." << m[i].name << endl;

	cout << endl << "��������ѡ���ܣ��������ֲ�������ʱ������������ּ��ָ����룬��Q/q�˳�����,��C/c����" << endl;

	for (int i = 0; i < MAX_LEN; ++i)
		cout << '*';
	cout << endl;

	return;
}

struct way_big {
	int no;
	char name[200];
};

vector<way_big> intro{
	{1,"sort:���������Զ�ѡ������ʽ������ʹ�õ�ַ��ָ�롢������������a��bʱ���������Ϊ[a,b)������"}
};

void introduce()
{
	system("cls");

	for (int i = 0; i < MAX_LEN; ++i)
		cout << '-';
	cout << endl;

	for (int i = 0; i < intro.size(); ++i)
		cout << intro[i].no << "." << intro[i].name << endl;

	cout << endl << "��������˳�" << endl;

	for (int i = 0; i < MAX_LEN; ++i)
		cout << '-';
	cout << endl;

	return;
}
