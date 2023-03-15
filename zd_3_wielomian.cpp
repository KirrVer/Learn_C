#include <iostream>

int main() {
    int a, b, c, d, p, x;
    std::cout << "Wprowadz wartosci a, b, c" << std::endl;
    std::cin >> a >> b >> c;
    std::cout << "Wprowadz wartosc x" << std::endl;
    std::cin >> x;
    std::cout << std::endl;
    std::cout << "Wprowadz wartosc wolnego wolnego czlonka  d " << std::endl;
    std::cin >> d;
    std::cout << std::endl;
    p = ((a*x+b)*x+c)*x+d;
    std::cout << "Wartosc wielomianu: " << p << std::endl;
    return 0;
}
