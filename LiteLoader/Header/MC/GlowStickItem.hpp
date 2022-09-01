/**
 * @file  GlowStickItem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "ChemistryStickItem.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GlowStickItem.
 *
 */
class GlowStickItem : public ChemistryStickItem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GLOWSTICKITEM
public:
    class GlowStickItem& operator=(class GlowStickItem const &) = delete;
    GlowStickItem(class GlowStickItem const &) = delete;
    GlowStickItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1957779076
     */
    virtual ~GlowStickItem();
    /**
     * @vftbl  7
     * @hash   -1353918777
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  11
     * @hash   -335047836
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  14
     * @hash   -332277273
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @hash   -330430231
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  52
     * @hash   -219607711
     */
    virtual void __unk_vfn_52();
    /**
     * @vftbl  54
     * @hash   -224495357
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl  67
     * @hash   -186360955
     */
    virtual void __unk_vfn_67();
    /**
     * @vftbl  68
     * @symbol ?isValidAuxValue@GlowStickItem@@UEBA_NH@Z
     * @hash   -194970676
     */
    virtual bool isValidAuxValue(int) const;
    /**
     * @vftbl  71
     * @hash   -163272930
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @hash   -162349409
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  73
     * @hash   -168160576
     */
    virtual void __unk_vfn_73();
    /**
     * @vftbl  76
     * @hash   -158655325
     */
    virtual void __unk_vfn_76();
    /**
     * @vftbl  80
     * @hash   -1115441236
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  81
     * @hash   -1114517715
     */
    virtual void __unk_vfn_81();
    /**
     * @vftbl  96
     * @symbol ?buildDescriptionId@GlowStickItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
     * @hash   -1738794236
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /**
     * @vftbl  122
     * @symbol ?getLightEmission@GlowStickItem@@UEBA?AUBrightness@@H@Z
     * @hash   678400145
     */
    virtual struct Brightness getLightEmission(int) const;
    /**
     * @vftbl  123
     * @symbol ?getIcon@GlowStickItem@@UEBAAEBUTextureUVCoordinateSet@@AEBVItemStackBase@@H_N@Z
     * @hash   -1123944919
     */
    virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    /**
     * @symbol ??0GlowStickItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   -1692187852
     */
    MCAPI GlowStickItem(std::string const &, int);
    /**
     * @symbol ?COLORS@GlowStickItem@@2QBW4ItemColor@@B
     * @hash   562999941
     */
    MCAPI static enum ItemColor const COLORS[];
    /**
     * @symbol ?MAX_ACTIVE_TICKS@GlowStickItem@@2HB
     * @hash   -1756439257
     */
    MCAPI static int const MAX_ACTIVE_TICKS;

};