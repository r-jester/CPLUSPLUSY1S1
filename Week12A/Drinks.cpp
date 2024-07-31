#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int op, qty;
    string ps, un;
    float total;
A:
    cout << "\t====================>>Login<<====================\n";
    cout << "\tEnter Username: ";
    cin >> un;
    cout << "\tEnter Password: ";
    cin >> ps;
    if (ps == "123" && un == "Jester")
    {
        cout << "\tWelcome to the System!\n";
        system("cls");
    }
    else
    {
        cout << "\tInput Wrong Value!\n";
        system("cls");
        goto A;
    }
    cout << "\t====================>>Welcome to our Cafe<<====================\n";
    cout << "\tMenu Drinks" << endl;
    cout << "\t1.Coffe" << endl;
    cout << "\t2.Soft Drink" << endl;
    cout << "\t3.Alcohol" << endl;
    cout << "\tSelect Drink(1-3): ";
    cin >> op;
    switch (op)
    {
    case 1:
        cout << "\tMenu Coffee\n";
        cout << "\t1.Ice Coffee\n";
        cout << "\t2.Hot Coffee\n";
        cout << "\tChoose option(1-2): ";
        cin >> op;
        switch (op)
        {
        case 1:
            cout << "\tIce Coffee" << endl;
            cout << "\t1.Ice Lattee\n";
            cout << "\t2.Ice Capucino\n";
            cout << "\tChoose Option(1-2): ";
            cin >> op;
            switch (op)
            {
            case 1:
                system("cls");
                cout << "\t==========>>Enjoy Your Drink<<==========\n";
                cout << "\tIce Lattee 1x 1.25$\n";
                cout << "\tQuantity: ";
                cin >> qty;
                total = 1.25 * qty;
                cout << "\tTotal: " << total << " $" << endl;
                break;
            case 2:
                system("cls");
                cout << "\t==========>>Enjoy Your Drink<<==========\n";
                cout << "\tIce Capucino 1x 1.50$\n";
                cout << "\tQuantity: ";
                cin >> qty;
                total = 1.50 * qty;
                cout << "\tTotal: " << total << " $" << endl;
                break;
            }
            break;
        case 2:
            cout << "\tHot Coffee" << endl;
            cout << "\t1.Hot Lattee\n";
            cout << "\t2.Hot Capucino\n";
            cout << "\tChoose Option(1-2): ";
            cin >> op;
            switch (op)
            {
            case 1:
                system("cls");
                cout << "\t==========>>Enjoy Your Drink<<==========\n";
                cout << "\tHot Lattee 1x 1.25$\n";
                cout << "\tQuantity: ";
                cin >> qty;
                total = 1.25 * qty;
                cout << "\tTotal: " << total << " $" << endl;
                break;
            case 2:
                system("cls");
                cout << "\t==========>>Enjoy Your Drink<<==========\n";
                cout << "\tHot Capucino 1x 1.50$\n";
                cout << "\tQuantity: ";
                cin >> qty;
                total = 1.50 * qty;
                cout << "\tTotal: " << total << " $" << endl;
                break;
            }
        }
        break;
    case 2:
        cout << "\tMenu Soft Drink\n";
        cout << "\t1.Strawberry Cream Cheese\n";
        cout << "\t2.Mango Cream Cheese\n";
        cout << "\tChoose option(1-2): ";
        cin >> op;
        switch (op)
        {
        case 1:
            system("cls");
            cout << "\t==========>>Enjoy Your Drink<<==========\n";
            cout << "\tStrawberry Cream Cheese 1x 1.00$\n";
            cout << "\tQuantity: ";
            cin >> qty;
            total = 1.00 * qty;
            cout << "\tTotal: " << total << " $" << endl;
            break;
        case 2:
            system("cls");
            cout << "\t==========>>Enjoy Your Drink<<==========\n";
            cout << "\tMango Cream Cheese 1x 1.20$\n";
            cout << "\tQuantity: ";
            cin >> qty;
            total = 1.20 * qty;
            cout << "\tTotal: " << total << " $" << endl;
            break;
        }
        break;
    case 3:
        cout << "\tMenu Alcohol\n";
        cout << "\t1.Angkor Beer\n";
        cout << "\t2.Cambodia Beer\n";
        cout << "\tChoose option(1-2): ";
        cin >> op;
        switch (op)
        {
        case 1:
            cout << "\tAngkor Beer\n";
            cout << "\t1.Angkor Beer(Can)\n";
            cout << "\t2.Angkor Beer(Bottle)\n";
            cout << "\tChoose option(1-2): ";
            cin >> op;
            switch (op)
            {
            case 1:
                system("cls");
                cout << "\t==========>>Enjoy Your Drink<<==========\n";
                cout << "\tAngkor Beer(Can) 1x 1.00$\n";
                cout << "\tQuantity: ";
                cin >> qty;
                total = 1.00 * qty;
                cout << "\tTotal: " << total << " $" << endl;
                break;
            case 2:
                system("cls");
                cout << "\t==========>>Enjoy Your Drink<<==========\n";
                cout << "\tAngkor Beer(Bottle) 1x 1.20$\n";
                cout << "\tQuantity: ";
                cin >> qty;
                total = 1.20 * qty;
                cout << "\tTotal: " << total << " $" << endl;
                break;
            }
        }
        break;
    default:
        cout << "\tComplete Khos hx...!" << endl;
        break;
    }
    return 0;
}