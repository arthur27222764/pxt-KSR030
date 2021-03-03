#include "pxt.h"
using namespace pxt;

namespace KSRobotCPP {
    //%
    uint16_t mb_version()
    {
        
#if MICROBIT_CODAL
        return 0;
#endif
        return 1;

        
    }
}
