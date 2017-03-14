
PIPER_VAMP_JS_DIR	:= ../../piper-vamp-js

PLUGIN_DIR		:= ../../tipic

SRC_DIR			:= $(PLUGIN_DIR)/src
QMDSP_DIR    		:= $(PLUGIN_DIR)/qm-dsp

MODULE_NAME		:= Tipic
MODULE_SOURCE		:= tipic.cpp

PLUGIN_SOURCES	:= \
		$(SRC_DIR)/PitchFilterbank.cpp \
		$(SRC_DIR)/CRP.cpp \
		$(SRC_DIR)/Chroma.cpp \
		$(SRC_DIR)/FeatureDownsample.cpp \
		$(SRC_DIR)/CENS.cpp \
		$(SRC_DIR)/TipicVampPlugin.cpp \
		$(QMDSP_DIR)/dsp/signalconditioning/Filter.cpp \
		$(QMDSP_DIR)/dsp/transforms/DCT.cpp \
		$(QMDSP_DIR)/dsp/transforms/FFT.cpp \
		$(QMDSP_DIR)/dsp/rateconversion/Resampler.cpp \
		$(QMDSP_DIR)/maths/MathUtilities.cpp \
		$(QMDSP_DIR)/base/KaiserWindow.cpp \
		$(QMDSP_DIR)/base/SincWindow.cpp

PLUGIN_C_SOURCES	:= \
		$(QMDSP_DIR)/ext/kissfft/kiss_fft.c \
		$(QMDSP_DIR)/ext/kissfft/tools/kiss_fftr.c

DEFINES		:= -Dkiss_fft_scalar=double
INCLUDES	:= -I$(SRC_DIR) -I$(QMDSP_DIR) -I$(QMDSP_DIR)/ext/kissfft -I$(QMDSP_DIR)/ext/kissfft/tools

include $(PIPER_VAMP_JS_DIR)/Makefile.inc
