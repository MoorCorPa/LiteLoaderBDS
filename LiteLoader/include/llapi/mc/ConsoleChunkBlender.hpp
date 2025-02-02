/**
 * @file  ConsoleChunkBlender.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ConsoleChunkBlender.
 *
 */
class ConsoleChunkBlender {

#define AFTER_EXTRA
// Add Member There
public:
enum class ShiftBlockTypes;
enum class BlenderMode;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONSOLECHUNKBLENDER
public:
    class ConsoleChunkBlender& operator=(class ConsoleChunkBlender const &) = delete;
    ConsoleChunkBlender(class ConsoleChunkBlender const &) = delete;
#endif

public:
    /**
     * @hash   -571715340
     * @symbol  ??0ConsoleChunkBlender\@\@QEAA\@XZ
     */
    MCAPI ConsoleChunkBlender();
    /**
     * @hash   1975764771
     * @symbol  ?blendChunk\@ConsoleChunkBlender\@\@QEAAXAEAVLevelChunk\@\@0W4BlenderMode\@1\@\@Z
     */
    MCAPI void blendChunk(class LevelChunk &, class LevelChunk &, enum class ConsoleChunkBlender::BlenderMode);
    /**
     * @hash   -155037669
     * @symbol  ?setInterpolants\@ConsoleChunkBlender\@\@QEAAXMMMM\@Z
     */
    MCAPI void setInterpolants(float, float, float, float);
    /**
     * @hash   1837530052
     * @symbol  ??1ConsoleChunkBlender\@\@QEAA\@XZ
     */
    MCAPI ~ConsoleChunkBlender();

//protected:
    /**
     * @hash   865624481
     * @symbol  ?_blendChunkEnd4J\@ConsoleChunkBlender\@\@IEAAXAEAVLevelChunk\@\@0\@Z
     */
    MCAPI void _blendChunkEnd4J(class LevelChunk &, class LevelChunk &);
    /**
     * @hash   671454708
     * @symbol  ?_blendChunkNether4J\@ConsoleChunkBlender\@\@IEAAXAEAVLevelChunk\@\@0\@Z
     */
    MCAPI void _blendChunkNether4J(class LevelChunk &, class LevelChunk &);
    /**
     * @hash   799922264
     * @symbol  ?_blendChunkOverworld\@ConsoleChunkBlender\@\@IEAAXAEAVLevelChunk\@\@0W4ShiftBlockTypes\@1\@\@Z
     */
    MCAPI void _blendChunkOverworld(class LevelChunk &, class LevelChunk &, enum class ConsoleChunkBlender::ShiftBlockTypes);
    /**
     * @hash   -271503211
     * @symbol  ?_copyColumnFromGeneratedChunkNether\@ConsoleChunkBlender\@\@IEAAXAEAVLevelChunk\@\@0HH\@Z
     */
    MCAPI void _copyColumnFromGeneratedChunkNether(class LevelChunk &, class LevelChunk &, int, int);
    /**
     * @hash   -1867817281
     * @symbol  ?_copyColumnFromGeneratedChunkOverworld\@ConsoleChunkBlender\@\@IEAAXAEAVLevelChunk\@\@0HHW4ShiftBlockTypes\@1\@\@Z
     */
    MCAPI void _copyColumnFromGeneratedChunkOverworld(class LevelChunk &, class LevelChunk &, int, int, enum class ConsoleChunkBlender::ShiftBlockTypes);
    /**
     * @hash   1408585461
     * @symbol  ?_findTopMostWaterHeight\@ConsoleChunkBlender\@\@IEAA?AVChunkLocalHeight\@\@AEAVLevelChunk\@\@HHAEBV?$unordered_set\@PEBVBlockLegacy\@\@U?$hash\@PEBVBlockLegacy\@\@\@std\@\@U?$equal_to\@PEBVBlockLegacy\@\@\@3\@V?$allocator\@PEBVBlockLegacy\@\@\@3\@\@std\@\@\@Z
     */
    MCAPI class ChunkLocalHeight _findTopMostWaterHeight(class LevelChunk &, int, int, class std::unordered_set<class BlockLegacy const *, struct std::hash<class BlockLegacy const *>, struct std::equal_to<class BlockLegacy const *>, class std::allocator<class BlockLegacy const *>> const &);
    /**
     * @hash   -976005015
     * @symbol  ?_prepInterpTable\@ConsoleChunkBlender\@\@IEAAXXZ
     */
    MCAPI void _prepInterpTable();
    /**
     * @hash   -125251653
     * @symbol  ?_shiftColumnBySetBlocks\@ConsoleChunkBlender\@\@IEAAXAEAVLevelChunk\@\@HHH_NVChunkLocalHeight\@\@W4ShiftBlockTypes\@1\@AEBUOverworldBlendRules\@\@\@Z
     */
    MCAPI void _shiftColumnBySetBlocks(class LevelChunk &, int, int, int, bool, class ChunkLocalHeight, enum class ConsoleChunkBlender::ShiftBlockTypes, struct OverworldBlendRules const &);

protected:

};