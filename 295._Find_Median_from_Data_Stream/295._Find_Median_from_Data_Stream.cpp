#include <queue>

class MedianFinder {
public:
    // Two heaps: maxHeap for the left half, minHeap for the right half
    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>,greater<int>> minHeap;

    MedianFinder() {}

    void addNum(int num) {
        // Add to maxHeap first
        if (maxHeap.empty() || num <= maxHeap.top()) {
            maxHeap.push(num);
        } else {
            minHeap.push(num);
        }

        // Balance the heaps
        if (maxHeap.size() > minHeap.size() + 1) {
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        } else if (minHeap.size() > maxHeap.size()) {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
    }

    double findMedian() {
        if (maxHeap.size() == minHeap.size()) {
            return (maxHeap.top() + minHeap.top()) / 2.0;
        }
        return maxHeap.top();
    }
};