#include <iostream>
using namespace std;


void f(double& h,double& s,double& p, double& salary, double& nalog, double& total){
    salary = h * s * (1 + p / 100);
    nalog = salary * 0.13;
    total = salary - nalog;

}


int main(){
    setlocale(0, "");
    double h, s, p;
    double salary, nalog, total;

    cout << "Ââåäèòå êîë-âî îòðàáîòàííûõ ÷àñîâ: ";
    cin >> h ;
    cout << "Ââåäèòå ñòàâêó ïî÷àñîâîé îïëàòû: ";
    cin >> s;
    cout << "Ââåäèòå % ïðåìèè ";
    cin >> p;
    
    f(h,s,p,salary, nalog, total);
    
    cout << "Îáùàÿ çàðàáîòàííàÿ ñóììà ñîñòàâëÿåò " << salary << endl;
    cout << "Ïîäîõîäíûé íàëîã ñîñòàâëÿåò " << nalog << endl;
    cout << "Ñóììà, ïîëó÷àåìàÿ íà ðóêè, ñîñòàâëÿåò " << total << endl;

    return 0;
}

