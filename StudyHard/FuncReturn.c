#include<stdio.h>
// �Ҽ� ã�� ���α׷�

int main() {
	// ���� ����
	int number;
	// �Ҽ����� Ȯ��
	int prime_check;// 2~n-1
	// �Ҽ� ���ڼ� ���� ����
	int prime_count;// �Ҽ� ������ ������ �ž�

	prime_count = 0;
	//1 ���� �����ؼ� ������ Ȯ��
	//for (number = 1; number <= 10000; number++) {
		//// �Ҽ����� Ȯ���Ҷ� 2���� Ȯ���ϴ� ���� ���� Ȯ�μ��� ���ں��� ������ Ȯ�μ��� �������Ѷ�
		//for (prime_check = 2; prime_check <number; prime_check++)
		//	// ���࿡ Ȯ���ϴ� ���� ������Ű�ٰ� ���� ���ڸ� ���� �� �ִ� ���� ������ �׳� �ݺ��� ������
		//	if (number % prime_check == 0) {
		//		break;
		//	}
		////�� ������ �� ������ ���ڰ� �ɷ����� �ʾ�����
		//if (prime_check == number)
		//{
		//	// �Ҽ��� ���� �����ִ� �� 1 �������Ѷ�
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


// �����ϰ� �Լ��� ����� ������?!?!

int is_prime(int number)
{
	int prime_check;

	for (prime_check = 2; prime_check < number; prime_check++)
	{
		if (number % prime_check == 0) {
			return 0;
		}
	}
	// �̰� ��ġ�� if �� �̶� ���� ��ȣ ������ ���� ������ ������� �̻��ϰ� ����
	return 1;

}
