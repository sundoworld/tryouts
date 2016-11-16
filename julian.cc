#include<iostream>
using namespace std;
int main()
{
    int julianDate = 0;
    int year, month, date;
    const int daysInMonths[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    cout << "..........Sri Sankara.........\nEnter  year : ";
    cin >> year;
    cout << "Enter month : ";
    cin >> month;
    cout << "Enter  date : ";
    cin >> date;
    for (int index=1; index<month; index++)
        julianDate += daysInMonths[index-1];
    julianDate = julianDate + date;
    if (!(year % 4))
       julianDate++;
    cout << "Julian Date is " << julianDate << endl;
    return 0;
}
