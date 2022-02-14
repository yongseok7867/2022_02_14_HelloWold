﻿// #include : 헤더파일을 여기에 포함시키는 기능이다.
#include <iostream>

using namespace std;

// 실행 과정 : 컴파일 -> 빌드 -> 실행
// 컴파일 : 번역작업이다.
//  Ctrl + Shift + B를 이용해서 컴파일 및 빌드를 할 수 있다.

// C++의 시작점은 main함수이다. main함수는 반드시 있어야 한다.
int main()
{
    // C++ 표준 기능의 대부분은 std라는 namespace 안에 존재하고 있다. 이름의 겹치는 것을 방지하기 위해서이다.
    // cout : 콘솔창에 출력해주는 기능이다. 뒤에 있는 ""(큰 따옴표) 안에 있는 문자들을 화면에 출력해준다. 문자 여러개를 사용할 때는 반드시 "" 안에 넣어주고 이런 것을 문자열이라고 한다.
    // endl : 개행기능이다.
    std::cout << "Hello World!" << std::endl;

    cout << "Hello World!" << endl;;
    
    return 0;
}