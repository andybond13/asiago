#ifndef ASIAGOAPP_H
#define ASIAGOAPP_H

#include "MooseApp.h"

class AsiagoApp;

template<>
InputParameters validParams<AsiagoApp>();

class AsiagoApp : public MooseApp
{
public:
  AsiagoApp(const std::string & name, InputParameters parameters);
  virtual ~AsiagoApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* ASIAGOAPP_H */
