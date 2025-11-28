#include <iostream>
#include "email.h"

void controllo(char parola[]){
    bool chiocciola = false;
    bool lunghezza = true;
    bool caratteri = true;
    int dim=0;
    for(int i=0;i<255,i++){
        if(chiocciola==false){
            if(parola[i]=='@'){
                chicciola=true;
                dim=i;
            }
        }else{
            if(parola[i]=='@'){
                return 0;
            }
        }
    }
    for(int i=0;i<dim,i++){
        if(chiocciola==false){
            
        }
    }
}