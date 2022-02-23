// Struct distance from A to B.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include <cmath>
#include <fstream>
#include <string>
using namespace std;

struct Point
{
    int x = 0;
    int y = 0;
    void inputPoint() {
        cout << "enter x, y" << endl;
        cin >> x >> y;
        ofstream fileOut;
        string pas = "C:/Users/Саша/Desktop/point.txt";
        fileOut.open(pas);
        if (!fileOut.is_open())
        {
            cout << "File dont open" << endl;
        }
        else {
            cout << "File open" << endl;
            fileOut << x << " " << y << endl;
        }
        fileOut.close();

        ifstream fileIn;
        fileIn.open(pas);
        int a, b;
        fileIn >> a >> b;
        fileOut.close();
    }
};
double distance(int x, int y, int x1, int y1) {
    double Dist;
    Dist = sqrt(pow((x1 - x), 2) + pow((y1 - y), 2));
    ofstream fileOut;
    string pas = "C:/Users/Саша/Desktop/result.txt";
    fileOut.open(pas);
    if (!fileOut.is_open())
    {
        cout << "File dont open" << endl;
    }
    else {
        cout << "File open" << endl;
        fileOut << Dist;
    }
    fileOut.close();
    return Dist;   
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Point A;
    A.inputPoint();
    Point B;
    B.inputPoint();
    cout << distance(A.x, A.y, B.x, B.y);
}
