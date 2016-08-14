#include <utility>
#include <algorithm>
#include <map>

bool compare(std::pair<char, int> a, std::pair<char, int> b){
    std::map<char,int> hashColors;
    hashColors['R'] = 0;
    hashColors['G'] = 1;
    hashColors['B'] = 2;
    return hashColors[a.first] < hashColors[b.first];
}
