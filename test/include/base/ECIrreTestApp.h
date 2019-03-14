//* This file is part of the MOOSE framework
//* https://www.mooseframework.org
//*
//* All rights reserved, see COPYRIGHT for full restrictions
//* https://github.com/idaholab/moose/blob/master/COPYRIGHT
//*
//* Licensed under LGPL 2.1, please see LICENSE for details
//* https://www.gnu.org/licenses/lgpl-2.1.html
#ifndef EC_IRRETESTAPP_H
#define EC_IRRETESTAPP_H

#include "MooseApp.h"

class ECIrreTestApp;

template <>
InputParameters validParams<ECIrreTestApp>();

class ECIrreTestApp : public MooseApp
{
public:
  ECIrreTestApp(InputParameters parameters);
  virtual ~ECIrreTestApp();

  static void registerApps();
  static void registerAll(Factory & f, ActionFactory & af, Syntax & s, bool use_test_objs = false);
};

#endif /* EC_IRRETESTAPP_H */
