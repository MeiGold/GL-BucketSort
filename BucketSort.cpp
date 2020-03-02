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
    int index;
    if (std::floor(item) == 100) {// if element is 100.*
        index = buckets.size() - 1;
    }
    else {
        index = std::floor(item);
    }
    int l = 0, h = buckets[index].size(), indexToPlace = 0, oldI = -1;
    while (l != h) {
        if (oldI == indexToPlace) {
            break;
        }
        oldI = indexToPlace;
        if (buckets[index][(l + h) / 2] > item) {
            indexToPlace = h = (l + h) / 2;
        } else if (buckets[index][(l + h) / 2] < item) {
            indexToPlace = l = (l + h) / 2 + 1;
        } else {
            indexToPlace = (l + h) / 2;
            break;
        }
    }
    buckets[index].insert(buckets[index].begin() + indexToPlace, item);

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