/**
 * @file  RollGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RollGoal.
 *
 */
class RollGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ROLLGOAL
public:
    class RollGoal& operator=(class RollGoal const &) = delete;
    RollGoal(class RollGoal const &) = delete;
    RollGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~RollGoal();
    /**
     * @hash   498851344
     * @vftbl  1
     * @symbol  ?canUse\@RollGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -1414363570
     * @vftbl  2
     * @symbol  ?canContinueToUse\@RollGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @hash   -871291752
     * @vftbl  3
     * @symbol  ?canBeInterrupted\@RollGoal\@\@UEAA_NXZ
     */
    virtual bool canBeInterrupted();
    /**
     * @hash   202424761
     * @vftbl  4
     * @symbol  ?start\@RollGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -1959352023
     * @vftbl  5
     * @symbol  ?stop\@RollGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   429524148
     * @vftbl  6
     * @symbol  ?tick\@RollGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -617961792
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@RollGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   1697133028
     * @symbol  ??0RollGoal\@\@QEAA\@AEAVMob\@\@M\@Z
     */
    MCAPI RollGoal(class Mob &, float);

//private:
    /**
     * @symbol  ?_checkForDamagingBlocks\@RollGoal\@\@AEBA_NXZ
     */
    MCAPI bool _checkForDamagingBlocks() const;
    /**
     * @hash   1647236493
     * @symbol  ?_handleRoll\@RollGoal\@\@AEBAXHAEAVVec3\@\@AEAM1\@Z
     */
    MCAPI void _handleRoll(int, class Vec3 &, float &, float &) const;

private:

};