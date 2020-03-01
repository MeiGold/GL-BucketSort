//
// Created by golde on 3/1/2020.
//

#include <cmath>
#include <iostream>
#include "BucketSort.h"

BucketSort::BucketSort() {
    std::vector<float> bucket;
    buckets = std::vector<std::vector<float>>(countOfBuckets, bucket);
}

void BucketSort::add(const float item){
    if (std::floor(item) == 100) {// if element is 100.*
        buckets[buckets.size() - 1].emplace_back(item);
    }
    buckets[std::floor(item)].emplace_back(item);
}

void BucketSort::output() const {
    for (const auto &b: buckets) {
        for (const auto &elem : b) {
            std::cout << elem << std::endl;
        }
    }
}

int BucketSort::maxCollisionCount() const {
    int max = buckets[0].size();
    for (const auto &b: buckets) {
        if (b.size() > max)max = b.size();
    }
    return max;
}