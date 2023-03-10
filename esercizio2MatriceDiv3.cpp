#include <iostream>

using namespace std;

int main()
{
    const int MATRICE = 8;
    int matrice[MATRICE][MATRICE];
    int risultato[MATRICE];
    int numRandom = 0;
    int quanti = 0;

    for (int i = 0; i < MATRICE; i++)            // da riga 13 a 22
                                                 // riempo la matrice con numeri casuali < 10
                                                 // se i numeri sono divisibili per 3 li metto dentro l'array risultato
    {
        for (int y = 0; y < MATRICE; i++)
        {
            numRandom = rand() % 10;
            matrice[i][y] = numRandom;
            if (numRandom % 3 == 0)
            {
                risultato[y] = numRandom;
                quanti++;
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
        for (int i = 0; i < quanti; i++){
            cout << risultato[i];
        }
         
         cout << "Questi sono i numeri presenti divisibili per 3\n";



}