/**
 * @file  VineBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class VineBlock.
 *
 */
class VineBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VINEBLOCK
public:
    class VineBlock& operator=(class VineBlock const &) = delete;
    VineBlock(class VineBlock const &) = delete;
    VineBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   334166865
     */
    virtual ~VineBlock();
    /**
     * @vftbl  10
     * @symbol ?getAABB@VineBlock@@UEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
     * @hash   -1198366941
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  19
     * @hash   -327659668
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  29
     * @hash   -299030517
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @hash   -278713055
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @hash   -276866013
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @hash   -275942492
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @hash   -275018971
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  36
     * @hash   -273171929
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @hash   -272248408
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl  38
     * @hash   -271324887
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl  39
     * @hash   -270401366
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl  40
     * @hash   -250083904
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  41
     * @hash   -249160383
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @hash   -248236862
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  44
     * @hash   -246389820
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @hash   -245466299
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl  46
     * @hash   -244542778
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl  47
     * @hash   -243619257
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl  48
     * @hash   -242695736
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl  49
     * @hash   -241772215
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl  59
     * @hash   -219877752
     */
    virtual void __unk_vfn_59();
    /**
     * @vftbl  60
     * @hash   -192825602
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  73
     * @hash   -161425888
     */
    virtual void __unk_vfn_73();
    /**
     * @vftbl  80
     * @hash   -135567300
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  89
     * @symbol ?mayPlace@VineBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
     * @hash   -123112770
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl  98
     * @symbol ?neighborChanged@VineBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     * @hash   1311428485
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  100
     * @symbol ?getResourceCount@VineBlock@@UEBAHAEAVRandomize@@AEBVBlock@@H@Z
     * @hash   -1079986583
     */
    virtual int getResourceCount(class Randomize &, class Block const &, int) const;
    /**
     * @vftbl  105
     * @hash   1332020102
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  106
     * @symbol ?getPlacementBlock@VineBlock@@UEBAAEBVBlock@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
     * @hash   -66471390
     */
    virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /**
     * @vftbl  124
     * @hash   1388354883
     */
    virtual void __unk_vfn_124();
    /**
     * @vftbl  126
     * @hash   1390201925
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  127
     * @hash   1391125446
     */
    virtual void __unk_vfn_127();
    /**
     * @vftbl  132
     * @hash   1415136992
     */
    virtual void __unk_vfn_132();
    /**
     * @vftbl  136
     * @symbol ?getColor@VineBlock@@UEBAHAEBVBlock@@@Z
     * @hash   -242915643
     */
    virtual int getColor(class Block const &) const;
    /**
     * @vftbl  137
     * @symbol ?getColor@VineBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   -1465095505
     */
    virtual int getColor(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  143
     * @symbol ?getVisualShapeInWorld@VineBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@_N@Z
     * @hash   1075047589
     */
    virtual class AABB const & getVisualShapeInWorld(class Block const &, class IConstBlockSource const &, class BlockPos const &, class AABB &, bool) const;
    /**
     * @vftbl  148
     * @hash   1442572581
     */
    virtual void __unk_vfn_148();
    /**
     * @vftbl  157
     * @hash   1470278211
     */
    virtual void __unk_vfn_157();
    /**
     * @vftbl  168
     * @hash   1457546883
     */
    virtual void __unk_vfn_168();
    /**
     * @vftbl  169
     * @hash   1458470404
     */
    virtual void __unk_vfn_169();
    /**
     * @vftbl  170
     * @hash   1478787866
     */
    virtual void __unk_vfn_170();
    /**
     * @vftbl  173
     * @symbol ?playerDestroy@VineBlock@@UEBAXAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   -1693257993
     */
    virtual void playerDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  174
     * @symbol ?tick@VineBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   648507785
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  175
     * @symbol ?randomTick@VineBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -408641594
     */
    virtual void randomTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  177
     * @hash   1534271201
     */
    virtual void __unk_vfn_177();
    /**
     * @vftbl  187
     * @symbol ?getMapColor@VineBlock@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   670341155
     */
    virtual class mce::Color getMapColor(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  188
     * @hash   1563823873
     */
    virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VINEBLOCK
    /**
     * @symbol ?waterSpreadCausesSpawn@VineBlock@@UEBA_NXZ
     * @hash   -1828408260
     */
    MCVAPI bool waterSpreadCausesSpawn() const;
#endif
    /**
     * @symbol ??0VineBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   896374033
     */
    MCAPI VineBlock(std::string const &, int);
    /**
     * @symbol ?growDown@VineBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@H@Z
     * @hash   235201906
     */
    MCAPI void growDown(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @symbol ?growSideways@VineBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@H@Z
     * @hash   -1701467454
     */
    MCAPI void growSideways(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @symbol ?growUp@VineBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@H@Z
     * @hash   -696918238
     */
    MCAPI void growUp(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @symbol ?VINE_ALL@VineBlock@@2HB
     * @hash   858817975
     */
    MCAPI static int const VINE_ALL;
    /**
     * @symbol ?VINE_EAST@VineBlock@@2HB
     * @hash   -1225725411
     */
    MCAPI static int const VINE_EAST;
    /**
     * @symbol ?VINE_NORTH@VineBlock@@2HB
     * @hash   1396626483
     */
    MCAPI static int const VINE_NORTH;
    /**
     * @symbol ?VINE_SOUTH@VineBlock@@2HB
     * @hash   2135134911
     */
    MCAPI static int const VINE_SOUTH;
    /**
     * @symbol ?VINE_WEST@VineBlock@@2HB
     * @hash   1483319173
     */
    MCAPI static int const VINE_WEST;
    /**
     * @symbol ?getBlockForFace@VineBlock@@SAAEBVBlock@@E@Z
     * @hash   -1959446566
     */
    MCAPI static class Block const & getBlockForFace(unsigned char);
    /**
     * @symbol ?isAcceptableNeighbour@VineBlock@@SA_NAEBVBlock@@@Z
     * @hash   -1390545843
     */
    MCAPI static bool isAcceptableNeighbour(class Block const &);

//private:
    /**
     * @symbol ?_canGrowDown@VineBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -2066674266
     */
    MCAPI bool _canGrowDown(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?_canSideSpread@VineBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1132797429
     */
    MCAPI bool _canSideSpread(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?_nextVineDirections@VineBlock@@AEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -2131503541
     */
    MCAPI int _nextVineDirections(class BlockSource &, class BlockPos const &) const;

private:

};