/**
 * @file  BlockTypeRegistry.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include <shared_mutex>

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockTypeRegistry.
 *
 */
class BlockTypeRegistry {

#define AFTER_EXTRA
// Add Member There
    class InhibitModificationsLock;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKTYPEREGISTRY
public:
    class BlockTypeRegistry& operator=(class BlockTypeRegistry const &) = delete;
    BlockTypeRegistry(class BlockTypeRegistry const &) = delete;
    BlockTypeRegistry() = delete;
#endif

public:
    /**
     * @symbol ?computeBlockTypeRegistryChecksum@BlockTypeRegistry@@SA_KAEBVBaseGameVersion@@@Z
     * @hash   1239520146
     */
    MCAPI static unsigned __int64 computeBlockTypeRegistryChecksum(class BaseGameVersion const &);
    /**
     * @symbol ?forEachBlock@BlockTypeRegistry@@SAXV?$function@$$A6A_NAEBVBlockLegacy@@@Z@std@@@Z
     * @hash   1301557558
     */
    MCAPI static void forEachBlock(class std::function<bool (class BlockLegacy const &)>);
    /**
     * @symbol ?getDefaultBlockState@BlockTypeRegistry@@SAAEBVBlock@@AEBVHashedString@@_N@Z
     * @hash   -460747488
     */
    MCAPI static class Block const & getDefaultBlockState(class HashedString const &, bool);
    /**
     * @symbol ?getEntityRegistry@BlockTypeRegistry@@SA?AV?$StackRefResultT@UEntityRegistryRefTraits@@@@XZ
     * @hash   -1307409889
     */
    MCAPI static class StackRefResultT<struct EntityRegistryRefTraits> getEntityRegistry();
    /**
     * @symbol ?initBlockEntities@BlockTypeRegistry@@SAXAEBVExperiments@@@Z
     * @hash   714173630
     */
    MCAPI static void initBlockEntities(class Experiments const &);
    /**
     * @symbol ?initEntityRegistry@BlockTypeRegistry@@SAXXZ
     * @hash   836658513
     */
    MCAPI static void initEntityRegistry();
    /**
     * @symbol ?isBlockDataDriven@BlockTypeRegistry@@SA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   521534469
     */
    MCAPI static bool isBlockDataDriven(std::string const &);
    /**
     * @symbol ?lockAgainstRegistryModifications@BlockTypeRegistry@@SA?AVBlockTypeRegistryReadLock@@XZ
     * @hash   756063530
     */
    MCAPI static class BlockTypeRegistryReadLock lockAgainstRegistryModifications();
    /**
     * @symbol ?lockForRegistryModifications@BlockTypeRegistry@@SA?AVBlockTypeRegistryModificationsLock@@XZ
     * @hash   1202687370
     */
    MCAPI static class BlockTypeRegistryModificationsLock lockForRegistryModifications();
    /**
     * @symbol ?lookupByName@BlockTypeRegistry@@SA?AV?$WeakPtr@VBlockLegacy@@@@AEBVHashedString@@_N@Z
     * @hash   -1929047923
     */
    MCAPI static class WeakPtr<class BlockLegacy> lookupByName(class HashedString const &, bool);
    /**
     * @symbol ?prepareBlocks@BlockTypeRegistry@@SAXI@Z
     * @hash   548215916
     */
    MCAPI static void prepareBlocks(unsigned int);
    /**
     * @symbol ?registerAlias@BlockTypeRegistry@@SAXAEBVHashedString@@0@Z
     * @hash   -368041733
     */
    MCAPI static void registerAlias(class HashedString const &, class HashedString const &);
    /**
     * @symbol ?unregisterBlock@BlockTypeRegistry@@SAXAEBVHashedString@@@Z
     * @hash   -2071816288
     */
    MCAPI static void unregisterBlock(class HashedString const &);
    /**
     * @symbol ?unregisterBlocks@BlockTypeRegistry@@SAXXZ
     * @hash   1520189077
     */
    MCAPI static void unregisterBlocks();

//private:

private:
    /**
     * @symbol ?mBlockAliasLookupMap@BlockTypeRegistry@@0V?$unordered_map@VHashedString@@V1@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@3@V?$allocator@U?$pair@$$CBVHashedString@@V1@@std@@@3@@std@@A
     * @hash   1254082634
     */
    MCAPI static class std::unordered_map<class HashedString, class HashedString, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class HashedString>>> mBlockAliasLookupMap;
    /**
     * @symbol ?mBlockLookupMap@BlockTypeRegistry@@0V?$map@VHashedString@@V?$SharedPtr@VBlockLegacy@@@@U?$less@VHashedString@@@std@@V?$allocator@U?$pair@$$CBVHashedString@@V?$SharedPtr@VBlockLegacy@@@@@std@@@4@@std@@A
     * @hash   -347057242
     */
    MCAPI static class std::map<class HashedString, class SharedPtr<class BlockLegacy>, struct std::less<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class SharedPtr<class BlockLegacy>>>> mBlockLookupMap;
    /**
     * @symbol ?mEntities@BlockTypeRegistry@@0V?$OwnerPtrT@UEntityRegistryRefTraits@@@@A
     * @hash   1216090067
     */
    MCAPI static class OwnerPtrT<struct EntityRegistryRefTraits> mEntities;
    /**
     * @symbol ?mKnownNamespaces@BlockTypeRegistry@@0V?$set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@A
     * @hash   1591410004
     */
    MCAPI static class std::set<std::string, struct std::less<std::string>, class std::allocator<std::string>> mKnownNamespaces;
    /**
     * @symbol ?mRWLock@BlockTypeRegistry@@0V?$shared_ptr@VBlockTypeRegistryRWLock@@@std@@A
     * @hash   -1816769675
     */
    MCAPI static class std::shared_ptr<class BlockTypeRegistryRWLock> mRWLock;

};