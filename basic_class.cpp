/*#include <iostream>

class Rectangle {
    public:
    void print();
    void set_width(int);
    void set_length(int);
    private:
    int width, length;
};

int main()
{
    Rectangle reccy;
    reccy.set_width(5);
    reccy.set_length(4);
    reccy.print();
    return 0;
}

void Rectangle::print()
{
    for (int w=0; w<width;++w)
    {
        for (int l=0; l<length;++l)
        {
        std::cout << '*';
    std::cout << '\n';
        }
    
}
void Rectangle

//////////
class Date{
    public:
    Date(int y, int m, int d)
    {
        year =y; month =m; day =d;
    }
    void print() const;
    private:
    int year, month, day;
};
int main()
{
    Date (2016,11,1);
    Date.print();
    
    return 0;
}

void Date::print() const
{
    std::cout << year << '-' << month << '-'<< day;
}
}*/
/*#include <iostream>
using namespace std;
class Date {
public:
	Date(int y, int m, int d)
		{
			year = y; month = m; day = d;
			}
		void print() const;
		private:
		int year, day, month;
};
int main()
{
	Date day(2016, 11, 1);
	day.print();

	return 0;
	}
void Date::print() const
{
	int week = (day + 2 * month + 3 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7;
	switch (week)
	{
	case 0: cout << "Monday"; break;
	case 1: cout << "Tuesday"; break;
	case 2: cout << "Wednesday"; break;
	case 3: cout << "Thursday"; break;
	case 4: cout << "Friday"; break;
	case 5: cout << "Saturday"; break;
	case 6: cout << "Sunday"; break;
	}
	std::cout << ", ";
 	switch (month)
		{
		case '1': cout << "January"; break;
		case '2': cout << "Feburay"; break;
		case '3': cout << "March"; break;
		case '4': cout << "April"; break;
		case '5': cout << "May"; break;
		case '6': cout << "June"; break;
		case '7': cout << "July"; break;
		case '8': cout << "August"; break;
		case '9': cout << "September"; break;
		case 10: cout << "October";  break;
		case 11: cout << "Novemeber"; break;
		default: cout << "December;";
		}
std::cout << " " << day << ", " << year << '\n';
}*/
