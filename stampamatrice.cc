#include <iostream>

using namespace std;

int main(){
    int n,m;
    cout<<"Inserisci la dimensione delle colonne"<<endl
    cin>>n;
    cout<<"Inserisci la dimensione delle righe"<<endl
    cin>>m;
    int mat [n][m];
    for(int i=0;i<n;i++){
        for(int j=o;j<m;j++){
            mat[i][j]=rand()%10;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=o;j<m;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}