#include "AsiagoApp.h"
#include "Moose.h"
#include "AppFactory.h"
#include "ModulesApp.h"

template<>
InputParameters validParams<AsiagoApp>()
{
  InputParameters params = validParams<MooseApp>();

  params.set<bool>("use_legacy_uo_initialization") = false;
  params.set<bool>("use_legacy_uo_aux_computation") = false;
  return params;
}

AsiagoApp::AsiagoApp(InputParameters parameters) :
    MooseApp(parameters)
{

  Moose::registerObjects(_factory);
  ModulesApp::registerObjects(_factory);
  AsiagoApp::registerObjects(_factory);

  Moose::associateSyntax(_syntax, _action_factory);
  ModulesApp::associateSyntax(_syntax, _action_factory);
  AsiagoApp::associateSyntax(_syntax, _action_factory);
}

AsiagoApp::~AsiagoApp()
{
}

void
AsiagoApp::registerApps()
{
  registerApp(AsiagoApp);
}

void
AsiagoApp::registerObjects(Factory & factory)
{
}

void
AsiagoApp::associateSyntax(Syntax & syntax, ActionFactory & action_factory)
{
}
