#include "pxt.h"

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
