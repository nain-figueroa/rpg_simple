#include <iostream>
using namespace std;

//=================MENU INICIAL================================================
void menu()
{
    int i, a = 0;

    do
    {
        // Color a las letras con "La secuencia de escape ANSI"
        cout << "\033[1;32m------------------" << endl;
        cout << "|      MENU     |" << endl;
        cout << "------------------\033[0m " << endl;

        cout << "==================" << endl;
        cout << "1.-\tJUGAR" << endl;
        cout << "0.-\tSALIR" << endl;
        cout << "==================" << endl;

        cout << "\033[1;37mOpcion a elegir ->\033[0m ";
        cin >> i;

        switch (i)
        {
        case 1:
            cout << "Le dio a jugar" << endl;
            a = 1;
            break;
        case 0:
            cout << "Le dio a salir" << endl;
            a = 1;
            break;
        default:
            system("clear");
            cout << "\033[1;31m!OPCION NO VALIDA¡\033[0m" << endl;
            a = 0;
            break;
        }
    } while (a != 1);
}

int main()
{
    menu();

    return 0;
}