#include <iostream>

using namespace std;

float capitale_maturato(int k,float α,float γ,float σ){
    if(k==0){
        return α;
    }else{
        return (1 + γ) * capitale_maturato(k-1,α,γ,σ) - σ;
    }
}
int main(){
    int k=0;
    float a,b,c;
    cout<<"inserisci il numero dei mesi dell'investimento"<<endl;
    cin>>k;
    if(k<6){
        cout<<"Errore"<<endl;
        break;
    }
    cout<<"inserisci il capitale inizialmente investito"<<endl;
    cin>>a;
    cout<<"inserisci la percentuale di rendimento mensile"<<endl;
    cin>>b;
    cout<<"inserisci l'ammentare delle spese di gestione"<<endl;
    cin>>b;
    cout<<"Il capitale maturato ammonta a "<<capitale_maturato(k,a,b,c)<<endl;
}