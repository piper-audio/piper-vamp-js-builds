
#include "PiperExport.h"

#include "PYinVamp.h"
#include "YinVamp.h"
#include "LocalCandidatePYIN.h"

using piper_vamp_js::PiperAdapter;
using piper_vamp_js::PiperPluginLibrary;

static std::string libname("pyin");

static PiperAdapter<PYinVamp>
pyinAdapter(
    libname,
    { "Pitch" },
    {
        { "notes",
            { "http://purl.org/ontology/af/Note" }
        }
    }
    );

static PiperAdapter<YinVamp>
yinAdapter(
    libname,
    { "Pitch" },
    {
        { "f0",
            { "http://purl.org/ontology/af/Pitch" }
        }
    }
    );

static PiperAdapter<LocalCandidatePYIN>
localCandidatePYinAdapter(
    libname,
    { "Pitch" }
    );

static PiperPluginLibrary library({
    &pyinAdapter,
    &yinAdapter,
    &localCandidatePYinAdapter
});

PIPER_EXPORT_LIBRARY(library);

