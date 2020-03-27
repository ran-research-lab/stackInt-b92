//
// Created by rarce on 03/27/20.
//

#include "stackInt.h"

stackInt::stackInt() {
    A = new int[4];
    allocationSize = 4;
    _top = -1;
}

bool stackInt::empty() const {
    return (_top == -1);
}


// Esta no está implementada! Implementala bien

stackInt::~stackInt()  {

}

// Implementa el resto de las member functions
