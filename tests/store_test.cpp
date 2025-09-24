#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/store.hpp"

TEST_CASE( "it returns Hello World" ) {
  Store store = Store("CSC 122 Pet Grooming Emporium");
  REQUIRE( store.get_name() == "CSC 122 Pet Grooming Emporium" );
}
