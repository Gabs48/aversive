TARGET = beacon_tsop

AVERSIVE_DIR = ../../../..

# List C source files here. (C dependencies are automatically generated.)
SRC = main.c commands.c commands_cs.c cmdline.c trigo.c uart_proto.c

# List Assembler source files here.
# Make them always end in a capital .S.  Files ending in a lowercase .s
# will not be considered source files but generated files (assembler
# output from the compiler), and will be deleted upon "make clean"!
# Even though the DOS/Win* filesystem matches both .s and .S the same,
# it will preserve the spelling of the filenames, and gcc itself does
# care about how the name is spelled on its command-line.
ASRC =

AVRDUDE_DELAY=15

CFLAGS += -W -Wall -Werror -I../../common

########################################

-include .aversive_conf
include $(AVERSIVE_DIR)/mk/aversive_project.mk
