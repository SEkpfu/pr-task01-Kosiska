#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

double summa(double h,double s,double p){ //����� ����� � ������ ������
    double n;
    n = h * s * (1 + p / 100);
    return n;
}

double nalog(double sum){ // ����� �������
    double s = sum * 0.13;
    return s;
}

double totl(double sum, double nal){ // �� �� ���� ���������
    double t = sum - nal;
    return t;
}

int main(){
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    int size;
    
    cout << "������� ���-�� ����������: ";
    cin >> size ;

    double* salary = new double[size]; //������ � ��
    double* nalogi = new double[size]; //������ � ��������
    double hours, rate, prem, nmin, maxs = 0, nmax, k = 0, sum = 0, min = 1000000000;
    string numb = "";

    for (int i = 0; i < size; i++){
        cout << "��� " << i+1 << " ���������:" << endl;
        cout << "���-�� �����: ";
        cin >> hours;
        cout << "������: ";
        cin >> rate;
        cout << "% ������: ";
        cin >> prem;

        double s = summa(hours,rate,prem);
        nalogi[i] = nalog(s);
        salary[i] = totl(s, nalog(s));
    }
    

    for (int i = 0; i < size; i++){

        if (salary[i] < min){ // ����� ��������� � ��� ��
            nmin = i+1;
            min = salary[i];}

        if (salary[i] > maxs){// ����� � ����� �� ��������� � ���� ��
            nmax = i+1;
            maxs = salary[i];} 

        if (salary[i] > 50000){// ���-�� � ������ � ��>50000
        k ++;
        string n = to_string(i+1) + " ";
        numb += n;}
        sum += nalogi[i];
    }

    cout << "����� ���������, ����������� ������ ����: " <<nmin << endl;
    cout << "������������ �� ������� � ����� ����������� �� ���������: " << maxs << " " << nmax << endl;
    cout << "���������� ����������, ���������� �� ���� ����� 50000 ���: "<< k << " � �� ������: " << numb << endl;
    cout << "����� ����� ������, ����������� ���� ��������: "<< sum;


    return 0;
}