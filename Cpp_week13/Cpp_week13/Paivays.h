#pragma once


class Date {
private:
	int day, month, year;
public:

	Date(); //Default
	Date(int, int, int); //Parametric constructor
	

	void setDay(int m_day);
	void setMonth(int m_month);
	void setYear(int m_year);

	int getDay() const;
	int getMonth() const;
	int getYear() const;

	void printDate() const;
	void askDate();
	void addDate();
	
};