/**
 * @file  StompAttackGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "MeleeAttackGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StompAttackGoal.
 *
 */
class StompAttackGoal : public MeleeAttackGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STOMPATTACKGOAL
public:
    class StompAttackGoal& operator=(class StompAttackGoal const &) = delete;
    StompAttackGoal(class StompAttackGoal const &) = delete;
    StompAttackGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~StompAttackGoal();
    /**
     * @hash   -1638194300
     * @vftbl  1
     * @symbol  ?canUse\@StompAttackGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -590535086
     * @vftbl  2
     * @symbol  ?canContinueToUse\@StompAttackGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -959734051
     * @vftbl  4
     * @symbol  ?start\@StompAttackGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   236245373
     * @vftbl  5
     * @symbol  ?stop\@StompAttackGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   74900072
     * @vftbl  6
     * @symbol  ?tick\@StompAttackGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -2019193844
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@StompAttackGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl  8
     * @symbol  __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @symbol  __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @hash   2009901073
     * @symbol  ??0StompAttackGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI StompAttackGoal(class Mob &);

//protected:
    /**
     * @hash   -1593380678
     * @symbol  ?_attemptAttack\@StompAttackGoal\@\@IEAAXAEAVActor\@\@\@Z
     */
    MCAPI void _attemptAttack(class Actor &);

protected:

};