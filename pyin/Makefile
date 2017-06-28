
PIPER_VAMP_JS_DIR	:= ../ext/piper-vamp-js
PLUGIN_SRC_DIR		:= ../ext/pyin

MODULE_NAME		:= PYin
MODULE_SOURCE		:= pyin.cpp

SOURCE_FILES	:= \
		PYinVamp.cpp \
		YinVamp.cpp \
		LocalCandidatePYIN.cpp \
		Yin.cpp \
		YinUtil.cpp \
		MonoNote.cpp \
		MonoNoteParameters.cpp \
		SparseHMM.cpp \
		MonoNoteHMM.cpp \
		MonoPitchHMM.cpp

PLUGIN_SOURCES	:= $(addprefix $(PLUGIN_SRC_DIR)/,$(SOURCE_FILES))

INCLUDES	:= \
		-I$(PLUGIN_SRC_DIR) \
		-I../ext/vamp-build-and-test/DEPENDENCIES/generic/include

EMFLAGS		:= -s TOTAL_MEMORY=33554432

include $(PIPER_VAMP_JS_DIR)/Makefile.inc
