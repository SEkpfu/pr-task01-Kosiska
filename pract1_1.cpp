#include <iostream>
using namespace std;
int main(){
    setlocale(0, "");
    double h, s, p, n;
    cout << "������� ���-�� ������������ �����: ";
    cin >> h ;
    cout << "������� ������ ��������� ������: ";
    cin >> s;
    cout << "������� % ������ ";
    cin >> p;
    n = h * s * (1 + p / 100);
    cout << "����� ������������ ����� ���������� " << n;
    return 0;
}
