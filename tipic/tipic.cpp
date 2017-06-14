
#include "PiperExport.h"

#include "TipicVampPlugin.h"

using piper_vamp_js::PiperAdapter;
using piper_vamp_js::PiperPluginLibrary;

static std::string libname("tipic");

static PiperAdapter<Tipic>
tipicAdapter(
    libname,
    { "Visualisation" },
    {
        { "pitch",
            { "http://purl.org/ontology/af/Spectrogram" }
        },
        { "pitch-smoothed",
            { "" }
        },
        { "chroma",
            { "http://purl.org/ontology/af/Chromagram" }
        },
        { "chroma-smoothed",
            { "" }
        },
        { "clp",
            { "http://purl.org/ontology/af/Chromagram" }
        },
        { "clp-smoothed",
            { "" }
        },
        { "cens",
            { "" }
        },
        { "crp",
            { "http://purl.org/ontology/af/Chromagram" }
        },
        { "crp-smoothed",
            { "" }
        }
    }
    );

static PiperPluginLibrary library({
    &tipicAdapter
});

PIPER_EXPORT_LIBRARY(library);

