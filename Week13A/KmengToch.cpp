#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    system("cls");
    cout << fixed << showpoint << setprecision(2) << endl;
    int qty, sugar, seatnum;
    string pass, un, name, variation, drinkname, drinktype;
    int menuop, type, nametype, op;
    char size;
    float price, payment_usd, payment_khr, topaid, disval, dis = 0.1;
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
        system("cls");
        cout << "\tPlease Try Again...!\n";
        goto A;
    }
B:
    cout << "\tMENU\n\t1. Coffee\n\t2. Drink\n\tChoose The Option(1-2): ";
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
                cout << "\tHot Latte\n\t(S) 1.00$\n\t(M) 1.25$\n\t(L) 1.50$\n\tChoose The Option(S M L): ";
                cin >> size;
                system("cls");
                switch (size)
                {
                case 'S':
                    cout << "\tHot Latte (S) 1.00$\n\tInput Quantity: ";
                    cin >> qty;
                    cout << "\tInput Sugar(0-100)%: ";
                    cin >> sugar;
                    cout << "\tEnter Seat Number: ";
                    cin >> seatnum;
                    drinkname = "Hot Latte";
                    price = 1.00;
                    break;
                case 'M':
                    cout << "\tHot Latte (M) 1.25$\n\tInput Quantity: ";
                    cin >> qty;
                    cout << "\tInput Sugar(0-100)%: ";
                    cin >> sugar;
                    cout << "\tEnter Seat Number: ";
                    cin >> seatnum;
                    drinkname = "Hot Latte";
                    price = 1.25;
                    break;
                case 'L':
                    cout << "\tHot Latte (L) 1.50$\n\tInput Quantity: ";
                    cin >> qty;
                    cout << "\tInput Sugar(0-100)%: ";
                    cin >> sugar;
                    cout << "\tEnter Seat Number: ";
                    cin >> seatnum;
                    drinkname = "Hot Latte";
                    price = 1.50;
                    break;
                default:
                    system("cls");
                    cout << "\tInput Wrong Option..!\n";
                    goto E;
                    break;
                }
                break;
            case 2:
            F:
                cout << "\tHot Cappuccino\n\t(S) 1.00$\n\t(M) 1.25$\n\t(L) 1.50$\n\tChoose The Option(S M L): ";
                cin >> size;
                system("cls");
                switch (size)
                {
                case 'S':
                    cout << "\tHot Cappuccino (S) 1.00$\n\tInput Quantity: ";
                    cin >> qty;
                    cout << "\tInput Sugar(0-100)%: ";
                    cin >> sugar;
                    cout << "\tEnter Seat Number: ";
                    cin >> seatnum;
                    drinkname = "Hot Cappuccino";
                    price = 1.00;
                    break;
                case 'M':
                    cout << "\tHot Cappuccino (M) 1.25$\n\tInput Quantity: ";
                    cin >> qty;
                    cout << "\tInput Sugar(0-100)%: ";
                    cin >> sugar;
                    cout << "\tEnter Seat Number: ";
                    cin >> seatnum;
                    drinkname = "Hot Cappuccino";
                    price = 1.25;
                    break;
                case 'L':
                    cout << "\tHot Cappuccino (L) 1.50$\n\tInput Quantity: ";
                    cin >> qty;
                    cout << "\tInput Sugar(0-100)%: ";
                    cin >> sugar;
                    cout << "\tEnter Seat Number: ";
                    cin >> seatnum;
                    drinkname = "Hot Cappuccino";
                    price = 1.50;
                    break;
                default:
                    system("cls");
                    cout << "\tInput Wrong Option..!\n";
                    goto F;
                    break;
                }
                break;
            default:
                system("cls");
                cout << "\tInput Wrong Option..!\n";
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
                cout << "\tIce Latte\n\t(S) 1.00$\n\t(M) 1.25$\n\t(L) 1.50$\n\tChoose The Option(S M L): ";
                cin >> size;
                system("cls");
                switch (size)
                {
                case 'S':
                    cout << "\tIce Latte (S) 1.00$\n\tInput Quantity: ";
                    cin >> qty;
                    cout << "\tInput Sugar(0-100)%: ";
                    cin >> sugar;
                    cout << "\tEnter Seat Number: ";
                    cin >> seatnum;
                    drinkname = "Ice Latte";
                    price = 1.00;
                    break;
                case 'M':
                    cout << "\tIce Latte (M) 1.25$\n\tInput Quantity: ";
                    cin >> qty;
                    cout << "\tInput Sugar(0-100)%: ";
                    cin >> sugar;
                    cout << "\tEnter Seat Number: ";
                    cin >> seatnum;
                    drinkname = "Ice Latte";
                    price = 1.25;
                    break;
                case 'L':
                    cout << "\tIce Latte (L) 1.50$\n\tInput Quantity: ";
                    cin >> qty;
                    cout << "\tInput Sugar(0-100)%: ";
                    cin >> sugar;
                    cout << "\tEnter Seat Number: ";
                    cin >> seatnum;
                    drinkname = "Ice Latte";
                    price = 1.50;
                    break;
                default:
                    system("cls");
                    cout << "\tInput Wrong Option..!\n";
                    goto H;
                    break;
                }
                break;
            case 2:
            I:
                cout << "\tIce Cappuccino\n\t(S) 1.00$\n\t(M) 1.25$\n\t(L) 1.50$\n\tChoose The Option(S M L): ";
                cin >> size;
                system("cls");
                switch (size)
                {
                case 'S':
                    cout << "\tIce Cappuccino (S) 1.00$\n\tInput Quantity: ";
                    cin >> qty;
                    cout << "\tInput Sugar(0-100)%: ";
                    cin >> sugar;
                    cout << "\tEnter Seat Number: ";
                    cin >> seatnum;
                    drinkname = "Ice Cappuccino";
                    price = 1.00;
                    break;
                case 'M':
                    cout << "\tIce Cappuccino (M) 1.25$\n\tInput Quantity: ";
                    cin >> qty;
                    cout << "\tInput Sugar(0-100)%: ";
                    cin >> sugar;
                    cout << "\tEnter Seat Number: ";
                    cin >> seatnum;
                    drinkname = "Ice Cappuccino";
                    price = 1.25;
                    break;
                case 'L':
                    cout << "\tIce Cappuccino (L) 1.50$\n\tInput Quantity: ";
                    cin >> qty;
                    cout << "\tInput Sugar(0-100)%: ";
                    cin >> sugar;
                    cout << "\tEnter Seat Number: ";
                    cin >> seatnum;
                    drinkname = "Ice Cappuccino";
                    price = 1.50;
                    break;
                default:
                    system("cls");
                    cout << "\tInput Wrong Option..!\n";
                    goto I;
                    break;
                }
                break;
            default:
                system("cls");
                cout << "\tInput Wrong Option..!\n";
                goto G;
                break;
            }
            break;
        default:
            system("cls");
            cout << "\tInput Wrong Option..!\n";
            goto C;
            break;
        }
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
                cout << "\tApple\n\t1. (Original) 1.50$\n\t2. (Medium) 1.25$\n\t3. (Kids) 1.00$\n\tChoose The Option(O M K): ";
                cin >> size;
                system("cls");
                switch (size)
                {
                case 'O':
                    cout << "\t(Original) 1.50$\n\tInput Quantity: ";
                    cin >> qty;
                    cout << "\tEnter Seat Number: ";
                    cin >> seatnum;
                    variation = "Original";
                    drinkname = "Apple Juice";
                    price = 1.50;
                    break;
                case 'M':
                    cout << "\t(Medium) 1.25$\n\tInput Quantity: ";
                    cin >> qty;
                    cout << "\tEnter Seat Number: ";
                    cin >> seatnum;
                    variation = "Medium";
                    drinkname = "Apple Juice";
                    price = 1.25;
                    break;
                case 'K':
                    cout << "\t(Kids) 1.00$\n\tInput Quantity: ";
                    cin >> qty;
                    cout << "\tEnter Seat Number: ";
                    cin >> seatnum;
                    variation = "Kids";
                    drinkname = "Apple Juice";
                    price = 1.00;
                    break;
                default:
                    system("cls");
                    cout << "\tInput Wrong Option..!\n";
                    goto L;
                    break;
                }
                break;
            case 2:
            M:
                cout << "\tGrape\n\t1. (Original) 1.50$\n\t2. (Medium) 1.25$\n\t3. (Kids) 1.00$\n\tChoose The Option(O M K): ";
                cin >> size;
                system("cls");
                switch (size)
                {
                case 'O':
                    cout << "\t(Original) 1.50$\n\tInput Quantity: ";
                    cin >> qty;
                    cout << "\tEnter Seat Number: ";
                    cin >> seatnum;
                    variation = "Original";
                    drinkname = "Grape Juice";
                    price = 1.50;
                    break;
                case 'M':
                    cout << "\t(Medium) 1.25$\n\tInput Quantity: ";
                    cin >> qty;
                    cout << "\tEnter Seat Number: ";
                    cin >> seatnum;
                    variation = "Medium";
                    drinkname = "Grape Juice";
                    price = 1.25;
                    break;
                case 'K':
                    cout << "\t(Kids) 1.00$\n\tInput Quantity: ";
                    cin >> qty;
                    cout << "\tEnter Seat Number: ";
                    cin >> seatnum;
                    variation = "Kids";
                    drinkname = "Grape Juice";
                    price = 1.00;
                    break;
                default:
                    system("cls");
                    cout << "\tInput Wrong Option..!\n";
                    goto M;
                    break;
                }
                break;
            case 3:
            N:
                cout << "\tBlueberry\n\t1. (Original) 1.50$\n\t2. (Medium) 1.25$\n\t3. (Kids) 1.00$\n\tChoose The Option(O M K): ";
                cin >> size;
                system("cls");
                switch (size)
                {
                case 'O':
                    cout << "\t(Original) 1.50$\n\tInput Quantity: ";
                    cin >> qty;
                    cout << "\tEnter Seat Number: ";
                    cin >> seatnum;
                    variation = "Original";
                    drinkname = "Blueberry Juice";
                    price = 1.50;
                    break;
                case 'M':
                    cout << "\t(Medium) 1.25$\n\tInput Quantity: ";
                    cin >> qty;
                    cout << "\tEnter Seat Number: ";
                    cin >> seatnum;
                    variation = "Medium";
                    drinkname = "Blueberry Juice";
                    price = 1.25;
                    break;
                case 'K':
                    cout << "\t(Kids) 1.00$\n\tInput Quantity: ";
                    cin >> qty;
                    cout << "\tEnter Seat Number: ";
                    cin >> seatnum;
                    variation = "Kids";
                    drinkname = "Blueberry Juice";
                    price = 1.00;
                    break;
                default:
                    system("cls");
                    cout << "\tInput Wrong Option..!\n";
                    goto N;
                    break;
                }
                break;
            default:
                system("cls");
                cout << "\tInput Wrong Option..!\n";
                goto K;
                break;
            }
            break;
        case 2:
        O:
            cout << "\tMenu Shake\n\t1. Green Tea\n\t2. Coconut\n\t3. Mango\n\tChoose The Option(1-3): ";
            cin >> nametype;
            system("cls");
            switch (nametype)
            {
            case 1:
            P:
                cout << "\tGreen Tea\n\t(S) 1.00$\n\t(M) 1.25$\n\t(L) 1.50$\n\tChoose The Option(S M L): ";
                cin >> size;
                system("cls");
                switch (size)
                {
                case 'S':
                    cout << "\tGreen Tea (S) 1.00$\n\tInput Quantity: ";
                    cin >> qty;
                    cout << "\tEnter Seat Number: ";
                    cin >> seatnum;
                    price = 1.00;
                    drinkname = "Green Tea Frappe";
                    break;
                case 'M':
                    cout << "\tGreen Tea (M) 1.25$\n\tInput Quantity: ";
                    cin >> qty;
                    cout << "\tEnter Seat Number: ";
                    cin >> seatnum;
                    price = 1.25;
                    drinkname = "Green Tea Frappe";
                    break;
                case 'L':
                    cout << "\tGreen Tea (L) 1.50$\n\tInput Quantity: ";
                    cin >> qty;
                    cout << "\tEnter Seat Number: ";
                    cin >> seatnum;
                    price = 1.50;
                    drinkname = "Green Tea Frappe";
                    break;
                default:
                    system("cls");
                    cout << "\tInput Wrong Option..!\n";
                    goto P;
                    break;
                }
                break;
            case 2:
            Q:
                cout << "\tCoconut\n\t(S) 1.00$\n\t(M) 1.25$\n\t(L) 1.50$\n\tChoose The Option(S M L): ";
                cin >> size;
                system("cls");
                switch (size)
                {
                case 'S':
                    cout << "\tCoconut (S) 1.00$\n\tInput Quantity: ";
                    cin >> qty;
                    cout << "\tEnter Seat Number: ";
                    cin >> seatnum;
                    price = 1.00;
                    drinkname = "Coconut Frappe";
                    break;
                case 'M':
                    cout << "\tCoconut (M) 1.25$\n\tInput Quantity: ";
                    cin >> qty;
                    cout << "\tEnter Seat Number: ";
                    cin >> seatnum;
                    price = 1.25;
                    drinkname = "Coconut Frappe";
                    break;
                case 'L':
                    cout << "\tCoconut (L) 1.50$\n\tInput Quantity: ";
                    cin >> qty;
                    cout << "\tEnter Seat Number: ";
                    cin >> seatnum;
                    price = 1.50;
                    drinkname = "Coconut Frappe";
                    break;
                default:
                    system("cls");
                    cout << "\tInput Wrong Option..!\n";
                    goto Q;
                    break;
                }
                break;
            case 3:
            R:
                cout << "\tCoconut\n\t(S) 1.00$\n\t(M) 1.25$\n\t(L) 1.50$\n\tChoose The Option(S M L): ";
                cin >> size;
                system("cls");
                switch (size)
                {
                case 'S':
                    cout << "\tCoconut (S) 1.00$\n\tInput Quantity: ";
                    cin >> qty;
                    cout << "\tEnter Seat Number: ";
                    cin >> seatnum;
                    price = 1.00;
                    drinkname = "Coconut Frappe";
                    break;
                case 'M':
                    cout << "\tCoconut (M) 1.25$\n\tInput Quantity: ";
                    cin >> qty;
                    cout << "\tEnter Seat Number: ";
                    cin >> seatnum;
                    price = 1.25;
                    drinkname = "Coconut Frappe";
                    break;
                case 'L':
                    cout << "\tCoconut (L) 1.50$\n\tInput Quantity: ";
                    cin >> qty;
                    cout << "\tEnter Seat Number: ";
                    cin >> seatnum;
                    price = 1.50;
                    drinkname = "Coconut Frappe";
                    break;
                default:
                    system("cls");
                    cout << "\tInput Wrong Option..!\n";
                    goto R;
                    break;
                }
                break;
            default:
                system("cls");
                cout << "\tInput Wrong Option..!\n";
                goto O;
                break;
            }
            break;
        case 3:
        S:
            cout << "\tMenu Alcohol\n\t1. Beer\n\t2. Wine\n\tChoose The Option(1-2): ";
            cin >> op;
            system("cls");
            switch (op)
            {
            case 1:
            T:
                cout << "\tBeer\n\t1. Angkor\n\t2. Anchor\n\t3. Cabodia\n\tChoose The Option(1-3): ";
                cin >> nametype;
                system("cls");
                switch (nametype)
                {
                case 1:
                V:
                    cout << "\tAngkor\n\t(Bottle) 5.00$\n\t(Can) 1.00$\n\tChoose The Option(B C): ";
                    cin >> size;
                    system("cls");
                    switch (size)
                    {
                    case 'B':
                        cout << "\tAngkor (Bottle) 5.00$\n\tInput Quantity: ";
                        cin >> qty;
                        cout << "\tEnter Seat Number: ";
                        cin >> seatnum;
                        price = 5.00;
                        drinktype = "Bottle";
                        break;
                    case 'C':
                        cout << "\tAngkor (Can) 1.00$\n\tInput Quantity: ";
                        cin >> qty;
                        cout << "\tEnter Seat Number: ";
                        cin >> seatnum;
                        price = 1.00;
                        drinktype = "Can";
                        break;
                    default:
                        system("cls");
                        cout << "\tInput Wrong Option..!\n";
                        goto V;
                        break;
                    }
                    drinkname = "Angkor";
                    break;
                case 2:
                W:
                    cout << "\tAnchor\n\t(Bottle) 5.00$\n\t(Can) 1.00$\n\tChoose The Option(B C): ";
                    cin >> size;
                    system("cls");
                    switch (size)
                    {
                    case 'B':
                        cout << "\tAnchor (Bottle) 5.00$\n\tInput Quantity: ";
                        cin >> qty;
                        cout << "\tEnter Seat Number: ";
                        cin >> seatnum;
                        price = 5.00;
                        drinktype = "Bottle";
                        break;
                    case 'C':
                        cout << "\tAnchor (Can) 1.00$\n\tInput Quantity: ";
                        cin >> qty;
                        cout << "\tEnter Seat Number: ";
                        cin >> seatnum;
                        price = 1.00;
                        drinktype = "Can";
                        break;
                    default:
                        system("cls");
                        cout << "\tInput Wrong Option..!\n";
                        goto W;
                        break;
                    }
                    drinkname = "Anchor";
                    break;
                case 3:
                X:
                    cout << "\tCambodia\n\t(Bottle) 5.00$\n\t(Can) 1.00$\n\tChoose The Option(B C): ";
                    cin >> size;
                    system("cls");
                    switch (size)
                    {
                    case 'B':
                        cout << "\tCambodia (Bottle) 5.00$\n\tInput Quantity: ";
                        cin >> qty;
                        cout << "\tEnter Seat Number: ";
                        cin >> seatnum;
                        price = 5.00;
                        drinktype = "Bottle";
                        break;
                    case 'C':
                        cout << "\tCambodia (Can) 1.00$\n\tInput Quantity: ";
                        cin >> qty;
                        cout << "\tEnter Seat Number: ";
                        cin >> seatnum;
                        price = 1.00;
                        drinktype = "Can";
                        break;
                    default:
                        system("cls");
                        cout << "\tInput Wrong Option..!\n";
                        goto X;
                        break;
                    }
                    drinkname = "Cambodia";
                    break;
                default:
                    system("cls");
                    cout << "\tInput Wrong Option..!\n";
                    goto T;
                    break;
                }
                break;
            case 2:
            U:
                cout << "\tWine\n\t1. LATIDO 230.00$\n\t2. CALUSARI 135.00$\n\t3. MATAS 185.00$\n\tChoose The Option(1-3): ";
                cin >> nametype;
                system("cls");
                switch (nametype)
                {
                case 1:
                    cout << "\tLATIDO 230.00$\n\tInput Quantity: ";
                    cin >> qty;
                    cout << "\tEnter Seat Number: ";
                    cin >> seatnum;
                    price = 230.00;
                    drinkname = "LATIDO";
                    break;
                case 2:
                    cout << "\tCALUSARI 135.00$\n\tInput Quantity: ";
                    cin >> qty;
                    cout << "\tEnter Seat Number: ";
                    cin >> seatnum;
                    price = 135.00;
                    drinkname = "CALUSARI";
                    break;
                case 3:
                    cout << "\tMATAS 185.00$\n\tInput Quantity: ";
                    cin >> qty;
                    cout << "\tEnter Seat Number: ";
                    cin >> seatnum;
                    price = 185.00;
                    drinkname = "MATAS";
                    break;
                defautl:
                    system("cls");
                    cout << "\tInput Wrong Option..!\n";
                    goto U;
                    break;
                }
                break;
            default:
                system("cls");
                cout << "\tInput Wrong Option..!\n";
                goto S;
                break;
            }
            break;
        default:
            system("cls");
            cout << "\tInput Wrong Option..!\n";
            goto J;
            break;
        }
        break;
    default:
        system("cls");
        cout << "\tInput Wrong Option..!\n";
        goto B;
        break;
    }
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
    payment_khr = payment_usd * 4100;
    if (menuop == 1)
    {
        name = "Coffee";
        cout << "\tName Of " << name << " : " << drinkname << endl;
        cout << "\tSize (S M L) : " << size << endl;
        cout << "\tSugar(0-100)% : " << sugar << " %" << endl;
    }
    if (menuop == 2 && (type == 1 || type == 2))
    {
        name = "Drink";
        cout << "\tName Of " << name << " : " << drinkname << endl;
    }
    if (menuop == 2 && type == 1)
    {
        cout << "\tVariation (O M K) : " << variation << endl;
    }
    if (menuop == 2 && type == 2)
    {
        cout << "\tSize (S M L) : " << size << endl;
    }
    if (menuop == 2 && type == 3 && op == 1)
    {
        name = "Beer";
        cout << "\tName of " << name << " : " << drinkname << endl;
    }
    if (menuop == 2 && type == 3 && op == 2)
    {
        name = "Wine";
        cout << "\tName of " << name << " : " << drinkname << endl;
    }
    cout << "\tPrice : " << price << " $" << endl;
    cout << "\tQuantity : " << qty << endl;
    cout << "\tSeat Number : " << seatnum << endl;
    cout << "\tPayment USD : " << payment_usd << " $" << endl;
    cout << "\tPayment KHR : " << payment_khr << " Riel" << endl;
    cout << "\t=======>>Thank You For Supporting Us<<=======\n";

    return 0;
}