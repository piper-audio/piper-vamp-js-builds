/* -*- c-basic-offset: 4 indent-tabs-mode: nil -*-  vi:set ts=8 sts=4 sw=4: */

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

static std::string soname("qm-vamp-plugins");

static PiperAdapter<BeatTracker> beatTrackerAdapter(soname);
static PiperAdapter<OnsetDetector> onsetDetectorAdapter(soname);
static PiperAdapter<ChromagramPlugin> chromagramPluginAdapter(soname);
static PiperAdapter<ConstantQSpectrogram> constantQAdapter(soname);
static PiperAdapter<TonalChangeDetect> tonalChangeDetectorAdapter(soname);
static PiperAdapter<KeyDetector> keyDetectorAdapter(soname);
static PiperAdapter<MFCCPlugin> mfccPluginAdapter(soname);
static PiperAdapter<SegmenterPlugin> segmenterPluginAdapter(soname);
static PiperAdapter<SimilarityPlugin> similarityPluginAdapter(soname);
static PiperAdapter<BarBeatTracker> barBeatTrackPluginAdapter(soname);
//!!!static PiperAdapter<AdaptiveSpectrogram> adaptiveSpectrogramAdapter(soname);
static PiperAdapter<DWT> dwtAdapter(soname);
static PiperAdapter<Transcription> transcriptionAdapter(soname);

static PiperPluginLibrary library({
    &beatTrackerAdapter,
    &onsetDetectorAdapter,
    &chromagramPluginAdapter,
    &constantQAdapter,
    &tonalChangeDetectorAdapter,
    &keyDetectorAdapter,
    &mfccPluginAdapter,
    &segmenterPluginAdapter,
    &similarityPluginAdapter,
    &barBeatTrackPluginAdapter,
//!!!       &adaptiveSpectrogramAdapter,
    &dwtAdapter,
    &transcriptionAdapter
});

PIPER_EXPORT_LIBRARY(library);

