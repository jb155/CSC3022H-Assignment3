##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Assignment2
ConfigurationName      :=Debug
WorkspacePath          :=/home/jacques/Documents/Assignment2
ProjectPath            :=/home/jacques/Documents/Assignment2/Assignment2
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Jacques
Date                   :=02/04/16
CodeLitePath           :=/home/jacques/.codelite
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Assignment2.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -g -O0 -Wall -std=c++11 $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/HuffmanNode.cpp$(ObjectSuffix) $(IntermediateDirectory)/huffencode.cpp$(ObjectSuffix) $(IntermediateDirectory)/HuffmanTree.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/HuffmanNode.cpp$(ObjectSuffix): HuffmanNode.cpp $(IntermediateDirectory)/HuffmanNode.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/jacques/Documents/Assignment2/Assignment2/HuffmanNode.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/HuffmanNode.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/HuffmanNode.cpp$(DependSuffix): HuffmanNode.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/HuffmanNode.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/HuffmanNode.cpp$(DependSuffix) -MM "HuffmanNode.cpp"

$(IntermediateDirectory)/HuffmanNode.cpp$(PreprocessSuffix): HuffmanNode.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/HuffmanNode.cpp$(PreprocessSuffix) "HuffmanNode.cpp"

$(IntermediateDirectory)/huffencode.cpp$(ObjectSuffix): huffencode.cpp $(IntermediateDirectory)/huffencode.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/jacques/Documents/Assignment2/Assignment2/huffencode.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/huffencode.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/huffencode.cpp$(DependSuffix): huffencode.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/huffencode.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/huffencode.cpp$(DependSuffix) -MM "huffencode.cpp"

$(IntermediateDirectory)/huffencode.cpp$(PreprocessSuffix): huffencode.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/huffencode.cpp$(PreprocessSuffix) "huffencode.cpp"

$(IntermediateDirectory)/HuffmanTree.cpp$(ObjectSuffix): HuffmanTree.cpp $(IntermediateDirectory)/HuffmanTree.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/jacques/Documents/Assignment2/Assignment2/HuffmanTree.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/HuffmanTree.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/HuffmanTree.cpp$(DependSuffix): HuffmanTree.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/HuffmanTree.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/HuffmanTree.cpp$(DependSuffix) -MM "HuffmanTree.cpp"

$(IntermediateDirectory)/HuffmanTree.cpp$(PreprocessSuffix): HuffmanTree.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/HuffmanTree.cpp$(PreprocessSuffix) "HuffmanTree.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


