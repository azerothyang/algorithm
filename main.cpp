#include <iostream>

int main() {
    long sum = 0;
    for (long i = 0; i < 127000000; ++i) {
        sum += i;
    }
    std::cout << sum << std::endl;
    return 0;
}