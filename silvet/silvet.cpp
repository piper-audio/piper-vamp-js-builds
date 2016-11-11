/* -*- c-basic-offset: 4 indent-tabs-mode: nil -*-  vi:set ts=8 sts=4 sw=4: */

#include "PiperExport.h"
#include "Silvet.h"

static std::string soname("silvet");

static piper_vamp_js::PiperAdapter<Silvet> silvetAdapter(soname);
static piper_vamp_js::PiperPluginLibrary library({ &silvetAdapter });

PIPER_EXPORT_LIBRARY(library);

