#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char* a = malloc(100);
	memset(a, 'A', 100);
	for (int i = 0; i < 100; i++) {
		printf("%c", a[i]);
	}
	system("pause");
	return 0;
}	

/*
 * 1) 일괄적인 범위의 메모리를 모두 특정한 값으로 설정하기 위해서는 memset()을 사용합니다.
 * 2) memset(포인터, 값, 크기);
 * 3) 한 바이트 씩 값을 저장하므로 문자열 배열의 처리 방식과 흡사합니다.
 * 4) 따라서 memset() 함수는 <string.h> 라이브러리에 선언되어 있습니다.
 * 5) 기존에는 단순히 반복문을 이용해 원소를 처리했으나 memset()은 더 빠르게 동작합니다.
 */
