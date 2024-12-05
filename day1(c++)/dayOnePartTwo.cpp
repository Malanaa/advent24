#include <vector> 
#include <cmath>
#include <iostream>
#include <algorithm>
#include <fstream>
int main() {
 std::ifstream file("dayOne_data.txt");std::vector<int> array1, array2;
 int a, b;
    while (file >> a >> b) {array1.push_back(a); array2.push_back(b);}file.close();
    int similarity_score = 0; int occurencess = 0;
    for(int it : array1){ occurencess = 0; for(int it_null : array2){
    if(it == it_null){occurencess += 1;}}
    similarity_score += (occurencess * it);} std::cout << similarity_score;
}