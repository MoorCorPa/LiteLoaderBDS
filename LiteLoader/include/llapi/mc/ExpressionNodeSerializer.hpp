/**
 * @file  ExpressionNodeSerializer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace ExpressionNodeSerializer.
 *
 */
namespace ExpressionNodeSerializer {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @hash   1776569208
     * @symbol  ?fromFloat\@ExpressionNodeSerializer\@\@YAXAEAVExpressionNode\@\@M\@Z
     */
    MCAPI void fromFloat(class ExpressionNode &, float);
    /**
     * @symbol  ?fromInt\@ExpressionNodeSerializer\@\@YAXAEAVExpressionNode\@\@H\@Z
     */
    MCAPI void fromInt(class ExpressionNode &, int);
    /**
     * @hash   821807269
     * @symbol  ?fromProxy\@ExpressionNodeSerializer\@\@YAXAEAVExpressionNode\@\@UExpressionNodeProxy\@1\@\@Z
     */
    MCAPI void fromProxy(class ExpressionNode &, struct ExpressionNodeSerializer::ExpressionNodeProxy);
    /**
     * @hash   -1371353521
     * @symbol  ?fromString\@ExpressionNodeSerializer\@\@YAXAEAVExpressionNode\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVBedrockLoadContext\@\@\@Z
     */
    MCAPI void fromString(class ExpressionNode &, std::string const &, class BedrockLoadContext const &);
    /**
     * @hash   -891490321
     * @symbol  ?toProxy\@ExpressionNodeSerializer\@\@YA?AUExpressionNodeProxy\@1\@AEBVExpressionNode\@\@\@Z
     */
    MCAPI struct ExpressionNodeSerializer::ExpressionNodeProxy toProxy(class ExpressionNode const &);

};