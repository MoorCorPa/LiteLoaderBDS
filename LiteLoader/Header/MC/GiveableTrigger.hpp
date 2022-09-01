/**
 * @file  GiveableTrigger.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure GiveableTrigger.
 *
 */
struct GiveableTrigger {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GIVEABLETRIGGER
public:
    struct GiveableTrigger& operator=(struct GiveableTrigger const &) = delete;
    GiveableTrigger() = delete;
#endif

public:
    /**
     * @symbol ??0GiveableTrigger@@QEAA@AEBU0@@Z
     * @hash   -860609371
     */
    MCAPI GiveableTrigger(struct GiveableTrigger const &);
    /**
     * @symbol ?addItem@GiveableTrigger@@QEAAXAEBVItemDescriptor@@@Z
     * @hash   1867025056
     */
    MCAPI void addItem(class ItemDescriptor const &);
    /**
     * @symbol ??1GiveableTrigger@@QEAA@XZ
     * @hash   281887833
     */
    MCAPI ~GiveableTrigger();

};