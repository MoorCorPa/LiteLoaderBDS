/**
 * @file  ScreenHandlerBeacon.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ScreenHandlerBeacon.
 *
 */
class ScreenHandlerBeacon {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCREENHANDLERBEACON
public:
    class ScreenHandlerBeacon& operator=(class ScreenHandlerBeacon const &) = delete;
    ScreenHandlerBeacon(class ScreenHandlerBeacon const &) = delete;
    ScreenHandlerBeacon() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ScreenHandlerBeacon();
    /**
     * @hash   -1762577952
     * @vftbl  1
     * @symbol  ?handleAction\@ScreenHandlerBeacon\@\@MEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestAction\@\@\@Z
     */
    virtual enum class ItemStackNetResult handleAction(class ItemStackRequestAction const &);
    /**
     * @hash   1404235159
     * @vftbl  2
     * @symbol  ?endRequest\@ScreenHandlerBeacon\@\@MEAA?AW4ItemStackNetResult\@\@XZ
     */
    virtual enum class ItemStackNetResult endRequest();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   1442863103
     * @vftbl  4
     * @symbol  ?postRequest\@ScreenHandlerBeacon\@\@MEAAX_N\@Z
     */
    virtual void postRequest(bool);
    /**
     * @hash   1429411294
     * @symbol  ??0ScreenHandlerBeacon\@\@QEAA\@AEBVContainerScreenContext\@\@AEAVItemStackRequestActionHandler\@\@\@Z
     */
    MCAPI ScreenHandlerBeacon(class ContainerScreenContext const &, class ItemStackRequestActionHandler &);

//private:
    /**
     * @hash   1561943743
     * @symbol  ?_handleBeaconPaymentAction\@ScreenHandlerBeacon\@\@AEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestActionBeaconPayment\@\@\@Z
     */
    MCAPI enum class ItemStackNetResult _handleBeaconPaymentAction(class ItemStackRequestActionBeaconPayment const &);

private:

};