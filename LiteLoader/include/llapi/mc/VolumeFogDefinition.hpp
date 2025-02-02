/**
 * @file  VolumeFogDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure VolumeFogDefinition.
 *
 */
struct VolumeFogDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VOLUMEFOGDEFINITION
public:
    struct VolumeFogDefinition& operator=(struct VolumeFogDefinition const &) = delete;
    VolumeFogDefinition(struct VolumeFogDefinition const &) = delete;
    VolumeFogDefinition() = delete;
#endif

public:
    /**
     * @hash   -1887528011
     * @symbol  ?initialize\@VolumeFogDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVVolumeFogComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class VolumeFogComponent &) const;
    /**
     * @hash   145217683
     * @symbol  ??1VolumeFogDefinition\@\@QEAA\@XZ
     */
    MCAPI ~VolumeFogDefinition();
    /**
     * @hash   1504065791
     * @symbol  ?NAME\@VolumeFogDefinition\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NAME;
    /**
     * @hash   -1703354705
     * @symbol  ?bindType\@VolumeFogDefinition\@\@SAXXZ
     */
    MCAPI static void bindType();

};