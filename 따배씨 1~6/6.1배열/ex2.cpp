#include <iostream>

using namespace std;

void doSomeTHing(int students_scores[20]){ //포인터로 처리
    //그러나 이 함수의 students_scores는 포인터로 넘어옴
    //따라서 어짜피 포인터이므로 []안의 숫자는 의미 없다
    
    cout << &students_scores << endl;//배열주소가 담긴 포인터
    cout << students_scores << endl;//실제 배열의 주소
    cout << &students_scores[0] << endl;//실제 배열의 주소
    cout << students_scores[0] << endl;
    cout << students_scores[1] << endl;
    cout << students_scores[2] << endl;

    cout << sizeof(students_scores) << endl;//4
}

int main(int argc, const char** argv) {
    const int num_students = 20;

    int students_scores[num_students] = {1,2,3,4,5};
    //메인의 students_scores는 배열이 맞음

    cout << students_scores << endl;
    cout << &students_scores << endl;//둘 다 주소로 처리
    cout << &students_scores[0] << endl;
    cout << &students_scores[1] << endl;
    cout << &students_scores[2] << endl;
    cout << &students_scores[3] << endl;

    cout << sizeof(students_scores) << endl;//80

    doSomeTHing(students_scores);

    return 0;
}