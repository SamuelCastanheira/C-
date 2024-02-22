#include "1-vector.h"
#include "3-vector.cpp"
#include <iostream>
#include <cmath>
using namespace std;

double sqrt_sum(Vector& v){
    double sum = 0;
    for (int i=0;i!=v.size();++i){
        sum+=sqrt(v[i]);
    }
    return sum;
}

double read_and_sum(Vector& v){
    for (int i=0;i!=v.size();i++){
        cin>>v[i];
    }

    double sum = 0;
    for (int i=0;i!=v.size();i++){
        sum+=v[i];
    }
    return sum;
}

int main (void){
    int size;
    cout<<"Tamanho do vetor" <<"\n";
    cin>>size; 
    Vector vector(size);
    cout<<read_and_sum(vector)<<'\n';
    cout<<sqrt_sum(vector)<<'\n';
}