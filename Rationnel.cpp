#include "Rationnel.h"

using namespace std;
namespace Isa {

Rationnel::Rationnel(int numerateur,int denominateur)
{       
        if( denominateur == 0 ){
                //cin >> denum ;
                exit(1);
        }
        num = numerateur;
        denum = denominateur;
       
    

}

Rationnel Rationnel::addition(Rationnel a){
            
        num = num * a.denum + denum *a.num;
        denum = denum * a.denum;
            
        return Rationnel(num,denum);
        

}
Rationnel Rationnel::soustraction(Rationnel a){
        num = num * a.denum - denum *a.num;
        denum = denum * a.denum;
            
        return Rationnel(num,denum);


        return Rationnel(num,denum);
           
}
Rationnel  Rationnel::multiplication(Rationnel a)
{
        
        num = num * a.num;
        denum = denum * a.denum;
        return Rationnel(num,denum);

}
Rationnel Rationnel::division(Rationnel a){

        num = num * a.denum ;
        denum = denum *a.num;

        return Rationnel(num,denum);

}
void Rationnel::affichage()
{

        cout << num << "/ "<<  denum <<endl;

}
void Rationnel::setnum(int numerateur){
        cout <<"numerateur "<<"";
        cin >> numerateur;
        num = numerateur;

}
void Rationnel::setdenum(int denominateur){
        cout <<"denominateur "<<"";
        cin >> denominateur;
        denum = denominateur;

}
Rationnel::~Rationnel()
{               
        cout <<"destruction..."<<"\n";



}












}