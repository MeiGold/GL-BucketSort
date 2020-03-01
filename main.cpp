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

    b.output();

    return 0;
}
