#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    system("cls");
    cout << fixed << showpoint << setprecision(2);
    int menuop, type, nametype, sugar, beermenu, qty, seatnumber;
    char size;
    double price, disval, topaid, payment_usd, payment_khr, dis = 0.1;
    const float exchange_rate = 4100;
    string drinkname, name, kind, un, pass;
A:
    cout << "\t==================>>LOGIN<<==================\n";
    cout << "\tEnter Username: ";
    cin >> un;
    cout << "\tEnter Password: ";
    cin >> pass;
    system("cls");
    if ((un == "Virak" || un == "Chantha" || un == "Kimheng" || un == "Piseth" || un == "Sursdey") && pass == "Group2")
    {
        cout << "\t==============>>Welcome to My Flavor Cafe<<==============\n";
    }
    else
    {
        cout << "\tPlease Try Again...!\n";
        goto A;
    }
    for (char key; true; key++)
    {
    B:
        cout << "\tMenu\n\t1. Coffee\n\t2. Drink\n\tChoose The Option(1-2): ";
        cin >> menuop;
        system("cls");
        switch (menuop)
        {
        case 1:
        C:
            cout << "\tMenu Coffee\n\t1. Hot Coffee\n\t2. Ice Coffee\n\tChoose The Option(1-2): ";
            cin >> type;
            system("cls");
            switch (type)
            {
            case 1:
            D:
                cout << "\tHot Coffee\n\t1. Hot Latte\n\t2. Hot Cappuccino\n\tChoose The Option(1-2): ";
                cin >> nametype;
                system("cls");
                switch (nametype)
                {
                case 1:
                E:
                    cout << "\tHot Latte\n\t(S) 1.00$\n\t(M) 1.20$\n\t(L) 1.40$\n\tChoose The Option(S M L): ";
                    cin >> size;
                    system("cls");
                    switch (size)
                    {
                    case 'S':
                        cout << "\tHot Latte (S) 1.00$\n";

                        price = 1.00;
                        break;
                    case 'M':
                        cout << "\tHot Latte (M) 1.20$\n";

                        price = 1.20;
                        break;
                    case 'L':
                        cout << "\tHot Latte (L) 1.40$\n";

                        price = 1.40;
                        break;
                    default:
                        cout << "\tInput Wrong Option!\n";
                        goto E;
                        break;
                    }
                    drinkname = "Hot Latte";
                    break;
                case 2:
                F:
                    cout << "\tHot Cappuccino\n\t(S) 1.00$\n\t(M) 1.20$\n\t(L) 1.40$\n\tChoose The Option(S M L): ";
                    cin >> size;
                    system("cls");
                    switch (size)
                    {
                    case 'S':
                        cout << "\tHot Cappuccino (S) 1.00$\n";

                        price = 1.00;
                        break;
                    case 'M':
                        cout << "\tHot Cappuccino (M) 1.20$\n";

                        price = 1.20;
                        break;
                    case 'L':
                        cout << "\tHot Cappuccino (L) 1.40$\n";

                        price = 1.40;
                        break;
                    default:
                        cout << "\tInput Wrong Option!\n";
                        goto F;
                        break;
                    }
                    drinkname = "Hot Cappuccino";
                    break;
                default:
                    cout << "\tInput Wrong Option!\n";
                    goto D;
                    break;
                }
                break;
            case 2:
            G:
                cout << "\tIce Coffee\n\t1. Ice Latte\n\t2. Ice Cappuccino\n\tChoose The Option(1-2): ";
                cin >> nametype;
                system("cls");
                switch (nametype)
                {
                case 1:
                H:
                    cout << "\tIce Latte\n\t(S) 1.00$\n\t(M) 1.20$\n\t(L) 1.40$\n\tChoose The Option(S M L): ";
                    cin >> size;
                    system("cls");
                    switch (size)
                    {
                    case 'S':
                        cout << "\tIce Latte (S) 1.00$\n";

                        price = 1.00;
                        break;
                    case 'M':
                        cout << "\tIce Latte (M) 1.20$\n";

                        price = 1.20;
                        break;
                    case 'L':
                        cout << "\tIce Latte (L) 1.40$\n";

                        price = 1.40;
                        break;
                    default:
                        cout << "\tInput Wrong Option!\n";
                        goto H;
                        break;
                    }
                    drinkname = "Ice Latte";
                    break;
                case 2:
                I:
                    cout << "\tIce Cappuccino\n\t(S) 1.00$\n\t(M) 1.20$\n\t(L) 1.40$\n\tChoose The Option(S M L): ";
                    cin >> size;
                    system("cls");
                    switch (size)
                    {
                    case 'S':
                        cout << "\tIce Cappuccino (S) 1.00$\n";

                        price = 1.00;
                        break;
                    case 'M':
                        cout << "\tIce Cappuccino (M) 1.20$\n";

                        price = 1.20;
                        break;
                    case 'L':
                        cout << "\tIce Cappuccino (L) 1.40$\n";

                        price = 1.40;
                        break;
                    default:
                        cout << "\tInput Wrong Option!\n";
                        goto I;
                        break;
                    }
                    drinkname = "Ice Cappuccino";
                    break;
                default:
                    cout << "\tInput Wrong Option!\n";
                    goto G;
                    break;
                }
                break;
            default:
                cout << "\tInput Wrong Option!\n";
                goto C;
                break;
            }
            name = "Coffe";
            cout << "\tInput Sugar(0-100)% : ";
            cin >> sugar;
            break;
        case 2:
        J:
            cout << "\tMenu Drink\n\t1. Juice\n\t2. Shake\n\t3. Alcohol\n\tChoose The Option(1-3): ";
            cin >> type;
            system("cls");
            switch (type)
            {
            case 1:
            K:
                cout << "\tMenu Juice\n\t1. Apple\n\t2. Grape\n\t3. Blueberry\n\tChoose The Option(1-3): ";
                cin >> nametype;
                system("cls");
                switch (nametype)
                {
                case 1:
                L:
                    cout << "\tApple Juice\n\t(S) 1.00$\n\t(M) 1.25$\n\t(L) 1.50$\n\tChoose The Option(S M L): ";
                    cin >> size;
                    system("cls");
                    switch (size)
                    {
                    case 'S':
                        cout << "\tApple Juice (S) 1.00$\n";
                        price = 1.00;
                        break;
                    case 'M':
                        cout << "\tApple Juice (M) 1.25$\n";
                        price = 1.25;
                        break;
                    case 'L':
                        cout << "\tApple Juice (L) 1.50$\n";
                        price = 1.50;
                        break;
                    default:
                        cout << "\tInput Wrong Option!\n";
                        goto L;
                        break;
                    }
                    drinkname = "Apple Juice";
                    break;
                case 2:
                M:
                    cout << "\tGrape Juice\n\t(S) 1.00$\n\t(M) 1.25$\n\t(L) 1.50$\n\tChoose The Option(S M L): ";
                    cin >> size;
                    system("cls");
                    switch (size)
                    {
                    case 'S':
                        cout << "\tGrape Juice (S) 1.00$\n";
                        price = 1.00;
                        break;
                    case 'M':
                        cout << "\tGrape Juice (M) 1.25$\n";
                        price = 1.25;
                        break;
                    case 'L':
                        cout << "\tGrape Juice (L) 1.50$\n";
                        price = 1.50;
                        break;
                    default:
                        cout << "\tInput Wrong Option!\n";
                        goto M;
                        break;
                    }
                    drinkname = "Grape Juice";
                    break;
                case 3:
                N:
                    cout << "\tBlueberry Juice\n\t(S) 1.00$\n\t(M) 1.25$\n\t(L) 1.50$\n\tChoose The Option(S M L): ";
                    cin >> size;
                    system("cls");
                    switch (size)
                    {
                    case 'S':
                        cout << "\tBlueberry Juice (S) 1.00$\n";
                        price = 1.00;
                        break;
                    case 'M':
                        cout << "\tBlueberry Juice (M) 1.25$\n";
                        price = 1.25;
                        break;
                    case 'L':
                        cout << "\tBlueberry Juice (L) 1.50$\n";
                        price = 1.50;
                        break;
                    default:
                        cout << "\tInput Wrong Option!\n";
                        goto N;
                        break;
                    }
                    drinkname = "Blueberry Juice";
                    break;
                default:
                    cout << "\tInput Wrong Option!\n";
                    goto K;
                    break;
                }
                name = "Drink";
                break;
            case 2:
            O:
                cout << "\tMenu Shake\n\t1. Passion\n\t2. Coconut\n\t3. Green Tea\n\tChoose The Option(1-3): ";
                cin >> nametype;
                system("cls");
                switch (nametype)
                {
                case 1:
                P:
                    cout << "\tPassion\n\t(S) 1.00$\n\t(M) 1.30$\n\t(L) 1.60$\n\tChoose The Option(S M L): ";
                    cin >> size;
                    system("cls");
                    switch (size)
                    {
                    case 'S':
                        cout << "\tPassion (S) 1.00$\n";
                        price = 1.00;
                        break;
                    case 'M':
                        cout << "\tPassion (M) 1.30$\n";
                        price = 1.30;
                        break;
                    case 'L':
                        cout << "\tPassion (L) 1.60$\n";
                        price = 1.60;
                        break;
                    default:
                        cout << "\tInput Wrong Option!\n";
                        goto P;
                        break;
                    }
                    drinkname = "Passion";
                    break;
                case 2:
                Q:
                    cout << "\tCoconut\n\t(S) 1.00$\n\t(M) 1.30$\n\t(L) 1.60$\n\tChoose The Option(S M L): ";
                    cin >> size;
                    system("cls");
                    switch (size)
                    {
                    case 'S':
                        cout << "\tCoconut (S) 1.00$\n";
                        price = 1.00;
                        break;
                    case 'M':
                        cout << "\tCoconut (M) 1.30$\n";
                        price = 1.30;
                        break;
                    case 'L':
                        cout << "\tCoconut (L) 1.60$\n";
                        price = 1.60;
                        break;
                    default:
                        cout << "\tInput Wrong Option!\n";
                        goto Q;
                        break;
                    }
                    drinkname = "Coconut";
                    break;
                case 3:
                R:
                    cout << "\tGreen Tea\n\t(S) 1.00$\n\t(M) 1.30$\n\t(L) 1.60$\n\tChoose The Option(S M L): ";
                    cin >> size;
                    system("cls");
                    switch (size)
                    {
                    case 'S':
                        cout << "\tGreen Tea (S) 1.00$\n";
                        price = 1.00;
                        break;
                    case 'M':
                        cout << "\tGreen Tea (M) 1.30$\n";
                        price = 1.30;
                        break;
                    case 'L':
                        cout << "\tGreen Tea (L) 1.60$\n";
                        price = 1.60;
                        break;
                    default:
                        cout << "\tInput Wrong Option!\n";
                        goto R;
                        break;
                    }
                    drinkname = "Green Tea";
                    break;
                default:
                    cout << "\tInput Wrong Option!\n";
                    goto O;
                    break;
                }
                name = "Drink";
                break;
            case 3:
            S:
                cout << "\tMenu Alcohol\n\t1. Beer\n\t2. Wine\n\tChoose The Option(1-2): ";
                cin >> nametype;
                system("cls");
                switch (nametype)
                {
                case 1:
                T:
                    cout << "\tMenu Beer\n\t1. Angkor\n\t2. Anchor\n\t3. Cambodia\n\tChoose The Option(1-3): ";
                    cin >> beermenu;
                    system("cls");
                    switch (beermenu)
                    {
                    case 1:
                    U:
                        cout << "\tAngkor\n\t(Bottle) 3.00$\n\t(Can) 0.50$\n\tChoose The Option(B-C): ";
                        cin >> size;
                        system("cls");
                        switch (size)
                        {
                        case 'B':
                            cout << "\tAngkor (Bottle) 3.00$\n";
                            price = 3.00;
                            kind = "Bottle";
                            break;
                        case 'C':
                            cout << "\tAngkor (Can) 0.50$\n";
                            price = 0.50;
                            kind = "Can";
                            break;
                        default:
                            cout << "\tInput Wrong Option!\n";
                            goto U;
                            break;
                        }
                        drinkname = "Angkor";
                        break;
                    case 2:
                    V:
                        cout << "\tAnchor\n\t(Bottle) 3.00$\n\t(Can) 0.50$\n\tChoose The Option(B-C): ";
                        cin >> size;
                        system("cls");
                        switch (size)
                        {
                        case 'B':
                            cout << "\tAnchor (Bottle) 3.00$\n";
                            price = 3.00;
                            kind = "Bottle";
                            break;
                        case 'C':
                            cout << "\tAnchor (Can) 0.50$\n";
                            price = 0.50;
                            kind = "Can";
                            break;
                        default:
                            cout << "\tInput Wrong Option!\n";
                            goto V;
                            break;
                        }
                        drinkname = "Anchor";
                        break;
                    case 3:
                    W:
                        cout << "\tCambodia\n\t(Bottle) 3.00$\n\t(Can) 0.50$\n\tChoose The Option(B-C): ";
                        cin >> size;
                        system("cls");
                        switch (size)
                        {
                        case 'B':
                            cout << "\tCambodia (Bottle) 3.00$\n";
                            price = 3.00;
                            kind = "Bottle";
                            break;
                        case 'C':
                            cout << "\tCambodia (Can) 0.50$\n";
                            price = 0.50;
                            kind = "Can";
                            break;
                        default:
                            cout << "\tInput Wrong Option!\n";
                            goto W;
                            break;
                        }
                        drinkname = "Cambodia";
                        break;
                    default:
                        cout << "\tInput Wrong Option!\n";
                        goto T;
                        break;
                    }
                    name = "Beer";
                    break;
                case 2:
                X:
                    cout << "\tMenu Wine\n\t1. Latido 230$\n\t2. Calusari 190$\n\t3. Matas 250$\n\tChoose The Option(1-3): ";
                    cin >> beermenu;
                    system("cls");
                    switch (beermenu)
                    {
                    case 1:
                        cout << "\tLatido 230$\n";
                        price = 230;
                        drinkname = "Latido";
                        break;
                    case 2:
                        cout << "\tCalusari 190$\n";
                        price = 190;
                        drinkname = "Calusari";
                        break;
                    case 3:
                        cout << "\tMatas 250$\n";
                        price = 250;
                        drinkname = "Matas";
                        break;
                    default:
                        cout << "\tInput Wrong Option!\n";
                        goto X;
                        break;
                    }
                    name = "Wine";
                    break;
                default:
                    cout << "\tInput Wrong Option!\n";
                    goto S;
                    break;
                }
                break;
            default:
                cout << "\tInput Wrong Option!\n";
                goto J;
                break;
            }
            break;
        default:
            cout << "\tInput Wrong Option!\n";
            goto B;
            break;
        }
        cout << "\tIf You Buy more than 5 Discount 10%\n";
        cout << "\tInput Quantity : ";
        cin >> qty;
        cout << "\tSeat Number : ";
        cin >> seatnumber;
        system("cls");
        cout << "\t=================>>Receipt<<=================\n";
        if (qty > 5)
        {
            disval = price * qty * dis;
            topaid = price * qty;
            payment_usd = topaid - disval;
        }
        else
        {
            payment_usd = price * qty;
        }
        payment_khr = payment_usd * exchange_rate;
        if (type == 3 && nametype == 1)
        {
            cout << "\tName of " << name << " : " << drinkname << " ( " << kind << " ) " << endl;
        }
        else
        {
            cout << "\tName of " << name << " : " << drinkname << endl;
        }
        if (type != 3 && (nametype != 1 || nametype != 2))
        {
            cout << "\tSize : " << size << endl;
        }
        cout << "\tPrice : " << price << " $" << endl;
        if (menuop != 2)
        {
            cout << "\tSugar (0-100)% : " << sugar << " %" << endl;
        }
        cout << "\tQuantity : " << qty << endl;
        cout << "\tSeat Number : " << seatnumber << endl;
        cout << "\tPayment USD : " << payment_usd << " $" << endl;
        cout << "\tPayment KHR : " << payment_khr << " Reil" << endl;
        cout << "\t=======>>Thank You For Supporting Us<<=======\n";
        cout << endl
             << endl;
    Z:
        cout << "\tPress C Key to Continue The Ordering/ S Key to Stop The Ordering ! ";
        cin >> key;
        system("cls");
        if (key == 'C')
        {
            goto B;
        }
        else if (key == 'S')
        {
            cout << "\tPlease Enjoy Your Drink" << endl;
            break;
        }
        else
        {
            cout << "\tInput Wrong Option!\n";
            goto Z;
        }
    }
    return 0;
}