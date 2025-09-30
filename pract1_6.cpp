#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
template <typename T>
void f(T h1,  T s1, T h2,  T s2, string fam1, string fam2){
    double salary1, salary2, nalog1, nalog2, total1, total2;
    
    salary1 = h1 * s1;
    salary2 = h2 * s2;

    nalog1 = salary1 * 0.13;
    total1 = salary1 - nalog1;

    nalog2 = salary2 * 0.13;
    total2 = salary2 - nalog1;

    cout << "������� ���, ��� ������� �� ���� ������ 1000 ��� - ";
    if (total1 < 1000) {
        cout << fam1 << endl;
    }
    if (total2 < 1000) {
        cout << fam2 << endl;
    }
    cout << "��������� � ������� ����� 50 ������ (������ � ��������� ����� �������):" << endl;
    if (nalog1 > 50) {
        cout << fam1[0] << "-" << fam1[fam1.length() - 1] << endl;
    }
    if (nalog2 > 50) {
        cout << fam2[0] << "-" << fam2[fam2.length() - 1] << endl;
    }
    
}


int main(){
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double h1, s1, h2, s2;
    string fam1, fam2;
    cout << "������� ������� ������� ���������: ";
    cin >> fam1;
    cout << "������� ���-�� ������������ ����� ��� ������� ���������: ";
    cin >> h1;
    cout << "������� ������ ��������� ������ ��� ������� ���������: ";
    cin >> s1;
    cin.ignore();
    
    cout << "������� ������� ������� ���������: ";
    cin >> fam2;
    cout << "������� ���-�� ������������ ����� ��� ������� ���������: ";
    cin >> h2;
    cout << "������� ������ ��������� ������ ��� ������� ���������: ";
    cin >> s2;

    cout << fam1 << h1 << s1 << endl;
    f(h1, s1, h2, s2 , fam1, fam2);

    return 0;
}
