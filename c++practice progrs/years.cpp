#include<iostream>
using namespace std;
int main(){
    int days,year,week;
    cout<<"enter number of days: ";
    cin>>days;
    year=days/365;
    days=days%365;
    week=days/7;
    days=days%7;
    cout<<"num of years: "<<year<<" num of weeks: "<<week<<" num of days: "<<days;

}