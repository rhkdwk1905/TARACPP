#include <iostream>
#include <vector>

using namespace std;

int main(){
    /*start*/
    std::vector<int> v{1,2,3};
    
    for(auto &e : v) cout << e << " ";
    cout << endl;

    cout << v.size() << " " << v.capacity() << endl;
    v.resize(10);
    cout << v.size() << " " << v.capacity() << endl;
    //size와 capacity 모두 10으로 증가
    v.resize(2);
    cout << v.size() << " " << v.capacity() << endl;
    //capacity는 유지하고 size만 2로 줄임
    //v[2], v.at(2)로는 접근 불가능하지만
    //포인터로 접근하면 3이 남아있음
    //결론은 메모리 크기는 유지한 채 사이즈만 줄임
   
    v.reserve(100); //capacity만 늘이는 함수
    cout << v.size() << " " << v.capacity() << endl;
    //capacity가 넉넉해야 new-delete가 동작하지 않으므로 빠르다
    

    return 0;
}

