#include "ECIrreApp.h"
#include "Moose.h"
#include "AppFactory.h"
#include "ModulesApp.h"
#include "MooseSyntax.h"

template <>
InputParameters
validParams<ECIrreApp>()
{
  InputParameters params = validParams<MooseApp>();
  return params;
}

ECIrreApp::ECIrreApp(InputParameters parameters) : MooseApp(parameters)
{
  ECIrreApp::registerAll(_factory, _action_factory, _syntax);
}

ECIrreApp::~ECIrreApp() {}

void
ECIrreApp::registerAll(Factory & f, ActionFactory & af, Syntax & s)
{
  ModulesApp::registerAll(f, af, s);
  Registry::registerObjectsTo(f, {"ECIrreApp"});
  Registry::registerActionsTo(af, {"ECIrreApp"});

  /* register custom execute flags, action syntax, etc. here */
}

void
ECIrreApp::registerApps()
{
  registerApp(ECIrreApp);
}

/***************************************************************************************************
 *********************** Dynamic Library Entry Points - DO NOT MODIFY ******************************
 **************************************************************************************************/
extern "C" void
ECIrreApp__registerAll(Factory & f, ActionFactory & af, Syntax & s)
{
  ECIrreApp::registerAll(f, af, s);
}
extern "C" void
ECIrreApp__registerApps()
{
  ECIrreApp::registerApps();
}
