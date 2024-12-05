#include <vector> 
#include <cmath>
#include <iostream>
#include <algorithm>
#include <fstream>
int main() {
 std::ifstream file("dayOne_data.txt");std::vector<int> array1, array2;
 int a, b;
    while (file >> a >> b) {array1.push_back(a); array2.push_back(b);}file.close();
    int total_dist = 0; int min1 = array1[0]; int min2 = array2[0]; bool check = true; 
    while(check){ auto it0 = std::min_element(array1.begin(), array1.end()); int min1 = *it0; array1.erase(it0);
                  auto it = std::min_element(array2.begin(), array2.end()); int min2 = *it; array2.erase(it);
    if(array1.size() == 0 || array2.size() == 0){ check = false; } total_dist += abs(min1 - min2);}
    std::printf("%i", total_dist);
}