/**
 * @file  LeashableComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LeashableComponent.
 *
 */
class LeashableComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEASHABLECOMPONENT
public:
    class LeashableComponent& operator=(class LeashableComponent const &) = delete;
    LeashableComponent(class LeashableComponent const &) = delete;
    LeashableComponent() = delete;
#endif

public:
    /**
     * @hash   1750943241
     * @symbol  ?getInteraction\@LeashableComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);
    /**
     * @hash   -1875120553
     * @symbol  ?leash\@LeashableComponent\@\@QEAAXAEAVActor\@\@0\@Z
     */
    MCAPI void leash(class Actor &, class Actor &);
    /**
     * @hash   -1891758804
     * @symbol  ?unleash\@LeashableComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void unleash(class Actor &);

};