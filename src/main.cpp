 #include <iostream>
 #include "prime.hpp"

 int main() {
     constexpr int LO = 2, HI = 10'000;

     int half_ops = count_modops_half(LO, HI);
     int sqrt_ops = count_modops_sqrt(LO, HI);
     
     std::cout << half_ops << "\n"; // 1461014
     std::cout << sqrt_ops << "\n"; // 65956
     return 0;
 }