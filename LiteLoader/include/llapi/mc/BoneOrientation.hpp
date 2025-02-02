/**
 * @file  BoneOrientation.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BoneOrientation.
 *
 */
class BoneOrientation {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BONEORIENTATION
public:
    class BoneOrientation& operator=(class BoneOrientation const &) = delete;
    BoneOrientation(class BoneOrientation const &) = delete;
    BoneOrientation() = delete;
#endif

public:
    /**
     * @hash   396909748
     * @symbol  ?applyShortestPathBlend\@BoneOrientation\@\@QEAAXAEBV1\@0MM\@Z
     */
    MCAPI void applyShortestPathBlend(class BoneOrientation const &, class BoneOrientation const &, float, float);
    /**
     * @hash   -1281067178
     * @symbol  ?getName\@BoneOrientation\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const & getName() const;
    /**
     * @hash   -283378216
     * @symbol  ?getPivot\@BoneOrientation\@\@QEAAAEAVVec3\@\@XZ
     */
    MCAPI class Vec3 & getPivot();
    /**
     * @hash   -1071816554
     * @symbol  ?getPivot\@BoneOrientation\@\@QEBAAEBVVec3\@\@XZ
     */
    MCAPI class Vec3 const & getPivot() const;
    /**
     * @hash   1185153171
     * @symbol  ?setDefaultPose\@BoneOrientation\@\@QEAAXXZ
     */
    MCAPI void setDefaultPose();

};