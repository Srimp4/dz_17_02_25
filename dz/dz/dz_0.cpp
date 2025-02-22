#include <iostream>
using namespace std;
#include <cstdlib>
int main()
{
	int a, b, c, d, e, f;
	cout << "enter a 6 digit whole number, ONE DIGIT AT A TIME like this: 1 2 3 1 2 3\n";
	cin >> a >> b >> c >> d >> e >> f;
	if ((a + b + c) == (d + f + e))
	{
		cout << "Lucky!\n";
	}
	else if (a > 9 || b > 9 || c > 9 || d > 9 || e > 9 || f > 9)
	{
		cout << "error\n";
	}
	else if ((a + b + c) != (d + f + e))
	{
		cout << "unlucky\n";
	}
	else
	{
		cout << "error\n";
	}
	//task 1 done
	int swaws, awswa, sawas, wasaw;
	cout << "enter a 4 digit whole number, ONE DIGIT AT A TIME like this: 1 2 3 4\n";
	cin >> swaws >> awswa >> sawas >> wasaw;
	cout << swaws << awswa << sawas << wasaw << " flipped!\n";
	if (swaws > 9 || awswa > 9 || sawas > 9 || wasaw > 9)
	{
		cout << "error\n";
	}
	//task 2 done
	int one, two, three, four, five, six, seven;
	cout << "enter seven whole numbers\n";
	cin >> one >> two >> three >> four >> five >> six >> seven;
	if (one > two && one > three && one > four && one > five && one > six && one > seven)
	{
		cout << one;
	}
	if (two > one && two > three && two > four && two > five && two > six && two > seven)
	{
		cout << two;
	}
	if (three > two && three > one && three > four && three > five && three > six && three > seven)
	{
		cout << three;
	}
	if (four > two && four > three && four > one && four > five && four > six && four > seven)
	{
		cout << four;
	}
	if (five > two && five > three && five > four && five > one && five > six && five > seven)
	{
		cout << five;
	}
	if (six > two && six > three && six > four && six > five && six > one && six > seven)
	{
		cout << six;
	}
	if (seven > two && seven > three && seven > four && seven > five && seven > six && seven > one)
	{
		cout << seven;
	}
	//task 3 done
}