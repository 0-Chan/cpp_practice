#include <iostream>

class Date 
{
private:
    int year_;
    int month_;
    int day_;

public:
    void AddDay(int inc);
    void AddMonth(int inc);
    void AddYear(int inc);    
    void ShowDate(void);
    int getTotalDayofMonth(int year_, int month_)
    {
        static int last_day[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

        int total_day = last_day[month_ - 1];

        if (year_ % 4 == 0)
        {
            if (month_ == 2)
            {
                total_day += 1;
            }
        }
        return total_day;
    }
    Date()
    {
        std::cout << "Default 생성자" << std::endl;
        year_ = 2021;
        month_ = 1;
        day_ = 1;
    }

    Date(int year, int month, int day)
    {
        std::cout << "생성자 오버로딩" << std::endl;
        year_ = year;
        month_ = month;
        day_ = day;
    }
};


void Date::AddDay(int inc)
{
    int total_day = getTotalDayofMonth(year_, month_);

    day_ += inc;

    if (day_ + inc < total_day)
    {
        return;
    }
    else
    {
        day_ -= total_day;
        AddMonth(1);
    }
}

void Date::AddMonth(int inc)
{
    month_ += inc;
    if (month_ > 12)
    {
        month_ -= 12;
        AddYear(1);
    }
}

void Date::AddYear(int inc)
{
    year_ += 1;
}

void Date::ShowDate()
{
    std::cout << "----- Date -----" << std::endl
        << year_ << ". "
        << month_ << "."
        << day_ << std::endl << std::endl;
}

int main()
{
//    Date date(2021, 2, 25);       implicit constructor
    Date date = Date();

    date.ShowDate();
    date.AddDay(10);
    date.ShowDate();
}