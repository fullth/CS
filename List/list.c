//배열 기반의 리스트
#include <stdio.h> 
#define INF 10000

int arr[INF];
int count = 0;

void addBack(int data) {
	arr[count] = data;
	count++;
}

void addFirst(int data) {
	for (int i = count; i >= 1; i--) {
		arr[i] = arr[i - 1];
	}
	arr[0] = data;
	count++;
}

void show() {
	for (int i = 0; i < count; i++) {
		printf("%d ", arr[i]);
	}
}

void removeAt(int index) {
	for (int i = index; i < count - 1; i++) {
		arr[i] = arr[i + 1];
	}
	count--;
}

int main(void) {
	addBack(1);
	addBack(2);
	addBack(3);
	addFirst(4);
	addFirst(5);
	removeAt(3);
	show();
	system("pause");
	return 0;
}

/*
 * 1) 배열로 만들었으므로 특정한 위치의 원소에 즉시 접근할 수 있다는 장점이 있습니다.
 * 2) 데이터가 들어갈 공간을 미리 메모리에 할당해야 한다는 단점이 있습니다.
 * 3) 원하는 위치로의 삽입이나 삭제가 비효율적입니다.
 */
