/**
 * @file  BegGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BegGoal.
 *
 */
class BegGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEGGOAL
public:
    class BegGoal& operator=(class BegGoal const &) = delete;
    BegGoal(class BegGoal const &) = delete;
    BegGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BegGoal();
    /**
     * @hash   -1419909239
     * @vftbl  1
     * @symbol  ?canUse\@BegGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -755239257
     * @vftbl  2
     * @symbol  ?canContinueToUse\@BegGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -1408980830
     * @vftbl  4
     * @symbol  ?start\@BegGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   163302658
     * @vftbl  5
     * @symbol  ?stop\@BegGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   -791273619
     * @vftbl  6
     * @symbol  ?tick\@BegGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   1760403765
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@BegGoal\@\@EEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   -962341650
     * @symbol  ??0BegGoal\@\@QEAA\@AEAVMob\@\@AEBV?$vector\@VItemDescriptor\@\@V?$allocator\@VItemDescriptor\@\@\@std\@\@\@std\@\@MHH\@Z
     */
    MCAPI BegGoal(class Mob &, std::vector<class ItemDescriptor> const &, float, int, int);

//private:
    /**
     * @hash   -478508509
     * @symbol  ?_playerHoldingInteresting\@BegGoal\@\@AEAA_NPEAVPlayer\@\@\@Z
     */
    MCAPI bool _playerHoldingInteresting(class Player *);

private:

};