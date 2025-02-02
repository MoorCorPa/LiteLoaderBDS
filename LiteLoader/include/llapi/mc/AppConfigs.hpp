/**
 * @file  AppConfigs.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AppConfigs.
 *
 */
class AppConfigs {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_APPCONFIGS
public:
    class AppConfigs& operator=(class AppConfigs const &) = delete;
    AppConfigs(class AppConfigs const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~AppConfigs();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol  __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol  __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol  __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  8
     * @symbol  __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @symbol  __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  10
     * @symbol  __unk_vfn_10
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl  11
     * @symbol  __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  12
     * @symbol  __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @symbol  __unk_vfn_13
     */
    virtual void __unk_vfn_13();
    /**
     * @vftbl  14
     * @symbol  __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  15
     * @symbol  __unk_vfn_15
     */
    virtual void __unk_vfn_15();
    /**
     * @vftbl  16
     * @symbol  __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  17
     * @symbol  __unk_vfn_17
     */
    virtual void __unk_vfn_17();
    /**
     * @hash   100763410
     * @vftbl  18
     * @symbol  ?getEducationEditionOffering\@AppConfigs\@\@UEBA?AW4EducationEditionOffer\@\@XZ
     */
    virtual enum class EducationEditionOffer getEducationEditionOffering() const;
    /**
     * @vftbl  19
     * @symbol  __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  20
     * @symbol  __unk_vfn_20
     */
    virtual void __unk_vfn_20();
    /**
     * @hash   1663798289
     * @vftbl  21
     * @symbol  ?supports3DExport\@AppConfigs\@\@UEBA_NXZ
     */
    virtual bool supports3DExport() const;
    /**
     * @vftbl  22
     * @symbol  __unk_vfn_22
     */
    virtual void __unk_vfn_22();
    /**
     * @hash   -769163070
     * @vftbl  23
     * @symbol  ?getConnectionDefinition\@AppConfigs\@\@UEBA?AUConnectionDefinition\@\@XZ
     */
    virtual struct ConnectionDefinition getConnectionDefinition() const;
    /**
     * @vftbl  24
     * @symbol  __unk_vfn_24
     */
    virtual void __unk_vfn_24();
    /**
     * @vftbl  25
     * @symbol  __unk_vfn_25
     */
    virtual void __unk_vfn_25();
    /**
     * @vftbl  26
     * @symbol  __unk_vfn_26
     */
    virtual void __unk_vfn_26();
    /**
     * @vftbl  27
     * @symbol  __unk_vfn_27
     */
    virtual void __unk_vfn_27();
    /**
     * @vftbl  28
     * @symbol  __unk_vfn_28
     */
    virtual void __unk_vfn_28();
    /**
     * @vftbl  29
     * @symbol  __unk_vfn_29
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @symbol  __unk_vfn_30
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  31
     * @symbol  __unk_vfn_31
     */
    virtual void __unk_vfn_31();
    /**
     * @hash   -126008917
     * @vftbl  32
     * @symbol  ?getAdditionalClientPacks\@AppConfigs\@\@UEBA?AV?$vector\@UPackIdVersion\@\@V?$allocator\@UPackIdVersion\@\@\@std\@\@\@std\@\@_N\@Z
     */
    virtual std::vector<struct PackIdVersion> getAdditionalClientPacks(bool) const;
    /**
     * @hash   2057265593
     * @vftbl  33
     * @symbol  ?getScreenCapabilities\@AppConfigs\@\@UEBA?AV?$unique_ptr\@VIScreenCapabilities\@\@U?$default_delete\@VIScreenCapabilities\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    virtual std::unique_ptr<class IScreenCapabilities> getScreenCapabilities(std::string const &) const;
    /**
     * @hash   -1709839920
     * @vftbl  34
     * @symbol  ?createContentAccessibility\@AppConfigs\@\@UEBA?AV?$unique_ptr\@VIContentAccessibilityProvider\@\@U?$default_delete\@VIContentAccessibilityProvider\@\@\@std\@\@\@std\@\@V?$not_null\@V?$NonOwnerPointer\@VIEntitlementManager\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    virtual std::unique_ptr<class IContentAccessibilityProvider> createContentAccessibility(class gsl::not_null<class Bedrock::NonOwnerPointer<class IEntitlementManager>>) const;
    /**
     * @hash   -1361486498
     * @vftbl  35
     * @symbol  ?getFeedbackURL\@AppConfigs\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getFeedbackURL() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_APPCONFIGS
    /**
     * @hash   1877972179
     * @symbol  ?allowGameArguments\@AppConfigs\@\@UEBA_NXZ
     */
    MCVAPI bool allowGameArguments() const;
    /**
     * @hash   598745946
     * @symbol  ?applyLevelDataOverride\@AppConfigs\@\@UEBAXAEAVLevelData\@\@\@Z
     */
    MCVAPI void applyLevelDataOverride(class LevelData &) const;
    /**
     * @hash   -1564914281
     * @symbol  ?areEmotesSupported\@AppConfigs\@\@UEBA_NXZ
     */
    MCVAPI bool areEmotesSupported() const;
    /**
     * @hash   -304511834
     * @symbol  ?arePremiumSkinPacksAllowed\@AppConfigs\@\@UEBA_NXZ
     */
    MCVAPI bool arePremiumSkinPacksAllowed() const;
    /**
     * @hash   839804375
     * @symbol  ?areQuizzesSupported\@AppConfigs\@\@UEBA_NXZ
     */
    MCVAPI bool areQuizzesSupported() const;
    /**
     * @hash   -449127128
     * @symbol  ?areResourcePacksAllowed\@AppConfigs\@\@UEBA_NXZ
     */
    MCVAPI bool areResourcePacksAllowed() const;
    /**
     * @hash   -929081624
     * @symbol  ?canUseAzureNotebooks\@AppConfigs\@\@UEBA_NXZ
     */
    MCVAPI bool canUseAzureNotebooks() const;
    /**
     * @hash   897129615
     * @symbol  ?canUseMaelstrom\@AppConfigs\@\@UEBA?AW4MaelstromEduUsabilityStatus\@1\@XZ
     */
    MCVAPI enum class AppConfigs::MaelstromEduUsabilityStatus canUseMaelstrom() const;
    /**
     * @hash   -543481574
     * @symbol  ?gameArgumentsNeedAuthentication\@AppConfigs\@\@UEBA_NXZ
     */
    MCVAPI bool gameArgumentsNeedAuthentication() const;
    /**
     * @hash   1287745426
     * @symbol  ?isChatScreenAllowed\@AppConfigs\@\@UEBA_NXZ
     */
    MCVAPI bool isChatScreenAllowed() const;
    /**
     * @hash   -102700987
     * @symbol  ?isCoursesCacheEnabled\@AppConfigs\@\@UEBA_NXZ
     */
    MCVAPI bool isCoursesCacheEnabled() const;
    /**
     * @hash   1614199904
     * @symbol  ?isExternalPlayerCommunicationAllowed\@AppConfigs\@\@UEBA_NXZ
     */
    MCVAPI bool isExternalPlayerCommunicationAllowed() const;
    /**
     * @hash   1314843224
     * @symbol  ?isGameTabShownInSettings\@AppConfigs\@\@UEBA_NXZ
     */
    MCVAPI bool isGameTabShownInSettings() const;
    /**
     * @hash   1422930045
     * @symbol  ?isLessonProgressionSupported\@AppConfigs\@\@UEBA_NXZ
     */
    MCVAPI bool isLessonProgressionSupported() const;
    /**
     * @hash   -1484339530
     * @symbol  ?isPlayScreenAllowed\@AppConfigs\@\@UEBA_NXZ
     */
    MCVAPI bool isPlayScreenAllowed() const;
    /**
     * @hash   -939602980
     * @symbol  ?loadFromData\@AppConfigs\@\@UEAAXAEBVIAppConfigData\@\@\@Z
     */
    MCVAPI void loadFromData(class IAppConfigData const &);
    /**
     * @hash   1917427769
     * @symbol  ?muteByDefault\@AppConfigs\@\@UEBA_NXZ
     */
    MCVAPI bool muteByDefault() const;
    /**
     * @hash   -526828418
     * @symbol  ?requireEduLevelSettings\@AppConfigs\@\@UEBA_NXZ
     */
    MCVAPI bool requireEduLevelSettings() const;
    /**
     * @hash   -1894678801
     * @symbol  ?requireTrustedContent\@AppConfigs\@\@UEBA_NXZ
     */
    MCVAPI bool requireTrustedContent() const;
    /**
     * @hash   -113993627
     * @symbol  ?sendPermissionsTelemetry\@AppConfigs\@\@UEBA_NXZ
     */
    MCVAPI bool sendPermissionsTelemetry() const;
    /**
     * @hash   -1016282270
     * @symbol  ?setCanAccessWorldCallback\@AppConfigs\@\@UEAAXAEAVIMinecraftGame\@\@\@Z
     */
    MCVAPI void setCanAccessWorldCallback(class IMinecraftGame &);
    /**
     * @hash   405519452
     * @symbol  ?shouldPromptBeforeExit\@AppConfigs\@\@UEBA_NXZ
     */
    MCVAPI bool shouldPromptBeforeExit() const;
    /**
     * @hash   707296198
     * @symbol  ?supportsChangingMultiplayerDuringPlay\@AppConfigs\@\@UEBA_NXZ
     */
    MCVAPI bool supportsChangingMultiplayerDuringPlay() const;
    /**
     * @hash   1067576143
     * @symbol  ?useEduDemoUpsellDialog\@AppConfigs\@\@UEBA_NXZ
     */
    MCVAPI bool useEduDemoUpsellDialog() const;
    /**
     * @hash   268081552
     * @symbol  ?useFullScreenByDefault\@AppConfigs\@\@UEBA_NXZ
     */
    MCVAPI bool useFullScreenByDefault() const;
    /**
     * @hash   -1360249546
     * @symbol  ?useNormalizedFontSize\@AppConfigs\@\@UEBA_NXZ
     */
    MCVAPI bool useNormalizedFontSize() const;
    /**
     * @hash   1016867408
     * @symbol  ?webSocketsDisabled\@AppConfigs\@\@UEBA_NXZ
     */
    MCVAPI bool webSocketsDisabled() const;
    /**
     * @hash   -676349587
     * @symbol  ?worldBuilderDisabled\@AppConfigs\@\@UEBA_NXZ
     */
    MCVAPI bool worldBuilderDisabled() const;
    /**
     * @hash   -1959342668
     * @symbol  ?worldsAreSingleUse\@AppConfigs\@\@UEBA_NXZ
     */
    MCVAPI bool worldsAreSingleUse() const;
#endif
    /**
     * @hash   1967702684
     * @symbol  ??0AppConfigs\@\@QEAA\@XZ
     */
    MCAPI AppConfigs();

};