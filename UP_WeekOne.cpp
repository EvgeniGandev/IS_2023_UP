
#include <iostream>
using namespace std;

/* zad 1: Enter a number. Print 1 if the number is even and 0 if it is odd
int main()
{
	int a;
	cin >> a;
	int b = a % 2;
	cout << b;
}
*/

/* zad 2 Enter a 3 - digit number. Print the reversed number plus one.
int main()
{
	int n;
	cin >> n;

	int ed = n % 10;
	n = n / 10;
	int des = n % 10;
	n = n / 10;
	int st = n + 1;

	int ans = ed * 100 + des * 10 + st;

	cout << ans;
}
*/

/*zad 3 Enter a letter. Print 1 if it is an English vowel and 0 if it is not.
int main()
{
	char a;
	cin >> a;
	
	bool isVowel = a == 'a' || a == 'e' || a == 'o' || a == 'u' || a == 'i' || a == 'A' || a == 'E' || a == 'O' || a == 'U' || a == 'I';

	cout << isVowel;

}*/

/*zad 4 Enter a number. Print 1 if the number is a valid school grade, and 0 if it is not.
int main()
{
	int a;
	cin >> a;
	bool valid = a == 2 || a == 3 || a == 4 || a == 5 || a == 6;

	cout << valid;
}
*/

/* zad 5 Enter a number. Print the number without the last digit.
int main()
{
	int n;
	cin >> n;
	n = n / 10;
	cout << n;
}
*/

/*zad 6 Write a program that inputs two numbers - a and b and outputs (a + b)^4 - (a-b)^2
int main()
{
	int a;
	int b;

	cin >> a;
	cin >> b;
	
	int exprPlus = a + b;
	int exprMinus = a - b;
	int exprDoublePlus = exprPlus * exprPlus;
	
	int ans = exprDoublePlus * exprDoublePlus - exprMinus * exprMinus;
	
	cout << ans;
}*/


/* zad 7 An integer n - n BGN is entered. 
Display on the console how they can be distributed by banknote so that we have a minimum number of banknotes.
We assume that we have 1 and 2 BGN banknotes.

int main()
{
	int levs;
	cin >> levs;

	int hundreds = levs / 100;
	cout << hundreds << "x100 lv ";
	levs = levs % 100;

	int fifty = levs / 50;
	cout << fifty << "x50 lv ";
	levs = levs % 50;

	int twnty = levs / 20;
	cout << twnty << "x20 lv ";
	levs = levs % 20;
	
	int ten = levs / 10;
	cout << ten << "x10 lv ";
	levs = levs % 10;

	int five = levs / 5;
	cout << five << "x5 lv ";
	levs = levs % 5;

	int two = levs / 2;
	cout << two << "x2 lv ";
	levs = levs % 2;

	cout << levs << "x1 lv";
}
*/


/*zad 8 Enter two numbers. Print the bigger one
int main()
{
	int a;
	int b;
	cin >> a;
	cin >> b;
	bool result = a > b;

	cout << a * result + b * !result;
}
*/