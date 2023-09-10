#pragma once
#define ULL unsigned long long
#define UINT unsigned int
#define INF 0x3f3f3f3f
#define inf 0xc0c0c0c0
#define pb push_back
#define LL long long
#define prUU pair<ULL,ULL>

#define MAXN_NUM 0xffff//�ʼǱ�������������֧�Ź�����㣬�����и���
#define LIMIT_SU_NUM
#define MAX_ULL 0xffffffffffffffff
#define MAXN_OUTPUT 0xfffff
#define MAXN_FACT 0x10000//����������Ŀ������������ܴ�
#define MAXN_INPUT

void introduce();
void menu();

void su_num(ULL* su);
bool fact_num(UINT x, ULL* su);
void fact_high_precision(int* x, ULL* su);
ULL fast_power_num_pos(ULL base, ULL degree);
LL fast_power_num(LL base, ULL degree);
int fast_power_high_precision(int* base, int* degree, int* x);
