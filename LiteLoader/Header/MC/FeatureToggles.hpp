/**
 * @file  FeatureToggles.hpp
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
 * @brief MC class FeatureToggles.
 *
 */
class FeatureToggles {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FEATURETOGGLES
public:
    class FeatureToggles& operator=(class FeatureToggles const &) = delete;
    FeatureToggles(class FeatureToggles const &) = delete;
    FeatureToggles() = delete;
#endif

public:
    /**
     * @symbol ??0FeatureToggles@@QEAA@AEAVAppPlatform@@@Z
     * @hash   1418117884
     */
    MCAPI FeatureToggles(class AppPlatform &);
    /**
     * @symbol ?get@FeatureToggles@@QEAAPEAVOption@@W4FeatureOptionID@@@Z
     * @hash   1987585910
     */
    MCAPI class Option * get(enum FeatureOptionID);
    /**
     * @symbol ?isEnabled@FeatureToggles@@QEBA_NW4FeatureOptionID@@@Z
     * @hash   -2067280671
     */
    MCAPI bool isEnabled(enum FeatureOptionID) const;

//private:
    /**
     * @symbol ?_getDisableIfOtherOptionDisabledSetupCallback@FeatureToggles@@AEBA?AV?$function@$$A6AXAEAVOption@@@Z@std@@W4FeatureOptionID@@@Z
     * @hash   658268813
     */
    MCAPI class std::function<void (class Option &)> _getDisableIfOtherOptionDisabledSetupCallback(enum FeatureOptionID) const;
    /**
     * @symbol ?_getDisabledIfOptionExpectationsNotMetSetupCallback@FeatureToggles@@AEAA?AV?$function@$$A6AXAEAVOption@@@Z@std@@V?$vector@W4FeatureOptionID@@V?$allocator@W4FeatureOptionID@@@std@@@3@0@Z
     * @hash   -1023129660
     */
    MCAPI class std::function<void (class Option &)> _getDisabledIfOptionExpectationsNotMetSetupCallback(std::vector<enum FeatureOptionID>, std::vector<enum FeatureOptionID>);
    /**
     * @symbol ?_getDisabledIfOtherOptionsEnabledSetupCallback@FeatureToggles@@AEAA?AV?$function@$$A6AXAEAVOption@@@Z@std@@V?$vector@W4FeatureOptionID@@V?$allocator@W4FeatureOptionID@@@std@@@3@@Z
     * @hash   -399807445
     */
    MCAPI class std::function<void (class Option &)> _getDisabledIfOtherOptionsEnabledSetupCallback(std::vector<enum FeatureOptionID>);
    /**
     * @symbol ?_getLockIfInGameCallback@FeatureToggles@@AEAA?AV?$function@$$A6AXAEA_N@Z@std@@XZ
     * @hash   -538686827
     */
    MCAPI class std::function<void (bool &)> _getLockIfInGameCallback();
    /**
     * @symbol ?_getLockIfInGameOrOptionExpectationsNotMetLockCallback@FeatureToggles@@AEAA?AV?$function@$$A6AXAEA_N@Z@std@@V?$vector@W4FeatureOptionID@@V?$allocator@W4FeatureOptionID@@@std@@@3@0@Z
     * @hash   1260458200
     */
    MCAPI class std::function<void (bool &)> _getLockIfInGameOrOptionExpectationsNotMetLockCallback(std::vector<enum FeatureOptionID>, std::vector<enum FeatureOptionID>);
    /**
     * @symbol ?_getLockIfOtherOptionDisabledLockCallback@FeatureToggles@@AEBA?AV?$function@$$A6AXAEA_N@Z@std@@W4FeatureOptionID@@@Z
     * @hash   539159319
     */
    MCAPI class std::function<void (bool &)> _getLockIfOtherOptionDisabledLockCallback(enum FeatureOptionID) const;
    /**
     * @symbol ?_initialize@FeatureToggles@@AEAAXAEAVAppPlatform@@@Z
     * @hash   1578253894
     */
    MCAPI void _initialize(class AppPlatform &);
    /**
     * @symbol ?_registerFeature@FeatureToggles@@AEAAXW4FeatureOptionTabID@@W4FeatureOptionID@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@2_N1V?$function@$$A6AXAEAVOption@@@Z@5@V?$function@$$A6AXAEA_N@Z@5@@Z
     * @hash   -1246239721
     */
    MCAPI void _registerFeature(enum FeatureOptionTabID, enum FeatureOptionID, std::string const &, std::string const &, bool, enum FeatureOptionID, class std::function<void (class Option &)>, class std::function<void (bool &)>);
    /**
     * @symbol ?_registerFeatures@FeatureToggles@@AEAAXXZ
     * @hash   -1133301566
     */
    MCAPI void _registerFeatures();
    /**
     * @symbol ?_setupDependencies@FeatureToggles@@AEAAXXZ
     * @hash   391247706
     */
    MCAPI void _setupDependencies();

private:
    /**
     * @symbol ?mFeatureToggles@FeatureToggles@@0V?$unique_ptr@VFeatureToggles@@U?$default_delete@VFeatureToggles@@@std@@@std@@A
     * @hash   -747446718
     */
    MCAPI static std::unique_ptr<class FeatureToggles> mFeatureToggles;

};