#include <vector> 
#include <cmath>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>
#include <sstream>

int main() {
    std::ifstream file("dayTwo_data.txt"); std::string a; std::vector<int> array; int safe_reports = 0;
    while (std::getline(file, a)) { std::stringstream stream_(a); int number; while (stream_ >> number) { array.push_back(number);}
        int season = (array[0] - array.back()); std::string steep;
        if(season > 0){ for(int i = 0; i < array.size() - 1; i++){ if((array[i] - array[i+1]) > 0 && ((array[i] - array[i+1]) >= 1 && (array[i] - array[i+1]) <= 3)){}else{ steep = "n";  break;}
        }}else{for(int i = 0; i < array.size() - 1; i++){
        if((array[i] - array[i+1]) < 0 && (abs(array[i] - array[i+1]) >= 1 && abs(array[i] - array[i+1]) <= 3)){
        }else{ steep = "n"; break;}
        }}if(steep != "n"){ safe_reports += 1;
        } else { for(int i = 0; i < array.size(); i++){steep = "";
        std::vector<int> new_array = array;
        new_array.erase(new_array.begin() + i);
        int season = (new_array[0] - new_array.back()); if(season > 0){ for(int i = 0; i < new_array.size() - 1; i++){ if((new_array[i] - new_array[i+1]) > 0 && ((new_array[i] - new_array[i+1]) >= 1 && (new_array[i] - new_array[i+1]) <= 3)){ steep = "d"; }else{ steep = "n";  break;}
        }if(steep == "d"){break;
                }}else{for(int i = 0; i < new_array.size() - 1; i++){if((new_array[i] - new_array[i+1]) < 0 && (abs(new_array[i] - new_array[i+1]) >= 1 && abs(new_array[i] - new_array[i+1]) <= 3)){
        steep = "d";}else{ steep = "n"; break;}
        }if(steep == "d"){break;
        }}}if(steep != "n"){ safe_reports += 1;}}array.clear();}std::printf("%i \n", safe_reports);
}