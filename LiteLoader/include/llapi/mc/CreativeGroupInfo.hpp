/**
 * @file  CreativeGroupInfo.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CreativeGroupInfo.
 *
 */
class CreativeGroupInfo {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CREATIVEGROUPINFO
public:
    class CreativeGroupInfo& operator=(class CreativeGroupInfo const &) = delete;
    CreativeGroupInfo() = delete;
#endif

public:
    /**
     * @hash   1070140540
     * @symbol  ??0CreativeGroupInfo\@\@QEAA\@PEAVCreativeItemRegistry\@\@W4CreativeItemCategory\@\@AEBVHashedString\@\@IAEBVItemInstance\@\@\@Z
     */
    MCAPI CreativeGroupInfo(class CreativeItemRegistry *, enum class CreativeItemCategory, class HashedString const &, unsigned int, class ItemInstance const &);
    /**
     * @hash   -1128175711
     * @symbol  ??0CreativeGroupInfo\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI CreativeGroupInfo(class CreativeGroupInfo const &);
    /**
     * @hash   -652731253
     * @symbol  ?addCreativeItem\@CreativeGroupInfo\@\@QEAAXPEAVCreativeItemEntry\@\@\@Z
     */
    MCAPI void addCreativeItem(class CreativeItemEntry *);
    /**
     * @hash   472193836
     * @symbol  ?getIcon\@CreativeGroupInfo\@\@QEBA?BVItemInstance\@\@XZ
     */
    MCAPI class ItemInstance const getIcon() const;
    /**
     * @hash   -1726101320
     * @symbol  ?getIndex\@CreativeGroupInfo\@\@QEBAIXZ
     */
    MCAPI unsigned int getIndex() const;
    /**
     * @hash   -1680700612
     * @symbol  ?getName\@CreativeGroupInfo\@\@QEBA?BV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const getName() const;

};