// prime.hpp
 /** 
  * @brief Checks whether an integer is prime by testing odd divisors up to n/2.
  * 
  * @param n The integer to test for primality.
  * 
  * @param n_modops Pointer to a counter for modulo operations, or nullptr if operation counting is not needed.
  * 
  * @return true if n is prime; false otherwise.
  * 
  * The function first handles values less than 2, checks the special case n == 2, and eliminates even numbers. It then tests odd divisors from 3 through n/2.
  * 
  * If n_modops is not nullptr, the function increments the counter pointed to by n_modops each time a modulo operation is performed.
 */
 bool is_prime_half(int n, int* n_modops = nullptr);
 /**
  * @brief Checks whether an integer is prime by testing odd divisors up to the square root of n.
  * 
  * @param n The integer to test for primality.
  * 
  * @param n_modops Pointer to a counter for modulo operations, or nullptr if operation counting is not needed.
  * 
  * @return true if n is prime; false otherwise.
  * 
  * The function first handles values less than 2, checks the special case n == 2, and eliminates even numbers. It then tests odd divisors from 3 through the square root of n.
  * 
  * If n_modops is not nullptr, the function increments the counter pointed to by n_modops each time a modulo operation is performed.
 */
 bool is_prime_sqrt(int n, int* n_modops = nullptr);
 /**
  * @brief Counts the total number of modulo operations performed by is_prime_half over a range of integers.
  * 
  * @param lo The lower bound of the range to test.
  * 
  * @param hi The upper bound of the range to test.
  *
  * @return The total number of modulo operations performed while testing all integers in the specified range with is_prime_half.
  *
  * The function calls is_prime_half for each integer from lo through hi, inclusive, and accumulates the number of modulo operations performed by all of the primality tests.
  */
 int count_modops_half(int lo, int hi);
 /**
  * @brief Counts the total number of modulo operations performed by is_prime_sqrt over a range of integers.
  * 
  * @param lo The lower bound of the range to test.
  * 
  * @param hi The upper bound of the range to test.
  *
  * @return The total number of modulo operations performed while testing all integers in the specified range with is_prime_sqrt.
  *
  * The function calls is_prime_sqrt for each integer from lo through hi, inclusive, and accumulates the number of modulo operations performed by all of the primality tests.
  */
 int count_modops_sqrt(int lo, int hi);