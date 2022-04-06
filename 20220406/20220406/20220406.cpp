// 20220406.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;
int main()
{
    //변수
/*
10 이름 testnum  2) 크기 4 byte 3) 값 2.8  4) 메모리주소 ?

*/
    /*float testNum = 2.8F;
    double testNum1 = 2.8;

    cout << sizeof(testNum) << endl;
    cout << testNum1 << endl;
    cout << testNum << endl;
    cout << &testNum << endl;
    std::cout << "Hello World!\n";
   
    int customer_count = 100;
    int customer_count = 200;

    int_num = 5; */
   // int my age = 10;
    //int my agE = 10;
    //int 2customer-count = 300;
    //
    //int my age = 10;
    /* 변수가 필요함  
    데이터타입 변수명; 문자열;이름  kc  ku 주석처리*/
    string your_name;
    cout << "상대방 이름을 입력하세요" << endl;
    cin >> your_name;

    string my_name;
    cout << "본인의 이름을 입력하세요" << endl;
    cin >> my_name;

    //cout << my name << endl;
    int your_age;
    cout << "상대방 나이를 입력하세요" << endl;
    cin >> your_age; 
  
    cout << my_name << " :" << your_name << "님"<< your_age << "살 생일을 축하합니다";
} 
//실습  1. 상대방 이름과 내 이름, 상대방 나이를 입력 받아서 / 
//생일축하메시지를 출력하는
//프로그램을 만들어보자.

/*
예시 
상대방 이름을 입력하세요,
_이재혁

본인의 이름을 입력하세요.
_이민우

상대방 나이를 입력하세요,
_25

김진황 : 이재혁님 24살 생일을 츅하합니다.  변수를 써야된다.
변수명 이름 규칙 
1.c++에서 사용하는 키워드들은 변수명으로 사용할 수 없다.
int float= 3; (X)
2. 알파벳, 숫자, _로만 구성할 수 있다.
int num = 3;
1) 숫자로 변수명을 시작할 수는 없다.
4. 변수명 사이에 띄어쓰기를 넣을 수 없다.
5. 전부 소문자로 작성한다. 
6. 축약어를 쓰지 않는다.
형가리안 표기법        
카멜 표기법

*/


