/**
 * @file  CameraShakeCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CameraShakeCommand.
 *
 */
class CameraShakeCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAMERASHAKECOMMAND
public:
    class CameraShakeCommand& operator=(class CameraShakeCommand const &) = delete;
    CameraShakeCommand(class CameraShakeCommand const &) = delete;
    CameraShakeCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~CameraShakeCommand();
    /**
     * @hash   -884686839
     * @vftbl  1
     * @symbol  ?execute\@CameraShakeCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   -1640633460
     * @symbol  ?setup\@CameraShakeCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry &);

//private:
    /**
     * @hash   -636893164
     * @symbol  ?_executeAdd\@CameraShakeCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void _executeAdd(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   -1199717695
     * @symbol  ?_executeStop\@CameraShakeCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void _executeStop(class CommandOrigin const &, class CommandOutput &) const;

private:

};