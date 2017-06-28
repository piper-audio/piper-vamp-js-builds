
PIPER_VAMP_JS_DIR	:= ../ext/piper-vamp-js

PLUGIN_DIR		:= ../ext/cepstral-pitchtracker

SRC_DIR			:= $(PLUGIN_DIR)

MODULE_NAME		:= CepstralPitchTracker
MODULE_SOURCE		:= cepstral-pitchtracker.cpp

PLUGIN_SOURCES	:= \
		$(SRC_DIR)/AgentFeeder.cpp \
		$(SRC_DIR)/CepstralPitchTracker.cpp \
		$(SRC_DIR)/NoteHypothesis.cpp \
		$(SRC_DIR)/PeakInterpolator.cpp

DEFINES		:= 
INCLUDES	:= -I$(SRC_DIR)

include $(PIPER_VAMP_JS_DIR)/Makefile.inc
