
PIPER_VAMP_JS_DIR	:= ../../piper-vamp-js
MATCH_VAMP_DIR		:= ../../match-vamp

MODULE_NAME	:= MatchVampPlugin

SRC_DIR		:= $(MATCH_VAMP_DIR)/src

PLUGIN_SOURCES	:= $(wildcard $(SRC_DIR)/*.cpp)

INCLUDES	:= -I$(SRC_DIR)
DEFINES		:= -DUSE_COMPACT_TYPES
EMFLAGS		:= -s TOTAL_MEMORY=100000000

MODULE_SOURCE	:= match-vamp-plugin.cpp

include $(PIPER_VAMP_JS_DIR)/Makefile.inc
