#include <iostream>

using namespace std;

enum Students{
    jack,
    dash,
    violet,
    num_student
};

int main()
{
    int myarray[] {1,2,3,4,5};

    int students_scores[num_student];

    cout << students_scores[jack] << endl;
    cout << students_scores[dash] << endl;
    cout << students_scores[violet] << endl;

    return 0;
}