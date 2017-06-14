
#include "PiperExport.h"

#include "CQVamp.h"
#include "CQChromaVamp.h"

using piper_vamp_js::PiperAdapter;
using piper_vamp_js::PiperAdapterBase;
using piper_vamp_js::PiperPluginLibrary;

static std::string libname("cqvamp");

piper_vamp::StaticOutputInfo cqStaticOutputInfo {
    { "constantq",
        { "http://purl.org/ontology/af/Spectrogram" }
    }
};

class CQVampMIDIParamsAdapter : public PiperAdapterBase<CQVamp>
{
public:
    CQVampMIDIParamsAdapter() : PiperAdapterBase<CQVamp>(libname,
                                                         { "Visualisation" },
                                                         cqStaticOutputInfo) { }
    virtual Vamp::Plugin *createPlugin(float inputSampleRate) const override {
        return new CQVamp(inputSampleRate, true);
    }
};

class CQVampHzParamsAdapter : public PiperAdapterBase<CQVamp>
{
public:
    CQVampHzParamsAdapter() : PiperAdapterBase<CQVamp>(libname,
                                                       { "Visualisation" },
                                                       cqStaticOutputInfo) { }
    virtual Vamp::Plugin *createPlugin(float inputSampleRate) const override {
        return new CQVamp(inputSampleRate, false);
    }
};

static CQVampMIDIParamsAdapter cqVampMIDIParamsAdapter;
static CQVampHzParamsAdapter   cqVampHzParamsAdapter;

static PiperAdapter<CQChromaVamp>
cqChromaVampAdapter(
    libname,
    { "Visualisation" },
    {
        { "chromagram",
            { "http://purl.org/ontology/af/Chromagram" }
        }
    }
    );

static PiperPluginLibrary library({
    &cqVampMIDIParamsAdapter,
    &cqVampHzParamsAdapter,
    &cqChromaVampAdapter
});

PIPER_EXPORT_LIBRARY(library);

