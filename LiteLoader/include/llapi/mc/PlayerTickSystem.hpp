/**
 * @file  PlayerTickSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PlayerTickSystem.
 *
 */
class PlayerTickSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERTICKSYSTEM
public:
    class PlayerTickSystem& operator=(class PlayerTickSystem const &) = delete;
    PlayerTickSystem(class PlayerTickSystem const &) = delete;
    PlayerTickSystem() = delete;
#endif

public:
    /**
     * @hash   572584906
     * @symbol  ?create\@PlayerTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();
    /**
     * @hash   -1057180442
     * @symbol  ?onTickAdded\@PlayerTickSystem\@\@SAXAEAUPlayerTickComponent\@\@_K\@Z
     */
    MCAPI static void onTickAdded(struct PlayerTickComponent &, unsigned __int64);
    /**
     * @hash   1494865939
     * @symbol  ?shouldTickMovementSystemOnEntity\@PlayerTickSystem\@\@SA_NAEBVEntityContext\@\@\@Z
     */
    MCAPI static bool shouldTickMovementSystemOnEntity(class EntityContext const &);

};