/**
 * @file  PaddleBehaviorUtility.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace PaddleBehaviorUtility.
 *
 */
namespace PaddleBehaviorUtility {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @hash   -1664272287
     * @symbol  ?computePaddleForcesBasedOnGaze\@PaddleBehaviorUtility\@\@YAXAEAVVec3\@\@AEAM1MMM\@Z
     */
    MCAPI void computePaddleForcesBasedOnGaze(class Vec3 &, float &, float &, float, float, float);
    /**
     * @hash   1768591518
     * @symbol  ?setPaddleForce\@PaddleBehaviorUtility\@\@YA_NAEAUPaddle\@\@UTick\@\@M\@Z
     */
    MCAPI bool setPaddleForce(struct Paddle &, struct Tick, float);
    /**
     * @hash   -131528162
     * @symbol  ?setPaddleState\@PaddleBehaviorUtility\@\@YA_NAEAUPaddle\@\@AEAVSynchedActorData\@\@_NW4Side\@\@UTick\@\@22\@Z
     */
    MCAPI bool setPaddleState(struct Paddle &, class SynchedActorData &, bool, enum class Side, struct Tick, bool, bool);

};