#include<stdio.h>


char A[1000001];		// �ܾ�
int num = 1;			// �ܾ��� ����


int main(void) {


	fgets(A, sizeof(A), stdin); 						// ���ڿ� �Է� �ޱ�


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