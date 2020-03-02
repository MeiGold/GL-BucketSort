#include <iostream>
#include <random>
#include "BucketSort.h"

int main() {
    BucketSort b;
//    float num;
//    std::cin >> num;
//    while (num != 0.0) {
//        b.add(num);
//        std::cin >> num;
//    }
    std::random_device dev;
    std::mt19937 generator(dev());
    auto distribution = std::uniform_real_distribution<float>(0.0, 100.0);
    int count;
    std::cin >> count;
    float randomNumber = 0;
    for (int i = 0; i < count; ++i) {
        randomNumber = distribution(generator);
        while (!randomNumber) {
            randomNumber = distribution(generator);
        }
        b.add(randomNumber);
    }


    std::cout << "Sorted array(using bucket sort): " << std::endl;
    b.output();
    std::cout << "Max collisions: " << b.maxCollisionCount() << std::endl;
    return 0;
}
