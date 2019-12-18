#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void input (int n, int M[]) {
	for (int i = 0;i < n;i++) {
		M[i] = rand() % 50 - 25;
	}
}
void output(int n, int M[]) {
	for (int i = 0; i < n;i++) {
		printf("M[%02d] = %d\n", i, M[i]);
	}
}
void sort(int n, int M[])
{
	int i, j, t;
	for (i = 0; i < n; i++) {

		for (j = 0; j < n; j++) {

			if (M[i] < M[j]) {

				M[i] ^= M[j];
				M[j] ^= M[i];
				M[i] ^= M[j];
			}
		}
	}
	for (i = 0; i < n; i++)
		printf("M[%d]=%d \n",i, M[i]);
}
void sort1(int n, int M[]) {
	int i, j, t;
	for (i = 1; i < n; i++)  {
		for (j = 1; j < n; j++) {
			if (M[i] < M[j]) {
				M[i] ^= M[j];
				M[j] ^= M[i];
				M[i] ^= M[j];
			}
		}
	}
	for (i = 0;i < n;i++) {
		printf("M3[%d]=%d\n", i, M[i]);
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	int M1[20], M2[18], M3[26];
	
	input(20, M1);
	output(20, M1);
	
	printf("\n\n");
	
	input(18, M2);
	output(18, M2);
	
	printf("\n\n");
	
	input(26, M3);
	output(26, M3);
	
	printf("\n\n");
	
	sort(20, M1);
	
	printf("\n\n");
	
	sort(18, M2);
	
	printf("\n\n");
	
	sort1(26, M3);
	
	printf("\n\n");
	return 0;
}