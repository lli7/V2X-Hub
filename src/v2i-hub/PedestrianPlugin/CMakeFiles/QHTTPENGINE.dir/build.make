# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/saxtonlab/V2X-Hub/src/v2i-hub

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/saxtonlab/V2X-Hub/src/v2i-hub

# Utility rule file for QHTTPENGINE.

# Include the progress variables for this target.
include PedestrianPlugin/CMakeFiles/QHTTPENGINE.dir/progress.make

PedestrianPlugin/CMakeFiles/QHTTPENGINE: PedestrianPlugin/CMakeFiles/QHTTPENGINE-complete


PedestrianPlugin/CMakeFiles/QHTTPENGINE-complete: PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-install
PedestrianPlugin/CMakeFiles/QHTTPENGINE-complete: PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-mkdir
PedestrianPlugin/CMakeFiles/QHTTPENGINE-complete: PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-download
PedestrianPlugin/CMakeFiles/QHTTPENGINE-complete: PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-update
PedestrianPlugin/CMakeFiles/QHTTPENGINE-complete: PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-patch
PedestrianPlugin/CMakeFiles/QHTTPENGINE-complete: PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-configure
PedestrianPlugin/CMakeFiles/QHTTPENGINE-complete: PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-build
PedestrianPlugin/CMakeFiles/QHTTPENGINE-complete: PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-install
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/saxtonlab/V2X-Hub/src/v2i-hub/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Completed 'QHTTPENGINE'"
	cd /home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin && /usr/bin/cmake -E make_directory /home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin/CMakeFiles
	cd /home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin && /usr/bin/cmake -E touch /home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin/CMakeFiles/QHTTPENGINE-complete
	cd /home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin && /usr/bin/cmake -E touch /home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-done

PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-install: PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-build
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/saxtonlab/V2X-Hub/src/v2i-hub/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Performing install step for 'QHTTPENGINE'"
	cd /home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-build && $(MAKE) install
	cd /home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-build && /usr/bin/cmake -E touch /home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-install

PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-mkdir:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/saxtonlab/V2X-Hub/src/v2i-hub/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Creating directories for 'QHTTPENGINE'"
	cd /home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin && /usr/bin/cmake -E make_directory /home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE
	cd /home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin && /usr/bin/cmake -E make_directory /home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-build
	cd /home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin && /usr/bin/cmake -E make_directory /home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin/QHTTPENGINE-prefix
	cd /home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin && /usr/bin/cmake -E make_directory /home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin/QHTTPENGINE-prefix/tmp
	cd /home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin && /usr/bin/cmake -E make_directory /home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp
	cd /home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin && /usr/bin/cmake -E make_directory /home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin/QHTTPENGINE-prefix/src
	cd /home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin && /usr/bin/cmake -E touch /home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-mkdir

PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-download: PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-gitinfo.txt
PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-download: PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-mkdir
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/saxtonlab/V2X-Hub/src/v2i-hub/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Performing download step (git clone) for 'QHTTPENGINE'"
	cd /home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin/QHTTPENGINE-prefix/src && /usr/bin/cmake -P /home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin/QHTTPENGINE-prefix/tmp/QHTTPENGINE-gitclone.cmake
	cd /home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin/QHTTPENGINE-prefix/src && /usr/bin/cmake -E touch /home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-download

PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-update: PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/saxtonlab/V2X-Hub/src/v2i-hub/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Performing update step for 'QHTTPENGINE'"
	cd /home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE && /usr/bin/cmake -P /home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin/QHTTPENGINE-prefix/tmp/QHTTPENGINE-gitupdate.cmake

PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-patch: PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/saxtonlab/V2X-Hub/src/v2i-hub/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "No patch step for 'QHTTPENGINE'"
	cd /home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin && /usr/bin/cmake -E echo_append
	cd /home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin && /usr/bin/cmake -E touch /home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-patch

PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-configure: PedestrianPlugin/QHTTPENGINE-prefix/tmp/QHTTPENGINE-cfgcmd.txt
PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-configure: PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-update
PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-configure: PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-patch
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/saxtonlab/V2X-Hub/src/v2i-hub/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Performing configure step for 'QHTTPENGINE'"
	cd /home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-build && /usr/bin/cmake -DCMAKE_INSTALL_PREFIX=/home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin/external -DCMAKE_PREFIX_PATH= "-GUnix Makefiles" /home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE
	cd /home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-build && /usr/bin/cmake -E touch /home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-configure

PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-build: PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-configure
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/saxtonlab/V2X-Hub/src/v2i-hub/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Performing build step for 'QHTTPENGINE'"
	cd /home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-build && $(MAKE)
	cd /home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-build && /usr/bin/cmake -E touch /home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-build

QHTTPENGINE: PedestrianPlugin/CMakeFiles/QHTTPENGINE
QHTTPENGINE: PedestrianPlugin/CMakeFiles/QHTTPENGINE-complete
QHTTPENGINE: PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-install
QHTTPENGINE: PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-mkdir
QHTTPENGINE: PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-download
QHTTPENGINE: PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-update
QHTTPENGINE: PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-patch
QHTTPENGINE: PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-configure
QHTTPENGINE: PedestrianPlugin/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-build
QHTTPENGINE: PedestrianPlugin/CMakeFiles/QHTTPENGINE.dir/build.make

.PHONY : QHTTPENGINE

# Rule to build all files generated by this target.
PedestrianPlugin/CMakeFiles/QHTTPENGINE.dir/build: QHTTPENGINE

.PHONY : PedestrianPlugin/CMakeFiles/QHTTPENGINE.dir/build

PedestrianPlugin/CMakeFiles/QHTTPENGINE.dir/clean:
	cd /home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin && $(CMAKE_COMMAND) -P CMakeFiles/QHTTPENGINE.dir/cmake_clean.cmake
.PHONY : PedestrianPlugin/CMakeFiles/QHTTPENGINE.dir/clean

PedestrianPlugin/CMakeFiles/QHTTPENGINE.dir/depend:
	cd /home/saxtonlab/V2X-Hub/src/v2i-hub && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/saxtonlab/V2X-Hub/src/v2i-hub /home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin /home/saxtonlab/V2X-Hub/src/v2i-hub /home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin /home/saxtonlab/V2X-Hub/src/v2i-hub/PedestrianPlugin/CMakeFiles/QHTTPENGINE.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : PedestrianPlugin/CMakeFiles/QHTTPENGINE.dir/depend
