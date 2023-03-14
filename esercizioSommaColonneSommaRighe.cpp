
#include <iostream>

using namespace std;

int main()
{
    int righe = 10;
    int colonne = 10;
    int matriceRandom[righe][colonne];

    for (int i = 0; i < righe; i++)
    {
        for (int j = 0; j < colonne; j++)
        {
            matriceRandom[i][j] = rand() % 10;  //riempo matrice con numeri random
        }
    }

    for (int i = 0; i < righe; i++)
    {
        int sommaRighe = 0;

        cout << endl;

        for (int j = 0; j < colonne; j++)
        {
            sommaRighe += matriceRandom[i][j];
            cout << matriceRandom[i][j] << "  ";
        }
        cout << " |" << sommaRighe << " ";
    }
    cout << endl;

    for (int i = 0; i < colonne; i++)
    {
        cout << "---";
    }
    cout << endl;
    for (int i = 0; i < colonne; i++)
    {
        int sommaColonne = 0;
        for (int j=0; j<righe;  j++)
        {
        sommaColonne += matriceRandom[j][i];   //inverto gli indici per sommare in "verticale", mi muovo scorrendo prima la colonna e poi cambio riga
        }
        cout << sommaColonne << " ";
    }
    
}