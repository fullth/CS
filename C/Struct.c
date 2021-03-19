#include <stdio.h>

struct Vendor {
	char name[10];
	char id[10];
};

// 하나의 구조체 변수만 사용하는 경우 정의와 동시에 선언을 할 수도 있습니다.
// 이 경우 변수는 전역 변수로 사용됩니다
struct Sectors {
	char name[10];
	char id[10];
} sector;

// typedef 키워드를 이용하면 임의의 자료형을 만들 수 있으므로 선언이 더 짧아집니다.
typedef struct Tariff {
	char division[10];
} Tariff;

// 익명 구조체의 개념이 등장하여, 구조체 이름 부분을 비워 놓아도 됩니다.
typedef struct {
	char division[10];
} Region;

int main(void) {
	struct Vendor vendor;
	strcpy(vendor.name, "name");
	strcpy(vendor.id, "id");
	printf("%s \n", vendor.id);
	printf("%s \n", vendor.name);

	// 구조체의 변수를 한 번에 초기화하기 위해서는 중괄호에 차례대로 변수의 값을 넣습니다.
	// 정의와 동시에 선언하는 경우에도 마찬가지로 사용 가능합니다.
	struct Sectors sector = {"sector1", "sector2"};

	// 구조체가 포인터 변수로 사용되는 경우 내부 변수에 접근할 때 화살표(->)를 사용합니다.
	Region *region = malloc(sizeof(Region));
	strcpy(region->division, "seoul");
}
