//
// Created by 杨晨雨 on 2021/11/9.
//

#include <iostream>
#include <array>

int main()
{
    std::array<int, 6> data = {1, 2, 4, 5, 5, 6};
    auto data2 = data;
    data.at(1) = 88; // data 中的 2 改为 88
    data[0] = 78; // data 中的 1 改为 78
    try {
        data.at(6)++; // 抛出 out_of_range
    } catch (std::out_of_range const& exc) {
        std::cout << exc.what() << '\n';
        // array::at: __n (which is 6) >= _Nm (which is 6)
    }
    data.front() += data.back();
    int* ptr = data.data();
    return 0;
}

