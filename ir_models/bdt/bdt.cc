#include <iostream>
#include <cstdint>
#include <vector>

int main(){
    // Input Data: An array of zero coupon yields along with volatilities
    auto input_ts = std::vector<std::pair<std::uint32_t, float>>{
        {1, 0.05}, {2, 0.06}, {3, 0.06}, {4, 0.05}, {5, 0.06}, {6, 0.06},
        {7, 0.05}, {8, 0.06}, {9, 0.06}, {10, 0.05}
        };
    std::cout<<"Input Term Structure:\n";
    for (auto &v : input_ts){
        auto &[mat, yield] = v;
        std::cout<<"Maturity(Years): " << mat << " Yield (%): " << yield * 100 << "\n";
    }

    return 0;

}
