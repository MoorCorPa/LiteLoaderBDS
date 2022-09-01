/**
 * @file  BlockComponentDescription.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockComponentDescription.
 *
 */
struct BlockComponentDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKCOMPONENTDESCRIPTION
public:
    struct BlockComponentDescription& operator=(struct BlockComponentDescription const &) = delete;
    BlockComponentDescription(struct BlockComponentDescription const &) = delete;
    BlockComponentDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   595015354
     */
    virtual ~BlockComponentDescription();
    /**
     * @vftbl  1
     * @symbol ?getName@BlockComponentDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -589626115
     */
    virtual std::string const & getName() const;
    /**
     * @vftbl  2
     * @hash   -1407555070
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @hash   -1406631549
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?isNetworkComponent@BlockComponentDescription@@UEBA_NXZ
     * @hash   1010542277
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl  5
     * @symbol ?buildNetworkTag@BlockComponentDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     * @hash   303476775
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKCOMPONENTDESCRIPTION
    /**
     * @symbol ?buildSchema@BlockComponentDescription@@UEBAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UBlockComponentGroupDescription@@@JsonUtil@@@std@@AEBVBlockComponentFactory@@@Z
     * @hash   -292104312
     */
    MCVAPI void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockComponentGroupDescription>> &, class BlockComponentFactory const &) const;
    /**
     * @symbol ?initializeComponent@BlockComponentDescription@@UEBAXAEAVEntityContext@@@Z
     * @hash   -696872489
     */
    MCVAPI void initializeComponent(class EntityContext &) const;
    /**
     * @symbol ?initializeFromNetwork@BlockComponentDescription@@UEAAXAEBVCompoundTag@@@Z
     * @hash   -1316845109
     */
    MCVAPI void initializeFromNetwork(class CompoundTag const &);
#endif
    /**
     * @symbol ?bindType@BlockComponentDescription@@SAXXZ
     * @hash   1211040703
     */
    MCAPI static void bindType();
    /**
     * @symbol ?registerVersionUpgrades@BlockComponentDescription@@SAXAEAVCerealSchemaUpgradeSet@@@Z
     * @hash   -557837760
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};