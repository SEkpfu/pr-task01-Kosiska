#include <iostream>
using namespace std;
template <typename T>

void f(T h1,  T s1, T h2,  T s2){
    double salary1 = h1 * s1;
    double salary2 = h2 * s2;

    cout << "��������� ������ �������� ��� ������� " << (salary1 > salary2?"1":"2") << endl;
    cout << "�����, ������������ ����� ����������� ������, ���������� " << salary1+salary2 << endl;
}


int main(){
    setlocale(0, "");
    double h1, s1, h2, s2;

    cout << "������� ���-�� ������������ ����� ��� ������� ���������: ";
    cin >> h1;
    cout << "������� ������ ��������� ������ ��� ������� ���������: ";
    cin >> s1;

    cout << "������� ���-�� ������������ ����� ��� ������� ���������: ";
    cin >> h2;
    cout << "������� ������ ��������� ������ ��� ������� ���������: ";
    cin >> s2;
    
    f(h1, s1, h2, s2);

    return 0;
}
