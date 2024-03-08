#include <stdio.h>
int main()
{
    int i, *p; // 정수형 변수 i와 정수를 가리키는 포인터 변수 p를 생성합니다.

    i = 10; // i를 10으로 초기화 합니다.

    printf("value of i = %d\n", i); // i의 값 출력
    printf("address of i = %p\n", &i); // i의 주소 출력
    printf("value of p = %p\n", p); // p의 값 출력
    printf("address of p = %p\n", &p); // p의 주소 출력

    p = &i; // i의 주소값으로 p를 초기화 합니다.

    printf("\n\n----- after p = &i ------------\n\n"); // 전 후 구분선

    printf("value of p = %p\n", p); // p의 값(p가 가리키는 변수의 주소 값) 출력
    printf("address of p = %p\n", &p); // p의 주소 값(p가 가리키는 변수가 아닌 p 자체) 출력
    printf("dereferencing *p = %d\n", *p); // p가 가리키는 변수의 값을 출력(역참조)

    return 0; // 프로그램을 종료합니다.
}