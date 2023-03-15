#include <iostream>
#include <string>

std::string code(std::string toCode, int k);

int main() {
    int k = 0;
    std::string toCode;
    std::cout << "Napisz ciag do zakodowania." << std::endl;
    std::cin >> toCode;
    std::cout << std::endl;
    std::cout << "Podaj krok do zakodowania." << std::endl;
    std::cin >> k;
    std::cout << std::endl;
    std::cout << code(toCode, k) << std::endl;
    return 0;
}

std::string code(std::string toCode, int k){
    std::string toCoded = "";
    for (int i = 0; i < toCode.length(); ++i) {
        char symbol = toCode[i];
        if(symbol >= 65 && symbol <= 90){
            symbol = (int)symbol+k;
            if (symbol > 90) {
                symbol = (symbol-90)+64;
                toCoded.append(1, symbol);
            } else {
                toCoded.append(1, symbol);
            }
        } else if(symbol >= 97 && symbol <= 122){
            symbol = (int)symbol+k;
            if(symbol > 122){
                symbol = (symbol-122)+96;
                toCoded.append(1, symbol);
            }
            else {
                toCoded.append(1, symbol);
            }
        } else {
            toCoded.append(1, symbol);
        }
    }
    return toCoded;
}
