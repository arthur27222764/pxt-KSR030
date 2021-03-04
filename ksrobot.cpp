#include "pxt.h"

using namespace pxt;

//% weight=10 color=#00A6F0 icon="\uf085" 
namespace KSR030
{

    //%
    int mb_version()
    {
#if MICROBIT_CODAL
        return 0;
#else
        return 1;
#endif
    }
} // namespace KSR030
