#include <iostream>
using namespace std;

int main() {
   float a,b;
int opzione;
std::cin>> a >> b >> opzione;
switch(opzione){
    case 1:
       std::cout << (a*b)/2;
        break;
    case 2:
        std::cout << a*a;
        break;
    case 3:
        std::cout << a*b;
        break;
    default:
        std::cout << "Opzione non valida.";
}
   return 0;
}
