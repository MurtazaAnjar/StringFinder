#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/stringFinder.h"

TEST_CASE( "it works" ) {
    REQUIRE(stringFinder("hello", 'l') == 2 );
    REQUIRE(stringFinder("hello", "ell") == 1 );

    REQUIRE(stringFinder("The quick brown fox", 'e') == 2 );
    REQUIRE(stringFinder("The quick brown fox", "e") == 2 );
    REQUIRE(stringFinder("The quick brown fox"," ") == 3 );
    REQUIRE(stringFinder("The quick brown fox", "quick") == 4 );
    REQUIRE(stringFinder("The quick brown fox", "quiet") == -1 );

    REQUIRE(stringFinder("The quick brown fox", 'E', false) == 2 );
    REQUIRE(stringFinder("The quick brown fox", "E", false) == 2 );
    REQUIRE(stringFinder("The thumb","T", false) == 0 );
    REQUIRE(stringFinder("The thumb", "t") == 4 );

    REQUIRE(stringFinder("The quick brown fox", 'e') == 2 );
    REQUIRE(stringFinder("The quick brown fox", 'e', true, 0 ) == 2 );
    REQUIRE(stringFinder("The quick brown fox", 'e', true, 1) == 2 );
    REQUIRE(stringFinder("The quick brown fox", 'e', true, 2) == 2 );
    REQUIRE(stringFinder("The quick brown fox", 'e', true, 3) == -1 );
    REQUIRE(stringFinder("The quick brown fox", 'e', true, 500) == -1 );


}