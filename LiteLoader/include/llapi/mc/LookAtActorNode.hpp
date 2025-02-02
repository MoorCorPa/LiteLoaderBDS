/**
 * @file  LookAtActorNode.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LookAtActorNode.
 *
 */
class LookAtActorNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOKATACTORNODE
public:
    class LookAtActorNode& operator=(class LookAtActorNode const &) = delete;
    LookAtActorNode(class LookAtActorNode const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~LookAtActorNode();
    /**
     * @hash   -376134910
     * @vftbl  1
     * @symbol  ?tick\@LookAtActorNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor &);
    /**
     * @hash   -797691130
     * @vftbl  2
     * @symbol  ?initializeFromDefinition\@LookAtActorNode\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor &);
    /**
     * @hash   -1347773375
     * @symbol  ??0LookAtActorNode\@\@QEAA\@XZ
     */
    MCAPI LookAtActorNode();

};