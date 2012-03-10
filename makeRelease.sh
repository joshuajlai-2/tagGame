#!/bin/sh
# see https://sourceforge.net/docman/display_doc.php?docid=6445&group_id=1
if [ $# -ne 1 ]; then
   echo 1>&2 Usage: $0 versionNumber
   exit 127
fi
/bin/rm -rf ai4games $releaseName.taz $releaseName.zip
releaseName=ai4games-$1
mkdir -p $releaseName/tagGame/tagGame.xcodeproj
cp -r *.h *.cxx Makefile README.txt LICENSE.txt releaseNotes.txt SConstruct tagGame.vcproj tagGame.sln $releaseName/tagGame
cp tagGame.xcodeproj/project.pbxproj $releaseName/tagGame/tagGame.xcodeproj
tar cvfz $releaseName.taz $releaseName
# Note: we're adding DOS line feeds in for the zip file version
# zip -l -r $releaseName $releaseName
zip -r $releaseName.zip $releaseName
echo ./uploadRelease.kermit $releaseName.taz $releaseName.zip

