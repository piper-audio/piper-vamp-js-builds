/* -*- c-basic-offset: 4 indent-tabs-mode: nil -*-  vi:set ts=8 sts=4 sw=4: */

#include "PiperExport.h"

#include "TipicVampPlugin.h"

using piper_vamp_js::PiperAdapter;
using piper_vamp_js::PiperPluginLibrary;

static std::string soname("tipic");

static PiperAdapter<Tipic> tipicAdapter(soname);

static PiperPluginLibrary library({
    &tipicAdapter
});

PIPER_EXPORT_LIBRARY(library);

