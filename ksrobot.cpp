#include "pxt.h"

namespace ksrobotlib
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
} // namespace KSRobotCPP
