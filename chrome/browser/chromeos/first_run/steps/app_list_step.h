// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_CHROMEOS_FIRST_RUN_STEPS_APP_LIST_STEP_H_
#define CHROME_BROWSER_CHROMEOS_FIRST_RUN_STEPS_APP_LIST_STEP_H_

#include "base/compiler_specific.h"
#include "chrome/browser/chromeos/first_run/step.h"

namespace chromeos {
namespace first_run {

class AppListStep : public Step {
 public:
  AppListStep(ash::FirstRunHelper* shell_helper, FirstRunActor* actor);

 private:
  // Overriden from Step.
  virtual void DoShow() OVERRIDE;

  DISALLOW_COPY_AND_ASSIGN(AppListStep);
};

}  // namespace first_run
}  // namespace chromeos

#endif  // CHROME_BROWSER_CHROMEOS_FIRST_RUN_STEPS_APP_LIST_STEP_H_

