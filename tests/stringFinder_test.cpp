#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/stringFinder.h"

TEST_CASE( "it works" ) {
    REQUIRE(stringFinder("hello", 'l') == 2 );
    REQUIRE(stringFinder("hello", "ell") == 1 );
}