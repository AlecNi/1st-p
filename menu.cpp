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
	{0,"函数介绍"},
	{1,"加法"},
	{2,"减法"},
	{3,"分解素数"},
	{4,"高精加法"},
	{5,"高精减法"},
	{6,"快速求幂"},
	{7,"高精度求幂"},
	{8,"简单一元一次方程求解"},
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

	cout << endl << "输入数字选择功能，无需区分操作类型时可用任意非数字键分隔输入，按Q/q退出程序,按C/c清屏" << endl;

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
	{1,"sort:快速排序，自动选择排序方式，可以使用地址、指针、迭代器，输入a、b时排序的区间为[a,b)，返回"}
};

void introduce()
{
	system("cls");

	for (int i = 0; i < MAX_LEN; ++i)
		cout << '-';
	cout << endl;

	for (int i = 0; i < intro.size(); ++i)
		cout << intro[i].no << "." << intro[i].name << endl;

	cout << endl << "按任意键退出" << endl;

	for (int i = 0; i < MAX_LEN; ++i)
		cout << '-';
	cout << endl;

	return;
}
