/**
 * @file  EnvironmentSensorDefinition.hpp
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
 * @brief MC class EnvironmentSensorDefinition.
 *
 */
class EnvironmentSensorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENVIRONMENTSENSORDEFINITION
public:
    class EnvironmentSensorDefinition& operator=(class EnvironmentSensorDefinition const &) = delete;
    EnvironmentSensorDefinition(class EnvironmentSensorDefinition const &) = delete;
    EnvironmentSensorDefinition() = delete;
#endif

public:
    /**
     * @hash   -955024646
     * @symbol  ?addEnvironmentTrigger\@EnvironmentSensorDefinition\@\@QEAAXAEBVActorDefinitionTrigger\@\@\@Z
     */
    MCAPI void addEnvironmentTrigger(class ActorDefinitionTrigger const &);
    /**
     * @hash   -1151782526
     * @symbol  ?buildSchema\@EnvironmentSensorDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VEnvironmentSensorDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class EnvironmentSensorDefinition>> &);

};