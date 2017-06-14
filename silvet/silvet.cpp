
#include "PiperExport.h"

#include "Silvet.h"

using piper_vamp_js::PiperAdapter;
using piper_vamp_js::PiperPluginLibrary;

static std::string libname("silvet");

static PiperAdapter<Silvet>
silvetAdapter(
    libname,
    { "Notes" },
    {
        { "notes",
            { "http://purl.org/ontology/af/Note" }
        },
        { "onsets",
            { "http://purl.org/ontology/af/Onset" }
        },
        { "onoffsets",
            { "" }
        },
        { "timefreq",
            { "http://purl.org/ontology/af/Spectrogram" }
        },
        { "pitchactivation",
            { "http://purl.org/ontology/af/Spectrogram" }
        },
        { "chroma",
            { "http://purl.org/ontology/af/Chromagram" }
        },
        { "templates",
            { "" }
        }
    }
    );

static PiperPluginLibrary library({
    &silvetAdapter
});

PIPER_EXPORT_LIBRARY(library);

