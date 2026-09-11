#define CATCH_CONFIG_MAIN

#include "catch2/catch.hpp"
#include "prime.hpp"

TEST_CASE("Correct base_case handling half", "[is_prime_half]") {

    int modpos = 0;
    int* p_modpos = &modpos;

    REQUIRE(is_prime_half(0, p_modpos) == false);
    REQUIRE(*p_modpos == 0);

    REQUIRE(is_prime_half(1, p_modpos) == false);
    REQUIRE(*p_modpos == 0);
}

TEST_CASE("Correct base_case handling sqrt", "[is_prime_sqrt]") {

    int modpos = 0;
    int* p_modpos = &modpos;

    REQUIRE(is_prime_sqrt(0, p_modpos) == false);
    REQUIRE(*p_modpos == 0);

    REQUIRE(is_prime_sqrt(1, p_modpos) == false);
    REQUIRE(*p_modpos == 0);
}

TEST_CASE("Correct even number handling for n > 2 half", "[is_prime_half]") {

    int modpos = 0;
    int* p_modpos = &modpos;

    REQUIRE(is_prime_half(4, p_modpos) == false);
    REQUIRE(*p_modpos == 1);

    REQUIRE(is_prime_half(32, p_modpos) == false);
    REQUIRE(*p_modpos == 1);
}

TEST_CASE("Correct even number handling for n > 2 sqrt", "[is_prime_sqrt]") {

    int modpos = 0;
    int* p_modpos = &modpos;

    REQUIRE(is_prime_sqrt(4, p_modpos) == false);
    REQUIRE(*p_modpos == 1);

    REQUIRE(is_prime_sqrt(32, p_modpos) == false);
    REQUIRE(*p_modpos == 1);
}

TEST_CASE("Correct odd-divisor loop up to n/2", "[is_prime_half]") {

    int modpos = 0;
    int* p_modpos = &modpos;

    REQUIRE(is_prime_half(17, p_modpos) == true);
    REQUIRE(*p_modpos == 4);
}

TEST_CASE("Correct odd-divisor loop up to sqrt(n)", "[is_prime_sqrt]") {

    int modpos = 0;
    int* p_modpos = &modpos;

    REQUIRE(is_prime_sqrt(17, p_modpos) == true);
    REQUIRE(*p_modpos == 2);
}


TEST_CASE("Correct behavior when n_modpos == nullptr half", "[is_prime_half]") {
    int modpos = 0;
    int* p_modpos = &modpos;

    REQUIRE(is_prime_half(17, p_modpos) == true);
    REQUIRE(*p_modpos == 4);
}

TEST_CASE("Correct behavior when n_modpos == nullptr sqrt", "[is_prime_sqrt]") {
    int modpos = 0;
    int* p_modpos = &modpos;

    REQUIRE(is_prime_sqrt(17, p_modpos) == true);
    REQUIRE(*p_modpos == 2);
}

TEST_CASE("count_modpos_half(lo,hi)", "count_modpos_half"){
    REQUIRE(count_modops_half(2, 10000) == 1461014);
}

TEST_CASE("count_modpos_sqrt(lo,hi)", "count_modpos_sqrt"){
    REQUIRE(count_modops_sqrt(2, 10000) == 65956);
}