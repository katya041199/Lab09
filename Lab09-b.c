//Задание-09 на 4
#include <math.h>
#include <iostream>
#include <stdlib.h>

int main() {
    int  four, chis1, chis2, chis3, chis4;
     
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