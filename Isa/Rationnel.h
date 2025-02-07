#include <iostream>

namespace Isa {
    class Rationnel
{
    private: 
        int num;
        int denum;

    public:
        Rationnel(int numerateur,int denominateur);
        
        void setnum(int numerateur);
        void  setdenum(int denominateur);
        int getnum();
        int getdenum();
        Rationnel addition(Rationnel a);
        Rationnel soustraction(Rationnel a);
        Rationnel multiplication(Rationnel a);
        Rationnel division(Rationnel a);
        void affichage();
        ~Rationnel();


};



}