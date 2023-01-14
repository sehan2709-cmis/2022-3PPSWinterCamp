#include<stdio.h>
int dp[1000001];

#define MIN(a,b) (a<b ? a : b) 

int main() {
	int N, coin = 0;
	int N1=0, N2=0, N5=0;
	scanf("%d", &N);
	dp[1] = 1; dp[2] = 1; dp[3] = 2; dp[4] = 2; dp[5] = 1; dp[6] = 2; dp[7] = 1;
	if (N % 7 == 0) printf("%d", N / 7);
	else {
		for (int i = 8; i <= N; i++) {
			if (i % 7 == 0) {
				dp[i] = i / 7;
			}
			else {
				dp[i] = MIN(dp[i - 5], MIN(dp[i - 2], dp[i - 1])) + 1;
			}
		}
		printf("%d", dp[N]);
	}
}