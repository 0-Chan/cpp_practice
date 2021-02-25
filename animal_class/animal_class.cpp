#include <iostream>
#include <string>

using namespace std;

class Animal
{
private:
    string name_;
    int age_;
    int hp_;
    int hunger_;
    int hygiene_;

public:
    void setAnimal(void)
    {
        cout << "Name : ";
        cin >> name_;
        age_ = 100;
        hp_ = 100;
        hunger_ = 100;
        hygiene_ = 100;

        cout << endl << "- " << name_ << endl
            << "Age : " << age_ << endl
            << "H.P. : " << hp_ << endl
            << "Hunger : " << hunger_ << endl
            << "Hygiene : " << hygiene_ << endl;
    }
    
    void increaseHygiene(int var)
    {
        if (hygiene_ + var < 100)
            hygiene_ += var;
    }
    void showStat(void)
    {
        cout << endl << "- " << name_ << endl
            << "Age : " << age_ << endl
            << "H.P. : " << hp_ << endl
            << "Hunger : " << hunger_ << endl
            << "Hygiene : " << hygiene_ << endl;
    }
};

unsigned char mainSelect(void);
int pickAnimal(int create_num, int& num);


int main(void)
{
    unsigned char select_case = 0;
    int create_num = 0, num = 0, action_num = 0;
    int error_check = 0;

    Animal animal;

    while (true)
    {
        select_case = mainSelect();
        switch (select_case)
        {
        case 'a':
            cout << "Creating animal..." << endl;    
            
            animal.setAnimal();
            create_num += 1;

            break;

        case 'b':
            cout << "Showing animal : ";

            error_check = pickAnimal(create_num, num);
            if (error_check != 0)
            {
                cout << "error occured." << endl;
                return 1;
            }

            animal.showStat();
            break;

        case 'c':
            cout << "--- Actions --- " << endl
                << "1. play" << endl
                << "2. feed" << endl
                << "3. wash" << endl << "> ";
            cin >> action_num;

            if (action_num == 1)
            {
                animal.increaseHygiene(-20);
            }
            else if (action_num == 2)
            {
                animal.increaseHygiene(-10);
            }
            else if (action_num == 3)
            {
                animal.increaseHygiene(30);
            }
            else
            {
                cout << "Unknown action." << endl;
                break;
            }

            break;

        case 'z':
            cout << "OUT" << endl;
            exit(0);
            break;

        default:
            cout << "Unknown answer. Try again" << endl;
            break;
        }
    }
    return 0;
}


unsigned char mainSelect(void)
{
    unsigned char select_case;

    cout << endl
        << "----- My pet program -----" << endl
        << "a. Create animal" << endl
        << "b. Show animal status" << endl
        << "c. Actions (play, feed, wash)" << endl << endl
        << "> ";
    cin >> select_case;
    return select_case;
}


int pickAnimal(int create_num, int& num)
{
    for (int i = 0; i < create_num; i++)
    {
        cout << i + 1 << " ";
    }
    cout << endl << "Pick >";

    cin >> num;
    if (num < 0 || num > create_num)
    {
        return 1;
    }
    else
    {
        num -= 1;
    }

    return 0;
}