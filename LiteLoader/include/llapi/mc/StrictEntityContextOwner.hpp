/**
 * @file  StrictEntityContextOwner.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class StrictEntityContextOwner.
 *
 */
class StrictEntityContextOwner {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRICTENTITYCONTEXTOWNER
public:
    class StrictEntityContextOwner& operator=(class StrictEntityContextOwner const &) = delete;
    StrictEntityContextOwner(class StrictEntityContextOwner const &) = delete;
    StrictEntityContextOwner() = delete;
#endif

public:
    /**
     * @hash   879779996
     * @symbol  ??0StrictEntityContextOwner\@\@QEAA\@AEAVEntityRegistryBase\@\@VEntityId\@\@\@Z
     */
    MCAPI StrictEntityContextOwner(class EntityRegistryBase &, class EntityId);
    /**
     * @hash   -2103795479
     * @symbol  ??0StrictEntityContextOwner\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI StrictEntityContextOwner(class StrictEntityContextOwner &&);
    /**
     * @hash   -896497798
     * @symbol  ?getStrictContext\@StrictEntityContextOwner\@\@QEBA?AVStrictEntityContext\@\@XZ
     */
    MCAPI class StrictEntityContext getStrictContext() const;
    /**
     * @hash   1706337308
     * @symbol  ??4StrictEntityContextOwner\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class StrictEntityContextOwner & operator=(class StrictEntityContextOwner &&);
    /**
     * @hash   1455426906
     * @symbol  ??1StrictEntityContextOwner\@\@QEAA\@XZ
     */
    MCAPI ~StrictEntityContextOwner();

};