#include <iostream>
using namespace std;

void vvod(double& h,double& s){
    cout << "������� ���� � ������: ";
    cin >> h >> s;
   
}

void f(double& h, double& s, double& salary){
    salary = h*s;
}

int main(){
    setlocale(0, "");
    double h1, h2, s1, s2, salary1, salary2;

    cout << "��� 1 ���������:" << endl;
    vvod(h1, s1);
    f(h1, s1, salary1);

    cout << "��� 2 ���������:" << endl;
    vvod(h2, s2);
    f(h2, s2, salary2);

    cout << "��������� ������ �������� ��� ������� " << (salary1 > salary2?"1":"2") << endl;
    cout << "�����, ������������ ����� ����������� ������, ���������� " << salary1+salary2 << endl;

    return 0;

}