
#include "PiperExport.h"
#include "TuningDifference.h"

using piper_vamp_js::PiperAdapter;
using piper_vamp_js::PiperPluginLibrary;

static std::string libname("tuning-difference");

static PiperAdapter<TuningDifference>
tuningDifferenceAdapter(
    libname,
    { "Key and Tonality" },
    {
        { "cents",
            { "" }
        },
        { "tuningfreq",
            { "" }
        },
        { "reffeature",
            { "" }
        },
        { "otherfeature",
            { "" }
        },
        { "rotfeature",
            { "" }
        }
    }
    );

static PiperPluginLibrary library({
    &tuningDifferenceAdapter
});

PIPER_EXPORT_LIBRARY(library);

