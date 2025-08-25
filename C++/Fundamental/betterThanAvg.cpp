#include <vector>

bool betterThanAverage(std::vector<int> classPoints, int yourPoints) {
    long long sum = yourPoints;          
    for (int p : classPoints) sum += p;
    double avg = static_cast<double>(sum) / (classPoints.size() + 1);
    return yourPoints > avg;
}