/**
 * @file  ItemStackRequestSlotInfo.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure ItemStackRequestSlotInfo.
 *
 */
struct ItemStackRequestSlotInfo {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTSLOTINFO
public:
    struct ItemStackRequestSlotInfo& operator=(struct ItemStackRequestSlotInfo const &) = delete;
    ItemStackRequestSlotInfo(struct ItemStackRequestSlotInfo const &) = delete;
    ItemStackRequestSlotInfo() = delete;
#endif

public:
    /**
     * @hash   -566832406
     * @symbol  ?matchesContainerAndSlot\@ItemStackRequestSlotInfo\@\@QEBA_NAEBU1\@\@Z
     */
    MCAPI bool matchesContainerAndSlot(struct ItemStackRequestSlotInfo const &) const;
    /**
     * @hash   849011696
     * @symbol  ??1ItemStackRequestSlotInfo\@\@QEAA\@XZ
     */
    MCAPI ~ItemStackRequestSlotInfo();

};