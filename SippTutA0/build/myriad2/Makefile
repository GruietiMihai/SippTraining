MV_SOC_PLATFORM  = myriad2
MV_SOC_REV = ma2100

SHAVE_COMPONENTS = no
MV_COMMON_BASE  = ../../../../../../common
ComponentList := UnitTestVcs VcsHooks

DirAppRoot = ../..
DirAppOutput = ./output
#MV_TOOLS_VERSION=Latest
#Sipp options
#CCOPT+= -D'SIPP_NO_PRINTF'
CCOPT       += -DSIPP_NO_PRINTF
CCOPT_LRT   += -DSIPP_NO_PRINTF
MVCCOPT += -D'SIPP_USE_MVCV'
#########################################################################################
# Include SIPP specifics
include $(MV_COMMON_BASE)/components/sipp/arch/$(MV_SOC_REV)/build/myriad2/sippMyriad2Elf.mk 
#########################################################################################

#Leon headers
#LEON_HEADERS += $(MV_COMMON_BASE)/../examples/myriad2/Sipp/common/leon/octaveBayerIspParams.h

#The binary elf for Shave:
svuSippImg = $(DirAppOutput)/svuSippImg
RAWDATAOBJECTFILES += $(svuSippImg)_sym.o

#Include Sipp Filter Paths
include ../sipp/sippTutA0Model.mk

#Reference data

#########################################################################################
# Include the top makefile
PROJECTCLEAN += $(SippSvuObj)
include $(MV_COMMON_BASE)/generic.mk
#########################################################################################

$(svuSippImg).mvlib : $(SippSvuObj)
	@mkdir -p $(dir $@)
	$(ECHO) $(LD) -r $(LD_ENDIAN_OPT) $(SippSvuObj) -o $@
    
$(svuSippImg)_sym.o : $(svuSippImg).shvdcomplete
	$(ECHO) $(OBJCOPY) --prefix-symbols=SS_ --extract-symbol $< $@

$(DirAppObjBase)$(DirAppRoot)/leon/appMemMap.o : $(svuSippImg).shvdlib


TEST_TAGS:= "MA2100"
