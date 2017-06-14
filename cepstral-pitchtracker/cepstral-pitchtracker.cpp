
#include "PiperExport.h"

#include "CepstralPitchTracker.h"

using piper_vamp_js::PiperAdapter;
using piper_vamp_js::PiperPluginLibrary;

static std::string libname("cepstral-pitchtracker");

static PiperAdapter<CepstralPitchTracker>
cepstralPitchTrackerAdapter(
    libname,
    { "Notes" },
    {
        { "f0",
            { "http://purl.org/ontology/af/Pitch" }
        },
        { "notes",
            { "http://purl.org/ontology/af/Note" }
        }
    }
    );

static PiperPluginLibrary library({
    &cepstralPitchTrackerAdapter
});

PIPER_EXPORT_LIBRARY(library);

