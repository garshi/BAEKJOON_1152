#include<stdio.h>


char A[1000001];		// 단어
int num = 1;			// 단어의 개수


int main(void) {


	fgets(A, sizeof(A), stdin); 						// 문자열 입력 받기


	for (int i = 0; i < 1000000; i++) {




		if (A[i] == ' ') num++;


		else if (A[i] == '\0') {

			if (A[i - 2] == ' ') num--;

			break;



		}


	

		




	}

	if (A[0] == ' ') num--;


	


	printf("%d", num);
}