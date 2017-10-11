//
//  main.cpp
//  ITsubject
//
//  Created by 寇子越 on 2017/9/25.
//  Copyright © 2017年 寇子越. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
void CalThreeNumbers();
void CalCircle();
void CalSqare();

int main() {
    //CalCircle();
    //CalThreeNumbers();
    CalSqare();
    
    return 0;
}

void CalSqare() {
    int a;
    double b;
    cout << "This program calculate number's sqare." << endl <<"Please input a number:";
    cin >> a;
    b = sqrt(a);
    cout << "The number's sqare is ";
    cout << setiosflags(ios::fixed);    //保留小数点后2位
    cout << setprecision(2) << b << endl;
    
}

void CalCircle() {
    double AreaOfCircle,PerimeterOfCircle,Radius;
    cout << "This program calculate circle's area and perimeter." << endl << "Please input Radius:";
    cin >> Radius ;
    AreaOfCircle = Radius * Radius * 3.14;
    PerimeterOfCircle = 2 * Radius * 3.14;
    cout << "S = " << AreaOfCircle << endl << "D = " << PerimeterOfCircle << endl ;
    
}

void CalThreeNumbers() {
    int FristNumber,SecondNumber,ThirdNumber;
    cout << "This program counts three numbers. \n";
    cout << "Input Frist number:";
    cin >> FristNumber;
    cout << "Input Second number:";
    cin >> SecondNumber;
    cout << "Input Third number:";
    cin >> ThirdNumber;
    cout << "The sum is " << FristNumber+SecondNumber+ThirdNumber << endl ;
    //2017.10.02.15:31
}
