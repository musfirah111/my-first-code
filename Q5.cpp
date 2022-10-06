// finding date of birth from given age in days,months and years. and any fixed date

#include <iostream>

using namespace std;

int main()

{ 
    int b_year, b_month, b_date ,age_in_years, age_in_months, age_in_days, current_month_days;
    unsigned int set_date = 2;    // fixed date
    unsigned int set_month = 10;  // fixed month
    unsigned int set_year = 2022; // fixed year

    cout<<"enter your age in days based on set date.\n";  // user age in days till fixed date.
    cin>> age_in_days;
    cout<<"enter your age in months based on set month.\n";
    cin>> age_in_months;
    cout<<"enter your age in years based on set year.\n";
    cin>> age_in_years;
    cout<< "enter current month days.\n";
    cin>> current_month_days;

    b_date = (set_date > age_in_days)? (set_date = set_date) : (set_date < age_in_days) ? (((current_month_days == 30)? (set_date=(set_date + 31)) : (set_date=(set_date + 30))) && (set_month = (set_month-1))) : ( set_date = (set_date + 1)) ; 
    b_month = (set_month > age_in_months)? ((set_month = set_month) && (set_year = set_year)): (set_month < age_in_months) ? (( set_month = (set_month + 12)) && (set_year = (set_year-1))) : ((set_month = (set_month + 12)) && (set_year = (set_year - 1))) ;
    
    b_date = (set_date-age_in_days);
    b_month = (set_month-age_in_months);
    b_year = (set_year - age_in_years);
    
    cout<< "Your date of birth is:\t"<< b_date << "-" << b_month <<"-" << b_year;

    return 0;

}    