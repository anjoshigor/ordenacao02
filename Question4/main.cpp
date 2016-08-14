#include "answer4.hpp"
#include <vector>
#include <iostream>
#include <utility>
#include <algorithm>

int main() {
    std::vector<std::pair<char, int>> vector;
    int n;
    std::cin >> n;
    //each char element
    for (int i = 0; i < n; i++) {
        char v;
        std::cin >> v;
        vector.push_back(std::make_pair(v,0));
    }

    //each int element
    for (int i = 0; i < n; i++) {
        int v;
        std::cin >> v;
        vector[i].second=v;
    }

    std::sort(vector.begin(), vector.end(), compare);

    for(const auto& p : vector) {
        std::cout << p.first << " " << p.second << std::endl;
    }

}
