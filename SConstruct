import glob
import sys

# Useful for printing out the build environment
def printEnv(env) :
   dict = env.Dictionary()
   keys = dict.keys()
   keys.sort()
   for key in keys:
      print "construction variable = '%s', value = '%s'" % (key, dict[key])

# gather a list of source files
SOURCES = glob.glob('tg*.cxx')

# printEnv(Environment())
# create build environment
env = Environment()

# Note: If you want to build on Windows and you don't have a copy of
# Visual Studio (or even if you do) you can download the
# free Visual C++ Toolkit and use "scons MSTOOLKIT=yes"
if sys.platform == 'win32':
   # /GR enables runtime type information (RTTI) that is needed for dynamic_cast to work
   env.Append(CCFLAGS = ['/MT', '/GR'])
   # env.Append(CCFLAGS = ['/MTd', '/GR'])

   # This CPPPATH and LIBPATH assume SDL is installed in the root of C: drive.
   # If you installed it elsewhere, you'll obviously need to change the values.
   env.Append(CPPPATH = ['C:/SDL/include'])
   # env.Append(CPPPATH = ['C:/Program Files/Microsoft Visual Studio .NET 2003/sdk/v1.1/include/SDL'])
   env.Append(LIBPATH = ['C:/SDL/lib'])

elif sys.platform.startswith("cygwin"):

   try:
      import tgCygBuild
   except ImportError:
      print "Cygwin is not officially supported"

   tgCygBuild.tgCygBuild()

else:
   # Linux or MacOSX

   # determine compiler flags for SDL
   env.ParseConfig('sdl-config --cflags')

   # determine linker flags for SDL
   if sys.platform.startswith("linux"):
      env.ParseConfig('sdl-config --libs')
      # OSX includes equivalents of these in sdl-config, but Linux does not
      env.Append(LIBS = ['GLU', 'GL', 'm'])
   elif sys.platform.startswith("darwin"):
      # next line leads to weirdness on OSX
      # env.ParseConfig('sdl-config --libs')
      # so just set things manually for now
      # TODO: get sdl-config to work properly
      env.Append(LIBPATH = ['/sw/lib']) # for Fink version
      # env.Append(LIBPATH = ['/usr/local/lib']) # for version built from src
      env.Append(LIBS = ['SDLmain', 'SDL'])
      env.Append(LINKFLAGS = ['-framework' ,'Cocoa' ,'-framework', 'OpenGL'])

   # add additional compiler flags
   env.Append(CCFLAGS = ['-DDEBUG', '-g', '-Wall'])

# build targets
env.Program(['tagGame.cxx'] + SOURCES)

# For now, building the regressons on Windows is not supported
if sys.platform != 'win32':
   env.Program(['mathTest.cxx'] + SOURCES)
   env.Program(['collisionTest.cxx'] + SOURCES)

