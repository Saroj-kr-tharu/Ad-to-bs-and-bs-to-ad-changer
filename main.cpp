#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

class convertor
{
private:
    int years, month, day;
    int new_years, new_month, new_day;
    //    string Nepali[11];
    //    string English[11];
    string str;

public:
    void menu();
    void input();
    void Bs_To_Ad();
    void Ad_TO_BS();
    void art(int, int, string); // type , speed ,filename
    void animation(int, string);
};
void convertor::animation(int speed, string temp)
{
    int i = 0;
    while (temp[i] != NULL)
    {
        cout << temp[i];
        i++;
        Sleep(speed);
    }
}
void convertor::art(int type, int speed, string name)
{
    string filename(name);

    FILE *input_file = fopen(filename.c_str(), "r");
    unsigned char character;
    while (!feof(input_file))
    {
        character = getc(input_file);

        if (type == 99)
            Sleep(speed);
        else
            Sleep(0);

        cout << character << "";
    }
    cout << endl;
    fclose(input_file);
}
void convertor::input()
{

    str = "\n\t\t Enter the day in years/month/day --------------------->";
    animation(2, str);
    fflush(stdin);
    cin >> years;
    cin.ignore(1, '/');
    cin >> month;
    cin.ignore(1, '/');
    cin >> day;
    if (month > 12 || day > 31)
    {
        system("cls");
        input();
    }
    new_years = years;
    new_month = month;
    new_day = day;
}

void convertor::Bs_To_Ad()
{
    string Nepali[] = {"Baishak", "Jetha", "Ashar", "Shrawan", "Bhadra", "Ashoj", "Kartik", "Mangir", "Poush", "Magh", "Falgun", "Chaitra"};
    string English[] = {"Januray", "Feburary", "March", "April", "May", "June", "July", "Auguest", "September", "Octber", "November", "December"};

    str = "\t\t <--------------------------- BS TO AD  --------------------------> ";
    animation(2, str);
    cout << endl
         << "\t\t <---------- Enter Date in BS ---------> ";
    input();
    if (day > 17)
    {
        day -= 17;
    }
    else
    {
        day += 30;
        --month;
        day -= 17;
    }

    if (month > 8)
    {
        month -= 8;
    }
    else
    {
        month += 12;
        --years;
        month -= 8;
    }
    years -= 56;

    cout << endl
         << "\t\t";
    str = "In BS ------>";
    animation(2, str);

    cout << new_years;

    str = "/";
    animation(2, str);

    cout << new_month;

    str = "/";
    animation(2, str);

    cout << new_day;

    cout << endl
         << "\t\t";
    str = "In BS ------>";
    animation(2, str);

    cout << new_years;

    str = "/";
    animation(2, str);

    cout << Nepali[new_month - 1];

    str = "/";
    animation(2, str);

    cout << new_day;

    cout << endl
         << endl
         << "\t\t";
    str = "In AD ------>";
    animation(2, str);

    cout << years;

    str = "/";
    animation(2, str);

    cout << month;

    str = "/";
    animation(2, str);

    cout << day;

    cout << endl
         << "\t\t";
    str = "In AD ------>";
    animation(2, str);

    cout << years;

    str = "/";
    animation(2, str);

    cout << English[new_month - 1];

    str = "/";
    animation(2, str);

    cout << day;
}

void convertor::Ad_TO_BS()
{
    string Nepali[] = {"Baishak", "Jetha", "Ashar", "Shrawan", "Bhadra", "Ashoj", "Kartik", "Mangir", "Poush", "Magh", "Falgun", "Chaitra"};
    string English[] = {"Januray", "Feburary", "March", "April", "May", "June", "July", "Auguest", "September", "Octber", "November", "December"};

    str = "\n\t\t <--------------------------- AD TO BS --------------------------> ";
    animation(2, str);
    cout << endl
         << "\t\t <--------------------------- Enter Date in AD --------------------------> ";
    input();
    if (day < 17)
    {
        if (month == 1)
            day += 16;

        if (month == 2)
            day += 17;

        if (month == 3)
            day += 16;

        if (month == 4)
            day += 16;

        if (month == 5)
            day += 17;

        if (month == 6)
            day += 17;

        if (month == 7)
            day += 17;

        if (month == 8)
            day += 15;

        if (month == 9)
            day += 15;

        if (month == 10)
            day += 14;

        if (month == 11)
            day += 14;

        if (month == 12)
            day += 14;

        --month;
    }
    else
    {
        day -= 30;

        if (month == 1)
            day += 16;

        if (month == 2)
            day += 18;

        if (month == 3)
            day += 16;

        if (month == 4)
            day += 17;

        if (month == 5)
            day += 16;

        if (month == 6)
            day += 16;

        if (month == 7)
            day += 14;

        if (month == 8)
            day += 14;

        if (month == 9)
            day += 14;

        if (month == 10)
            day += 13;

        if (month == 11)
            day += 14;

        if (month == 12)
            day += 15;

        // ++month;
        // day += 6;
    }

    if (month < 4)
    {
        month += 9;
    }
    else
    {
        month += 12;
        ++years;
        month -= 15;
    }
    years += 56;

    cout << endl
         << "\t\t";
    str = "In AD ------>";
    animation(2, str);

    cout << new_years;

    str = "/";
    animation(2, str);

    cout << new_month;

    str = "/";
    animation(2, str);

    cout << new_day;
    animation(2, str);

    cout << endl
         << "\t\t";
    str = "In BS ------>";
    animation(2, str);

    cout << new_years;

    str = "/";
    animation(2, str);

    cout << English[new_month - 1];

    str = "/";
    animation(2, str);

    cout << new_day;

    cout << endl
         << endl;
    cout << endl
         << "\t\t";
    str = "In BS ------>";
    animation(2, str);

    cout << years;

    str = "/";
    animation(2, str);

    cout << month;

    str = "/";
    animation(2, str);

    cout << day;

    cout << endl
         << "\t\t";
    str = "In BS ------>";
    animation(2, str);

    cout << years;

    str = "/";
    animation(2, str);

    str = Nepali[month - 1];
    animation(2, str);
    str = "/";
    animation(2, str);

    cout << day;
}

void convertor::menu()
{
    int choice, num;
    string banner = "art/banner.txt";
    string Developer = "art/Developer.txt";
    string welcome = "art/Art.txt";
    string Thankyou = "art/thankyou.txt";
    do
    {
        system("cls");
        art(2, 1, banner);
        str = "\n\t    <------  WELCOME TO MAIN MENU  -------> ";
        animation(2, str);
        cout << endl
             << "\t ________________________________________________";
        cout << endl
             << "\t\t Please select appropriate key";

        str = "\n\t\t<--------  1. BS TO AD  --------->";
        animation(2, str);

        str = "\n\t\t<--------  2. AD TO BS  --------->";
        animation(2, str);
        cout << endl
             << "\t\t<--------- 99 ) Exit ---------->" << endl;
        cout << "\t ________________________________________________";
        cin >> choice;
        system("cls");
        art(1, 0, banner);
        Sleep(100);
        switch (choice)
        {
        case 1:

            Bs_To_Ad();
            getch();
            break;
        case 2:;
            Ad_TO_BS();
            getch();
            break;

        case 99:
            system("cls");
            art(99, 1, Thankyou);

            break;
        default:
            str = "\n\t<----- Invalid Options ------>";
            animation(2, str);
            break;
        }

    } while (choice != 99);
}

void intial();

void intial()
{
    convertor con;
    string Developer = "art/Developer.txt";
    string welcome = "art/Art.txt";

    system("cls");
    // system("color 2f");
    system("color a");

    con.art(99, 2, welcome);
    Sleep(1000);

    system("cls");
    con.art(1, 0, Developer);
    getch();
}

int main()
{
    convertor con;
    intial();
    con.menu();

    return 0;
}
