/* -*- c-basic-offset: 4 indent-tabs-mode: nil -*-  vi:set ts=8 sts=4 sw=4: */

#include "PiperExport.h"

#include "NNLSChroma.h"
#include "Chordino.h"
#include "Tuning.h"

std::string soname("nnls-chroma");

piper_vamp_js::PiperAdapter<NNLSChroma> chromaAdapter(soname);
piper_vamp_js::PiperAdapter<Chordino> chordinoAdapter(soname);
piper_vamp_js::PiperAdapter<Tuning> tuningAdapter(soname);

piper_vamp_js::PiperPluginLibrary library({
        &chromaAdapter, &chordinoAdapter, &tuningAdapter
});

PIPER_EXPORT_LIBRARY(library);

