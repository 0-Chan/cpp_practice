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
    int getTotalDayofMonth(int year, int month);

    Date()
    {
        std::cout << "Default 생성자" << std::endl;
        year_= 2021;
        month_ = 1;
        day_ = 1;
    }

    Date(int year, int month, int day)
    {
        year_ = year;
        month_ = month;
        day_ = day;
    }
};

void Date::SetDate(int year, int month, int day)
{
    year_ = year;
    month_ = month;
    day_ = day;
}

void Date::AddDay(int inc)
{
      while (true) {
    int current_month_total_days = getTotalDayofMonth(year_, month_);

    if (day_ + inc <= current_month_total_days) {
      day_ += inc;
      return;
    } else {
      inc -= (current_month_total_days - day_ + 1);
      day_ = 1;
      AddMonth(1);
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

int getTotalDayofMonth(int year, int month)
{
    static int last_day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int total_day = last_day[month - 1];
    if (month == 2)
    {
        if (year % 4 == 0)
        {
            return 29;
        }
    }
    return total_day;
}

int main(void)
{
    Date date;
    date.SetDate(2021, 2, 25);
    date.ShowDate();
    date.AddDay(10);
    date.ShowDate();
}