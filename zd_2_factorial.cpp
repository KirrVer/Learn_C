#include <iostream>

int main() {
    int N;
    double factorial = 1;
    std::cout << "Podaj liczbe" << std::endl;
    std::cin >> N;
    for(int i = 1; i <= N; i++){
        factorial*=i;
    }
    std::cout << "factorial " <<  N << " rowny: " << factorial << std::endl;

    return 0;
}
