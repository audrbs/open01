#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
    
    // 변수 지정
    char name1[10], name2[10], name3[10];
    int age1, age2, age3;
    float height1, height2, height3;

    printf("1번째 사람의 이름, 나이, 키를 입력하세요: ");
    scanf("%s %d %f",&name1, &age1, &height1);

    printf("2번째 사람의 이름, 나이, 키를 입력하세요: ");
    scanf("%s %d %f",&name2, &age2, &height2);

    printf("3번째 사람의 이름, 나이, 키를 입력하세요: ");
    scanf("%s %d %f",&name3, &age3, &height3);

    // 평균 나이와 평균 키 계산
    float avg_age = (age1 + age2 + age3) / 3.0;
    float avg_height = (height1 + height2 + height3) / 3.0;

    // 평균 나이와 평균 키 출력
    printf("평균 나이: %.2f\n", avg_age);
    printf("평균 키: %.2f\n", avg_height);

    // 평균 나이보다 많은 사람 출력
    printf("평균 나이보다 많은 사람: ");
    if (age1 > avg_age) {
        printf("%s ", name1);
    }
    if (age2 > avg_age) {
        printf("%s ", name2);
    }
    if (age3 > avg_age) {
        printf("%s ", name3);
    }
    printf("\n");

    // 평균 키보다 큰 사람 출력
    printf("평균 키보다 큰 사람: ");
    if (height1 > avg_height) {
        printf("%s ", name1);
    }
    if (height2 > avg_height) {
        printf("%s ", name2);
    }
    if (height3 > avg_height) {
        printf("%s ", name3);
    }
    printf("\n");

    return 0;
}
