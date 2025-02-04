#include <iostream> 

using namespace std; 

template<typename T> // 'T'는 자료형이 됨
class CMyData
{
public:
    CMyData(T param) : m_Data(param) {}
    T GetData() const {return m_Data;}

    // 형식에 대한 변환자 제공
    operator T() {return m_Data;}
    void SetData(T param) {m_Data = param;}

private:
    // T 형식의 멤버 변수 선언
    T m_Data;
};

int main()
{
    CMyData<int> a(5);
    cout << a << endl;

    CMyData<double> b(123.45);
    cout << b << endl;

    // 문자열을 저장하기 위해 메모리를 동적으로 할당하지는 않음
    CMyData<char*> c("Hello");
    cout << c << endl;

    return 0;
}