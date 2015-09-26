/* 
 * File:   main.cpp
 * Author: Benet
 *
 * Created on 23 de septiembre de 2015, 18:37
 */

#include <iostream>

using namespace std;

bool checkNumber(int array[], int pos);

/*
 * 
 */
int main() {
    
     srand(time(NULL));
    
    // array unidimensionals
    
    
    int array [50];
    
    int size=sizeof(array)/sizeof(array[0]); // Saber el tamany del array
    
    cout << "Size => "<< size << endl;
    
    //obtenir 10 numeros diferents
    for(int i=0; i<size; i++){
        
        do{
        array[i]=rand()%50+1;
        }while(checkNumber(array, i));
        
        cout<<"Valor "<< i << " => " << array[i]<< endl;
    }
    
    //Ordenar de menor a major
    
    for(int i=0; i<size; i++){
        for(int j=0; j<size-1; j++){
            
            if(array[j]>array[j+1]){
                int aux=array[j];
                array[j]=array[j+1];
                array[j+1]=aux;
            }
        }
    }
        
    //Imprimir ordenats
    cout <<"Array ordenat de Menor a Major :"<< endl;
           
    for(int i=0; i<size; i++){
        
        cout<<"Valor "<< i << " => " << array[i]<< endl;
    }

    //Ordenar de Major a Menor
    
    for(int i=0; i<size; i++){
        for(int j=0; j<size-1; j++){
            if(array[j]< array[j+1]){
                int aux=array[j];
                array[j]=array[j+1];
                array[j+1]=aux;
            }
        }
    }
    
        //Imprimir ordenats
    cout <<"Array ordenat de Major a Menor :"<< endl;
           
    for(int i=0; i<size; i++){
        
        cout<<"Valor "<< i << " => " << array[i]<< endl;
    }
    
    
    
    
    return 0;
}



bool checkNumber(int array[], int pos){
    

    bool result=false;
    
    for(int i=0; i<pos; i++){
        if(array[pos]==array[i]){
            result=true;
        }
    }
    
    return result;
}
