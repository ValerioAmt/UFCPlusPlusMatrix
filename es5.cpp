#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int MATRICE = 8;
    int matrice[MATRICE][MATRICE];
    
    for(int i = 0; i < MATRICE; i++) // da riga 13 a 22                                
    {
        for (int y = 0; y < MATRICE; i++)
        {
                                                  // riempo la matrice con numeri casuali < 10    
            matrice[i][y] = rand() % 10;                                                            // se i numeri sono divisibili per 3 li metto dentro l'array risultato
        }
           
    }    //stampo matrice da dx vs sx
        for(int i = MATRICE; i > 0; i --){
            for(int y = 0; y < MATRICE; y++){
            cout << matrice[i][y];
            }
         cout << endl;   
        }
    









}