#include <iostream>
#include <conio.h>
#define ll long long
using namespace std;
void inr(int cur);
void usd(int cur);
void eur(int cur);
void jpy(int cur);
void gbp(int cur);
void aud(int cur);
void cad(int cur);
void chf(int cur);
void cnh(int cur);
void hkd(int cur);
void nzd(int cur);
void back(int cur);
string currency[12] = {"Indian dollar(INR)", "United State","European Union", "Japan", "United Kingdom", "Australia", "Canada", "Switzerland", "China", "Hong Kong", "New Zealand"};
double value[12] = {1, .04307505, 4.32523681,.7253230, .0298424835094185152, .0619840980, .05397588552, 0.04757708626113, .1803699657536, .25306, 0.06402477};
int choice, cur, input;

int main()
{
    do
    {system("Color 0A");
    cout << "Purchasing Power Parity Salary Converter\t\n----------------------------------------------\n";
    	    
        cout << "\tFrom\t\n";
        for (int i = 1; i <= 11; i++)
        {
            cout << i << ") " << currency[i - 1] << endl;
        }
        cout << "12) Exit\n> ";
        cin >> choice;
        cur = choice;
        switch (choice)
        {
        case 1:
            inr(cur);
            break;
        case 2:
            usd(cur);
            break;
        case 3:
            eur(cur);
            break;
        case 4:
            jpy(cur);
            break;
        case 5:
            gbp(cur);
            break;
        case 6:
            aud(cur);
            break;
        case 7:
            cad(cur);
            break;
        case 8:
            chf(cur);
            break;
        case 9:
            cnh(cur);
            break;
        case 10:
            hkd(cur);
            break;
        case 11:
            nzd(cur);
            break;
        case 12:
            exit(0);
            break;
        default:
            break;
        }
    } while (choice != 12);
}

void inr(int cur)
{system("Color 0A");
    do
    {
        system("CLS");          system("Color 0A");
        cout << "From : " << currency[cur - 1] << " To >\t\n---------------------------------------\n";
        for (int i = 1; i <= 11; i++)
        {
            cout << i << ") " << currency[i - 1] << endl;
        }
        cout << "12) Back\n> ";
        cin >> choice;
        if (choice == 12)
        {
            back(cur);
        }
        else
        {
            for (int i = 1; i <= 11; i++)
            {
                if (choice == i)
                {
                    system("CLS");          system("Color 0A");
                    cout << "From : " << currency[cur - 1] << " To " << currency[choice - 1] << endl;
                    cout << "Amount : ";
                    cin >> input;
                    system("CLS");          system("Color 0A");
                    cout << "From : " << currency[cur - 1] << " To " << currency[choice - 1] << endl;
                    cout << input << "  ->  " << value[choice - 1] * (value[cur - 1] * input) << endl;
                    getch();
                }
            }
        }
    } while (choice != 12);
}

void usd(int cur)
{
    do
    {
        system("CLS");          system("Color 0A");
        cout << "From : " << currency[cur - 1] << " To >\t\n---------------------------------------\n";
        for (int i = 1; i <= 11; i++)
        {
            cout << i << ") " << currency[i - 1] << endl;
        }
        cout << "12) Back\n> ";
        cin >> choice;
        if (choice == 12)
        {
            back(cur);
        }
        else
        {
        for (int i = 1; i <= 11; i++)
        {
            if (choice == i)
            {
                system("CLS");          system("Color 0A");
                cout << "From : " << currency[cur - 1] << " To " << currency[choice - 1] << endl;
                cout << "Amount : ";
                cin >> input;
                system("CLS");          system("Color 0A");
                cout << "From : " << currency[cur - 1] << " To " << currency[choice - 1] << endl;
                cout << input << "  ->  " << (value[choice - 1] * input) / value[cur - 1] << endl;
                getch();
            }
        }

    } }while (choice != 12);
}
void eur(int cur)
{
    do
    {
        system("CLS");          system("Color 0A");
        cout << "From : " << currency[cur - 1] << " To >\t\n---------------------------------------\n";
        for (int i = 1; i <= 11; i++)
        {
            cout << i << ") " << currency[i - 1] << endl;
        }
        cout << "12) Back\n> ";
        cin >> choice;
        if (choice == 12)
        {
            back(cur);
        }
        else
        {
        for (int i = 1; i <= 11; i++)
        {
            if (choice == i)
            {
                system("CLS");          system("Color 0A");
                cout << "From : " << currency[cur - 1] << " To " << currency[choice - 1] << endl;
                cout << "Amount : ";
                cin >> input;
                system("CLS");          system("Color 0A");
                cout << "From : " << currency[cur - 1] << " To " << currency[choice - 1] << endl;
                cout << input << "  ->  " << (value[choice - 1] * input) / value[cur - 1] << endl;
                getch();
            }
        }

    }} while (choice != 12);
}
void jpy(int cur)
{
    do
    {
        system("CLS");          system("Color 0A");
        cout << "From : " << currency[cur - 1] << " To >\t\n---------------------------------------\n";
        for (int i = 1; i <= 11; i++)
        {
            cout << i << ") " << currency[i - 1] << endl;
        }
       cout << "12) Back\n> ";
        cin >> choice;
        if (choice == 12)
        {
            back(cur);
        }
        else
        {
        for (int i = 1; i <= 11; i++)
        {
            if (choice == i)
            {
                system("CLS");          system("Color 0A");
                cout << "From : " << currency[cur - 1] << " To " << currency[choice - 1] << endl;
                cout << "Amount : ";
                cin >> input;
                system("CLS");          system("Color 0A");
                cout << "From : " << currency[cur - 1] << " To " << currency[choice - 1] << endl;
                cout << input << "  ->  " << (value[choice - 1] * input) / value[cur - 1] << endl;
                getch();
            }
        }

    }} while (choice != 12);
}
void gbp(int cur)
{
    do
    {
        system("CLS");          system("Color 0A");
        cout << "From : " << currency[cur - 1] << " To >\t\n---------------------------------------\n";
        for (int i = 1; i <= 11; i++)
        {
            cout << i << ") " << currency[i - 1] << endl;
        }
        cout << "12) Back\n> ";
        cin >> choice;
        if (choice == 12)
        {
            back(cur);
        }
        else
        {
        for (int i = 1; i <= 11; i++)
        {
            if (choice == i)
            {
                system("CLS");          system("Color 0A");
                cout << "From : " << currency[cur - 1] << " To " << currency[choice - 1] << endl;
                cout << "Amount : ";
                cin >> input;
                system("CLS");          system("Color 0A");
                cout << "From : " << currency[cur - 1] << " To " << currency[choice - 1] << endl;
                cout << input << "  ->  " << (value[choice - 1] * input) / value[cur - 1] << endl;
                getch();
            }
        }

    } }while (choice != 12);
}
void aud(int cur)
{
    do
    {
        system("CLS");          system("Color 0A");
        cout << "From : " << currency[cur - 1] << " To >\t\n---------------------------------------\n";
        for (int i = 1; i <= 11; i++)
        {
            cout << i << ") " << currency[i - 1] << endl;
        }
        cout << "12) Back\n> ";
        cin >> choice;
        if (choice == 12)
        {
            back(cur);
        }
        else
        {
        for (int i = 1; i <= 11; i++)
        {
            if (choice == i)
            {
                system("CLS");          system("Color 0A");
                cout << "From : " << currency[cur - 1] << " To " << currency[choice - 1] << endl;
                cout << "Amount : ";
                cin >> input;
                system("CLS");          system("Color 0A");
                cout << "From : " << currency[cur - 1] << " To " << currency[choice - 1] << endl;
                cout << input << "  ->  " << (value[choice - 1] * input) / value[cur - 1] << endl;
                getch();
            }
        }

    }} while (choice != 12);
}
void cad(int cur)
{
    do
    {
        system("CLS");          system("Color 0A");
        cout << "From : " << currency[cur - 1] << " To >\t\n---------------------------------------\n";
        for (int i = 1; i <= 11; i++)
        {
            cout << i << ") " << currency[i - 1] << endl;
        }
        cout << "12) Back\n> ";
        cin >> choice;
        if (choice == 12)
        {
            back(cur);
        }
        else
        {
        for (int i = 1; i <= 11; i++)
        {
            if (choice == i)
            {
                system("CLS");          system("Color 0A");
                cout << "From : " << currency[cur - 1] << " To " << currency[choice - 1] << endl;
                cout << "Amount : ";
                cin >> input;
                system("CLS");          system("Color 0A");
                cout << "From : " << currency[cur - 1] << " To " << currency[choice - 1] << endl;
                cout << input << "  ->  " << (value[choice - 1] * input) / value[cur - 1] << endl;
                getch();
            }
        }

    }} while (choice != 12);
}
void chf(int cur)
{
    do
    {
        system("CLS");          system("Color 0A");
        cout << "From : " << currency[cur - 1] << " To >\t\n---------------------------------------\n";
        for (int i = 1; i <= 11; i++)
        {
            cout << i << ") " << currency[i - 1] << endl;
        }
        cout << "12) Back\n> ";
        cin >> choice;
        if (choice == 12)
        {
            back(cur);
        }
        else
        {
        for (int i = 1; i <= 11; i++)
        {
            if (choice == i)
            {
                system("CLS");          system("Color 0A");
                cout << "From : " << currency[cur - 1] << " To " << currency[choice - 1] << endl;
                cout << "Amount : ";
                cin >> input;
                system("CLS");          system("Color 0A");
                cout << "From : " << currency[cur - 1] << " To " << currency[choice - 1] << endl;
                cout << input << "  ->  " << (value[choice - 1] * input) / value[cur - 1] << endl;
                getch();
            }
        }

    }} while (choice != 12);
}
void cnh(int cur)
{
    do
    {
        system("CLS");          system("Color 0A");
        cout << "From : " << currency[cur - 1] << " To >\t\n---------------------------------------\n";
        for (int i = 1; i <= 11; i++)
        {
            cout << i << ") " << currency[i - 1] << endl;
        }
        cout << "12) Back\n> ";
        cin >> choice;
        if (choice == 12)
        {
            back(cur);
        }
        else
        {
            for (int i = 1; i <= 11; i++)
            {
                if (choice == i)
                {
                    system("CLS");          system("Color 0A");
                    cout << "From : " << currency[cur - 1] << " To " << currency[choice - 1] << endl;
                    cout << "Amount : ";
                    cin >> input;
                    system("CLS");          system("Color 0A");
                    cout << "From : " << currency[cur - 1] << " To " << currency[choice - 1] << endl;
                    cout << input << "  ->  " << (value[choice - 1] * input) / value[cur - 1] << endl;
                    getch();
                }
            }
        }
    } while (choice != 12);
}

void hkd(int cur)
{
    do
    {
        system("CLS");          system("Color 0A");
        cout << "From : " << currency[cur - 1] << " To >\t\n---------------------------------------\n";
        for (int i = 1; i <= 11; i++)
        {
            cout << i << ") " << currency[i - 1] << endl;
        }
        cout << "12) Back\n> ";
        cin >> choice;
        if (choice == 12)
        {
            back(cur);
        }
        else
        {
        for (int i = 1; i <= 11; i++)
        {
            if (choice == i)
            {
                system("CLS");          system("Color 0A");
                cout << "From : " << currency[cur - 1] << " To " << currency[choice - 1] << endl;
                cout << "Amount : ";
                cin >> input;
                system("CLS");          system("Color 0A");
                cout << "From : " << currency[cur - 1] << " To " << currency[choice - 1] << endl;
                cout << input << "  ->  " << (value[choice - 1] * input) / value[cur - 1] << endl;
                getch();
            }
        }

    }} while (choice != 12);
}
void nzd(int cur)
{
    do
    {
        system("CLS");          system("Color 0A");
        cout << "From : " << currency[cur - 1] << " To >\t\n---------------------------------------\n";
        for (int i = 1; i <= 11; i++)
        {
            cout << i << ") " << currency[i - 1] << endl;
        }
        cout << "12) Back\n> ";
        cin >> choice;
        if (choice == 12)
        {
            back(cur);
        }
        else
        {
        for (int i = 1; i <= 11; i++)
        {
            if (choice == i)
            {
                system("CLS");          system("Color 0A");
                cout << "From : " << currency[cur - 1] << " To " << currency[choice - 1] << endl;
                cout << "Amount : ";
                cin >> input;
                system("CLS");          system("Color 0A");
                cout << "From : " << currency[cur - 1] << " To " << currency[choice - 1] << endl;
                cout << input << "  ->  " << (value[choice - 1] * input) / value[cur - 1] << endl;
                getch();
            }
        }

    } }while (choice != 12);
}
void back(int cur)
{
    do
    {system("CLS");          system("Color 0A");
        cout << "\tFrom\t\n";
        for (int i = 1; i <= 11; i++)
        {
            cout << i << ") " << currency[i - 1] << endl;
        }
        cout << "12) Exit\n> ";
        cin >> choice;
        cur = choice;
        switch (choice)
        {
        case 1:
            inr(cur);
            break;
        case 2:
            usd(cur);
            break;
        case 3:
            eur(cur);
            break;
        case 4:
            jpy(cur);
            break;
        case 5:
            gbp(cur);
            break;
        case 6:
            aud(cur);
            break;
        case 7:
            cad(cur);
            break;
        case 8:
            chf(cur);
            break;
        case 9:
            cnh(cur);
            break;
        case 10:
            hkd(cur);
            break;
        case 11:
            nzd(cur);
            break;
        case 12:
            exit(0);
            break;
        default:
            break;
        }
    } while (choice != 12);
}