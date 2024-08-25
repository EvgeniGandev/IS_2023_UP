// UP_WeekFour.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

/*zad 1 Read a number if its negative transform it into possitive counterpart;
void makePositive(int n)
{
    int m = n * -1;
    cout << m;
}

int main()
{
    int n;
    cin >> n;
    if (n > 0)
        cout << n;
    else
        makePositive(n);
}*/

/*zad2 Make a function counting the digits of a number
void countDigits(int n)
{
    int cnt = 0;
    while (n != 0)
    {
        n = n / 10;
        cnt++;
    }
    cout << cnt;
}

int main()
{
    int n;
    cin >> n;
    countDigits(n);
}
*/

double getSide(double xA, double yA, double xB, double yB)
{
    double x = xB - xA;
    double y = yB - yA;
    double side = sqrt(x * x + y * y);
    return side;
}

int main()
{
    double xA, yA, xB, yB, xZ, yZ;
    cin >> xA >> yA >> xB >> yB >> xZ >> yZ;
    double sideAB = getSide(xA, yA, xB, yB);
    double sideBC = getSide(xB, yB, xZ, yZ);
    double sideCA = getSide(xZ, yZ, xA, yA);
    double Area = sideAB + sideBC + sideCA;
    cout << Area;
}

