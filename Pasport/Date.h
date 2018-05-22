#pragma once
#include "Libery.h"

class Date
{
	int day;
	int month;
	int year;
public:
	Date() {
		int day = 1;
		int month = 1;
		int year = 2000;
	}
	Date(int day, int month, int year)
	{
		this->day = day;
		this->month = month;
		this->year = year;
	}
	void SetDay(int day)
	{
		this->day = day;
	}
	void SetMonth(int month)
	{
		this->month = month;
	}
	void SetYear(int year)
	{
		this->year = year;
	}
	const int GetDay() const
	{
		return day;
	}
	const int GetMonth() const
	{
		return month;
	}
	const int GetYear() const
	{
		return year;
	}
};