#include <iostream>

class Date 
{
private:
    int year_;
    int month_;
    int day_;

public:
    void SetDate(int year, int month, int day);
    void AddDay(int inc);
    void AddMonth(int inc);
    void AddYear(int inc);

    void ShowDate(void);
};

void Date::SetDate(int year, int month, int day)
{
    year_ = year;
    month_ = month;
    day_ = day;
}

void Date::AddDay(int inc)
{
    day_ += inc;

    if (month_ < 7)
    {
        if (month_ % 2 == 1)
        {
            if (day_ > 31)
            {
                day_ -= 31;
                AddMonth(1);
            }
        }
        else if (month_ % 2 == 0)
        {
            if (month_ == 2)
            {
                if (day_ > 28)
                {
                    day_ -= 28;
                    AddMonth(1);
                }
            }
            else if (day_ > 30)
            {
                day_ -= 30;
                AddMonth(1);
            }
        }
        else if (month_ > 7)
        {
            if (month_ % 2 == 0)
            {
                if (day_ > 31)
                {
                    day_ -= 31;
                    AddMonth(1);
                }
                else if (month_ % 2 == 1)
                {
                    if (day_ > 30)
                    {
                        day_ -= 30;
                        AddMonth(1);
                    }
                }
            }
        }
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

int main(void)
{
    Date date;
    date.SetDate(2021, 2, 25);
    date.ShowDate();
    date.AddDay(10);
    date.ShowDate();
}