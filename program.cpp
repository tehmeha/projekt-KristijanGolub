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
        cout << polje2D_prviIgrac[i][j]<< " ";
    }
    cout << endl;
}

int redak, stupac;
int br_pogodjenih = 0;
int na_redu = 1;
int napada = 2;
while(1)
{
    cout << endl;
    cout << "Igrac " << na_redu << " napada igraca " << napada << endl;
    cout << "Unesite redak: " << endl;
    cin >> redak;
    cout << "Unesite stupac: " << endl;
    cin >> stupac;
    if (polje2D[redak][stupac]==napada)
    {
      cout << "Pogodili ste neprijateljski brod: " << endl;
      br_pogodjenih++;
    }
    else
    {
      cout << "Niste pogodili brod neprijatelja: " << endl;
    }
    if( br_pogodjenih == 16 )
    {
        cout << "igrac je pobjedio:" << endl;
        break;
    }
    swap( na_redu, napada);
}
return 0;
}
