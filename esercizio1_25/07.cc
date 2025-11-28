#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

ContaParole(char* pwords[]);
void GeneraParole(char* pwords[],int parole,char &random[])

int main(int arcg,char *argv[]){
    srand(time(NULL));
    char text[5000];
    char* pwords[5000];
    char random[7];
    for(int i=0;i<5000;i++){
        pwords[i]=NULL;
    }
    char c;
    int t=0,p=0,parole=0;
if(arcg!=2){
        cout<<"Errore:expected 'eseguibile' e 'file'"<<endl;
        exit(0);
    }
    fstream input;

    input.open(argv[1], ios::in);

    if (input.fail())
    {
        cout << "Il file dato in input " << argv[1] << " non esiste!" << endl;
    }
    while(!input.eof()){
        input.get(c);
        text[t]=c;
        if((text[t-1]==' '||text[t-1]=='\n')&&((text[t]>='a'&&text[t]<='z')||(text[t]>='A'&&text[t]<='Z'))){
            pwords[p]=c;
            p++;
        }
        t++;
    }
    parole=ContaParole(pwords[]);
    GeneraParole(pwords[],parole,random[]);
    
}

int ContaParole(char* pwords[]){
    int conta=0;
    for(int i=0;i<5000;i++){
        if(pwords[i]!=NULL){
            conta++
        }else{
            break;
        }
    }
    return conta;
}

void GeneraParole(char*pwords[],int parole,char &random[]){
    int a=0;
    for(int i=0;i<6;i++){
        a=rand()%parole;
        random[i]=pwords[a];
    }
    random[7]='\0';
}