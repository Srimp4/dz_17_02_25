#include <iostream>
#include <string>
using namespace std;
bool is_leap_year(int y)
{
	return y % 400 == 0 || (y % 4 == 0 && y % 100 != 0);
}
int days_in_month(int m, int y)
{
	if (m == 4 || m == 6 || m == 9 || m == 11)
	{
		return 30;
	}
	else if (m == 2)
	{
		return is_leap_year(y) ? 29 : 28;
	}
	else
	{
		return(31);
	}
}
int days_Between_dates(string date)
{
	int year = stoi(date.substr(0, 4));
	int month = stoi(date.substr(5, 2));
	int day = stoi(date.substr(8, 2));
	int result = day;
	for (int yy = 1971; yy < year; yy++)
	{
		result += is_leap_year(yy) ? 366 : 365;
	}
	for (int mm = 1; mm < month; mm++)
	{
		result += days_in_month(month, year);
	}
	return result;
}
//yes i did ctrlc+ctrlv this code i'm too stupid to do it myself
int swaws(int arr[],int size)
{
	int median_or_whatever_tf_its_called;
	for (int i; i < size; i++)
	{
		median_or_whatever_tf_its_called = median_or_whatever_tf_its_called + arr[i];
	}
	median_or_whatever_tf_its_called = median_or_whatever_tf_its_called / size;
	return (median_or_whatever_tf_its_called);
}
void minmaxing(int arr[], int size)
{
	int smoll;
	int none;
	int big;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			big++;
		}
		else if (arr[i] == 0)
		{
			none++;
		}
		else
		{
			smoll++;
		}
	}
	cout << smoll << none << big;
}
int main()
{
	//sry i'm late i think i've burnt out
	cout << "Дата Формат -> YYYY-MM-DD\n";
	cout << "\nДни между 2022/01/31 и 2022/01/01 = " << abs(days_Between_dates("2022/01/31") - days_Between_dates("2022/01/01")) << "\n";
	//task 1 done?
	int const size = 10;
	int arr[size]{1,2,3,4,5,6,7,8,9,10};
	swaws(arr[size], size);//WHAT THE FUCK IS YOUR PROBLEM?!
	//i do not know how to fix it
	minmaxing(arr[size], size);//WHAT THE FUCK IS YOUR PROBLEM?!
	//how the fuck do i fix that? i never had this problem and google isn't helping
	//done?
	return 0;
}