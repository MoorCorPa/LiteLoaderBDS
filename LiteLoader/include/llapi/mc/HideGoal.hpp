/**
 * @file  HideGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "MoveToPOIGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HideGoal.
 *
 */
class HideGoal : public MoveToPOIGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HIDEGOAL
public:
    class HideGoal& operator=(class HideGoal const &) = delete;
    HideGoal(class HideGoal const &) = delete;
    HideGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~HideGoal();
    /**
     * @hash   -593323269
     * @vftbl  1
     * @symbol  ?canUse\@HideGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   1788044713
     * @vftbl  2
     * @symbol  ?canContinueToUse\@HideGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -1285848828
     * @vftbl  4
     * @symbol  ?start\@HideGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   847418564
     * @vftbl  5
     * @symbol  ?stop\@HideGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @hash   748452821
     * @vftbl  7
     * @symbol  ?appendDebugInfo\@HideGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
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
     * @hash   -1971136080
     * @vftbl  16
     * @symbol  ?_getRepathTime\@HideGoal\@\@MEBA_KXZ
     */
    virtual unsigned __int64 _getRepathTime() const;
    /**
     * @hash   770634886
     * @vftbl  17
     * @symbol  ?_getOwnedPOI\@HideGoal\@\@MEBA?AV?$weak_ptr\@VPOIInstance\@\@\@std\@\@W4POIType\@\@\@Z
     */
    virtual class std::weak_ptr<class POIInstance> _getOwnedPOI(enum class POIType) const;
    /**
     * @hash   -348618830
     * @symbol  ??0HideGoal\@\@QEAA\@AEAVMob\@\@MMMW4POIType\@\@\@Z
     */
    MCAPI HideGoal(class Mob &, float, float, float, enum class POIType);

//private:
    /**
     * @symbol  ?_sendSoundTheAlarmAchievement\@HideGoal\@\@AEBAXXZ
     */
    MCAPI void _sendSoundTheAlarmAchievement() const;

private:

};