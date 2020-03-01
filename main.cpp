#include <iostream>
#include <vector>
#include "BucketSort.h"

int main() {
    BucketSort b;
    float num;
    std::cin >> num;
    while (num != 0.0) {
        b.add(num);
        std::cin >> num;
    }
    std::cout << "Sorted array(using bucket sort): " << std::endl;
    b.output();
    std::cout << "Max collisions: " << b.maxCollisionCount() << std::endl;
    return 0;
}
