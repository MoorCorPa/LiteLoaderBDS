/**
 * @file  BiomeIdCompatibility.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace BiomeIdCompatibility.
 *
 */
namespace BiomeIdCompatibility {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @hash   -341143301
     * @symbol  ?MAX_CUSTOM_BIOMES\@BiomeIdCompatibility\@\@3IB
     */
    MCAPI extern unsigned int const MAX_CUSTOM_BIOMES;
    /**
     * @hash   -1431535537
     * @symbol  ?adjustForReservedRanges\@BiomeIdCompatibility\@\@YAIIAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI unsigned int adjustForReservedRanges(unsigned int, std::string const &);
    /**
     * @hash   -799871520
     * @symbol  ?isReserved\@BiomeIdCompatibility\@\@YA_NI\@Z
     */
    MCAPI bool isReserved(unsigned int);

};