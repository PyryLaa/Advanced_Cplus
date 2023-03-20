#pragma once


class Date {
private:
	int day, month, year;
public:

	Date(); //Default
	Date(int, int, int); //Parametric constructor
	~Date(); //Destructor

	void setDay(int m_day);
	void setMonth(int m_month);
	void setYear(int m_year);

	int getDay();
	int getMonth();
	int getYear();

	void printDate();
	void askDate();
	void addDate();
	
};