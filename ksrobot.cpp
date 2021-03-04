#include "pxt.h"

namespace input
{

    /**
    * Reads the loudness through the microphone from 0 (silent) to 255 (loud)
    */
    //% blockId=device_get_mb_version block="mb_version"
    //% weight=34 blockGap=8
    //% group="micro:bit (V2)"
    int mb_version()
    {
#if MICROBIT_CODAL
        return 0;
#else
        return 1;
#endif
    }
} // namespace KSRobotCPP
