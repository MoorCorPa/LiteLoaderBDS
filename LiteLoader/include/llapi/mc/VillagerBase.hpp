/**
 * @file  VillagerBase.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class VillagerBase.
 *
 */
class VillagerBase : public Mob {

#define AFTER_EXTRA
// Add Member There
    enum class BiomeType;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VILLAGERBASE
public:
    class VillagerBase& operator=(class VillagerBase const &) = delete;
    VillagerBase(class VillagerBase const &) = delete;
    VillagerBase() = delete;
#endif

public:
    /**
     * @hash   2056035490
     * @vftbl  13
     * @symbol  ?reloadComponents\@VillagerBase\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadComponents(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  16
     * @symbol  __unk_destructor_16
     */
    virtual ~VillagerBase();
    /**
     * @vftbl  41
     * @symbol  __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  62
     * @symbol  __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl  69
     * @symbol  __unk_vfn_69
     */
    virtual void __unk_vfn_69();
    /**
     * @vftbl  83
     * @symbol  __unk_vfn_83
     */
    virtual void __unk_vfn_83();
    /**
     * @vftbl  86
     * @symbol  __unk_vfn_86
     */
    virtual void __unk_vfn_86();
    /**
     * @vftbl  89
     * @symbol  __unk_vfn_89
     */
    virtual void __unk_vfn_89();
    /**
     * @vftbl  97
     * @symbol  __unk_vfn_97
     */
    virtual void __unk_vfn_97();
    /**
     * @vftbl  100
     * @symbol  __unk_vfn_100
     */
    virtual void __unk_vfn_100();
    /**
     * @vftbl  107
     * @symbol  __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl  109
     * @symbol  __unk_vfn_109
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl  110
     * @symbol  __unk_vfn_110
     */
    virtual void __unk_vfn_110();
    /**
     * @vftbl  112
     * @symbol  __unk_vfn_112
     */
    virtual void __unk_vfn_112();
    /**
     * @hash   847828872
     * @vftbl  139
     * @symbol  ?onLightningHit\@VillagerBase\@\@UEAAXXZ
     */
    virtual void onLightningHit();
    /**
     * @hash   2111417279
     * @vftbl  142
     * @symbol  ?handleEntityEvent\@VillagerBase\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @vftbl  179
     * @symbol  __unk_vfn_179
     */
    virtual void __unk_vfn_179();
    /**
     * @vftbl  193
     * @symbol  __unk_vfn_193
     */
    virtual void __unk_vfn_193();
    /**
     * @vftbl  218
     * @symbol  __unk_vfn_218
     */
    virtual void __unk_vfn_218();
    /**
     * @vftbl  219
     * @symbol  __unk_vfn_219
     */
    virtual void __unk_vfn_219();
    /**
     * @vftbl  241
     * @symbol  __unk_vfn_241
     */
    virtual void __unk_vfn_241();
    /**
     * @vftbl  244
     * @symbol  __unk_vfn_244
     */
    virtual void __unk_vfn_244();
    /**
     * @vftbl  262
     * @symbol  __unk_vfn_262
     */
    virtual void __unk_vfn_262();
    /**
     * @hash   -1715067712
     * @vftbl  266
     * @symbol  ?readAdditionalSaveData\@VillagerBase\@\@UEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   1395286877
     * @vftbl  267
     * @symbol  ?addAdditionalSaveData\@VillagerBase\@\@UEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  270
     * @symbol  __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @hash   1361451774
     * @vftbl  276
     * @symbol  ?_onSizeUpdated\@VillagerBase\@\@EEAAXXZ
     */
    virtual void _onSizeUpdated();
    /**
     * @vftbl  277
     * @symbol  __unk_vfn_277
     */
    virtual void __unk_vfn_277();
    /**
     * @vftbl  285
     * @symbol  __unk_vfn_285
     */
    virtual void __unk_vfn_285();
    /**
     * @vftbl  304
     * @symbol  __unk_vfn_304
     */
    virtual void __unk_vfn_304();
    /**
     * @vftbl  308
     * @symbol  __unk_vfn_308
     */
    virtual void __unk_vfn_308();
    /**
     * @hash   -1381503557
     * @vftbl  350
     * @symbol  ?_serverAiMobStep\@VillagerBase\@\@MEAAXXZ
     */
    virtual void _serverAiMobStep();
    /**
     * @vftbl  354
     * @symbol  __unk_vfn_354
     */
    virtual void __unk_vfn_354();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VILLAGERBASE
    /**
     * @hash   841506449
     * @symbol  ?interactPreventDefault\@VillagerBase\@\@UEAA_NXZ
     */
    MCVAPI bool interactPreventDefault();
#endif
    /**
     * @hash   -1497905325
     * @symbol  ??0VillagerBase\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI VillagerBase(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   1647651203
     * @symbol  ?consumeLoveFood\@VillagerBase\@\@QEAAXXZ
     */
    MCAPI void consumeLoveFood();
    /**
     * @hash   390590790
     * @symbol  ?getBreedingStackIndex\@VillagerBase\@\@QEBAHXZ
     */
    MCAPI int getBreedingStackIndex() const;
    /**
     * @hash   97918356
     * @symbol  ?isChasing\@VillagerBase\@\@QEBA_NXZ
     */
    MCAPI bool isChasing() const;
    /**
     * @hash   -1406785165
     * @symbol  ?isWillingToBreed\@VillagerBase\@\@QEAA_N_N\@Z
     */
    MCAPI bool isWillingToBreed(bool);
    /**
     * @hash   -106318262
     * @symbol  ?setChasing\@VillagerBase\@\@QEAAX_N\@Z
     */
    MCAPI void setChasing(bool);
    /**
     * @hash   1055580468
     * @symbol  ?setWillingToBreed\@VillagerBase\@\@QEAAX_N\@Z
     */
    MCAPI void setWillingToBreed(bool);
    /**
     * @hash   -1027190509
     * @symbol  ?stopGoals\@VillagerBase\@\@QEAAXXZ
     */
    MCAPI void stopGoals();
    /**
     * @hash   -508856685
     * @symbol  ?BiomeStrToEnum\@VillagerBase\@\@SA?AW4BiomeType\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static enum class VillagerBase::BiomeType BiomeStrToEnum(std::string const &);

//private:
    /**
     * @hash   997152883
     * @symbol  ?_addParticlesAroundSelf\@VillagerBase\@\@AEAAXW4ParticleType\@\@\@Z
     */
    MCAPI void _addParticlesAroundSelf(enum class ParticleType);

private:

};