/**
 * @file  PlayerMoveSystems.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class PlayerMoveSystems.
 *
 */
class PlayerMoveSystems {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERMOVESYSTEMS
public:
    class PlayerMoveSystems& operator=(class PlayerMoveSystems const &) = delete;
    PlayerMoveSystems(class PlayerMoveSystems const &) = delete;
    PlayerMoveSystems() = delete;
#endif

public:
    /**
     * @hash   354868074
     * @symbol  ?createLocalPlayerPreMoveJumpSystem\@PlayerMoveSystems\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createLocalPlayerPreMoveJumpSystem();
    /**
     * @hash   -230526662
     * @symbol  ?createPlayerPostMoveSystem\@PlayerMoveSystems\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createPlayerPostMoveSystem();

};