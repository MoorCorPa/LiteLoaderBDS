/**
 * @file  RandomSitGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RandomSitGoal.
 *
 */
class RandomSitGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMSITGOAL
public:
    class RandomSitGoal& operator=(class RandomSitGoal const &) = delete;
    RandomSitGoal(class RandomSitGoal const &) = delete;
    RandomSitGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~RandomSitGoal();
    /**
     * @hash   1764065122
     * @vftbl  1
     * @symbol  ?canUse\@RandomSitGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -1664091504
     * @vftbl  2
     * @symbol  ?canContinueToUse\@RandomSitGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   1955275451
     * @vftbl  4
     * @symbol  ?start\@RandomSitGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   1559550731
     * @vftbl  5
     * @symbol  ?stop\@RandomSitGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol  __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @hash   834226558
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@RandomSitGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   1375978415
     * @symbol  ??0RandomSitGoal\@\@QEAA\@AEAVMob\@\@MMMM\@Z
     */
    MCAPI RandomSitGoal(class Mob &, float, float, float, float);

};