#include <iostream>

int max = 100;
int n = 0;
int los (int max);
int main() {
    srand(time(NULL));
    int x = rand() % (max + 1);


    do{
        int n = los(max);
        if(n == x){
            std::cout << x <<" : "<< n <<std::endl;
            break;
        } else{
            std::cout << x <<" : "<< n <<std::endl;
        }

    } while (n != x);
    return 0;
}

int los (int max){
    int n = rand() % (max + 1);
    return n;
}

