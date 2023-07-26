#include <stdio.h>
#include "main.h"

/**
 * convert_day - converts day of month to day of year,
 * taking leap year into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: day of year
 */

int convert_day(int month, int day, int year)
{
int days_per_month[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		if (month > 2)
		day++;
	}
	return (days_per_month[month - 1] + day);
}

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	int day_of_year = convert_day(month, day);

	/**
	 * leap year can be divided
	 * by 100 & 400 or by 4 evenly
	 */
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		if (month >= 2 && day >= 60)
		{
			day_of_year++;
		}

		printf("Day of the year: %d\n", day_of_year);
		printf("Remaining days: %d\n", 366 - day_of_year);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 365 - day);
		}
	}
}
