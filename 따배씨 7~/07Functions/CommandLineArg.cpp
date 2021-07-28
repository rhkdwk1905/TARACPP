#include <iostream>

using namespace std;

int main(int argc, char *argv[]){ //개수, 내용
    /*start*/
    for(int i=0;i<argc;i++){
        cout << argv[i] << endl;
    }
    //argv[0]에는 파일 위치
    //argv[1]부터 함께 넣은 인자가 들어간다
    //참고로 인자의 자료형은 코드 내에서 바꿔줘야한다
    //boost.program_option 라이브러리를 사용하면 편하다

    return 0;
}

