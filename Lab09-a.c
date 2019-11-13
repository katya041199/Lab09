//Задание-09 на 3
#include <math.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
int main() {
    int six, ch1, ch2, ch3, ch4, ch5, ch6, pol1, pol2;
    cout << "Введите 6-ти значное число: \n";
    cin >> six;

    ch1 = (six % 1000000)/100000;
    ch2 = (six % 100000)/10000;
    ch3 = (six % 10000)/1000;
    ch4 = (six % 1000)/100;
    ch5 = (six % 100)/10;
    ch6 = six % 10;
    pol1 = ch1+ch2+ch3;
    pol2 = ch4+ch5+ch6;

    cout << ch1<<ch2<<ch3 << "\n";
    cout << ch4<<ch5<<ch6 << "\n";
    if (pol1==pol2) {
        cout << "Ваш билет счастливый!\n";
    } else {
        cout << "Ваш билет не счастливый!\n";
    }
    
}