/* -*- c-basic-offset: 4 indent-tabs-mode: nil -*-  vi:set ts=8 sts=4 sw=4: */

#include "PiperExport.h"
#include "CQVamp.h"
#include "CQChromaVamp.h"

static std::string soname("cqvamp");

class CQVampMIDIParamsAdapter : public piper_vamp_js::PiperAdapterBase<CQVamp>
{
public:
    CQVampMIDIParamsAdapter() : PiperAdapterBase<CQVamp>(soname) { }
    virtual Vamp::Plugin *createPlugin(float inputSampleRate) const override {
        return new CQVamp(inputSampleRate, true);
    }
};

class CQVampHzParamsAdapter : public piper_vamp_js::PiperAdapterBase<CQVamp>
{
public:
    CQVampHzParamsAdapter() : PiperAdapterBase<CQVamp>(soname) { }
    virtual Vamp::Plugin *createPlugin(float inputSampleRate) const override {
        return new CQVamp(inputSampleRate, false);
    }
};

static CQVampMIDIParamsAdapter cqVampMIDIParamsAdapter;
static CQVampHzParamsAdapter   cqVampHzParamsAdapter;

static piper_vamp_js::PiperAdapter<CQChromaVamp> cqChromaVampAdapter(soname);

static piper_vamp_js::PiperPluginLibrary library({
        &cqVampMIDIParamsAdapter,
        &cqVampHzParamsAdapter,
        &cqChromaVampAdapter
    });

PIPER_EXPORT_LIBRARY(library);
