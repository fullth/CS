#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int *a = malloc(sizeof(int));
	printf("%d\n", a);
	free(a);
	a = malloc(sizeof(int));
	printf("%d\n", a);
	free(a);
	system("pause");
	return 0;
}

/*
 * 1) C언어에서는 malloc() 함수를 이용해 원하는 만큼의 메모리 공간을 확보할 수 있습니다.
 * 2) malloc() 함수는 메모리 할당에 성공하면 주소를 반환하고, 그렇지 않으면 NULL을 반환합니다.
 * 3) malloc() 함수는 <stdlib.h> 라이브러리에 정의되어 있습니다.
*/
