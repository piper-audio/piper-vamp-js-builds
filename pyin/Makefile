
PIPER_VAMP_JS_DIR	:= ../../piper-vamp-js
PLUGIN_SRC_DIR		:= ../../pyin

MODULE_NAME		:= PYin
MODULE_SOURCE		:= pyin.cpp

SOURCE_FILES	:= \
		PYinVamp.cpp \
		YinVamp.cpp \
		LocalCandidatePYIN.cpp \
		Yin.cpp \
		YinUtil.cpp \
		MonoNote.cpp \
		MonoPitch.cpp \
		MonoNoteParameters.cpp \
		SparseHMM.cpp \
		MonoNoteHMM.cpp \
		MonoPitchHMM.cpp

PLUGIN_SOURCES	:= $(addprefix $(PLUGIN_SRC_DIR)/,$(SOURCE_FILES))

INCLUDES	:= \
		-I$(PLUGIN_SRC_DIR) \
		-I../../DEPENDENCIES/generic/include \
		-I../../vamp-build-and-test/DEPENDENCIES/generic/include

EMFLAGS		:= -s ALLOW_MEMORY_GROWTH=1

include $(PIPER_VAMP_JS_DIR)/Makefile.inc
