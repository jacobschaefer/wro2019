APPL_COBJS +=

APPL_CXXOBJS += supportblocks.o stalldetection.o timer.o moveblocks.o methods.o globals.o

SRCLANG := c++

ifdef CONFIG_EV3RT_APPLICATION


# Include libraries
include $(EV3RT_SDK_LIB_DIR)/libcpp-test/Makefile
include $(EV3RT_SDK_LIB_DIR)/lib2/Makefile


endif
