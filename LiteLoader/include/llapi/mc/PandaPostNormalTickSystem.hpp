/**
 * @file  PandaPostNormalTickSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class PandaPostNormalTickSystem.
 *
 */
class PandaPostNormalTickSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PANDAPOSTNORMALTICKSYSTEM
public:
    class PandaPostNormalTickSystem& operator=(class PandaPostNormalTickSystem const &) = delete;
    PandaPostNormalTickSystem(class PandaPostNormalTickSystem const &) = delete;
    PandaPostNormalTickSystem() = delete;
#endif

public:
    /**
     * @hash   -300408028
     * @symbol  ?createSystem\@PandaPostNormalTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @hash   672439869
     * @symbol  ?_doPandaPostNormalTickSystem\@PandaPostNormalTickSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doPandaPostNormalTickSystem(class StrictEntityContext const &, class ActorOwnerComponent &);

private:

};