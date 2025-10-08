#include <iostream>
#include <Windows.h>
using namespace std;


double f(double h,double s){
    double salary;
    salary = h * s;
    return salary;
}


int main(){
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double sum = 0;
    for (i=0; <5; ){
        double h,s;
        cout << format("Введите кол-во отработанных часов и почасовую ставку {} работника ", i+1)
        cin >> h, s;
        sum += f(h, s);
        cout >> format("Рабочий номер {} заработал {}", i+1, f(h,s));
    }
    
    cout << "зредняя зп в бригаде: " << sum/5;

    return 0;
}

