#include <iostream>


using namespace std;

//prototipi
void inserimento(int &n);
void Calcola(int n, int &n_abitanti, int &n_abitanti_attivi);
int Menu();



int main() {
    
    int N=0;
    int n_abitanti=0;
    int n_abitanti_attivi=0;
    int scelta;
    
    do{
      scelta=Menu();
      switch(scelta){
        case 1:
          inserimento(N);
          break;
        case 2:
          Calcola(N,n_abitanti,n_abitanti_attivi);
          break;
        case 0:
          cout<<"Sei uscito."<<endl;
          break;	
        default:
          cout<<"Attenzione, scelta sbagliata!"<<endl;
          break;
      } 
    }while (scelta!=0);
    
    
    return 0;
}


int Menu () {
  int scegli;
  cout<<"-------MENU'-------"<<endl;
  cout<<"1-Inserisci il numero di citta'"<<endl;
  cout<<"2-Calcola indice citta'"<<endl;
  cout<<"0-Fine"<<endl;

  cout<<"Scegli un operazione: "<<endl;
  cin>>scegli;

  return scegli;
}







void inserimento(int &n) {
    do {
        cout<<"Inserisci quante città vuoi inserire: ";
        cin>>n;
        if(n<=0) {
            cout<<"Inserire un numero positivo"<<endl;
        }
    }while(n<=0);
 
}

void Calcola(int n, int &n_abitanti, int &n_abitanti_attivi) {
    
    
    float index;
    int massimo=0,minimo=0;
    string nome, nome1, nome2;
       
    for(int i=0;i<n;i++) {
        cout<<"Inserisci il nome della citta' ";
        cin>>nome;
        cout<<"Inserisci il numero di abitanti della citta' ";
        cin>>n_abitanti;
        cout<<"Inserisci il numero di abitanti attivi: ";
        cin>>n_abitanti_attivi;
        index=float(n_abitanti_attivi*100)/n_abitanti;
        if(index>massimo) {
            massimo=index;
            nome1=nome;
        }
        
        if(index<massimo) {
            minimo=index;
            nome2=nome;
        }
    }
    
    
    cout<<"La citta' con indice di attivita' maggiore e' "<<nome1<<" con indice pari a "<<massimo<<endl;
    cout<<"La citta' con indice di attivita' minore e' "<<nome2<<" con indice pari a "<<minimo<<endl;

    
    
}
