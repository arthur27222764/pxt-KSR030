#include "pxt.h"
using namespace pxt;

namespace kspins{
    / /**
    * Get the duration of the last pulse in microseconds. This function should be called from a ``onPulsed`` handler.
    */
    //% advanced=true
    //% blockId=kspins_pulse_duration block="pulse duration (µs)"
    //% weight=21 blockGap=8
    int pulseDuration() {
        return 1;
    }

    }
}
