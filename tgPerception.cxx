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

#include <SDL.h>
#include "tgPerception.h"
#include "tgUtil2D.h"
#include "tgGUI.h"
#include "tgMath.h"

using namespace tagGame;

tgPerception::tgPerception(tgGameState* gs) :
   gs(gs),
   me(NULL),
   tagged(NULL),
   objectCache(objectCacheSize)
{
   fill(objectCache.begin(),objectCache.end(), static_cast<tgObstacle*>(NULL));
}

tgPerception::~tgPerception()
{}

// <ai4Begin>whoLastTaggedMeDefn</ai4Begin>
tgCharacter const* tgPerception::whoLastTaggedMe() const
{
   map<tgCharacter*,tgCharacter*>::const_iterator i(lastTaggedByList.find(me));

   if (i != lastTaggedByList.end())
   {
      return i->second;
   }
   return NULL;
}
// <ai4End>whoLastTaggedMeDefn</ai4End>

int tgPerception::myRecentTaggedCount() const
{
   tgUtil::error("not implemented");
   return 1;
}

bool tgPerception::myselfRecentlyTagged() const
{
   tgUtil::error("not implemented");
   return false;
}

// <ai4Begin>distanceToNearestCharacterDefn</ai4Begin>
tgCharacter* tgPerception::nearestCharacter() const
{
   // If the previous calculation of nearestCharacter is still valid, return the
   // cached value.
   if (objectCache[nearestCharacterCache])
   {
      return static_cast<tgCharacter*>(objectCache[nearestCharacterCache]);
   }

   tgCharacter* who(NULL);
   tgReal distanceMin(Inf);
   tgRealVec myPos(myPosition());
   tgRealVec myOri(myOrientation());
   tgRealVec probabilities(me->getProbabilities());
 
/*
 Probability idea for setting probabilities to 1/distance taken from
 Curt Bererton's particle filtering paper. The probability is multiplied
 by 10 so that no matter the distance, it will still be greater than the
 even distribution.
 */

/*
   LOS-Line of Sight: For every character on the map, iterate
   through each one taking their positions relative to self.
   If the character is self, continue.  Compare the character
   position to every object on the map to see if LOS exists.
   Find the nearest intersection of the object from my position
   and the target character.  If the length exists, then an
   intersection exists.  If the intersection exists and the
   character is closer than the object, then LOS exists.

   */
   Uint8* keys(SDL_GetKeyState(NULL));
   for (int i(0); i < gs->getCharacterCount(); i++)
   {
      tgCharacter* c(gs->getCharacter(i));
	  if (me == c) { continue; } // Don't include me!
      tgRealVec charPos(c->getPosition());
      tgRealVec charRelativePos(charPos.relativeTo(myPosition()));
      tgReal distance(distanceTo(*c));
	  //assume LOS true unless object found in the way
	  bool LOS(true);
      for(int x(0); x < gs->getObstacleCount(); x++)
      {
         tgObstacle* objInTheWay(gs->getObstacle(x));
         tgRealVec   objPos(objInTheWay->getPosition());
		 //getObstacle returns all obstacles including characters, ignore if its another character
         if(objInTheWay->getMass() == 1) { continue; }
         if(objInTheWay == me) { continue; }
         if(objInTheWay == c) { continue; }
         tgRealVec intersection(objInTheWay->nearestIntersection(myPos, charRelativePos.normalize()));

         tgReal objDist(distanceTo(*objInTheWay));
		 //intersection of Inf means one doesn't exist
		 //if one exists, check distances
		 //if object closer, LOS is false
         if((intersection.length() < Inf) && (distance > objDist))
         {
			LOS = false;
			if (keys[SDLK_d])
			{
				tgGui::setColor(tgGui::getColorFromName("blue"));
				tgGui::drawLineSegment(myPosition(), intersection);
				tgGui::setColor(tgGui::getColorFromName("red"));
				tgGui::drawLineSegment(myPosition(), objInTheWay->getPosition());
			}
			//don't bother checking all other objects, LOS already failed.
			continue;
         }
      }
	  //update probabilities based on visibility
	  if(LOS){
		int xVal(charPos[0]/34);
		int yVal(charPos[1]/34);
		if(yVal*15 >= 225)
		{
			probabilities[xVal+(yVal-1)*15] = (tgReal)(1/distance)*10;
		}
		else
		{
			probabilities[xVal+(yVal*15)]=(tgReal)(1/distance)*10;
		}
		if (distance < distanceMin)
		{
			distanceMin = distance;
			who = c;  
		}
		if (keys[SDLK_i])
		{
			tgGui::drawLineSegment(myPosition(), charPos);
		}
	  }
   }
   
   //If no one seen, reset visible probability points
   
   if(who == NULL)
   {
      who=me;
      for(int i(0); i<225; i++)
      {
         //if(probabilities[i] == 0){continue;}
         tgRealVec partPos(2);
         partPos[0]=(i%15)*34;
         partPos[1]=(i/15)*34;
         tgReal partDis(sqrt(pow(partPos[0]-myPos[0], 2)+ pow(partPos[1]-myPos[1], 2)));
         tgRealVec partPosRel(partPos.relativeTo(myPos));
         if(partDis > 100){continue;}
         //If the particle is infront of me between 2 slope vectors
         if((partPosRel[1] <= (floor(myOri[1]/myOri[0]))*partPosRel[0]) && (partPosRel[1] >= (ceil(myOri[1]/myOri[0]))*partPosRel[0]))
         {  
            continue;
         }  
         for(int j(0); j<gs->getObstacleCount(); j++)
         {
			//if probability already insignificant, don't bother considering
            //if(probabilities[i] < (tgReal)(1/1000)) {continue;}
            tgObstacle* inPartWay(gs->getObstacle(j));
            tgRealVec objPos(inPartWay->getPosition());
            tgRealVec intersection(inPartWay->nearestIntersection(myPos, partPosRel.normalize()));
            
            if((intersection.length() < Inf) && (partDis < (distanceTo(*inPartWay))))
            {
				//set visible particle to insiginicat number but not 0
				probabilities[i] = (tgReal)(1/1000);
            }
         }
      }   
   }
   

   //cout << probabilities.sum() << endl;
   tgRealVec orientation(2);
   orientation[0]=0;
   orientation[1]=0;
   if (keys[SDLK_p])
   {
	   for(int j(0); j< 225; j++)
	   {
		 if(probabilities[j] > (tgReal)(1/1000))
		 {
			tgRealVec POS(2);
			POS[0] = (j%15)*34;
			POS[1] = (j/15)*34;
			tgGui::setColor(tgGui::getColorFromName("yellow"));
			tgGui::drawCircle(POS, orientation, probabilities[j]*10);
		 }
	  }
   }

   me->resetProbabilities(probabilities.normalize());
   
   TG_ASSERT(who);
   // Computing the nearest character is expensive so cache the result in case
   // it's needed again.
   // TODO: Could also be worth caching dMin as the distanceToNearestCharacter.
   objectCache[nearestCharacterCache] = who;
   return who;
}
// <ai4End>distanceToNearestCharacterDefn</ai4End>

// TODO: factor out common code from nearestObstacle, nearestCharacter, etc.
tgObstacle* tgPerception::nearestObstacle() const
{
   // If the previous calculation of nearestCharacter is still valid, return the
   // cached value.
   if (objectCache[nearestObstacleCache])
   {
      return static_cast<tgObstacle*>(objectCache[nearestObstacleCache]);
   }

   tgObstacle* which(NULL);
   tgReal dMin(Inf);
   for (int i(0); i < gs->getObstacleCount(); i++)
   {
      tgObstacle* o(gs->getObstacle(i));

      // TODO: cast needed for me?
      if (me == o) { continue; } // Don't include me!

      // TODO: use squaredDistanceTo instead
      tgReal const d(distanceTo(*o));
      if (d < dMin)
      {
         dMin = d;
         which = o;
      }
   }
   // TODO: support no obstacles?
   TG_ASSERT(which);
   // Computing the nearest character is expensive so cache the result
   // in case it's needed again.

   // TODO: Could also be worth caching dMin as the
   // distanceToNearestCharacter.

   objectCache[nearestObstacleCache] = which;
   return which;
}

tgRealVec tgPerception::nextCollisionPoint() const
{
   if (!objectCache[nextColliderCache])
   {
      nextCollider();
   }

   if (!objectCache[nextColliderCache])
   {
      tgRealVec p(tgUtil2D::dim);
      p.set(Inf);
      return p;
   }
   // TODO: This was already calculated in nextCollider, consider caching.
   return objectCache[nextColliderCache]->nearestIntersection(myPosition(), myOrientation());
}

tgReal tgPerception::timeToCollision() const
{
   tgRealVec cp(nextCollisionPoint());
   if (Inf == cp.length())
   {
      return Inf; // No collisions detected.
   }

   tgRealVec rp(cp.relativeTo(myPosition()));
   tgReal const myVel(rp.dot(myVelocity()));
   // With the current set of assumptions, me could not be on a
   // collision course in the first place if the following assert
   // fails.
   TG_ASSERT(0 <= myVel);
#if 0
   // TODO: To more accurately compute the time to collision we should
   // take into account the velocity of the collider.  But if we do
   // that here, we should have done that in the computation of the
   // nearest collider.  For example, if a collider is moving out of
   // the way faster than we are approaching it, then there is no
   // danger of collision after all.  But remember this whole method
   // is a percept and percepts don't have to be perfect as they are
   // meant to model how the NPC thinks about the world.  And in that
   // vein, using a stationary snapshot of the world is OK for now.
   // Especially so as the snapshot is regularly updated when the
   // percept is recalculated every time an action is selected.
   tgReal const colliderVel(rp.dot(objectCache[nextColliderCache]));
   tgReal const relVel(myVel - colliderVel);
#endif

   return rp.length(); // /myVel;
}

tgObstacle* tgPerception::nextCollider() const
{
   // If the previous calculation of the next collider is still valid,
   // return the cached value.
   if (objectCache[nextColliderCache])
   {
      return static_cast<tgObstacle*>(objectCache[nextColliderCache]);
   }

   tgObstacle* which(NULL);
   tgReal dMin(Inf);
   for (int i(0); i < gs->getObstacleCount(); i++)
   {
      tgObstacle* o(gs->getObstacle(i));

      // TODO: cast needed for me?
      if (me == o) { continue; } // Don't include me!

      tgRealVec rp(o->nearestIntersection(myPosition(), myOrientation()));
      // Infinity is used to indicate no intersection.
      if (rp.length() < Inf)
      {
         rp.subtract(myPosition());
         tgReal const d(rp.length() - myMaxExtent());
         if (d < dMin)
         {
            dMin = d;
            which = o;
         }
      }
   }
   // We must at least be on a collision course with one of the sides.
   // TODO: turn side collisions back on
   if (false && !which)
   {
      cerr << myPosition() << "; " << myOrientation() << endl;
      char c; cin >> c;
      TG_ASSERT(which);
   }
   // Computing the nearest collider is expensive so cache the result
   // in case it's needed again.

   // TODO: Could also be worth caching dMin as the distance to the
   // nearest collider.

   objectCache[nextColliderCache] = which;
   return which;
}
