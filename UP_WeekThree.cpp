// UP_WeekThree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

/*zad 1 lcm
int main()
{
    int a, b;
    int swap;
    cin >> a >> b;
    int begA = a;
    int begB = b;

    while (b != 0)
    {
        swap = a;
        a = b;
        b = swap % b;
    }

    cout << (begA / a) * begB;
}
*/

/*zad 2 gcd
int main()
{
    int a, b;
    int swap;
    cin >> a >> b;
    while (b != 0)
    {
        swap = a;
        a = b;
        b = swap % b;
    }
    cout << a;
}
*/

/*zad 3 check if n is prime
int main()
{
    int n;
    cin >> n;
    bool isPrime = true;

    if (n == 0 || n == 1)
        isPrime = false;

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime = true)
        cout << "prime";
    else
        cout << "not prime";
}
*/

/*zad 4 Write a program that accepts a natural number and prints its prime factorization, sorted from biggest to lowest.
int main()
{
    int n;
    int ans = 0;
    int cnt = 0;
    int reversedAns = 0;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 2; i <= n; i++) {
        while (n % i == 0)
        {
            cnt++;
            ans = ans * 10;
            ans += i;
            n /= i;
        }
    }

    for (int j = 0; j < cnt; j++)
    {
        reversedAns = ans % 10;
        ans = ans / 10;
        cout << reversedAns << " ";
        reversedAns = 0;
    }
}
*/

int main()
{
    int n;
    cin >> n;
    int mostCommonDigit = -1;
    int mostCommonDigitOccurences = 0;

    for (int current = 0; current <= 9; current++)
    {
        int copyN = n;
        int currentDigitOccurences = 0;
        while (copyN != 0)
        {
            int lastDigit = copyN % 10;
            if (lastDigit == current)
                currentDigitOccurences++;
            copyN /= 10; 
        }

        if (currentDigitOccurences > mostCommonDigitOccurences)
        {
            mostCommonDigit = current;
            mostCommonDigitOccurences = currentDigitOccurences;
        }
    }

    cout << mostCommonDigit;
}