#include <iostream>
#include <cstdint>
#include <vector>

int main(){
    // Input Data: An array of zero coupon yields along with volatilities
    auto input_ts = std::vector<std::pair<std::uint32_t, std::pair<float, float>>>{
        {1, {0.0475, 0.15}}, {2, {0.0525, 0.16}}, {3, {0.0564, 0.17}}, {4, {0.057, 0.14}},
         {5, {0.058, 0.14}}, {6, {0.061, 0.11}}, {7, {0.062, 0.12}}, {8, {0.064, 0.13}},
          {9, {0.0645, 0.13}}, {10, {0.0645, 0.13}}
        };
    std::cout<<"Input Term Structure:\n";
    for (auto &v : input_ts){
        auto &[mat, ts] = v;
        std::cout<<"Maturity(Years): " << mat <<
        " Yield (%): " << ts.first * 100 <<
        " Volatility (%): " << ts.second * 100 << "\n";
    }

    return 0;

}
