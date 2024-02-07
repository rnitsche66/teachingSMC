CC_OPT_SET_SUPPORTED_VALUES = DEFAULT NONE CUSTOM 
INCLUDE_MAKEFILE_VERSION    = 1 
LIB_TARGET                  = FFT4dSpace_1 
SRCS= FFT4dSpace_1.c FFT4dSpace_1_data.c FFT4dSpace_1_dsrtmdlfcn.c FFT4dSpace_1_dsrtmf.c FFT4dSpace_1_dsrttf.c \
		  FFT4dSpace_1_dsrtvdf.c rtGetInf.c rtGetNaN.c rt_nonfinite.c
MRK_FILES                   = FFT4dSpace_1.mrk FFT4dSpace_1_data.mrk FFT4dSpace_1_dsrtmdlfcn.mrk FFT4dSpace_1_dsrtmf.mrk FFT4dSpace_1_dsrttf.mrk FFT4dSpace_1_dsrtvdf.mrk rtGetInf.mrk rtGetNaN.mrk rt_nonfinite.mrk  
OBJS= FFT4dSpace_1.o86 FFT4dSpace_1_data.o86 FFT4dSpace_1_dsrtmdlfcn.o86 FFT4dSpace_1_dsrtmf.o86 \
		  FFT4dSpace_1_dsrttf.o86 FFT4dSpace_1_dsrtvdf.o86 rtGetInf.o86 rtGetNaN.o86 rt_nonfinite.o86
CC_SRC_DIRPATHS = \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1 \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\FFT4dSpace_1_dsrt \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\rtw\c\src \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\simulink\src \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\otherFiles \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\PI\misc 
 
CC_HDR_DIRPATHS = \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1 \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\FFT4dSpace_1_dsrt \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\extern\include \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\simulink\include \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\rtw\c\src \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\rtw\c\src\ext_mode\common \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\toolbox\dsp\include \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\toolbox\dsp\extern\src\export\include\src \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\toolbox\dsp\extern\src\export\include \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\toolbox\shared\dsp\vision\matlab\include \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\otherFiles \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\PI\misc 
 
CC_LIB_FILE                 = C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Build\FFT4dSpace_1\Compile\FFT4dSpace_1\FFT4dSpace_1.a 
OBJ_FILEPATHS               =  
LIB_DIRPATHS                =    
CUSTOM_DIRPATHS             =   
CC_ADD_OPTS                 =    
CPP_ADD_OPTS                =    
CC_ADD_DEFINES              = DATA_PORT_ACCESS_POINT_API_VERSION=2 Model=FFT4dSpace_1 MT=0 NUMST=4 NCSTATES=0 TID01EQ=1 USE_RTMODEL RT NO_PRINTF 
CC_ADD_UNDEFS               =  
CC_OPT_SET                  = Default 
CC_CUSTOM_OPT_OPTS          =  

all : MakeLib 

depend : 

%include ..\Configuration.mk 
%include ..\LibraryRules.mk 
%include ..\CommonRules.mk 

CC_ALL_OPTS = \
 -c \
 -fno-common \
 -nostdinc \
 -fno-strict-aliasing \
 -pipe \
 -march=sandybridge \
 -mno-avx \
 -mfpmath=sse \
 -msse2 \
 -ffast-math \
 -fomit-frame-pointer \
 -mstackrealign \
 "-isystemC:\Appl\dSPACE\dSPACE RCPHIL 2021-A\SCALEXIO\Include" \
 "-isystemC:\Appl\dSPACE\dSPACE RCPHIL 2021-A\SCALEXIO\Include" \
 -isystem"C:\Appl\dSPACE\dSPACE RCPHIL 2021-A\Compiler\Linux440_550\target\i686-linux-gnu\i686-linux-gnu\include\c++\5.5.0" \
 -isystem"C:\Appl\dSPACE\dSPACE RCPHIL 2021-A\Compiler\Linux440_550\target\i686-linux-gnu\i686-linux-gnu\include\c++\5.5.0\i686-linux-gnu" \
 -isystem"C:\Appl\dSPACE\dSPACE RCPHIL 2021-A\Compiler\Linux440_550\target\i686-linux-gnu\include" \
 -isystem"C:\Appl\dSPACE\dSPACE RCPHIL 2021-A\Compiler\Linux440_550\target\i686-linux-gnu\lib\gcc\i686-linux-gnu\5.5.0\include" \
 -isystem"C:\Appl\dSPACE\dSPACE RCPHIL 2021-A\Compiler\Linux440_550\target\i686-linux-gnu\lib\gcc\i686-linux-gnu\5.5.0\include-fixed" \
 -Werror-implicit-function-declaration \
 -D_DSx86_32 \
 -D_DS2510 \
 -DDS_PLATFORM_X86 \
 -DDS_PLATFORM_LE \
 -DDS_PLATFORM_POSIX \
 -DDS_PLATFORM_LINUX \
 -DDS_PLATFORM_DSRTLINUX \
 -DDS_PLATFORM_CN \
 -DDS_PLATFORM_HCN \
 -DDS_PLATFORM_SMART \
 -DDS_PLATFORM_SMARTHIL \
 -DDS_PLATFORM_SMP \
 -D__HOSTNAME__=\""CDE3036872"\" \
 -D__INTEGRATION__=\""5.1.1"\" \
 -DDS_RTLIB_VERSION_MAR=5 \
 -DDS_RTLIB_VERSION_MIR=1 \
 -DDS_QNX_VERSION=650 \
 -DQNX_VERSION=6.5.0 \
 -D_FILE_OFFSET_BITS=64 \
 -O2 \
 -finline-functions \
 -D_INLINE \
 -IC:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1 \
 -IC:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\FFT4dSpace_1_dsrt \
 -IC:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\extern\include \
 -IC:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\simulink\include \
 -IC:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\rtw\c\src \
 -IC:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\rtw\c\src\ext_mode\common \
 -IC:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\toolbox\dsp\include \
 -IC:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\toolbox\dsp\extern\src\export\include\src \
 -IC:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\toolbox\dsp\extern\src\export\include \
 -IC:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\toolbox\shared\dsp\vision\matlab\include \
 -IC:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\otherFiles \
 -IC:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\PI\misc \
 -I"C:\Appl\dSPACE\dSPACE RCPHIL 2021-A\SCALEXIO\Include" \
 -DDATA_PORT_ACCESS_POINT_API_VERSION=2 \
 -DModel=FFT4dSpace_1 \
 -DMT=0 \
 -DNUMST=4 \
 -DNCSTATES=0 \
 -DTID01EQ=1 \
 -DUSE_RTMODEL \
 -DRT \
 -DNO_PRINTF 
 
CPP_ALL_OPTS = \
 -c \
 -fno-common \
 -nostdinc \
 -fno-strict-aliasing \
 -pipe \
 -march=sandybridge \
 -mno-avx \
 -mfpmath=sse \
 -msse2 \
 -ffast-math \
 -fomit-frame-pointer \
 -mstackrealign \
 "-isystemC:\Appl\dSPACE\dSPACE RCPHIL 2021-A\SCALEXIO\Include" \
 "-isystemC:\Appl\dSPACE\dSPACE RCPHIL 2021-A\SCALEXIO\Include" \
 -isystem"C:\Appl\dSPACE\dSPACE RCPHIL 2021-A\Compiler\Linux440_550\target\i686-linux-gnu\i686-linux-gnu\include\c++\5.5.0" \
 -isystem"C:\Appl\dSPACE\dSPACE RCPHIL 2021-A\Compiler\Linux440_550\target\i686-linux-gnu\i686-linux-gnu\include\c++\5.5.0\i686-linux-gnu" \
 -isystem"C:\Appl\dSPACE\dSPACE RCPHIL 2021-A\Compiler\Linux440_550\target\i686-linux-gnu\include" \
 -isystem"C:\Appl\dSPACE\dSPACE RCPHIL 2021-A\Compiler\Linux440_550\target\i686-linux-gnu\lib\gcc\i686-linux-gnu\5.5.0\include" \
 -isystem"C:\Appl\dSPACE\dSPACE RCPHIL 2021-A\Compiler\Linux440_550\target\i686-linux-gnu\lib\gcc\i686-linux-gnu\5.5.0\include-fixed" \
 -fno-operator-names \
 -Wall \
 -D_DSx86_32 \
 -D_DS2510 \
 -DDS_PLATFORM_X86 \
 -DDS_PLATFORM_LE \
 -DDS_PLATFORM_POSIX \
 -DDS_PLATFORM_LINUX \
 -DDS_PLATFORM_DSRTLINUX \
 -DDS_PLATFORM_CN \
 -DDS_PLATFORM_HCN \
 -DDS_PLATFORM_SMART \
 -DDS_PLATFORM_SMARTHIL \
 -DDS_PLATFORM_SMP \
 -D__HOSTNAME__=\""CDE3036872"\" \
 -D__INTEGRATION__=\""5.1.1"\" \
 -DDS_RTLIB_VERSION_MAR=5 \
 -DDS_RTLIB_VERSION_MIR=1 \
 -DDS_QNX_VERSION=650 \
 -DQNX_VERSION=6.5.0 \
 -D_FILE_OFFSET_BITS=64 \
 -O2 \
 -finline-functions \
 -D_INLINE \
 -IC:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1 \
 -IC:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\FFT4dSpace_1_dsrt \
 -IC:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\extern\include \
 -IC:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\simulink\include \
 -IC:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\rtw\c\src \
 -IC:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\rtw\c\src\ext_mode\common \
 -IC:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\toolbox\dsp\include \
 -IC:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\toolbox\dsp\extern\src\export\include\src \
 -IC:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\toolbox\dsp\extern\src\export\include \
 -IC:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\toolbox\shared\dsp\vision\matlab\include \
 -IC:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\otherFiles \
 -IC:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\PI\misc \
 -I"C:\Appl\dSPACE\dSPACE RCPHIL 2021-A\SCALEXIO\Include" \
 -DDATA_PORT_ACCESS_POINT_API_VERSION=2 \
 -DModel=FFT4dSpace_1 \
 -DMT=0 \
 -DNUMST=4 \
 -DNCSTATES=0 \
 -DTID01EQ=1 \
 -DUSE_RTMODEL \
 -DRT \
 -DNO_PRINTF 
 
# ============================================================================= 
# MKMF Section 
# ============================================================================= 

# ----------------------------------------------------------------------------- 
# MKMF Configuration 
# ----------------------------------------------------------------------------- 

.TYPE.C   = .c .cpp 
.TYPE.OBJ = .o86 .o86 

.PATH.c = \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1; \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\FFT4dSpace_1_dsrt; \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\rtw\c\src; \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\simulink\src; \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\otherFiles; \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\PI\misc; 
 
.PATH.cpp = \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1; \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\FFT4dSpace_1_dsrt; \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\rtw\c\src; \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\simulink\src; \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\otherFiles; \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\PI\misc; 
 
.PATH.h = \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1; \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\FFT4dSpace_1_dsrt; \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\extern\include; \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\simulink\include; \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\rtw\c\src; \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\rtw\c\src\ext_mode\common; \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\toolbox\dsp\include; \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\toolbox\dsp\extern\src\export\include\src; \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\toolbox\dsp\extern\src\export\include; \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\toolbox\shared\dsp\vision\matlab\include; \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\otherFiles; \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\PI\misc; 
 

.HDRPATH.c = \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1 \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\FFT4dSpace_1_dsrt \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\extern\include \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\simulink\include \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\rtw\c\src \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\rtw\c\src\ext_mode\common \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\toolbox\dsp\include \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\toolbox\dsp\extern\src\export\include\src \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\toolbox\dsp\extern\src\export\include \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\toolbox\shared\dsp\vision\matlab\include \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\otherFiles \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\PI\misc \
 | \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1 \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\FFT4dSpace_1_dsrt \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\extern\include \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\simulink\include \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\rtw\c\src \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\rtw\c\src\ext_mode\common \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\toolbox\dsp\include \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\toolbox\dsp\extern\src\export\include\src \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\toolbox\dsp\extern\src\export\include \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\toolbox\shared\dsp\vision\matlab\include \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\otherFiles \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\PI\misc 
 
.HDRPATH.cpp = \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1 \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\FFT4dSpace_1_dsrt \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\extern\include \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\simulink\include \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\rtw\c\src \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\rtw\c\src\ext_mode\common \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\toolbox\dsp\include \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\toolbox\dsp\extern\src\export\include\src \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\toolbox\dsp\extern\src\export\include \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\toolbox\shared\dsp\vision\matlab\include \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\otherFiles \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\PI\misc \
 | \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1 \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\FFT4dSpace_1_dsrt \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\extern\include \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\simulink\include \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\rtw\c\src \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\rtw\c\src\ext_mode\common \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\toolbox\dsp\include \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\toolbox\dsp\extern\src\export\include\src \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\toolbox\dsp\extern\src\export\include \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\ml\toolbox\shared\dsp\vision\matlab\include \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\otherFiles \
 C:\workspace\teachingSMC\FFT\dSpace\SCALEXIO\CfgDesk\Proj_FFT4dSpace_1\App_FFT4dSpace_1\Components\FFT4dSpace_1\PI\misc 
 

.CDEFINES.c  = -D_DSx86_32 -D_DS2510 -DDS_PLATFORM_X86 -DDS_PLATFORM_LE -DDS_PLATFORM_POSIX -DDS_PLATFORM_LINUX -DDS_PLATFORM_DSRTLINUX -DDS_PLATFORM_CN -DDS_PLATFORM_HCN -DDS_PLATFORM_SMART -DDS_PLATFORM_SMARTHIL -DDS_PLATFORM_SMP -D__HOSTNAME__=\CDE3036872\ -D__INTEGRATION__=\5.1.1\ -DDS_RTLIB_VERSION_MAR=5 -DDS_RTLIB_VERSION_MIR=1 -DDS_QNX_VERSION=650 -DQNX_VERSION=6.5.0 -D_FILE_OFFSET_BITS=64 -D_INLINE  
.CDEFINES.cpp = -D__cplusplus -D_DSx86_32 -D_DS2510 -DDS_PLATFORM_X86 -DDS_PLATFORM_LE -DDS_PLATFORM_POSIX -DDS_PLATFORM_LINUX -DDS_PLATFORM_DSRTLINUX -DDS_PLATFORM_CN -DDS_PLATFORM_HCN -DDS_PLATFORM_SMART -DDS_PLATFORM_SMARTHIL -DDS_PLATFORM_SMP -D__HOSTNAME__=\CDE3036872\ -D__INTEGRATION__=\5.1.1\ -DDS_RTLIB_VERSION_MAR=5 -DDS_RTLIB_VERSION_MIR=1 -DDS_QNX_VERSION=650 -DQNX_VERSION=6.5.0 -D_FILE_OFFSET_BITS=64 -D_INLINE  

MKMF_SRCS  = FFT4dSpace_1.c FFT4dSpace_1_data.c FFT4dSpace_1_dsrtmdlfcn.c FFT4dSpace_1_dsrtmf.c FFT4dSpace_1_dsrttf.c FFT4dSpace_1_dsrtvdf.c rtGetInf.c rtGetNaN.c rt_nonfinite.c 
MKMF_LINELEN = 118 
MKMF_TABLEN  = 2 

# ----------------------------------------------------------------------------- 
# MKMF Replacements 
# ----------------------------------------------------------------------------- 

HDRS= FFT4dSpace_1.h FFT4dSpace_1_dsmpbap.h FFT4dSpace_1_dsrtmdlfcn.h FFT4dSpace_1_dsrtmf.h FFT4dSpace_1_dsrttf.h \
		  FFT4dSpace_1_dsrtvdf.h FFT4dSpace_1_private.h FFT4dSpace_1_types.h multiword_types.h rt_nonfinite.h rtGetInf.h \
		  rtGetNaN.h rtmodel.h rtwtypes.h tmwtypes.h rtw_continuous.h rtw_solver.h

EXTHDRS=

# [EOF] 
 
### OPUS MKMF:  Do not remove this line!  Generated dependencies follow.

FFT4dSpace_1.o86: FFT4dSpace_1.c \
	 FFT4dSpace_1_dsrtvdf.h \
		 FFT4dSpace_1.h \
			 rtwtypes.h \
				 tmwtypes.h \
			 rtw_continuous.h \
				 rtwtypes.h \
					 # tmwtypes.h \
			 rtw_solver.h \
				 rtw_continuous.h \
					 # rtwtypes.h \
			 FFT4dSpace_1_types.h \
				 rtwtypes.h \
					 # tmwtypes.h \
				 multiword_types.h \
					 rtwtypes.h \
						 # tmwtypes.h \
			 FFT4dSpace_1_dsmpbap.h \
				 rtwtypes.h \
					 # tmwtypes.h \
			 FFT4dSpace_1_types.h \
				 # rtwtypes.h \
				 # multiword_types.h \
			 multiword_types.h \
				 # rtwtypes.h \
			 rt_nonfinite.h \
				 rtwtypes.h \
					 # tmwtypes.h \
			 rtGetInf.h \
				 rtwtypes.h \
					 # tmwtypes.h \
				 rt_nonfinite.h \
					 # rtwtypes.h \
		 FFT4dSpace_1_private.h \
			 rtwtypes.h \
				 # tmwtypes.h \
			 multiword_types.h \
				 # rtwtypes.h \
	 FFT4dSpace_1.h \
		 # rtwtypes.h \
		 # rtw_continuous.h \
		 # rtw_solver.h \
		 # FFT4dSpace_1_types.h \
		 # FFT4dSpace_1_dsmpbap.h \
		 # FFT4dSpace_1_types.h \
		 # multiword_types.h \
		 # rt_nonfinite.h \
		 # rtGetInf.h \
	 FFT4dSpace_1_private.h \
		 # rtwtypes.h \
		 # multiword_types.h

FFT4dSpace_1_data.o86: FFT4dSpace_1_data.c \
	 FFT4dSpace_1.h \
		 rtwtypes.h \
			 tmwtypes.h \
		 rtw_continuous.h \
			 rtwtypes.h \
				 # tmwtypes.h \
		 rtw_solver.h \
			 rtw_continuous.h \
				 # rtwtypes.h \
		 FFT4dSpace_1_types.h \
			 rtwtypes.h \
				 # tmwtypes.h \
			 multiword_types.h \
				 rtwtypes.h \
					 # tmwtypes.h \
		 FFT4dSpace_1_dsmpbap.h \
			 rtwtypes.h \
				 # tmwtypes.h \
		 FFT4dSpace_1_types.h \
			 # rtwtypes.h \
			 # multiword_types.h \
		 multiword_types.h \
			 # rtwtypes.h \
		 rt_nonfinite.h \
			 rtwtypes.h \
				 # tmwtypes.h \
		 rtGetInf.h \
			 rtwtypes.h \
				 # tmwtypes.h \
			 rt_nonfinite.h \
				 # rtwtypes.h \
	 FFT4dSpace_1_private.h \
		 rtwtypes.h \
			 # tmwtypes.h \
		 multiword_types.h \
			 # rtwtypes.h

FFT4dSpace_1_dsrtmdlfcn.o86: FFT4dSpace_1_dsrtmdlfcn.c \
	 rtmodel.h \
		 FFT4dSpace_1.h \
			 rtwtypes.h \
				 tmwtypes.h \
			 rtw_continuous.h \
				 rtwtypes.h \
					 # tmwtypes.h \
			 rtw_solver.h \
				 rtw_continuous.h \
					 # rtwtypes.h \
			 FFT4dSpace_1_types.h \
				 rtwtypes.h \
					 # tmwtypes.h \
				 multiword_types.h \
					 rtwtypes.h \
						 # tmwtypes.h \
			 FFT4dSpace_1_dsmpbap.h \
				 rtwtypes.h \
					 # tmwtypes.h \
			 FFT4dSpace_1_types.h \
				 # rtwtypes.h \
				 # multiword_types.h \
			 multiword_types.h \
				 # rtwtypes.h \
			 rt_nonfinite.h \
				 rtwtypes.h \
					 # tmwtypes.h \
			 rtGetInf.h \
				 rtwtypes.h \
					 # tmwtypes.h \
				 rt_nonfinite.h \
					 # rtwtypes.h \
	 rtwtypes.h \
		 # tmwtypes.h \
	 FFT4dSpace_1_dsrtmdlfcn.h \
		 rtwtypes.h \
			 # tmwtypes.h

FFT4dSpace_1_dsrtmf.o86: FFT4dSpace_1_dsrtmf.c \
	 FFT4dSpace_1.h \
		 rtwtypes.h \
			 tmwtypes.h \
		 rtw_continuous.h \
			 rtwtypes.h \
				 # tmwtypes.h \
		 rtw_solver.h \
			 rtw_continuous.h \
				 # rtwtypes.h \
		 FFT4dSpace_1_types.h \
			 rtwtypes.h \
				 # tmwtypes.h \
			 multiword_types.h \
				 rtwtypes.h \
					 # tmwtypes.h \
		 FFT4dSpace_1_dsmpbap.h \
			 rtwtypes.h \
				 # tmwtypes.h \
		 FFT4dSpace_1_types.h \
			 # rtwtypes.h \
			 # multiword_types.h \
		 multiword_types.h \
			 # rtwtypes.h \
		 rt_nonfinite.h \
			 rtwtypes.h \
				 # tmwtypes.h \
		 rtGetInf.h \
			 rtwtypes.h \
				 # tmwtypes.h \
			 rt_nonfinite.h \
				 # rtwtypes.h \
	 FFT4dSpace_1_private.h \
		 rtwtypes.h \
			 # tmwtypes.h \
		 multiword_types.h \
			 # rtwtypes.h \
	 FFT4dSpace_1_dsrtmf.h

FFT4dSpace_1_dsrttf.o86: FFT4dSpace_1_dsrttf.c \
	 FFT4dSpace_1_dsrttf.h \
	 FFT4dSpace_1.h \
		 rtwtypes.h \
			 tmwtypes.h \
		 rtw_continuous.h \
			 rtwtypes.h \
				 # tmwtypes.h \
		 rtw_solver.h \
			 rtw_continuous.h \
				 # rtwtypes.h \
		 FFT4dSpace_1_types.h \
			 rtwtypes.h \
				 # tmwtypes.h \
			 multiword_types.h \
				 rtwtypes.h \
					 # tmwtypes.h \
		 FFT4dSpace_1_dsmpbap.h \
			 rtwtypes.h \
				 # tmwtypes.h \
		 FFT4dSpace_1_types.h \
			 # rtwtypes.h \
			 # multiword_types.h \
		 multiword_types.h \
			 # rtwtypes.h \
		 rt_nonfinite.h \
			 rtwtypes.h \
				 # tmwtypes.h \
		 rtGetInf.h \
			 rtwtypes.h \
				 # tmwtypes.h \
			 rt_nonfinite.h \
				 # rtwtypes.h \
	 FFT4dSpace_1_private.h \
		 rtwtypes.h \
			 # tmwtypes.h \
		 multiword_types.h \
			 # rtwtypes.h

FFT4dSpace_1_dsrtvdf.o86: FFT4dSpace_1_dsrtvdf.c \
	 FFT4dSpace_1_dsrtvdf.h \
		 FFT4dSpace_1.h \
			 rtwtypes.h \
				 tmwtypes.h \
			 rtw_continuous.h \
				 rtwtypes.h \
					 # tmwtypes.h \
			 rtw_solver.h \
				 rtw_continuous.h \
					 # rtwtypes.h \
			 FFT4dSpace_1_types.h \
				 rtwtypes.h \
					 # tmwtypes.h \
				 multiword_types.h \
					 rtwtypes.h \
						 # tmwtypes.h \
			 FFT4dSpace_1_dsmpbap.h \
				 rtwtypes.h \
					 # tmwtypes.h \
			 FFT4dSpace_1_types.h \
				 # rtwtypes.h \
				 # multiword_types.h \
			 multiword_types.h \
				 # rtwtypes.h \
			 rt_nonfinite.h \
				 rtwtypes.h \
					 # tmwtypes.h \
			 rtGetInf.h \
				 rtwtypes.h \
					 # tmwtypes.h \
				 rt_nonfinite.h \
					 # rtwtypes.h \
		 FFT4dSpace_1_private.h \
			 rtwtypes.h \
				 # tmwtypes.h \
			 multiword_types.h \
				 # rtwtypes.h \
	 FFT4dSpace_1.h \
		 # rtwtypes.h \
		 # rtw_continuous.h \
		 # rtw_solver.h \
		 # FFT4dSpace_1_types.h \
		 # FFT4dSpace_1_dsmpbap.h \
		 # FFT4dSpace_1_types.h \
		 # multiword_types.h \
		 # rt_nonfinite.h \
		 # rtGetInf.h \
	 FFT4dSpace_1_private.h \
		 # rtwtypes.h \
		 # multiword_types.h

rtGetInf.o86: rtGetInf.c \
	 rtGetInf.h \
		 rtwtypes.h \
			 tmwtypes.h \
		 rt_nonfinite.h \
			 rtwtypes.h \
				 # tmwtypes.h

rtGetNaN.o86: rtGetNaN.c \
	 rtGetNaN.h \
		 rtwtypes.h \
			 tmwtypes.h \
		 rt_nonfinite.h \
			 rtwtypes.h \
				 # tmwtypes.h

rt_nonfinite.o86: rt_nonfinite.c \
	 rt_nonfinite.h \
		 rtwtypes.h \
			 tmwtypes.h \
	 rtGetNaN.h \
		 rtwtypes.h \
			 # tmwtypes.h \
		 rt_nonfinite.h \
			 # rtwtypes.h \
	 rtGetInf.h \
		 rtwtypes.h \
			 # tmwtypes.h \
		 rt_nonfinite.h \
			 # rtwtypes.h
