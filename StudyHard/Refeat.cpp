#include <stdio.h>

int main() {
    // while ��: �ݺ� ���ǿ� ���� �ݺ� ���ΰ� �����Ǵ� ���� (��ȯ��)
    // ���� 1
    // while (���ǽ�) ��ɹ�;
    // ���� 2
    // while (���ǽ�) { 
    //     ��ɹ�1; 
    //     ��ɹ�2;
    //     ...
    // }

    // ���� �ڵ� (�ּ� ó���� ����)
    // int number, count = 0;
    // printf("input : "); // �Է°��� �ޱ�
    // scanf_s("%d", &number);
    //
    // while (number != -999) {
    //    count++;
    //    printf("input : ");
    //    scanf_s("%d", &number);
    // }
    // printf("Count = %d\n", count);
    // return 0;

    // do-while ��: while ���� ���������� ���ǽ��� �ݺ��� �ڿ� �־
    // �ݺ��� ���� ������ �� �ݺ� ���� ���θ� ����
    // ���� 1
    // do ��ɹ�;
    // while (���ǽ�);

    // ���� 2
    // do { 
    //     ��ɹ�1;
    //     ��ɹ�2;
    //     ...
    // } while (���ǽ�);

    // ���� �ڵ� (�ּ� ó���� ����)
    // int score;
    // do {
    //    printf("input a score : ");
    //    scanf_s(" %d", &score);
    // } while (score < 0 || score > 100);
    // printf("Correct, valid score !!\n");
    // return 0;

    // for ��: �ݺ� Ƚ���� ������ ��� ���
    // ���� 1
    // for (�ʱⰪ ����; ���ǽ�; ������) ��ɹ�;

    // ���� 2
    // for (�ʱⰪ ����; ���ǽ�; ������) {
    //     ��ɹ�1;
    //     ��ɹ�2;
    //     ...
    // }

    // ���� ���� ����
    // for (;;) {
    //     ��ɹ�;
    // }

    // 1���� 1000������ ���� ���ϴ� ���� (�ּ� ó���� ����)
    // int number, sum = 0;
    // for (number = 1; number <= 1000; number++) {
    //     sum += number;
    // }
    // printf("sum = %d\n", sum);
    // return 0;

    //// ������ ������ �ڵ�
    //int i, num;
    //int max = 0;
    //for (i = 1; i <= 10; i++) {
    //    printf("���� ���ڸ� �Է��� �ּ��� : ");
    //    scanf_s("%d", &num);
    //    if (num > max)
    //        max = num;
    //}
    //printf("max = %d\n", max);
    //return 0;

    /*int n;

    for (n = 5; n < 10; n--) {
        if (n == 0)
            break;
        printf("n=%d\n", n);

    }
    printf("escape from for statement!\n");
    return 0;*/

    int n;
    for (n = 0; n < 10; n++) {
        if (n == 5)
            continue;
        printf("n=%d\n", n);
    }
    printf("escape from for statement!!\n");
    return 0;
}
//010-2010-5910
