#include <iostream>
#include <random>

using namespace std;

int main()                //controllo verticale
{
    int n = 0;
    cout << "inserisci il numero di righe: " << endl;
    cin >> n;
    int matrice[n][2];
    

    for (int i = 0; i < n; i++)
    {
        cout << endl;
        for (int j = 0; j < 2; j++)
        {
            matrice[i][j] = rand() %10;
            cout << matrice[i][j] << " ";
        }
    }
    for (int i = 0; i < n-1; i++)
    {
        for(int j= (i+1); j<=n; j++)
        {
        if (matrice[i][0] == matrice [j][0] && matrice [i][1]==matrice [j][1])
        {
            return true;
        }
        }
    }
}
