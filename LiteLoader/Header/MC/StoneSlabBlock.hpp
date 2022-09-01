/**
 * @file  StoneSlabBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "SlabBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StoneSlabBlock.
 *
 */
class StoneSlabBlock : public SlabBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STONESLABBLOCK
public:
    class StoneSlabBlock& operator=(class StoneSlabBlock const &) = delete;
    StoneSlabBlock(class StoneSlabBlock const &) = delete;
    StoneSlabBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -788749992
     */
    virtual ~StoneSlabBlock();
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
     * @hash   -279906617
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
     * @vftbl  54
     * @symbol ?isValidAuxValue@StoneSlabBlock@@UEBA_NH@Z
     * @hash   2105152164
     */
    virtual bool isValidAuxValue(int) const;
    /**
     * @vftbl  59
     * @hash   -213143064
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
     * @vftbl  101
     * @symbol ?getResourceItem@StoneSlabBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     * @hash   -950113060
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @vftbl  102
     * @symbol ?asItemInstance@StoneSlabBlock@@UEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   -117891407
     */
    virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  105
     * @hash   1332020102
     */
    virtual void __unk_vfn_105();
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
     * @vftbl  134
     * @symbol ?buildDescriptionId@StoneSlabBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
     * @hash   -1018550715
     */
    virtual std::string buildDescriptionId(class Block const &) const;
    /**
     * @vftbl  147
     * @symbol ?getVariant@StoneSlabBlock@@UEBAHAEBVBlock@@@Z
     * @hash   -1577664514
     */
    virtual int getVariant(class Block const &) const;
    /**
     * @vftbl  148
     * @hash   1442572581
     */
    virtual void __unk_vfn_148();
    /**
     * @vftbl  157
     * @hash   1477012899
     */
    virtual void __unk_vfn_157();
    /**
     * @vftbl  158
     * @symbol ?getSilkTouchItemInstance@StoneSlabBlock@@UEBA?AVItemInstance@@AEBVBlock@@@Z
     * @hash   352943733
     */
    virtual class ItemInstance getSilkTouchItemInstance(class Block const &) const;
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
     * @vftbl  177
     * @hash   1534271201
     */
    virtual void __unk_vfn_177();
    /**
     * @vftbl  187
     * @symbol ?getMapColor@StoneSlabBlock@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   461562312
     */
    virtual class mce::Color getMapColor(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  188
     * @hash   1563823873
     */
    virtual void __unk_vfn_188();
    /**
     * @symbol ??0StoneSlabBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_NV?$WeakPtr@VBlockLegacy@@@@@Z
     * @hash   -2133691891
     */
    MCAPI StoneSlabBlock(std::string const &, int, bool, class WeakPtr<class BlockLegacy>);
    /**
     * @symbol ?SLAB_NAMES@StoneSlabBlock@@2V?$array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$07@std@@B
     * @hash   586965903
     */
    MCAPI static class std::array<std::string, 8> const SLAB_NAMES;

};