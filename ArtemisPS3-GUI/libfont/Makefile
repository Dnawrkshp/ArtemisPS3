.SUFFIXES:
ifeq ($(strip $(PSL1GHT)),)
$(error "Please set PSL1GHT in your environment. export PSL1GHT=<path>")
endif

include $(PSL1GHT)/ppu_rules

TARGET		:=	libfont
BUILD		:=	build
SOURCES		:=	source
DATA		:=	data
INCLUDES	:=	include
LIBS		:=	

LD			:=	ppu-ld

CFLAGS		=	-O2 -Wall -mcpu=cell $(MACHDEP) $(INCLUDE)
ifneq ($(BUILD),$(notdir $(CURDIR)))

export OUTPUT	:=	$(CURDIR)/$(TARGET)
export VPATH	:=	$(foreach dir,$(SOURCES),$(CURDIR)/$(dir)) \
					$(foreach dir,$(DATA),$(CURDIR)/$(dir))
export BUILDDIR	:=	$(CURDIR)/$(BUILD)
export DEPSDIR	:=	$(BUILDDIR)

CFILES		:= $(foreach dir,$(SOURCES),$(notdir $(wildcard $(dir)/*.c)))
CXXFILES	:= $(foreach dir,$(SOURCES),$(notdir $(wildcard $(dir)/*.cpp)))
SFILES		:= $(foreach dir,$(SOURCES),$(notdir $(wildcard $(dir)/*.S)))
BINFILES	:= $(foreach dir,$(DATA),$(notdir $(wildcard $(dir)/*.bin)))
VCGFILES	:= $(foreach dir,$(SOURCES),$(notdir $(wildcard $(dir)/*.vcg)))
VSAFILES	:= $(foreach dir,$(SOURCES),$(notdir $(wildcard $(dir)/*.vsa)))


export OFILES	:=	$(CFILES:.c=.o) \
					$(CXXFILES:.cpp=.o) \
					$(SFILES:.S=.o) \
					$(BINFILES:.bin=.bin.o) \
					$(VCGFILES:.vcg=.vcg.o) \
					$(VSAFILES:.vsa=.vsa.o)

export BINFILES	:=	$(BINFILES:.bin=.bin.h)
export VCGFILES	:=	$(VCGFILES:.vcg=.vcg.h)
export VSAFILES	:=	$(VSAFILES:.vsa=.vsa.h)

export INCLUDE	:=	$(foreach dir,$(INCLUDES),-I$(CURDIR)/$(dir)) \
			-I$(CURDIR)/$(BUILD) -I$(PSL1GHT)/ppu/include \
			-I$(PORTLIBS)/include

.PHONY: $(BUILD) install clean

$(BUILD):
	@[ -d $@ ] || mkdir -p $@
	@make --no-print-directory -C $(BUILD) -f $(CURDIR)/Makefile

install: $(BUILD)
	@echo Copying...
	@cp include/*.h $(PORTLIBS)/include
	@cp *.a $(PORTLIBS)/lib/
	@echo Done!

clean:
	@echo Clean...
	@rm -rf $(BUILD) $(OUTPUT).elf $(OUTPUT).self $(OUTPUT).a

else

DEPENDS	:= $(OFILES:.o=.d)

$(OUTPUT).a: $(OFILES)
$(OFILES): $(BINFILES) $(VCGFILES)

-include $(DEPENDS)

endif
