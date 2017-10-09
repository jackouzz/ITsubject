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
int main() {
    /*
    cin >> x >> y >> z ;
    i = x/3;
    x = i;
    y = y+i;
    z = z+i;
    i = y/3;
    x = x+i;
    y = i;
    z = z+i;
    i = z/3;
    x = x+i;
    y = y+i;
    z = i;
    cout << x << endl << y << endl << z << endl;
    //cin >> a >> b>> c;
    //cout << a+b+c << endl;
    //cout << "This program counts three numbers. \n";
    //cout << "Input frist number:";
    //cin >> FristNumber;
    //cout << "Input Second number:";
    //cin >> SecondNumber;
    //cout << "Input Third number:";
    //cin >> ThirdNumber;
    //cout << "The sum is " << FristNumber+SecondNumber+ThirdNumber << endl ;
    */
    //CalCircle();
    //CalThreeNumbers();
    //int a,b,c,d,n;
    //cin >> a>>b>>c>>d;
    //n=(a+b+c+d)/4;
    //cout <<n;
    int a;
    double b;
    cin >> a;
    b=sqrt(a);
    cout <<setiosflags(ios::fixed);
    cout <<setprecision(2) << b <<endl;
    return 0;
    
}

void CalCircle() {
    /*double AreaOfCircle,PerimeterOfCircle,Radius;
    cout << "This program calculate circle's area and perimeter." << endl << "Please input Radius:";
    cin >> Radius ;
    AreaOfCircle = Radius * Radius * 3.14;
    PerimeterOfCircle = 2 * Radius * 3.14;
    cout << "S = " << AreaOfCircle << endl << "D = " << PerimeterOfCircle << endl ;
    return;*/
    double s,c,r;
    cin >> r ;
    s = r * r * 3.14;
    c = 2 * r * 3.14;
    cout << "c=" << c << " "<< "s=" << s << endl;
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
    return;
    //2017.10.02.15:31
}
