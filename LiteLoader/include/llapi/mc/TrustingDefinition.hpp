/**
 * @file  TrustingDefinition.hpp
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
 * @brief MC class TrustingDefinition.
 *
 */
class TrustingDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRUSTINGDEFINITION
public:
    class TrustingDefinition& operator=(class TrustingDefinition const &) = delete;
    TrustingDefinition(class TrustingDefinition const &) = delete;
#endif

public:
    /**
     * @hash   -466176615
     * @symbol  ??0TrustingDefinition\@\@QEAA\@XZ
     */
    MCAPI TrustingDefinition();
    /**
     * @hash   2047874252
     * @symbol  ?addTrustItemByName\@TrustingDefinition\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addTrustItemByName(std::string const &);
    /**
     * @hash   -301223443
     * @symbol  ?initialize\@TrustingDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVTrustingComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class TrustingComponent &) const;
    /**
     * @hash   -1752274474
     * @symbol  ?buildSchema\@TrustingDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VTrustingDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class TrustingDefinition>> &);

};