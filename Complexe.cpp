#include <iostream>
#include "Complexe.h"
using namespace std;
namespace Isa {
Complexe::Complexe(double partre,double partim){
        pr = partre;
        pi = partim;
        

}
        
        
void Complexe::setpr(double partre){


}
void Complexe::setpi(double partim){

}
double Complexe::getpr(){
        
        return (pi);
        }
double Complexe::getpi(){
        
        return (pr);

        }
Complexe Complexe::addition(Complexe a){
                
                pr = pr + a.pr;
                pi = pi + a.pi;

         return Complexe(pr,pi);
}
Complexe Complexe::soustraction(Complexe a){
          
                pr = pr - a.pr;
                pi = pi - a.pi;

         return Complexe(pr,pi);
        
}
Complexe Complexe:: multiplication(Complexe a){
        //(a+bi)*(c+di)=(ac-bd)+(ad+bc)
        double prtemp;

        prtemp = pr;
        cout << prtemp <<endl;
        pr  = pr*a.pr - pi*a.pi;
        pi = prtemp*a.pi + pi*a.pr;
        cout << prtemp << "/" << pi <<endl;


        return Complexe(pr,pi);
        }
Complexe Complexe::division(Complexe a){
        double prtemp ;
        prtemp = pr; 
        pr = (pr*a.pr + pi*a.pi)/(a.pr*a.pr + a.pi*a.pi);
        pi = (pi * a.pr - prtemp * a.pi)/(a.pr*a.pr + a.pi*a.pi);

     return Complexe(pr,pi);

       }
void Complexe::affichage(){
        
        if(pi > 0){
                if(pi == 1 ){
                        cout << pr << " + i"<<endl;

                }
                else {
                        cout <<pr<<" + "<< pr << "i"<<endl;
                }

                }
        else if(pi == -1  ){

                        cout <<pr<< " - i"<<endl;

                }
        else if (pi == 0){
                       cout << pr<<endl;
                        }
        else {
                        cout << pr << " + "<< pi<< "i"<<endl;
        }

}
Complexe::~Complexe(){


    cout <<"destroying.."<<endl;
}







}
