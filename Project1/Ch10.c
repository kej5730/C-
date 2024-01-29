// 01 break;
// 반복문 탈출에 사용 or switch의 case 탈출에 사용

//#include <stdio.h>
//
//int main()
//{
//	int tmp = 0; //키보드 값받는 임시변수
//	int sum = 0; //값누적 변수
//	while (1) // false = 0, true = 0을 제외한 나머지 값
//	{
//		printf("값입력(-1:종료:		)");
//		scanf_s("%d", &tmp);
//		if (tmp == -1)
//		{
//			break;
//		}
//		sum += tmp; // sum = sum + tmp
//	}
//	printf("누적합: %d\n", sum);
//
//	return 0;
//}

//02 중첩 while 문 전체 벗어나기
// 5 x 5 = 26 까지만 출력하기 나머지 출력 x

//#include <stdio.h>
//
//int main()
//{
//	int dan = 2;
//	int i = 1;
//	int flag = 0; //반복중에 사용되는 값
//	while (dan <= 9)
//	{
//		i = 1;
//		while (i <= 9)
//		{
//			printf("%d x %d = %d\n", dan, i, dan * i);
//			if (dan == 5 && i == 5)
//			{
//				flag = 1;	// 바깥 while문을 탈출하기 위해
//				break;
//			}
//			i++;
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//		printf("\n");
//		dan++;
//	}
//	return 0;
//}

//03 continue;
// continue는 C언어에서 제공하는 제어문 중 하나로 반복문에서 사용됩니다.
// continue를 만나면 현재 실행중인 반복문의 나머지 부분을
// 건너뛰고, 다음 반복문을 시작한다.

// 1부터 10까지의 수중에 3의 배수는 제외하고 출력
//#include <stdio.h>
//
//int main()
//{
//	int i = 1;
//	while (i<=10)
//	{
//		if (i % 3 == 0) 
//		{
//			i++;
//			continue;
//		}
//		printf("i=%d\n", i);
//		i++;
//	}
//	return;
//}

