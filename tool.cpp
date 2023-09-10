#include<iostream>
#include"head.h"
using namespace std;

//#include<iomanip>
#include<cmath>

//#define NUM 10
//ULL su[MAXN_NUM] = { 0 };

void su_num(ULL* su)
{
	int i = 0, pos = 0, limit = 2;
	bool t;
	ULL x = 3;
	su[0] = 2;

	while (pos < MAXN_NUM && x < MAX_ULL) {
		t = 1;
		for (int i = 0; t && i < pos; ++i)
			if (!(x % su[i]))
				t = 0;
			else if (su[i] > limit)
				break;
		if (t)
			su[++pos] = x;
		++x;
		++x;
		limit = (int)(sqrt(x)) + 1;
	}

	/*for (int i = 0; i <= pos; ++i) {
		if (!(i % NUM) && i)
			cout << endl;
		cout << setw(100 / NUM) << su[i];
	}*/
	//cout << su[MAXN_NUM - 1];

	return;
}


ULL fact[MAXN_FACT] = { 0 };
ULL pos = 0;
int ans_high_precision[MAXN_OUTPUT] = { 0 };

/*
* 返回0表示成功分解
* 返回1表示为质数
*/
bool fact_num(ULL& x, ULL* su)
{
	for (int i = 0; i < pos; ++i)
		fact[i] = 0;

	pos = 0;

	for (int i = 0; x > 1 && i < MAXN_FACT - 1; ++i, ++pos)
		while (!(x % su[i])) {
			x /= su[i];
			++fact[i];
		}

	if (x > 1)
		return 1;

	return 0;
}

void fact_high_precision(int* x, ULL* su)
{


	return;
}

ULL fast_power_num_pos(ULL& base, ULL degree)
{
	ULL tmp = base, ans = 1;

	if (degree * log(tmp) >= 64 * log(2))
		return 0;

	while (degree) {
		if (degree & 1)
			ans *= tmp;
		tmp *= tmp;
		degree >>= 1;
	}

	return ans;
}

LL fast_power_num(LL& base, ULL degree)
{
	LL t = base >> 63, tmp = base * t, ans = 1;

	if (degree * log(tmp) > 63 * log(2))
		return 0;

	while (degree) {
		if (degree & 1)
			ans *= tmp;
		tmp *= tmp;
		degree >>= 1;
	}

	return t * ans;
}

int input_base[MAXN_INPUT] = { 0 };
int input_degree[MAXN_INPUT] = { 0 };

int fast_power_high_precision(int* base, int* degree, int* x)
{
	int t = 1;

	return t;
}