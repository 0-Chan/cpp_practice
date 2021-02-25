#include <iostream>
#include <string>

using namespace std;

class Animal
{
private:
    string name;
    int age;
    int hp;
    int hunger;
    int hygiene;

public:
    void setAnimal(void)
    {
        cout << "Name : ";
        cin >> name;
        age = 100;
        hp = 100;
        hunger = 100;
        hygiene = 100;

        cout << endl << "- " << name << endl
            << "Age : " << age << endl
            << "H.P. : " << hp << endl
            << "Hunger : " << hunger << endl
            << "Hygiene : " << hygiene << endl;
    }
    
    void increaseHygiene(int var)
    {
        if (hygiene + var < 100)
            hygiene += var;
    }
    void showStat(void)
    {
        cout << endl << "- " << name << endl
            << "Age : " << age << endl
            << "H.P. : " << hp << endl
            << "Hunger : " << hunger << endl
            << "Hygiene : " << hygiene << endl;
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