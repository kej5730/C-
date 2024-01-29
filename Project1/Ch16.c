// 포인터와 배열의 관계

//1. 배열의 이름은 포인터 변수 역할을 하며 배열이 시작되는 메모리으 ㅣ주소를 확인할 수 있다.
//2. 그러나 배열의 이름은 값을 저장할 수는 없다.

//#include <stdio.h>
//
//int main()
//{
//	int myarr[3] = { 1,2,3 };
//
//	printf("%d\n", myarr[0]);
//	printf("%d\n", myarr[1]);
//	printf("%d\n", myarr[2]);
//}

// 인덱스 번호를 통해 각 요소에 순차적으로 접근이 가능한 이유는 매열의 가 요소가 메모리 공간에 나란히 놓여있기 때문.

//#include <stdio.h>
//
//int main()
//{
//	int myarr[3] = { 1,2,3 };
//
//	printf("배열 각 요소의 주소 확인\n");
//	printf("배열의 이름 : %p\n", myarr);
//	printf("첫 번째 요소 %p\n", &myarr[0]);
//	printf("두 번째 요소 %p\n", &myarr[1]);
//	printf("세 번째 요소 %p\n", &myarr[2]);
//}

// 실행 결과를 보면 배열의 각 요소의 주소값은 첫 번째 요소부터 4바이트씩 증가한걸 알 수 있다.

// 배열의 이름은 그 자체로 포인터 변수의 역할을 하며, 배열이 시작하는 메모리의 주소를 확인할 수 있다.
// 배열의 이름은 변수화 달리 값의 저장이 불가능한 상수(Constant)형태의 포인터이다.

//#include <stdio.h>
//
//int main()
//{
//	//참조란 : 메모리의 번지를 가지고 활용한다.
//	//원시타입이란 예) 밑에 있는 int num = 3; 변수 자체에다 값을 넣는다.
//	int arr[1] = { 3 };
//	printf("%p\n", arr);
//	int num = 3;
//	printf("%p\n", num);
//}

// 포인터를 배열처럼 사용하는법

//#include <stdio.h>
//
//int main()
//{
//	int a[] = { 10,20,30,40,50 }; //알아서 배열 5개가 만들어짐.
//	int* p;
//	p = &a[0];
//	///이 경우에 a는 배열의 이름이며 배열의 첫 번째 원소의 주소를 나타낸다. 따라서 p = a는 포인터 p에 배열 a의 첫 번째 원소의 주소를 나타낸다.
//	//p = &a;
//	//이 경우에 &a는 배열 전체의 주소를 나타낸다. p가 배열 전체를 가리키게 되어 배열 전체에 대한 연산을 수행 가능하게 한다.
//
//	printf("a[0] = %d a[1] = %d a[2] = %d\n", a[0], a[1], a[2]);
//	printf("p[0] = %d p[1] = %d p[2] = %d\n", p[0], p[1], p[2]);
//
//	//포인터 p를 통해 배열의 요소를 변경
//	p[0] = 60;
//	p[1] = 70;
//	p[2] = 80;
//
//	printf("a[0] = %d a[1] = %d a[2] = %d\n", a[0], a[1], a[2]);
//	printf("p[0] = %d p[1] = %d p[2] = %d\n", p[0], p[1], p[2]);
//
//}