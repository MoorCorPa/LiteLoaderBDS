/**
 * @file  GroundedConstraint.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GroundedConstraint.
 *
 */
class GroundedConstraint {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GROUNDEDCONSTRAINT
public:
    class GroundedConstraint& operator=(class GroundedConstraint const &) = delete;
    GroundedConstraint(class GroundedConstraint const &) = delete;
    GroundedConstraint() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~GroundedConstraint();
    /**
     * @hash   242895116
     * @vftbl  1
     * @symbol  ?isSatisfied\@GroundedConstraint\@\@UEBA_NAEBVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEBW4Rotation\@\@\@Z
     */
    virtual bool isSatisfied(class IBlockWorldGenAPI const &, class BlockPos const &, enum class Rotation const &) const;
    /**
     * @hash   913927920
     * @symbol  ??0GroundedConstraint\@\@QEAA\@AEAVStructureTemplate\@\@\@Z
     */
    MCAPI GroundedConstraint(class StructureTemplate &);

};