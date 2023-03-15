#include <iostream>
#include <cmath>
double monteCarlo(int a, int b, int N);
double randomPoint(double a, double b);
int main() {
    int a, b, N;
    std::cout << "Podsj przedzial a "<< std::endl;
    std::cin >> a;
    std::cout << std::endl;
    std::cout << "Podsj przedzial b "<< std::endl;
    std::cin >> b;
    std::cout << std::endl;
    std::cout << "Podsj liczbe losowanych punktow N "<< std::endl;
    std::cin >> N;
    std::cout << std::endl;
    std::cout << "Pole powierzchni: " << monteCarlo(a,b, N) << std::endl;
    return 0;
}

double randomPoint(double a, double b) {
    return a + (double)rand()/(double)(RAND_MAX+1) * (b-a);
}
///1 jeżeli punkt leży nad osią OY i jednocześnie pod wykresem funkcji całkowanej
///-1 jeżeli punkt leży pod osią OY i jednocześnie nad wykresem funkcji całkowanej
///0 w przeciwnym razie
int funcIn(double x, double y) {
    if (( y > 0) && (y <= sin(x)))
        return 1;
    else if (( y > 0) && (y <= sin(x)))
        return -1;
    return 0;
}
double monteCarlo(int a, int b, int N){
    int  pointsIn = 0;
    for (int i=0; i<N; i++) {
        pointsIn += funcIn(randomPoint(a, b), randomPoint(-1, 1));
    }

    double pole = (pointsIn / (double)N);
    return pole;
}