#include <iostream>
#include <algorithm>
using namespace std;

int main ()
{
    int polje2D_prviIgrac [10][10] =
                            {{0,0,0,1,0,0,0,0,0,0},
                            {0,0,0,1,0,0,0,0,0,0},
                            {0,0,0,1,0,0,0,0,0,1},
                            {1,0,0,0,0,0,0,0,0,1},
                            {1,0,0,1,1,0,0,0,0,0},
                            {1,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,1,1,1,1,1,1}};
    int polje2D_drugiIgrac [10][10] =
                            {{1,1,0,0,0,0,1,1,1,1},
                            {0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,1,1,1,0,0},
                            {0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,1,0,0,0,1},
                            {0,0,0,0,0,1,0,0,0,1},
                            {1,1,0,0,0,0,0,0,0,1},
                            {0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0}};
    int polje2D_prviIgrac_pogadja [10][10] =
                            {{0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0}};
    int polje2D_drugiIgrac_pogadja [10][10] =
                            {{0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0}};
int redak, stupac;
int prvi_igrac_pogodio = 0, drugi_igrac_pogodio = 0;
int na_redu = 1;
int napada = 2;
while(1)
{
    cout << endl;
    cout << "Igrac " << na_redu << " napada igraca " << napada << endl;

    cout << "    ";
    for (int i = 0; i < 10; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "    ";
    for (int i = 0; i < 10; i++)
    {
        cout << "--";
    }
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << i << "|  ";
        for (int j = 0; j < 10; j++)
        {
            if (na_redu == 1)
            {
                if( polje2D_prviIgrac_pogadja[i][j] == 1 )
                    cout << "+" << " ";
                else if( polje2D_prviIgrac_pogadja[i][j] == -1 )
                    cout << "-" << " ";
                else
                    cout << "0" << " ";
            }
            if (na_redu == 2)
            {
                if( polje2D_drugiIgrac_pogadja[i][j] == 1 )
                    cout << "+" << " ";
                else if( polje2D_drugiIgrac_pogadja[i][j] == -1 )
                    cout << "-" << " ";
                else
                    cout << "0" << " ";
            }
        }
        cout << endl;
    }

    cout << "Unesite redak: " << endl;
    cin >> redak;
    cout << "Unesite stupac: " << endl;
    cin >> stupac;
    if (na_redu == 1)
    {
        if(polje2D_drugiIgrac[redak][stupac] == 1)
        {
            cout << "Pogodili ste neprijateljski brod: " << endl;
            polje2D_prviIgrac_pogadja[redak][stupac] = 1;
            prvi_igrac_pogodio++;
        }
        else
        {
          cout << "Niste pogodili brod neprijatelja: " << endl;
          polje2D_prviIgrac_pogadja[redak][stupac] = -1;
        }
    }
    else if (na_redu == 2)
    {
        if(polje2D_prviIgrac[redak][stupac] == 1)
        {
            cout << "Pogodili ste neprijateljski brod: " << endl;
            polje2D_drugiIgrac_pogadja[redak][stupac] = 1;
            drugi_igrac_pogodio++;
        }
        else
        {
          cout << "Niste pogodili brod neprijatelja: " << endl;
          polje2D_drugiIgrac_pogadja[redak][stupac] = -1;
        }
    }

    if( prvi_igrac_pogodio == 16 )
    {
        cout << "Pobjedio je prvi igrac 1." << endl;
        break;
    }
    if( drugi_igrac_pogodio == 16 )
    {
        cout << "Pobjedio je drugi igrac 2." << endl;
        break;
    }
    swap( na_redu, napada);
}
return 0;
}
