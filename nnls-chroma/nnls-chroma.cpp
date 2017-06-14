
#include "PiperExport.h"

#include "NNLSChroma.h"
#include "Chordino.h"
#include "Tuning.h"

using piper_vamp_js::PiperAdapter;
using piper_vamp_js::PiperPluginLibrary;

static std::string libname("nnls-chroma");

static PiperAdapter<NNLSChroma>
nnlsChromaAdapter(
    libname,
    { "Visualisation" },
    {
        { "logfreqspec",
            { "http://purl.org/ontology/af/Spectrogram" }
        },
        { "tunedlogfreqspec",
            { "http://purl.org/ontology/af/Spectrogram" }
        },
        { "semitonespectrum",
            { "http://purl.org/ontology/af/Spectrogram" }
        },
        { "chroma",
            { "http://purl.org/ontology/af/Chromagram" }
        },
        { "basschroma",
            { "http://purl.org/ontology/af/Chromagram" }
        },
        { "bothchroma",
            { "http://purl.org/ontology/af/Chromagram" }
        }
    }
    );

static PiperAdapter<Chordino>
chordinoAdapter(
    libname,
    { "Notes" },
    {
        { "simplechord",
            { "http://purl.org/ontology/af/ChordSegment" }
        },
        { "chordnotes",
            { "" }
        },
        { "harmonicchange",
            { "http://purl.org/ontology/af/TonalChangeDetectionFunction" }
        },
        { "loglikelihood",
            { "" }
        }
    }
    );

static PiperAdapter<Tuning>
tuningAdapter(
    libname,
    { "Key and Tonality" },
    {
        { "tuning",
            { "http://purl.org/ontology/af/MusicSegment" }
        },
        { "localtuning",
            { "" }
        }
    }
    );

static PiperPluginLibrary library({
    &nnlsChromaAdapter,
    &chordinoAdapter,
    &tuningAdapter
});

PIPER_EXPORT_LIBRARY(library);

