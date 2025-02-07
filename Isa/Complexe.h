#include <iostream>

namespace Isa {
    class Complexe {
    private:
         double pr;
         double pi;
    public:

        Complexe(double partre,double  partim);
        
        
        void setpr(double partre);
        void setpi(double partim);
        double getpr();
        double  getpi();
        Complexe addition(Complexe a);
        Complexe soustraction(Complexe a);
        Complexe multiplication(Complexe a);
        Complexe division(Complexe a);
        void affichage();
        ~Complexe();




};


}
