
#include "PiperExport.h"

#include "plugins/BeatTrack.h"
#include "plugins/OnsetDetect.h"
#include "plugins/ChromagramPlugin.h"
#include "plugins/ConstantQSpectrogram.h"
#include "plugins/TonalChangeDetect.h"
#include "plugins/KeyDetect.h"
#include "plugins/MFCCPlugin.h"
#include "plugins/SegmenterPlugin.h"
#include "plugins/SimilarityPlugin.h"
#include "plugins/BarBeatTrack.h"
//!!!#include "plugins/AdaptiveSpectrogram.h"
#include "plugins/DWT.h"
#include "plugins/Transcription.h"

using piper_vamp_js::PiperAdapter;
using piper_vamp_js::PiperPluginLibrary;

static std::string libname("qm-vamp-plugins");

static PiperAdapter<BeatTracker>
qmTempoTrackerAdapter(
    libname,
    { "Time", "Tempo" },
    {
        { "beats",
            { "http://purl.org/ontology/af/Beat" }
        },
        { "detection_fn",
            { "http://purl.org/ontology/af/OnsetDetectionFunction" }
        },
        { "tempo",
            { "http://purl.org/ontology/af/Tempo" }
        }
    }
    );

static PiperAdapter<OnsetDetector>
qmOnsetDetectorAdapter(
    libname,
    { "Time", "Onsets" },
    {
        { "onsets",
            { "http://purl.org/ontology/af/Onset" }
        },
        { "detection_fn",
            { "http://purl.org/ontology/af/OnsetDetectionFunction" }
        },
        { "smoothed_df",
            { "http://purl.org/ontology/af/OnsetDetectionFunction" }
        }
    }
    );

static PiperAdapter<ChromagramPlugin>
qmChromagramAdapter(
    libname,
    { "Visualisation" },
    {
        { "chromagram",
            { "http://purl.org/ontology/af/Chromagram" }
        },
        { "chromameans",
            { "" }
        }
    }
    );

static PiperAdapter<ConstantQSpectrogram>
qmConstantQAdapter(
    libname,
    { "Visualisation" },
    {
        { "constantq",
            { "http://purl.org/ontology/af/Spectrogram" }
        }
    }
    );

static PiperAdapter<TonalChangeDetect>
qmTonalChangeAdapter(
    libname,
    { "Key and Tonality" },
    {
        { "tcstransform",
            { "http://purl.org/ontology/af/TonalContentSpace" }
        },
        { "tcfunction",
            { "http://purl.org/ontology/af/TonalChangeDetectionFunction" }
        },
        { "changepositions",
            { "http://purl.org/ontology/af/TonalOnset" }
        }
    }
    );

static PiperAdapter<KeyDetector>
qmKeyDetectorAdapter(
    libname,
    { "Key and Tonality" },
    {
        { "tonic",
            { "" }
        },
        { "mode",
            { "" }
        },
        { "key",
            { "http://purl.org/ontology/af/KeyChange" }
        },
        { "keystrength",
            { "" }
        }
    }
    );

static PiperAdapter<SegmenterPlugin>
qmSegmenterAdapter(
    libname,
    { "Classification" },
    {
        { "segmentation",
            { "http://purl.org/ontology/af/StructuralSegment" }
        }
    }
    );

static PiperAdapter<SimilarityPlugin>
qmSimilarityAdapter(
    libname,
    { "Classification" },
    {
        { "distancematrix",
            { "" }
        },
        { "distancevector",
            { "" }
        },
        { "sorteddistancevector",
            { "" }
        },
        { "means",
            { "" }
        },
        { "variances",
            { "" }
        },
        { "beatspectrum",
            { "" }
        }
    }
    );

static PiperAdapter<MFCCPlugin>
qmMfccAdapter(
    libname,
    { "Low Level Features" },
    {
        { "coefficients",
            { "" }
        },
        { "means",
            { "" }
        }
    }
    );

static PiperAdapter<BarBeatTracker>
qmBarBeatTrackerAdapter(
    libname,
    { "Time", "Tempo" },
    {
        { "beats",
            { "http://purl.org/ontology/af/Beat" }
        },
        { "bars",
            { "" }
        },
        { "beatcounts",
            { "" }
        },
        { "beatsd",
            { "" }
        }
    }
    );

static PiperAdapter<DWT>
qmDwtAdapter(
    libname,
    { "Visualisation" },
    {
        { "wcoeff",
            { "" }
        }
    }
    );

/*
static PiperAdapter<AdaptiveSpectrogram>
qmAdaptiveSpectrogramAdapter(
    libname,
    { "Visualisation" },
    {
        { "output",
            { "http://purl.org/ontology/af/Spectrogram" }
        }
    }
    );
*/

static PiperAdapter<Transcription>
qmTranscriptionAdapter(
    libname,
    { "Notes" },
    {
        { "transcription",
            { "http://purl.org/ontology/af/Note" }
        }
    }
    );

static PiperPluginLibrary library({
    &qmTempoTrackerAdapter,
    &qmOnsetDetectorAdapter,
    &qmChromagramAdapter,
    &qmConstantQAdapter,
    &qmTonalChangeAdapter,
    &qmKeyDetectorAdapter,
    &qmSegmenterAdapter,
    &qmSimilarityAdapter,
    &qmMfccAdapter,
    &qmBarBeatTrackerAdapter,
    &qmDwtAdapter,
//    &qmAdaptivespectrogramAdapter,
    &qmTranscriptionAdapter
});

PIPER_EXPORT_LIBRARY(library);

