#include<stdio.h>
// 소수 찾기 프로그램

int main() {
	// 들어올 숫자
	int number;
	// 소수인지 확인
	int prime_check;// 2~n-1
	// 소수 숫자셀 변수 선언
	int prime_count;// 소수 개수를 세어줄 거야

	prime_count = 0;
	//1 부터 시작해서 만까지 확인
	//for (number = 1; number <= 10000; number++) {
		//// 소수인지 확인할라구 2부터 확인하는 수가 시작 확인수가 숫자보다 작으면 확인수를 증가시켜라
		//for (prime_check = 2; prime_check <number; prime_check++)
		//	// 만약에 확인하는 수를 증가시키다가 현재 숫자를 나눌 수 있는 수가 나오면 그냥 반복을 끝내라
		//	if (number % prime_check == 0) {
		//		break;
		//	}
		////위 과정이 다 지나고 숫자가 걸러지지 않았으면
		//if (prime_check == number)
		//{
		//	// 소수의 수를 세고있는 걸 1 증가시켜라
		//	prime_count++;
		//}


	//}

	for (number = 2; number <= 10000; number++) {
		if (is_prime(number)) {
			prime_count++;
		}
	}
	printf("count = %d\n", prime_count);
	return 0;

}


// 간략하게 함수로 만들고 싶으면?!?!

int is_prime(int number)
{
	int prime_check;

	for (prime_check = 2; prime_check < number; prime_check++)
	{
		if (number % prime_check == 0) {
			return 0;
		}
	}
	// 이거 위치가 if 문 이랑 같은 괄호 닫히는 곳에 있으면 결과값이 이상하게 나옴
	return 1;

}
