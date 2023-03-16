#include <iostream>

using namespace std;

// 1 per la vittoria
// 0 per continuare la partita
// -1 per il pareggio
int isWinner(char *arr)
{
    char vuoto = '_';

    for (int i = 0; i < 9; i += 3)
    {
        if ((arr[i] == arr[i + 1]) && (arr[i + 1] == arr[i + 2]) && (arr[i]!=vuoto) ) // ho tre x vicine
        {
            return 1; // vittoria orizzontale
        }
    }
   for(int i=0; i<3; i++)
    {
        if ((arr[i] == arr[i + 3]) && (arr[i + 3] == arr[i + 6])&& (arr[i]!=vuoto)) // ho tre x in colonna 
        {
            return 1; // vittoria verticale    
        }
    }
     
    // vittoria diagonale
    if ((arr[0]==arr[4]&& arr[4]==arr[8])&& (arr[0]!=vuoto))
    {
        return 1;
    }
    if((arr[2]==arr[4]&& arr[4]==arr[6])&& (arr[2]!=vuoto))
    {
        return 1; 
    }
    
    for (int i =0; i<9; i++)
    {
        if (arr[i]==vuoto)
        {
            return 0;
        }
    } 
 
    return -1; 
}

void stampa(char *tabella)
{
    for (int i = 0; i < 9; i++)
    {
        cout << tabella[i] << " ";
        if (i == 2 || i == 5 || i == 8) // alla fine di ogni riga (3x3) vai a capo
        {
            cout << endl;
        }
    }
}

int main()
{

    char vuoto = '_';

    // inizializzo la tabella
    char tabella[9];
    for (int i = 0; i < 9; i++)
    {
        tabella[i] = vuoto;
    }
    stampa(tabella);

    bool xIsNext = true; // gestisce il turno
    while (true)         // i turni del gioco
    {

        int mossa;

        cout << "Giocatore " << (xIsNext ? 'X' : 'O') << " inserisci la tua mossa (1-9) ";
        cin >> mossa;
        mossa--; // per capirci ;)

        while (tabella[mossa] != vuoto || (!(0 <= mossa && mossa < 9))) // controllo 2 condizioni (valido e vuoto)
        {
            cout << "Non puoi inserire qui" << endl;
            cout << "Giocatore " << (xIsNext ? 'X' : 'O') << " inserisci la tua mossa (1-9) ";
            cin >> mossa;
        }

        // se sono arrivato qui è solo perchè l'utente ha inserito un numero corretto
        xIsNext ? tabella[mossa] = 'X' : tabella[mossa] = 'O'; // se è vero metti X altrimenti metti O

        stampa(tabella);

        if (isWinner(tabella) == 1)
        {
            cout << "Hai vinto " << (xIsNext ? 'X' : 'O') << endl;
            break;
        }
        else if (isWinner(tabella) == -1)
        {
            cout << "Pareggio" << endl;
            // reset del gioco
            for (int i = 0; i < 9; i++)
            {
                tabella[i] = vuoto;
            }
            xIsNext = true;
            stampa(tabella);
        }
        else if (isWinner(tabella) == 0)
        {
            xIsNext = !xIsNext; // cambio giocatore
        }
        else
        {
            cout << "Errore nella funzione isWinner" << endl;
        }
    }
}