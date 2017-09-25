//
//  main.cpp
//  ITsubject
//
//  Created by 寇子越 on 2017/9/25.
//  Copyright © 2017年 寇子越. All rights reserved.
//

#include <iostream>
using namespace std;
int FristNumber,SecondNumber,ThirdNumber;
int a,b,c;
int x,y,z,i;
int main() {
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
    
    return 0;
    
}
