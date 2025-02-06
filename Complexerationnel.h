#include <iostream>
class Complexerationnel
{
    private:
         int numr;
         int numi;
         int denumr;
         int denumi;



    public:
        Complexerationnel(int numr,int denumr,int numi,int denumi);
        ~Complexerationnel();
        void setnumr(int numreel);
        void setnumi(int numimag);
        void setdenumr(int denumreel);
        void setdenumi(int denumimag );
        int  getnumr();
        int  getnumi();
        int  getdenumr();
        int  getdenumi();
        Complexerationnel addition(Complexerationnel a);
        Complexerationnel soustraction(Complexerationnel a);
        Complexerationnel multiplication(Complexerationnel a);
        Complexerationnel division(Complexerationnel a);
        void affichage();









};
