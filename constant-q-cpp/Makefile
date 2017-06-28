
PIPER_VAMP_JS_DIR	:= ../ext/piper-vamp-js
PLUGIN_SRC_DIR		:= ../ext/constant-q-cpp

MODULE_NAME		:= CQ
MODULE_SOURCE		:= cqvamp.cpp

LIB_DIR			:= src
INC_DIR	  		:= cq
VAMP_DIR		:= vamp
KFFT_DIR  		:= src/ext/kissfft

LIB_SOURCES	:= \
	$(LIB_DIR)/CQKernel.cpp \
	$(LIB_DIR)/ConstantQ.cpp \
	$(LIB_DIR)/CQSpectrogram.cpp \
	$(LIB_DIR)/CQInverse.cpp \
	$(LIB_DIR)/Chromagram.cpp \
	$(LIB_DIR)/Pitch.cpp \
	$(LIB_DIR)/dsp/FFT.cpp \
	$(LIB_DIR)/dsp/KaiserWindow.cpp \
	$(LIB_DIR)/dsp/MathUtilities.cpp \
	$(LIB_DIR)/dsp/Resampler.cpp \
	$(LIB_DIR)/dsp/SincWindow.cpp

VAMP_SOURCES	:= \
	$(VAMP_DIR)/CQVamp.cpp \
	$(VAMP_DIR)/CQChromaVamp.cpp \
	$(VAMP_DIR)/libmain.cpp

SOURCE_FILES	:= \
	$(LIB_SOURCES) \
	$(VAMP_SOURCES)

KFFT_FILES	:= \
	$(LIB_DIR)/ext/kissfft/kiss_fft.c \
	$(LIB_DIR)/ext/kissfft/tools/kiss_fftr.c

PLUGIN_SOURCES		:= $(addprefix $(PLUGIN_SRC_DIR)/,$(SOURCE_FILES))
PLUGIN_C_SOURCES 	:= $(addprefix $(PLUGIN_SRC_DIR)/,$(KFFT_FILES))

EMFLAGS		:= -s TOTAL_MEMORY=134217728

DEFINES		:= -Dkiss_fft_scalar=double

INCLUDES	:= -I$(PLUGIN_SRC_DIR) -I$(PLUGIN_SRC_DIR)/$(LIB_DIR) -I$(PLUGIN_SRC_DIR)/$(INC_DIR) -I$(PLUGIN_SRC_DIR)/$(VAMP_DIR) -I$(PLUGIN_SRC_DIR)/$(KFFT_DIR) -I$(PLUGIN_SRC_DIR)/$(KFFT_DIR)/tools 

include $(PIPER_VAMP_JS_DIR)/Makefile.inc
