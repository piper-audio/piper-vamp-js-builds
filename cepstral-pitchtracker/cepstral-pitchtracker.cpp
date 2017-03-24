/* -*- c-basic-offset: 4 indent-tabs-mode: nil -*-  vi:set ts=8 sts=4 sw=4: */

#include "PiperExport.h"

#include "CepstralPitchTracker.h"

using piper_vamp_js::PiperAdapter;
using piper_vamp_js::PiperPluginLibrary;

static std::string soname("cepstral-pitchtracker");

static PiperAdapter<CepstralPitchTracker> cepstralPitchTrackerAdapter(soname);

static PiperPluginLibrary library({
    &cepstralPitchTrackerAdapter
});

PIPER_EXPORT_LIBRARY(library);
