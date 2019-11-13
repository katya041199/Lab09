#include <math.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
int main() {
    int six, ch1, ch2, ch3, ch4, ch5, ch6, pol1, pol2, four, chis1, chis2, chis3, chis4;
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
    
    
    cout << "Введите 4-х значное число: \n";
    cin >> four;
    
    chis1 = (four % 10000)/1000;
    chis2 = (four % 1000)/100;
    chis3 = (four % 100)/10;
    chis4 = four % 10;
    
    if (chis1==chis4 && chis2==chis3) {
        cout << "Это палиндром!\n";
    } else {
        cout << "Это число не является палиндромом!\n";
    }  
}