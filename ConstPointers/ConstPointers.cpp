// ConstPointers.cpp : Defines the entry point for the console application.
//



int main()
{
	int daysInMonth = 30;
	int daysInLunarMonth = 28;
	int* const pDaysInMonth = &daysInMonth;


	*pDaysInMonth = 31; // This is OK data pointet by this pointer can be changed
	
	//pDaysInMonth = &daysInLunarMonth;  // this is NOT OK I can not change the address

	//////////////////////////////////////////////////////////////////////////////////

	int hours_in_day = 24;
	int months_in_year = 12;

	const int* pToInt = &hours_in_day;
	pToInt = &months_in_year; // this is ok
	//*pToInt = 25; // this is not ok can not change data being pointet to
	//int* newPointer = pToInt; // not ok you can not assign const to non const!

	//////////////////////////////////////////////////////////////////////////////////

	int hours_in_day1 = 24;
	int days_in_month = 30;

	const int* const pHoursInDay = &hours_in_day1;
	//*pHoursInDay = 25; // not ok, can not change data pointed to
	//pHoursInDay = &daysInMonth; // not OK can not change address

    return 0;
}

