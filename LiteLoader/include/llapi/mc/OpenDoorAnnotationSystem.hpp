/**
 * @file  OpenDoorAnnotationSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OpenDoorAnnotationSystem.
 *
 */
class OpenDoorAnnotationSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OPENDOORANNOTATIONSYSTEM
public:
    class OpenDoorAnnotationSystem& operator=(class OpenDoorAnnotationSystem const &) = delete;
    OpenDoorAnnotationSystem(class OpenDoorAnnotationSystem const &) = delete;
    OpenDoorAnnotationSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~OpenDoorAnnotationSystem();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @hash   -2031395930
     * @vftbl  2
     * @symbol  ?tick\@OpenDoorAnnotationSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry &);

};