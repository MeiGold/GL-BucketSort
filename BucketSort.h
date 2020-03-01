//
// Created by golde on 3/1/2020.
//

#ifndef BUCKETSORT_BUCKETSORT_H
#define BUCKETSORT_BUCKETSORT_H

#include <vector>

static const int countOfBuckets = 100;

class BucketSort {
private:
    std::vector<std::vector<float>> buckets;
public:
    BucketSort();
    void add(float item);
    void output() const;
    int maxCollisionCount() const;
};


#endif //BUCKETSORT_BUCKETSORT_H
