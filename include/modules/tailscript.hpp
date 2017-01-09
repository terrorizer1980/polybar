#pragma once

#include "modules/script.hpp"

POLYBAR_NS

namespace modules {
  class tailscript_module : virtual public script_module {
   public:
    explicit tailscript_module(const bar_settings&, string);

   protected:
    void process();
  };
}

POLYBAR_NS_END