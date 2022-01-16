#include<stdio.h>


char A[1000002];		// 단어
int num = 1;			// 띄어쓰기 개수를 통한 단어 개수 추출


int main(void) {


	fgets(A, sizeof(A), stdin); 						// 문자열 입력 받기

	if (A[0] == '\n') {				//\n 입력 시 0 출력
		printf("%d", num - 1);
		return 0;
	}



	for (int i = 0; i < 1000002; i++) {					// 문자열 띄어쓰기 개수 판정




		if (A[i] == ' ') num++;							// 공백이 있을 시 num ++


		else if (A[i] == '\0') {						// 문자열의 끝에 도달했을 때

			if (A[i - 2] == ' ') num--;					// 만약 문자열의 마지막이 공백으로 끝나면 num --

			break;										// 종료하기



		}


	

		




	}

	


	if (A[0] == ' ') num--;								// 문자열 시작이 공백일 시 num --



	if (A[0] == ' ' && A[1] == '\0') {					// 그냥 공백만 입력될 시 0 출력
		printf("%d",num-2);
		return 0;
	}
	


	printf("%d", num);								// 결과값 출력
}