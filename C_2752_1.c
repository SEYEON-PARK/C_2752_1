/*
동규는 세수를 하다가 정렬이 하고싶어졌다.
숫자 세 개를 생각한 뒤에, 이를 오름차순으로 정렬하고 싶어 졌다.
숫자 세 개가 주어졌을 때, 가장 작은 수, 그 다음 수, 가장 큰 수를 출력하는 프로그램을 작성하시오.

숫자 세 개가 주어진다. 이 숫자는 1보다 크거나 같고, 1,000,000보다 작거나 같다. 이 숫자는 모두 다르다.

제일 작은 수, 그 다음 수, 제일 큰 수를 차례대로 출력한다.
*/

#include <stdio.h>

int main(void)
{
    int a, b, c; // 변수 선언
    scanf("%d %d %d", &a, &b, &c); // 사용자로부터 세 개의 정수 입력받기
    for (int i = 0; i < 3; i++) // i가 0부터 3이 되기 전까지 1씩 증가하며 반복
    {
        if(a<b) // 만약, a가 b보다 작다면
        {
            if(a<c) // 만약, a가 c보다 작다면
            {
                printf("%d ", a); // a 출력하기
                a=1000001; // a에 1000001 대입하기
            }
            else // a가 c보다 작지 않다면
            {
                printf("%d ", c); // c 출력하기
                c=1000001; // c에 1000001 대입하기
            }
        }
        else // a가 b보다 작지 않다면
        {
            if(b<c) // b가 c보다 작다면
            {
                printf("%d ", b); // b 출력하기
                b=1000001; // b에 1000001 대입하기
            }
            else // b가 c보다 작지 않다면
            {
                printf("%d ", c); // c 출력하기
                c=1000001; // c에 1000001 대입하기
            }
        }
    }
    return 0;
}
