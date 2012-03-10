// ----------------------------------------------------------------------------
//
// tagGame - Example code from the book:
//
//           Artficial Intelligence for Computer Games: An Introduction
//           by John David Funge
//
//           www.ai4games.org
//
// Source code distributed under the Copyright (c) 2003-2006, John David Funge
// Original author: John David Funge (www.jfunge.com)
//
// Licensed under the Academic Free License version 2.1
//
// 1) Grant of Copyright License. Licensor hereby grants You a
//    world-wide, royalty-free, non-exclusive, perpetual,
//    sublicenseable license to do the following:
//
// a) to reproduce the Original Work in copies;
//
// b) to prepare derivative works ("Derivative Works") based upon the Original Work;
//
// c) to distribute copies of the Original Work and Derivative Works to the public;
//
// d) to perform the Original Work publicly; and
//
// e) to display the Original Work publicly.
//
// 2) Grant of Patent License. Licensor hereby grants You a
//    world-wide, royalty-free, non-exclusive, perpetual,
//    sublicenseable license, under patent claims owned or
//    controlled by the Licensor that are embodied in the Original
//    Work as furnished by the Licensor, to make, use, sell and
//    offer for sale the Original Work and Derivative Works.
//
// 3) Grant of Source Code License. The term "Source Code" means the
//    preferred form of the Original Work for making modifications
//    to it and all available documentation describing how to modify
//    the Original Work. Licensor hereby agrees to provide a
//    machine-readable copy of the Source Code of the Original Work
//    along with each copy of the Original Work that Licensor
//    distributes. Licensor reserves the right to satisfy this
//    obligation by placing a machine-readable copy of the Source
//    Code in an information repository reasonably calculated to
//    permit inexpensive and convenient access by You for as long as
//    Licensor continues to distribute the Original Work, and by
//    publishing the address of that information repository in a
//    notice immediately following the copyright notice that applies
//    to the Original Work.
//
// 4) Exclusions From License Grant. Neither the names of Licensor,
//    nor the names of any contributors to the Original Work, nor
//    any of their trademarks or service marks, may be used to
//    endorse or promote products derived from this Original Work
//    without express prior written permission of the
//    Licensor. Nothing in this License shall be deemed to grant any
//    rights to trademarks, copyrights, patents, trade secrets or
//    any other intellectual property of Licensor except as
//    expressly stated herein. No patent license is granted to make,
//    use, sell or offer to sell embodiments of any patent claims
//    other than the licensed claims defined in Section 2. No right
//    is granted to the trademarks of Licensor even if such marks
//    are included in the Original Work. Nothing in this License
//    shall be interpreted to prohibit Licensor from licensing under
//    different terms from this License any Original Work that
//    Licensor otherwise would have a right to license.
//
// 5) This section intentionally omitted.
//
// 6) Attribution Rights. You must retain, in the Source Code of any
//    Derivative Works that You create, all copyright, patent or
//    trademark notices from the Source Code of the Original Work,
//    as well as any notices of licensing and any descriptive text
//    identified therein as an "Attribution Notice." You must cause
//    the Source Code for any Derivative Works that You create to
//    carry a prominent Attribution Notice reasonably calculated to
//    inform recipients that You have modified the Original Work.
//
// 7) Warranty of Provenance and Disclaimer of Warranty. Licensor
//    warrants that the copyright in and to the Original Work and
//    the patent rights granted herein by Licensor are owned by the
//    Licensor or are sublicensed to You under the terms of this
//    License with the permission of the contributor(s) of those
//    copyrights and patent rights. Except as expressly stated in
//    the immediately proceeding sentence, the Original Work is
//    provided under this License on an "AS IS" BASIS and WITHOUT
//    WARRANTY, either express or implied, including, without
//    limitation, the warranties of NON-INFRINGEMENT,
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. THE
//    ENTIRE RISK AS TO THE QUALITY OF THE ORIGINAL WORK IS WITH
//    YOU. This DISCLAIMER OF WARRANTY constitutes an essential part
//    of this License. No license to Original Work is granted
//    hereunder except under this disclaimer.
//
// 8) Limitation of Liability. Under no circumstances and under no
//    legal theory, whether in tort (including negligence),
//    contract, or otherwise, shall the Licensor be liable to any
//    person for any direct, indirect, special, incidental, or
//    consequential damages of any character arising as a result of
//    this License or the use of the Original Work including,
//    without limitation, damages for loss of goodwill, work
//    stoppage, computer failure or malfunction, or any and all
//    other commercial damages or losses. This limitation of
//    liability shall not apply to liability for death or personal
//    injury resulting from Licensor's negligence to the extent
//    applicable law prohibits such limitation. Some jurisdictions
//    do not allow the exclusion or limitation of incidental or
//    consequential damages, so this exclusion and limitation may
//    not apply to You.
//
// 9) Acceptance and Termination. If You distribute copies of the
//    Original Work or a Derivative Work, You must make a reasonable
//    effort under the circumstances to obtain the express assent of
//    recipients to the terms of this License. Nothing else but this
//    License (or another written agreement between Licensor and
//    You) grants You permission to create Derivative Works based
//    upon the Original Work or to exercise any of the rights
//    granted in Section 1 herein, and any attempt to do so except
//    under the terms of this License (or another written agreement
//    between Licensor and You) is expressly prohibited by
//    U.S. copyright law, the equivalent laws of other countries,
//    and by international treaty. Therefore, by exercising any of
//    the rights granted to You in Section 1 herein, You indicate
//    Your acceptance of this License and all of its terms and
//    conditions.
//
// 10) Termination for Patent Action. This License shall terminate
//     automatically and You may no longer exercise any of the
//     rights granted to You by this License as of the date You
//     commence an action, including a cross-claim or counterclaim,
//     against Licensor or any licensee alleging that the Original
//     Work infringes a patent. This termination provision shall not
//     apply for an action alleging patent infringement by
//     combinations of the Original Work with other software or
//     hardware.
//
// 11) Jurisdiction, Venue and Governing Law. Any action or suit
//     relating to this License may be brought only in the courts of
//     a jurisdiction wherein the Licensor resides or in which
//     Licensor conducts its primary business, and under the laws of
//     that jurisdiction excluding its conflict-of-law
//     provisions. The application of the United Nations Convention
//     on Contracts for the International Sale of Goods is expressly
//     excluded. Any use of the Original Work outside the scope of
//     this License or after its termination shall be subject to the
//     requirements and penalties of the U.S. Copyright Act, 17
//     U.S.C. 101 et seq., the equivalent laws of other
//     countries, and international treaty. This section shall
//     survive the termination of this License.
//
// 12) Attorneys Fees. In any action to enforce the terms of this
//     License or seeking damages relating thereto, the prevailing
//     party shall be entitled to recover its costs and expenses,
//     including, without limitation, reasonable attorneys' fees and
//     costs incurred in connection with such action, including any
//     appeal of such action. This section shall survive the
//     termination of this License.
//
// 13) Miscellaneous. This License represents the complete agreement
//     concerning the subject matter hereof. If any provision of
//     this License is held to be unenforceable, such provision
//     shall be reformed only to the extent necessary to make it
//     enforceable.
//
// 14) Definition of "You" in This License. "You" throughout this
//     License, whether in upper or lower case, means an individual
//     or a legal entity exercising rights under, and complying with
//     all of the terms of, this License. For legal entities, "You"
//     includes any entity that controls, is controlled by, or is
//     under common control with you. For purposes of this
//     definition, "control" means (i) the power, direct or
//     indirect, to cause the direction or management of such
//     entity, whether by contract or otherwise, or (ii) ownership
//     of fifty percent (50%) or more of the outstanding shares,
//     or (iii) beneficial ownership of such entity.
//
// 15) Right to Use. You may use the Original Work in all ways not
//     otherwise restricted or conditioned by this License or by
//     law, and Licensor promises not to interfere with or be
//     responsible for such uses by You.
//
// This license is Copyright (C) 2003-2004 Lawrence E. Rosen. All
// rights reserved. Permission is hereby granted to copy and
// distribute this license without modification. This license may
// not be modified without the express written permission of its
// copyright owner.
//
// ----------------------------------------------------------------------------

#include "tgSimulator.h"
#include "tgGui.h"
#include "tgCharacter.h"
#include "tgControllerPC.h"
#include "tgControllerPursue.h"
#include "tgControllerEvade.h"
#include "tgControllerWander.h"
#include "tgControllerPeriodic.h"
#include "tgControllerPeriodicRamp.h"
#include "tgControllerConditional.h"
#include "tgControllerAvoid.h"
#include "tgControllerRandomize.h"
#include "tgPerception.h"
#include "tgUtil.h"
#include "tgObstacleSide.h"
#include "tgJoystickSDL.h"
#include "tgKeyboardSDL.h"
#include "tgTimer.h"
#include "tgCharacterRenderer.h"
#include "tgUtil2D.h"

#if defined(__APPLE__)
#include <SDL.h>  // needed on MacOSX
#endif

#if defined(_MSC_VER)
#define NOMINMAX
#include <windows.h>

// The pragmas below specify the libraries needed when linking SDL applications that use OpenGL.
// This can obviously be done through the IDE, but this is much simpler. 
#pragma comment(lib, "opengl32.lib")
#pragma comment(lib, "glu32.lib")
#pragma comment(lib, "SDL.lib")
#pragma comment(lib, "SDLmain.lib")
#endif

#include <cstdlib>

using namespace tagGame;

// TODO: apply convention that ptr variables end in Ptr
// TODO: make more ptr variables const
// TODO: remove calc prefixes
// TODO: fix leaks.  Consider adopt methods for some ptrs.

static void setupCharacters(tgGameState& gs)
{
   // add some characters
   int const characterCount(4);

   // TODO: this leaks
   tgCharacterRenderer* rendererPCPtr(new tgCharacterRenderer(&gs));
   rendererPCPtr->setColor(tgGui::getColorFromName("blue"));
   rendererPCPtr->setColorFlash(tgGui::getColorFromName("red"));

   // Shared renderer for all NPCs TODO: this leaks
   tgCharacterRenderer* rendererNPCPtr(new tgCharacterRenderer(&gs));
   rendererNPCPtr->setColor(tgGui::getColorFromName("green"));
   rendererNPCPtr->setColorFlash(tgGui::getColorFromName("red"));

   tgReal const radius(5);

   // Define what counts as the tagged character being "near"
   tgReal const tagNear(tgReal(2) * radius);
   
   // Define what counts as the tagged character being "far"
   tgReal const tagFar(tgReal(10) * tagNear);

   // What's the minimum time (in milliseconds) allowed between decisions
   int const minPeriod(200);

   // What's the maximum time (in milliseconds) allowed between decisions
   int const maxPeriod(200);
   
// <ai4Begin>characterCreate</ai4Begin>
   // Shared perception object (see Chapter 3)
   // TODO: this leaks
   tgPerception* perception(new tgPerception(&gs));

   for (int i(0); i < characterCount; i++)
   {
      tgCharacter* c(NULL);
      if (0)// == i)
      {  // make character 0 the player character
         tgController* controllerPC(new tgControllerPC<tgJoystickSDL>(perception));
         if (!static_cast<tgControllerPC<tgJoystickSDL>*>(controllerPC)->init())
         {
            tgUtil::warn("Failed to find a joystick, defaulting to keyboard control.");
            delete(controllerPC);
            controllerPC = new tgControllerPC<tgKeyboardSDL>(perception);
#if 0
            controllerPC = new tgControllerConditional(perception, &tgPerception::myselfTagged, new tgControllerAvoid(perception, new tgControllerPursue(perception)), new tgControllerAvoid(perception, new tgControllerPeriodicRamp(perception, new tgControllerRandomize(perception, new tgControllerEvade(perception), &tgPerception::distanceToTagged, tagNear, tagFar), &tgPerception::distanceToTagged, tagNear, tagFar, minPeriod, maxPeriod)));
            // controllerPC = new tgControllerConditional(perception, &tgPerception::myselfTagged, new tgControllerPursue(perception), new tgControllerEvade(perception));

            // TODO: this leaks (fix other leaks too)
            // TODO: this is a better example of a conditional controller, but add some comments, etc.
// <ai4Begin>conditionalControllerDefn</ai4Begin>
            tgController* controllerWander(new tgControllerPeriodic(perception, 10 * tgTimer::ticksPerSec, new tgControllerWander(perception)));
            controllerPC = new tgControllerAvoid(perception, controllerWander);
// <ai4End>conditionalControllerDefn</ai4End>
#endif
         }
         c = new tgCharacter(&gs, controllerPC);
// <ai4End>characterCreate</ai4End>
         c->setRenderer(rendererPCPtr);
// <ai4Begin>characterCreate</ai4Begin>
      }
      else
      {
         // c = new tgCharacter(&gs, new tgControllerConditional(perception, &tgPerception::myselfTagged, new tgControllerPursue(perception), new tgControllerPeriodicRamp(perception, new tgControllerRandomize(perception, new tgControllerEvade(perception), &tgPerception::distanceToTagged, tagNear, tagFar), &tgPerception::distanceToTagged, tagNear, tagFar, minPeriod, maxPeriod)));
         c = new tgCharacter(&gs, new tgControllerConditional(perception, &tgPerception::myselfTagged, new tgControllerAvoid(perception, new tgControllerPursue(perception)), new tgControllerAvoid(perception, new tgControllerPeriodicRamp(perception, new tgControllerRandomize(perception, new tgControllerEvade(perception), &tgPerception::distanceToTagged, tagNear, tagFar), &tgPerception::distanceToTagged, tagNear, tagFar, minPeriod, maxPeriod))));
// <ai4End>characterCreate</ai4End>
         c->setRenderer(rendererNPCPtr);
// <ai4Begin>characterCreate</ai4Begin>
      }
      c->setPosition(tgUtil2D::randomPosition(gs.getWorldDim()));
      c->setMass(1);
      // TODO: set obstacle properties too
      // TODO: add sets to contructor parameters for all objects
      // TODO: set other properties
      // TODO: inside obstacle circle set radius to more default looking defaults
      // TODO: assert that me is not NULL for all relevant percepts (ditto for tagged, etc)
      c->setRadius(radius);
      c->setProbabilities();
      gs.addCharacter(c);
   }
// <ai4End>characterCreate</ai4End>
}

static void setupObstacles(tgGameState& gs)
{
   // Shared renderer TODO: this leaks
   tgObstacleCircleRenderer* obstacleRendererPtr(new tgObstacleCircleRenderer(&gs));
   obstacleRendererPtr->setColor(tgGui::getColorFromName("white"));

   tgRealVec const& worldDim(gs.getWorldDim());

   int const circularObstacleCount(40);
   for (int i(0); i < circularObstacleCount; i++)
   {
      tgObstacleCircle* o(new tgObstacleCircle(&gs));
      o->setRenderer(obstacleRendererPtr);
      o->setPosition(tgUtil2D::randomPosition(worldDim));
      gs.addObstacle(o);
   }
   int const sideCount(4);
   vector<tgObstacleSide*> sides(sideCount);
   for (unsigned i(0); i < sides.size(); i++)
   {
      // TODO: this leaks
      sides[i] = new tgObstacleSide(&gs);
   }
   tgRealVec normal(tgUtil2D::dim);
   tgRealVec begin(tgUtil2D::dim);
   tgRealVec end(tgUtil2D::dim);

   begin.set(0);
   end.set(0);
   end[1] = worldDim[1];
   sides[0]->setBegin(end);
   sides[0]->setEnd(begin);
   normal.set(tgReal(0));
   normal[0] = tgReal(1);
   sides[0]->setNormal(normal);
   sides[0]->setDistance(tgReal(0));

   begin[0] = worldDim[0];
   end[0] = worldDim[0];
   sides[1]->setBegin(end);
   sides[1]->setEnd(begin);
   normal[0] = tgReal(-1);
   sides[1]->setNormal(normal);
   sides[1]->setDistance(-worldDim[0]);

   begin.set(0);
   end[1] = 0;
   sides[2]->setBegin(end);
   sides[2]->setEnd(begin);
   normal.set(tgReal(0));
   normal[1] = tgReal(1);
   sides[2]->setNormal(normal);
   sides[2]->setDistance(tgReal(0));

   begin[1] = worldDim[1];
   end[1] = worldDim[1];
   sides[3]->setBegin(end);
   sides[3]->setEnd(begin);
   normal[1] = tgReal(-1);
   sides[3]->setNormal(normal);
   sides[3]->setDistance(-worldDim[1]);

   for (unsigned i(0); i < sides.size(); i++)
   {
      gs.addObstacle(sides[i]);
   }
}

int main(int argc, char** argv)
{
   tgRealVec worldDim(tgUtil2D::dim);
   worldDim.set(512.0);
   tgTimer timer;
   tgGameState gs(worldDim);
   gs.setTimer(&timer);
   tgSimulator sim(&gs);

   setupCharacters(gs);

   setupObstacles(gs);

   tgGui::createWindow(int(worldDim[0]), int(worldDim[1]), "tagGame");

   timer.start();

   // Make character 0 the tagged character.
   gs.getCharacter(1)->setTagged(timer.gameTime());

   tgReal lastGameTime(tgReal(timer.gameTime())/tgReal(tgTimer::ticksPerSec));
   tgReal lastWallTime(tgReal(timer.time())/tgReal(tgTimer::ticksPerSec));
   int const fpsFreq(40);
   while (true)
   {
      tgGui::render(&gs);
      gs.incFrame();
      tgReal const gameTime(tgReal(timer.gameTime())/tgReal(tgTimer::ticksPerSec));
      tgReal const deltaGT(gameTime - lastGameTime);
      lastGameTime = gameTime;
      if (false && 0 == gs.getFrame() % fpsFreq)
      {
         tgReal const wallTime(tgReal(timer.time())/tgReal(tgTimer::ticksPerSec));
         tgReal const deltaWT(wallTime - lastWallTime);
         lastWallTime = wallTime;
         cerr << "fps: " << tgReal(fpsFreq)/deltaWT << endl;
      }
      if (tgGui::isQuit()) { break; }
      sim.forward(deltaGT);
   }

   tgGui::destroyWindow();

   exit(EXIT_SUCCESS);
}
