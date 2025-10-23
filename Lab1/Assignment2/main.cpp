#define USE_HEADER1 0

#if USE_HEADER1
#include "header1.h"
#else
#include "header2.h"
#endif

int main() {
    f();
    return 0;
}

