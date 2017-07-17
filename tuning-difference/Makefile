
PIPER_VAMP_JS_DIR	:= ../ext/piper-vamp-js

PLUGIN_DIR		:= ../ext/tuning-difference

SRC_DIR			:= $(PLUGIN_DIR)/src
CQ_DIR			:= $(PLUGIN_DIR)/constant-q-cpp
CQS_DIR			:= $(CQ_DIR)/src

MODULE_NAME		:= TuningDifference
MODULE_SOURCE		:= tuning-difference.cpp

PLUGIN_SOURCES	:= \
	$(SRC_DIR)/TuningDifference.cpp \
	$(CQS_DIR)/CQKernel.cpp \
	$(CQS_DIR)/ConstantQ.cpp \
	$(CQS_DIR)/CQSpectrogram.cpp \
	$(CQS_DIR)/CQInverse.cpp \
	$(CQS_DIR)/Chromagram.cpp \
	$(CQS_DIR)/Pitch.cpp \
	$(CQS_DIR)/dsp/FFT.cpp \
	$(CQS_DIR)/dsp/KaiserWindow.cpp \
	$(CQS_DIR)/dsp/MathUtilities.cpp \
	$(CQS_DIR)/dsp/Resampler.cpp \
	$(CQS_DIR)/dsp/SincWindow.cpp

PLUGIN_C_SOURCES := \
	$(CQS_DIR)/ext/kissfft/kiss_fft.c \
	$(CQS_DIR)/ext/kissfft/tools/kiss_fftr.c

EMFLAGS		:= -s TOTAL_MEMORY=134217728

DEFINES		:= -Dkiss_fft_scalar=double

INCLUDES	:= -I$(SRC_DIR) -I$(CQ_DIR) -I$(CQ_DIR)/cq -I$(CQS_DIR) -I$(CQS_DIR)/ext/kissfft -I$(CQS_DIR)/ext/kissfft/tools 

include $(PIPER_VAMP_JS_DIR)/Makefile.inc
