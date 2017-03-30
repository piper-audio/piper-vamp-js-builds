
PIPER_VAMP_JS_DIR	:= ../../piper-vamp-js
PLUGIN_SRC_DIR		:= ../../nnls-chroma

MODULE_NAME		:= NNLSChroma
MODULE_SOURCE		:= nnls-chroma.cpp

SOURCE_FILES	:= \
		chromamethods.cpp \
		NNLSBase.cpp \
		NNLSChroma.cpp \
		Chordino.cpp \
		Tuning.cpp \
		viterbi.cpp

C_SOURCE_FILES	:= \
		nnls.c

PLUGIN_SOURCES		:= $(addprefix $(PLUGIN_SRC_DIR)/,$(SOURCE_FILES))
PLUGIN_C_SOURCES 	:= $(addprefix $(PLUGIN_SRC_DIR)/,$(C_SOURCE_FILES))

INCLUDES	:= \
		-I$(PLUGIN_SRC_DIR) \
		-I../../DEPENDENCIES/generic/include \
		-I../../vamp-build-and-test/DEPENDENCIES/generic/include

EMFLAGS		:= -s TOTAL_MEMORY=134217728 -s NO_FILESYSTEM=0

include $(PIPER_VAMP_JS_DIR)/Makefile.inc
