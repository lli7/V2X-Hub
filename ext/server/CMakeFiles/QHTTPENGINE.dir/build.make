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
CMAKE_SOURCE_DIR = /home/saxtonlab/V2X-Hub/ext/server

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/saxtonlab/V2X-Hub/ext/server

# Utility rule file for QHTTPENGINE.

# Include the progress variables for this target.
include CMakeFiles/QHTTPENGINE.dir/progress.make

CMakeFiles/QHTTPENGINE: CMakeFiles/QHTTPENGINE-complete


CMakeFiles/QHTTPENGINE-complete: QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-install
CMakeFiles/QHTTPENGINE-complete: QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-mkdir
CMakeFiles/QHTTPENGINE-complete: QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-download
CMakeFiles/QHTTPENGINE-complete: QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-update
CMakeFiles/QHTTPENGINE-complete: QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-patch
CMakeFiles/QHTTPENGINE-complete: QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-configure
CMakeFiles/QHTTPENGINE-complete: QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-build
CMakeFiles/QHTTPENGINE-complete: QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-install
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/saxtonlab/V2X-Hub/ext/server/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Completed 'QHTTPENGINE'"
	/usr/bin/cmake -E make_directory /home/saxtonlab/V2X-Hub/ext/server/CMakeFiles
	/usr/bin/cmake -E touch /home/saxtonlab/V2X-Hub/ext/server/CMakeFiles/QHTTPENGINE-complete
	/usr/bin/cmake -E touch /home/saxtonlab/V2X-Hub/ext/server/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-done

QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-install: QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-build
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/saxtonlab/V2X-Hub/ext/server/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Performing install step for 'QHTTPENGINE'"
	cd /home/saxtonlab/V2X-Hub/ext/server/QHTTPENGINE-prefix/src/QHTTPENGINE-build && $(MAKE) install
	cd /home/saxtonlab/V2X-Hub/ext/server/QHTTPENGINE-prefix/src/QHTTPENGINE-build && /usr/bin/cmake -E touch /home/saxtonlab/V2X-Hub/ext/server/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-install

QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-mkdir:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/saxtonlab/V2X-Hub/ext/server/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Creating directories for 'QHTTPENGINE'"
	/usr/bin/cmake -E make_directory /home/saxtonlab/V2X-Hub/ext/server/QHTTPENGINE-prefix/src/QHTTPENGINE
	/usr/bin/cmake -E make_directory /home/saxtonlab/V2X-Hub/ext/server/QHTTPENGINE-prefix/src/QHTTPENGINE-build
	/usr/bin/cmake -E make_directory /home/saxtonlab/V2X-Hub/ext/server/QHTTPENGINE-prefix
	/usr/bin/cmake -E make_directory /home/saxtonlab/V2X-Hub/ext/server/QHTTPENGINE-prefix/tmp
	/usr/bin/cmake -E make_directory /home/saxtonlab/V2X-Hub/ext/server/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp
	/usr/bin/cmake -E make_directory /home/saxtonlab/V2X-Hub/ext/server/QHTTPENGINE-prefix/src
	/usr/bin/cmake -E touch /home/saxtonlab/V2X-Hub/ext/server/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-mkdir

QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-download: QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-gitinfo.txt
QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-download: QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-mkdir
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/saxtonlab/V2X-Hub/ext/server/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Performing download step (git clone) for 'QHTTPENGINE'"
	cd /home/saxtonlab/V2X-Hub/ext/server/QHTTPENGINE-prefix/src && /usr/bin/cmake -P /home/saxtonlab/V2X-Hub/ext/server/QHTTPENGINE-prefix/tmp/QHTTPENGINE-gitclone.cmake
	cd /home/saxtonlab/V2X-Hub/ext/server/QHTTPENGINE-prefix/src && /usr/bin/cmake -E touch /home/saxtonlab/V2X-Hub/ext/server/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-download

QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-update: QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/saxtonlab/V2X-Hub/ext/server/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Performing update step for 'QHTTPENGINE'"
	cd /home/saxtonlab/V2X-Hub/ext/server/QHTTPENGINE-prefix/src/QHTTPENGINE && /usr/bin/cmake -P /home/saxtonlab/V2X-Hub/ext/server/QHTTPENGINE-prefix/tmp/QHTTPENGINE-gitupdate.cmake

QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-patch: QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/saxtonlab/V2X-Hub/ext/server/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "No patch step for 'QHTTPENGINE'"
	/usr/bin/cmake -E echo_append
	/usr/bin/cmake -E touch /home/saxtonlab/V2X-Hub/ext/server/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-patch

QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-configure: QHTTPENGINE-prefix/tmp/QHTTPENGINE-cfgcmd.txt
QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-configure: QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-update
QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-configure: QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-patch
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/saxtonlab/V2X-Hub/ext/server/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Performing configure step for 'QHTTPENGINE'"
	cd /home/saxtonlab/V2X-Hub/ext/server/QHTTPENGINE-prefix/src/QHTTPENGINE-build && /usr/bin/cmake -DCMAKE_INSTALL_PREFIX=/home/saxtonlab/V2X-Hub/ext/server/external -DCMAKE_PREFIX_PATH= "-GUnix Makefiles" /home/saxtonlab/V2X-Hub/ext/server/QHTTPENGINE-prefix/src/QHTTPENGINE
	cd /home/saxtonlab/V2X-Hub/ext/server/QHTTPENGINE-prefix/src/QHTTPENGINE-build && /usr/bin/cmake -E touch /home/saxtonlab/V2X-Hub/ext/server/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-configure

QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-build: QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-configure
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/saxtonlab/V2X-Hub/ext/server/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Performing build step for 'QHTTPENGINE'"
	cd /home/saxtonlab/V2X-Hub/ext/server/QHTTPENGINE-prefix/src/QHTTPENGINE-build && $(MAKE)
	cd /home/saxtonlab/V2X-Hub/ext/server/QHTTPENGINE-prefix/src/QHTTPENGINE-build && /usr/bin/cmake -E touch /home/saxtonlab/V2X-Hub/ext/server/QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-build

QHTTPENGINE: CMakeFiles/QHTTPENGINE
QHTTPENGINE: CMakeFiles/QHTTPENGINE-complete
QHTTPENGINE: QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-install
QHTTPENGINE: QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-mkdir
QHTTPENGINE: QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-download
QHTTPENGINE: QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-update
QHTTPENGINE: QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-patch
QHTTPENGINE: QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-configure
QHTTPENGINE: QHTTPENGINE-prefix/src/QHTTPENGINE-stamp/QHTTPENGINE-build
QHTTPENGINE: CMakeFiles/QHTTPENGINE.dir/build.make

.PHONY : QHTTPENGINE

# Rule to build all files generated by this target.
CMakeFiles/QHTTPENGINE.dir/build: QHTTPENGINE

.PHONY : CMakeFiles/QHTTPENGINE.dir/build

CMakeFiles/QHTTPENGINE.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/QHTTPENGINE.dir/cmake_clean.cmake
.PHONY : CMakeFiles/QHTTPENGINE.dir/clean

CMakeFiles/QHTTPENGINE.dir/depend:
	cd /home/saxtonlab/V2X-Hub/ext/server && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/saxtonlab/V2X-Hub/ext/server /home/saxtonlab/V2X-Hub/ext/server /home/saxtonlab/V2X-Hub/ext/server /home/saxtonlab/V2X-Hub/ext/server /home/saxtonlab/V2X-Hub/ext/server/CMakeFiles/QHTTPENGINE.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/QHTTPENGINE.dir/depend

