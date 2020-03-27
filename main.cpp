#define CATCH_CONFIG_MAIN


#include "catch.hpp"
#include "stackInt.h"
#include <iostream>

using namespace std;



// Test cases for the stackInt class

TEST_CASE( "stackInt", "[stackInt]" ) {
    stackInt S;
    CHECK(S.empty() == true);
    // cree sus propias pruebas que validen el resto de las funciones
    // (excepto el constructor y destructor)
}