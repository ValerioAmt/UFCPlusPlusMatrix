#include <iostream>

using namespace std;

int main()
{
    const int MATRICE = 8;
    int matrice[MATRICE][MATRICE];
    int risultato[MATRICE];
    int numRandom = 0;

    for (int i = 0; i < MATRICE; i++)
    {
        for (int y = 0; y < MATRICE; i++)
        {
            numRandom = rand() % 10;
            matrice[i][y] = numRandom;
        }
    }
    for (int i = 0; i < MATRICE; i++)
    {
        for (int y = 0; y < MATRICE; y++)
        {
            if (numRandom % 3 == 0)
            {
                risultato[y] = numRandom;
            }
        }
    }
        cout <<" STAMPA " <<endl;

        for (int i = 0; i < MATRICE; i ++){
            for (int y = 0; y < MATRICE; y++){

                cout << matrice[i][y] <<" ";
            }
        cout << endl;
        }
        for (int i = 0; i < matrice; i++){
            cout << matrice;
        }
         
         cout << "Questi sono i numeri presenti divisibili per 3\n";



}