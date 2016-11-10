
#include "PiperExport.h"
#include "MatchVampPlugin.h"

std::string soname("match-vamp-plugin");
piper_vamp_js::PiperAdapter<MatchVampPlugin> adapter(soname);
piper_vamp_js::PiperPluginLibrary library({ &adapter });

PIPER_EXPORT_LIBRARY(library);

