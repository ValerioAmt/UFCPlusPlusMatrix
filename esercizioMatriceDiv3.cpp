#include <iostream>

using namespace std;

int main()
{
    int righe = 5;
    int colonne = 5;
    int matriceRandom[righe][colonne];

    for (int i = 0; i < righe; i++)
    {
        for (int j = 0; j < colonne; j++)
        {
            matriceRandom[i][j] = rand() % 10;
        }
    }
    for (int i = 0; i < righe; i++)
    {
        cout << endl;
        for (int j = 0; j < colonne; j++)
        {
            cout << matriceRandom[i][j] << " ";
        }
    }
    int contatore = 0;
    cout << endl;
    cout << "I numeri divisibili per tre sono: ";
    for (int i = 0; i < righe; i++)
    {
        for (int j = 0; j < colonne; j++)
        {
            if (matriceRandom[i][j] % 3 == 0 && matriceRandom[i][j] != 0)
            {
                contatore++;
            }
        }
    }
    int arrayDivisibili[contatore];
    int k=0;
    for (int i = 0; i < righe; i++)
    {
        for (int j = 0; j < colonne; j++)
        {
            if (matriceRandom[i][j] % 3 == 0 && matriceRandom[i][j] != 0)
            {
                arrayDivisibili[k]= matriceRandom[i][j];
                k++;
            }
            
        }
    }
    for(int i=0; i<contatore; i++)
    {
        cout<< arrayDivisibili[i]<< " ";
    }
}