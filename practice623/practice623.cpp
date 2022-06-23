#include <iostream>

using namespace std;

// 포인터 마무리

// 포인터 vs 배열 

int main()
{
    // 주소를 담는 바구니
    // 진퉁은 저 ~ 멀리 어딘가에 있음
    // p는 단지 그곳으로 워프 하는 포탈
    int* p;

    // 진짜배기! 원조 데이터 
    // 닭장 처럼 데이터의 묶음 (엄청 많고 거대함)
    int arr[10] = {1,2,3,4,5,6,7,8};

    // 그런데도 상당히 많은 사람들이 [배열 = 포인터]라 착각하는 경향이 있음!

    // - [배열의 이름]은 배열의 시작 주소값을 가리기틑 type* 포인터로 변환가능
    p = arr;

    // type 1차원 배열과 type*형 포인터는 완전히 호환이 된다
    cout << p[0] << endl;
    cout << arr[0] << endl;
    cout << p[5] << endl;
    cout << arr[5] << endl;

    cout << *p << endl;
    cout << *arr << endl;
    cout << *(p + 3) << endl;
    cout << *(arr + 3) << endl;

    // 2차원 배열 vs 다중 포인터

    // [1][2][3][4]
    int arr2[2][2] = { {1,2}, {3,4} };

    // 주소2[int] << 4바이트
    // 주소1[주소]
    // pp[주소]
    

    // type name[개수]

    // [1][2]
    // [주소]
    int(*p2)[2] = arr2;

    cout << (*p2)[0] << endl;
    cout << (*p2)[1] << endl;

    cout << (*(p2 + 1))[0] << endl;
    cout << (*(p2 + 1))[1] << endl;

    cout << p2[0][0] << endl;
    cout << p2[0][1] << endl;
    cout << p2[1][0] << endl;
    cout << p2[1][1] << endl;
}

