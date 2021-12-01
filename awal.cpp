#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


int main (){
	int nilai[6]={3,2,9,4,8,7};
	int sesuatu[6]={1,6,9,5,3,4};
    int sempurna[12];
	
    for(int i=0;i<12;i++){
        if (i>5){
            sempurna[i]=sesuatu[i-6];
        }
        else{
            sempurna[i]=nilai[i];
        }
    }
    
    for (int i=0;i<12;i++){
    	for (int j= i+1;j<12;j++){
        	int a=0;
        	if(sempurna[i]>sempurna[j]){
                 a=sempurna[i];
            	 sempurna[i]=sempurna [j];
            	 sempurna[j]=a;
        	 }
	    }
	}
	for(int i=0;i<12;i++){
	    cout<<sempurna[i];
	}
	
	"blabla"
	
}

