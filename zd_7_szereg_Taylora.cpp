#include <iostream>
#include <cmath>
void printTableGrad(int a, int b, int x);
double taylorCos (double a);
int main() {

/// Akceptuje ograniczenia w stopniach.
    printTableGrad(-1, 10, 2);
    return 0;
}

double taylorCos (double a){
    double cos = 0;
        cos = 1-(pow(a,2)*0.5)+(((double)1/24)* pow(a, 4))+(((double)1/720)* pow(a, 6));
    return cos;
}

void printTableGrad(int a, int b, int x){
    std::cout << "kror" << "  "<< "cos_biblotek"<< "  "<< "szereg Taylora"<<  "  "<<std::endl;
    for (int i = a; i < b; i += x) {
        double agr = i*M_PI/180;
        std::cout << x << "      "<< cos(agr)<< "       "<< taylorCos(agr)<<  "  "<<std::endl;
    }
}

