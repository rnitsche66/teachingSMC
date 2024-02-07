##############################################################################
### Template file         : LibraryInterface.tmk
### File                  : FFT4dSpace_1.mk
### Compatibility         : DSMAKE 6.26
### Description           : Library makefile.
###
### Copyright 2016, dSPACE GmbH. All rights reserved.
###
##############################################################################

MAKEFILE_DIR = "$(INTERFACE_IN_INCLUDE_FILEPATH,D,"=)"

TMP_INTERFACE_LIB_FFT4dSpace_1_CC_SRC_DIRPATHS    =  \
 ".\..\..\..\..\Components\FFT4dSpace_1" \
 ".\..\..\..\..\Components\FFT4dSpace_1\FFT4dSpace_1_dsrt" \
 ".\..\..\..\..\Components\FFT4dSpace_1\ml\rtw\c\src" \
 ".\..\..\..\..\Components\FFT4dSpace_1\ml\simulink\src" \
 ".\..\..\..\..\Components\FFT4dSpace_1\otherFiles" \
 ".\..\..\..\..\Components\FFT4dSpace_1\PI\misc"

TMP_INTERFACE_LIB_FFT4dSpace_1_CC_HDR_DIRPATHS    =  \
 ".\..\..\..\..\Components\FFT4dSpace_1" \
 ".\..\..\..\..\Components\FFT4dSpace_1\FFT4dSpace_1_dsrt" \
 ".\..\..\..\..\Components\FFT4dSpace_1\ml\extern\include" \
 ".\..\..\..\..\Components\FFT4dSpace_1\ml\simulink\include" \
 ".\..\..\..\..\Components\FFT4dSpace_1\ml\rtw\c\src" \
 ".\..\..\..\..\Components\FFT4dSpace_1\ml\rtw\c\src\ext_mode\common" \
 ".\..\..\..\..\Components\FFT4dSpace_1\ml\toolbox\dsp\include" \
 ".\..\..\..\..\Components\FFT4dSpace_1\ml\toolbox\dsp\extern\src\export\include\src" \
 ".\..\..\..\..\Components\FFT4dSpace_1\ml\toolbox\dsp\extern\src\export\include" \
 ".\..\..\..\..\Components\FFT4dSpace_1\ml\toolbox\shared\dsp\vision\matlab\include" \
 ".\..\..\..\..\Components\FFT4dSpace_1\otherFiles" \
 ".\..\..\..\..\Components\FFT4dSpace_1\PI\misc"

#-------------------------------------------------------------------------------
# Interface Settings
#-------------------------------------------------------------------------------

INTERFACE_INCLUDE_MAKEFILE_VERSION = 1

% set INTERFACE_LIB_FFT4dSpace_1_FILELOCATION = $(MAKEFILE_DIR,>\FFT4dSpace_1.a)

INTERFACE_LIB_FFT4dSpace_1_CC_SRC_FILES       =  \
 FFT4dSpace_1.c \
 FFT4dSpace_1_data.c \
 FFT4dSpace_1_dsrtmdlfcn.c \
 FFT4dSpace_1_dsrtmf.c \
 FFT4dSpace_1_dsrttf.c \
 FFT4dSpace_1_dsrtvdf.c \
 rtGetInf.c \
 rtGetNaN.c \
 rt_nonfinite.c

% foreach IDX_DIRPATH in $(TMP_INTERFACE_LIB_FFT4dSpace_1_CC_SRC_DIRPATHS)
%   set INTERFACE_LIB_FFT4dSpace_1_CC_SRC_DIRPATHS += $(MAKEFILE_DIR,>\$(IDX_DIRPATH,"=),A)
% endfor
% set INTERFACE_LIB_FFT4dSpace_1_CC_SRC_DIRPATHS += 

% foreach IDX_DIRPATH in $(TMP_INTERFACE_LIB_FFT4dSpace_1_CC_HDR_DIRPATHS)
%   set INTERFACE_LIB_FFT4dSpace_1_CC_HDR_DIRPATHS += $(MAKEFILE_DIR,>\$(IDX_DIRPATH,"=),A)
% endfor
% set INTERFACE_LIB_FFT4dSpace_1_CC_HDR_DIRPATHS += 

INTERFACE_LIB_FFT4dSpace_1_OBJ_FILEPATHS      = 

INTERFACE_LIB_FFT4dSpace_1_CC_ADD_DEFINES     =  \
 Model=FFT4dSpace_1 \
 MT=0 \
 NUMST=4 \
 NCSTATES=0 \
 TID01EQ=1 \
 USE_RTMODEL \
 RT \
 NO_PRINTF

INTERFACE_LIB_FFT4dSpace_1_CC_ADD_UNDEFS      = 

# Interface information about created library
INTERFACE_LIB_TARGET        = FFT4dSpace_1

% set INTERFACE_LIB_FILEPATHS += $(MAKEFILE_DIR,>\FFT4dSpace_1.a)

INTERFACE_LIB_FILEPATHS     += 

% undef IDX_DIRPATH
% undef TMP_INTERFACE_LIB_FFT4dSpace_1_CC_SRC_DIRPATHS
% undef TMP_INTERFACE_LIB_FFT4dSpace_1_CC_HDR_DIRPATHS
% undef MAKEFILE_DIR

# [EOF]