/**
 * @file  DamageOverTimeComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DamageOverTimeComponent.
 *
 */
class DamageOverTimeComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DAMAGEOVERTIMECOMPONENT
public:
    class DamageOverTimeComponent& operator=(class DamageOverTimeComponent const &) = delete;
    DamageOverTimeComponent(class DamageOverTimeComponent const &) = delete;
    DamageOverTimeComponent() = delete;
#endif

public:
    /**
     * @hash   -1869249368
     * @symbol  ?addAdditionalSaveData\@DamageOverTimeComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   -458435188
     * @symbol  ?getDamageTime\@DamageOverTimeComponent\@\@QEBAHXZ
     */
    MCAPI int getDamageTime() const;
    /**
     * @hash   -76192698
     * @symbol  ?getDamageTimeInterval\@DamageOverTimeComponent\@\@QEBAHXZ
     */
    MCAPI int getDamageTimeInterval() const;
    /**
     * @hash   1895729662
     * @symbol  ?getHurtValue\@DamageOverTimeComponent\@\@QEBAHXZ
     */
    MCAPI int getHurtValue() const;
    /**
     * @hash   -1553221254
     * @symbol  ?readAdditionalSaveData\@DamageOverTimeComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -1230355398
     * @symbol  ?setDamageTime\@DamageOverTimeComponent\@\@QEAAXH\@Z
     */
    MCAPI void setDamageTime(int);

};