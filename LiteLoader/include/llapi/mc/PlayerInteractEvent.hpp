/**
 * @file  PlayerInteractEvent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure PlayerInteractEvent.
 *
 */
struct PlayerInteractEvent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERINTERACTEVENT
public:
    struct PlayerInteractEvent& operator=(struct PlayerInteractEvent const &) = delete;
    PlayerInteractEvent() = delete;
#endif

public:
    /**
     * @hash   -1781971627
     * @symbol  ??0PlayerInteractEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI PlayerInteractEvent(struct PlayerInteractEvent const &);
    /**
     * @hash   2135304527
     * @symbol  ??1PlayerInteractEvent\@\@QEAA\@XZ
     */
    MCAPI ~PlayerInteractEvent();

};