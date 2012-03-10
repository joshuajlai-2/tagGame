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
#include "tgCharacter.h"
#include "tgGameState.h"
#include "tgTimer.h"
#include "tgController.h"
#include "tgPerception.h"
#include "tgUtil2D.h"

using namespace tagGame;

#undef IMPLULSE_COLLISION_CODE
// Comment out the next "define" to resolve collisions using impulses,
// instead of the currently used penalty method.  Using impulses is
// more correct, but it currently doesn't work
// perfectly with the existing collision detection code.
#define IMPULSE_COLLISION_CODE 1

tgSimulator::tgSimulator(tgGameState* gs) :
   gs(gs)
{
}

void tgSimulator::forward(tgReal const deltaT)
{
   // NOTE: all characters select actions using the state of the game world at time t.
   // Only after all the actions are selected is the game state updated (using
   // those actions) to the correct state at time t + deltaT.
   // This avoids any of the problems that are described in the book with one
   // character continually "going first".

   generateActions();
   processActions(deltaT);
#if defined(IMPULSE_COLLISION_CODE)
   resolveCollisions();
#endif
   updateGameState(deltaT);
}

void tgSimulator::generateActions()
{
   for (int i(0); i < gs->getCharacterCount(); i++)
   {
      tgCharacter* c(gs->getCharacter(i));
      // IMPORTANT: Make all percepts be computed from character i's point of view.
      c->getController()->getPerception()->setMe(c);
      c->calcAction();
   }
}

void tgSimulator::processActions(tgReal const deltaT)
{
#ifndef IMPULSE_COLLISION_CODE
   gs->calcColliders();
#endif
   for (int i(0); i < gs->getCharacterCount(); i++)
   {
      tgCharacter* c(gs->getCharacter(i));
// <ai4Begin>tgVehicleModel1</ai4Begin>
      // calculate character c's required acceleration from the desired velocity
      tgRealVec acceleration(c->getAction().getDesiredDirection());
      acceleration.scale(c->getAction().getDesiredSpeed()*c->getMaxSpeed());
      acceleration.subtract(c->getVelocity());
      // calculate required force from the acceleration
      tgRealVec force(acceleration.scale(c->getMass()));
      // force can't be greater than the maximum possible force
      force.clampMaxLength(c->getMaxForce());
// <ai4End>tgVehicleModel1</ai4End>
#ifndef IMPULSE_COLLISION_CODE
      force = calcCollisionPenalty(i, force);
#endif
// <ai4Begin>tgVehicleModel1</ai4Begin>
      // re-calculate acceleration for new (possibly) clamped force
      acceleration = force.scale(1.0/c->getMass());
      acceleration.scale(deltaT);
      // v = character c's current velocity
      tgRealVec v(c->getVelocity());
      v.add(acceleration);

      v.clampMaxLength(c->getMaxSpeed());

      c->setVelocity(v);
// <ai4End>tgVehicleModel1</ai4End>
   }
}

void tgSimulator::updateCharacter(tgReal const deltaT, int const i)
{
// <ai4Begin>tgVehicleModel2</ai4Begin>
   tgCharacter* c(gs->getCharacter(i));
   tgRealVec p(c->getPosition());
   tgRealVec v(c->getVelocity());
   v.scale(deltaT);
   p.add(v);
// <ai4End>tgVehicleModel2</ai4End>
   p.wrap(gs->getWorldDim());
// <ai4Begin>tgVehicleModel2</ai4Begin>
   c->setPosition(p);
// <ai4End>tgVehicleModel2</ai4End>
}

void tgSimulator::updateGameState(tgReal const deltaT)
{
   for (int i(0); i < gs->getCharacterCount(); i++)
   {
      updateCharacter(deltaT, i);
   }
}

tgRealVec tgSimulator::calcCollisionPenalty(int const myIndex,
                                            tgRealVec const& f)
{
   int const now(gs->getTimer()->gameTime());
   tgRealVec n(f);
   if (!gs->isColliding(myIndex))
   {
      int const lastCollisionTime(gs->getCharacter(myIndex)->getCollideTime());
      if (0 <= lastCollisionTime && now - lastCollisionTime < 1000)
      {
         n.set(0);
      }
      return n;
   }

   gs->getCharacter(myIndex)->setCollideTime(now);

   tgCharacter* me(gs->getCharacter(myIndex));
   tgObstacle* collider(static_cast<tgObstacle*>(gs->getObstacle(gs->getCollider(myIndex))));
   // TODO: slow, better to keep list of which obstacles are characters
   tgCharacter* you(dynamic_cast<tgCharacter*>(collider));

   if (you && you->getIsTagged() && (now - gs->getLastTaggedTime() > 3000))
   {
      me->setTagged(now);
      you->setTagged(-1);
      gs->setTagged();
   }

   n = collider->normalTo(*static_cast<tgObstacleCircle*>(me));
   tgReal const maxF(me->getMaxForce());

#if 1
   tgReal const overlap(collider->distanceTo(*static_cast<tgObstacleCircle*>(me)));
   TG_ASSERT(overlap <= 0);
   // tgRealVec const& v0(me->getVelocity());
   // tgRealVec const& v1(collider->getVelocity());
   // tgReal const relativeSpeed(v0.dot(n) - v1.dot(n));
   // TG_ASSERT(relativeSpeed <= 0);

   // Simple spring model used to calculate penalty force.
   n.scale(20.0*fabs(overlap)*maxF);
#else
   n.scale(100.0*maxF);
#endif

   return n;
}

static tgRealVec scaleAndAdd(tgRealVec const& v0, tgReal s0, tgRealVec const& v1, tgReal s1)
{
   tgRealVec v(v0);
   v.scale(s0);
   tgRealVec tmp(v1);
   tmp.scale(s1);
   v.add(tmp);

   return v;
}

void tgSimulator::resolveCollisions()
{
   int const now(gs->getTimer()->gameTime());

   while (0 < gs->calcColliders())
   {
      vector<bool> processed(gs->getCharacterCount(), false);

      for (int i(0); i < gs->getCharacterCount(); i++)
      {
         if (processed[i]) { continue; }

         processed[i] = true;

         tgCharacter* c(gs->getCharacter(i));
         TG_ASSERT(c);
         if (gs->isColliding(i))
         {
            tgRealVec const& uc(c->getVelocity());
            tgReal const mc(c->getMass());

            tgObstacle* o(gs->getObstacle(gs->getCollider(i)));
            TG_ASSERT(o);

            tgRealVec t(c->normalTo(*o));
            tgRealVec n(tgUtil2D::perpendicularTo(t).getRow(0));

            tgReal const uct(uc.dot(t));
            tgReal const ucn(uc.dot(n));

            tgReal const mo(o->getMass());

            tgReal const e(0.75); // coefficient of restitution

            if (Inf == mo) // mo is unmoveable
            {
               tgReal const vct(-e * uct);
               c->setVelocity(scaleAndAdd(t, vct, n, ucn));
               return;
            }

            tgRealVec const& uo(o->getVelocity());

            tgReal const uot(uo.dot(t));
            tgReal const uon(uo.dot(n));

            tgReal const k((uct - uot)/(mc + mo));
            tgReal const vct(uct - (1 + e) * mo * k);
            tgReal const vot(uot + (1 + e) * mc * k);

            c->setVelocity(scaleAndAdd(t, vct, n, ucn));

            o->setVelocity(scaleAndAdd(t, vot, n, uon));

            // less than infinite mass currently implies a character.
            tgCharacter* you(static_cast<tgCharacter*>(o));
            
            if (you->getIsTagged() && (now - gs->getLastTaggedTime() > 3000))
            {
               c->setTagged(now);
               you->setTagged(-1);
               gs->setTagged();
            }
            else if (c->getIsTagged() && (now - gs->getLastTaggedTime() > 3000))
            {
               you->setTagged(now);
               c->setTagged(-1);
               gs->setTagged();
            }

            processed[gs->getCharacterIndex(o->getGSIndex())] = true;
         }
      }
   }
}

