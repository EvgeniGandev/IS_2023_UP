// UP_WeekTwo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

/*zad 1 Enter a number. Print the corresponding day of the week
int main()
{
    int n;
    cin >> n;
    switch (n)
    {
    case 1: cout << "Monday"; break;
    case 2: cout << "tuesday"; break;
    case 3: cout << "Wednesday"; break;
    case 4: cout << "Thursday"; break;
    case 5: cout << "Friday"; break;
    case 6: cout << "Saturday"; break;
    case 7: cout << "Sunday"; break;
    default: cout << "incorect input"; break;
    }
}
*/


/*zad2 Enter a number and print if its below 100, between 100 and 200 or above 200
int main()
{
    int n;
    cin >> n;

    if (n < 100)
        cout << "Less than 100";
    else if (100 < n && n < 200)
        cout << "Between 100 and 200";
    else if(n > 200)
        cout << "Above 200";
}
*/

/*zad3 Enter the speed of a vehicle. If its below 10 print 'slow'.
If its between 10 and 50, print 'avarage'.
If its between 50 and 150, print 'fast'.
If its above 150, print 'ultra fast'.

int main()
{
    double speed;
    cin >> speed;
    if (speed <= 10)
        cout << "slow";
    else if (speed > 10 && speed <= 50)
        cout << "avarage";
    else if (speed > 50 && speed <= 150)
        cout << "fast";
    else if (speed > 150)
        cout << "ultra fast";
}
*/

/*zad 4 Enter a simbol representing a shape.
S - square, R - rectangle, C - circle, T - triangle.
After which find the area of the shape.

int main()
{
    char figure;
    cin >> figure;

    switch (figure)
    {
    case 's': double side; cin >> side; cout << side * side; break;
    case 'r': double sideA; double sideB; cin >> sideA >> sideB; cout << sideA * sideB; break;
    case 'c': double r; cin >> r; cout << 3.14 * (r * r); break;
    case 't': double height; double width; cin >> height >> width; cout << (height * width)/2; break;
    }
}
*/

/*zad 5 Enter the hours and minutes of a day(from 00:00 to 23:59) and print the time 15 minutes later.
int main()
{
    int hours;
    int minutes;
    cin >> hours >> minutes;

    if (minutes >= 45)
    {
        hours++;
        minutes = (minutes - 60) + 15;
    }
    
    if (hours <= 9)
    {
        if (minutes < 10)
        {
            cout << '0' << hours << ":" << minutes<<'0';
        }
        else cout << '0' << hours << ":" << minutes;
    }

    if (hours > 23)
    {
        if (minutes < 10)
        {
            hours = hours - 24;
            cout << '0' << hours << ":" << minutes<<'0';
        }
        else
        {
            hours = hours - 24;
            cout << '0' << hours << ":" << minutes;
        }
    }
}
*/

/* zad 6 
We will say that a series of numbers is a triple if each number in it is both greater than or equal to its two neighbors, 
or simultaneously less than or equal to them.
Write a program that inputs from the standard 5 a number of integers.
Output "yes" to standard output if the numbers entered are triple, or "no" otherwise.

int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    if (b >= a && b >= c && c <= d && d >= e || b <= a && b <= c && c >= d && d >= e)
        cout << "yes";
    else
        cout << "no";
}
*/

/*zad 7 Write a program that, given a radius r and a two-dimensional point (x, y), 
checks whether the point is inside/outside or on the contour of a circle with center (0,0).
int main()
{
    int x, y;
    int r;
    cin >> r >> x >> y;

    int formula = (x * x + y * y);

    if (formula < r * r)
    {
        cout << "in the circle";
    }
    else if (formula == r * r)
    {
        cout << "on the circle";
    }
    else
        cout << "out of the circle";
}
*/