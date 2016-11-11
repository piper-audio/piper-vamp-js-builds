
PIPER_VAMP_JS_DIR	:= ../../piper-vamp-js
PLUGIN_SRC_DIR		:= ../../match-vamp/src

MODULE_NAME		:= MatchVampPlugin
MODULE_SOURCE		:= match-vamp-plugin.cpp

PLUGIN_SOURCES	:= $(wildcard $(PLUGIN_SRC_DIR)/*.cpp)

INCLUDES	:= -I$(PLUGIN_SRC_DIR)
DEFINES		:= -DUSE_COMPACT_TYPES
EMFLAGS		:= -s TOTAL_MEMORY=100000000

include $(PIPER_VAMP_JS_DIR)/Makefile.inc
