#include<iostream>
#include<conio.h>
#include"head.h"
#define MAXN_SU 0xffff
using namespace std;
static ULL su[MAXN_SU] = { 0 };
static int fact[MAXN_FACT] = { 0 };

int main()
{
	bool t1 = 1;
	char c;

	su_num(su);
	menu();

	while (t1) {
		c = _getch();
		switch (c) {
			case '0':
				introduce();
				_getch();
				menu();
				break;
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case 'c':
			case 'C':
				menu();
				break;
			case 'Q':
			case 'q':
				t1 = 0;
				break;
			default:
				break;
		}
	}


	return 0;
}