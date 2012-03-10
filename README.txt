This is the source code excerpted in the book:

   Artificial Intelligence for Computer Games: An Introduction
   by John David Funge
   http://www.ai4games.org

The code is not intended to ever become a fully fledged game or game
engine.  It is simply a small pedagogical example used to illustrate
some of the ideas from the book about how game code can be structured.

The code compiles and runs on Windows, MacOSX and Linux.  See below
for additional details.

The code requires SDL (http://www.libsdl.org) to be installed.

Windows
=======

The code is intended to compile and run under Windows XP using SCons
(http://www.scons.org) and the free Visual C++ 2005 Express Edition
(http://msdn.microsoft.com/vstudio/express/visualc/).

However, SCons seems to have problems with the latest release of the
Visual C++ 2005 Express Edition.  So, in the meantime, please use the
Visual C++ 2005 Express Edition IDE and the .vcproj that is included
in the distribution.

Before you can compile the code, you'll also need to install the
Microsoft platform SDK (PSDK).  It is a free download and there's a
link to it within Visual C++ 2005 Express Edition.

Remember you also need to install SDL and setup Visual C++ 2005
Express Edition to be able to compile and run SDL applications.  There
is a lot of information available on the web about how to do this.
Some of the information refers to other versions of Visual C++, but it
shouldn't be hard to map the information to your particular setup.

As far as I know, the SCons script still works with the non-free
version of Visual C++, but has not been recently tested.  The code
should compile and run under other compilers and versions of Windows,
but they are not officially supported.

MacOSX
======

The code is intended to compile and run under MacOSX 10.4 (Tiger)
using SCons and XCode 2.1.

A minimal .xcodeproj is also project is included in the distribution,
but it is not guaranteed to be up-to-date.  Depending on where you
installed SDL, you may need to change some of the paths to use it.

The code should compile and run under other compilers and versions of
MacOSX, but they are not officially supported.

Linux
=====

The code is intended to compile and run under Fedora Core 4 using SCons and
GCC 4.0.x.

The code should compile and run under other compilers and versions of
Linux, but they are not officially supported.

