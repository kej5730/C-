//전체 구구단
//2단 ~ 9단끼리 출력 1번에 하겠다.

//#include <stdio.h>
//
//int main()
//{
//	int i = 2;
//
//	while (i <= 9) // 2단부터 9단까지 반복
//	{
//		printf("%d단:\n", i);
//		int j = 1;
//		while (j <= 9) //곱하는 수를 1부터 9까지 반복
//		{
//			printf("%d x %d = %d\n", i, j, i * j);
//			j++;
//		}
//		printf("\n"); // 각 단마다 빈 줄 출력
//		i++;
//	}
//	return 0;
//}

// 구구단을 역순 출력

// 9 x 9 = 81
// 9 x 8 = 72

//#include <stdio.h>
//
//int main()
//{
//	int i = 9;
//
//	while (i >= 2)
//	{
//		printf("%d단:\n", i);
//		int j = 9;
//		while (j >= 1)
//		{
//			printf("%d x %d = %d\n", i, j, i * j);
//			j--;
//		}
//		printf("\n");
//		i--;
//	}
//	return 0;
//}

// 문제 높이를 입력받아 높이만크의 삼각형을 출력

// 출력 예
// 높이 : 3
//*
//**
//***

//#include <stdio.h>
//
//int main()
//{
//	int n;
//	printf("높이를 입력하세요. >>> : ");
//	scanf_s("%d", &n);
//
//	int i = 0; //행
//	int j = 0; //열
//	while (i < n)
//	{
//		j = 0;
//		while (j <= i)
//		{
//			printf("*");
//			j++;
//		}
//		printf("\n");
//		i++;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//
//}