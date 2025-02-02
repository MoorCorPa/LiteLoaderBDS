/**
 * @file  ParticleEffectResponse.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ParticleEffectResponse.
 *
 */
class ParticleEffectResponse {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PARTICLEEFFECTRESPONSE
public:
    class ParticleEffectResponse& operator=(class ParticleEffectResponse const &) = delete;
    ParticleEffectResponse(class ParticleEffectResponse const &) = delete;
    ParticleEffectResponse() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ParticleEffectResponse();
    /**
     * @hash   -2088172639
     * @vftbl  1
     * @symbol  ?getName\@ParticleEffectResponse\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @hash   1750724413
     * @vftbl  2
     * @symbol  ?executeAction\@ParticleEffectResponse\@\@UEBAXAEAVRenderParams\@\@\@Z
     */
    virtual void executeAction(class RenderParams &) const;
    /**
     * @hash   -1261003217
     * @vftbl  3
     * @symbol  ?buildSchema\@ParticleEffectResponse\@\@UEBAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UEventResponseCollection\@\@\@JsonUtil\@\@\@std\@\@AEBV?$Factory\@VEventResponse\@\@$$V\@\@\@Z
     */
    virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection>> &, class Factory<class EventResponse> const &) const;
    /**
     * @hash   -1352329073
     * @symbol  ?NameID\@ParticleEffectResponse\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NameID;

};