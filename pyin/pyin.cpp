/* -*- c-basic-offset: 4 indent-tabs-mode: nil -*-  vi:set ts=8 sts=4 sw=4: */

#include "PiperExport.h"

#include "PYinVamp.h"
#include "YinVamp.h"
#include "LocalCandidatePYIN.h"

std::string soname("pyin");

piper_vamp_js::PiperAdapter<PYinVamp> pyinAdapter(soname);
piper_vamp_js::PiperAdapter<YinVamp> yinAdapter(soname);
piper_vamp_js::PiperAdapter<LocalCandidatePYIN> localCandAdapter(soname);

piper_vamp_js::PiperPluginLibrary library({
        &pyinAdapter, &yinAdapter, &localCandAdapter
});

PIPER_EXPORT_LIBRARY(library);

