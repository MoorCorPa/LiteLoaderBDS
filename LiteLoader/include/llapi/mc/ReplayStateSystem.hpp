/**
 * @file  ReplayStateSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ReplayStateSystem.
 *
 */
class ReplayStateSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REPLAYSTATESYSTEM
public:
    class ReplayStateSystem& operator=(class ReplayStateSystem const &) = delete;
    ReplayStateSystem(class ReplayStateSystem const &) = delete;
    ReplayStateSystem() = delete;
#endif

public:
    /**
     * @hash   1356264170
     * @symbol  ?createAddReplayStateComponentSystem\@ReplayStateSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createAddReplayStateComponentSystem();
    /**
     * @hash   320033530
     * @symbol  ?createReplayStateSystem\@ReplayStateSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createReplayStateSystem();

};