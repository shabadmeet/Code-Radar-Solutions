#include <stdio.h> 
void printPyramid(int N) {for (int i = 1; i <= N; i++) {for (int j = 1; j <= N - i; j++) {printf(" ");}for (int j = 1; j <= i; j++) {printf("%d ", j);}printf("\n");}}int main() {int N;scanf("%d", &N);printPyramid(N);return 0;}
