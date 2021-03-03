#include "pxt.h"
using namespace pxt;
namespace KSRobotCPP
{

    //%
    int mb_version()
    {
        int v = 0;

#if MICROBIT_CODAL
        v = 0;
#endif
        v = 1;

        return v;
    }

} // namespace KSRobotCPP
