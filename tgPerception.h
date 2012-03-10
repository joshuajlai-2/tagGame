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


#ifndef TG_PERCEPTION_H
#define TG_PERCEPTION_H

#include "tgGameState.h"
#include "tgCharacter.h"
#include "tgTimer.h"

#include <map>

namespace tagGame
{
// <ai4Begin>tgPerceptionDecl</ai4Begin>
   /// Controller's should gain all access to game-state information through a
   /// perception object.
   class tgPerception
   {
   public:
      tgPerception(tgGameState* gs);
      ~tgPerception();

      /// Set the character from whose point of view percepts are to be calculated.
      /// This method should be called prior to the associated character's controller
      /// selecting an action.  Most percepts "pull" information from the game as it is
      /// required by a controller.  The "setMe" method is the main "push" method for telling
      /// a controller which character is selecting an action.
      inline void setMe(tgCharacter* me);

      /// Set the character that is currently tagged.
      /// Information about which character is currently tagged could be "pulled" from the
      /// game, but currently the information is only stored locally in the tagged character.
      /// It is therefore more efficient for the game to explicitly "push" the information
      /// whenever a new character is tagged.
      inline void setTagged(tgCharacter* tagged);

      /// Accessors for the pushed information.
      inline tgCharacter* getMe() const;
      inline tgCharacter* getTagged() const;

      /// Some basic information about me.
      inline tgRealVec const& myPosition() const;
      inline tgRealVec myVelocity() const;
      inline tgReal mySpeed() const;
      inline tgRealVec const& myOrientation() const;
      inline tgReal myMaxExtent() const;
      inline tgReal myExtent(tgRealVec const& dir) const;
      inline tgReal myMaxSpeed(void) const;
      inline bool myselfTagged() const;

      /// Memory percept for who last tagged me.
      tgCharacter const* whoLastTaggedMe() const;

      /// How many milliseconds ago counts as "recent"
      static int const recentThreshold = 5000;

      /// Some memory percepts for recent events.
      int myRecentTaggedCount() const;
      bool myselfRecentlyTagged() const;

      /// Some basic information about the tagged character.
      inline tgRealVec const& taggedPosition() const;
      inline tgRealVec taggedVelocity() const;
      inline tgRealVec taggedRelativePosition() const;
      inline tgReal distanceSquaredToTagged() const;
      inline tgReal distanceToTagged() const;

      /// Predictor percept for tagged character's future position.
      inline tgRealVec taggedFuturePosition() const;

      /// Information about the nearest character.
      tgCharacter* nearestCharacter() const;
      inline tgRealVec const& nearestCharacterPosition() const;
      inline tgRealVec nearestCharacterRelativePosition() const;
      inline tgReal distanceSquaredToNearestCharacter() const;
      inline tgReal distanceToNearestCharacter() const;
// <ai4End>tgPerceptionDecl</ai4End>

      /// Some information about obstacles.
      tgObstacle* nearestObstacle() const; 
      inline tgRealVec nearestObstaclePosition() const;
      inline tgRealVec nearestObstacleRelativePosition() const;
      inline tgReal distanceSquaredToNearestObstacle() const;
      inline tgReal distanceToNearestObstacle() const;

      /// Information about an arbitary obstacle.  Note that,
      /// characters are also obstacles.
      inline tgRealVec const& position(tgObstacle const& which) const;
      inline tgRealVec relativePosition(tgObstacle const& which) const;
      inline tgReal distanceSquaredTo(tgObstacle const& which) const;      
      inline tgReal distanceTo(tgObstacle const& which) const;

      /// Predictor percept for time until my next collision.  For
      /// discrete-event simulation (see Chapter 2), an anlogous
      /// game-side function would need to be defined.  Such a
      /// game-side version would have to provide reliable and
      /// conservative predictions.  In contrast, this predictor
      /// percept only needs to be accurate enough to provide
      /// "reasonable" collision avoidance behavior.  Where, in this
      /// case (as in many games), "reasonable" admits the possibility
      /// of the odd collision not being avoided.
      tgReal timeToCollision() const;
      /// Predictor percept for my next collision point.
      tgRealVec nextCollisionPoint() const;
      /// Predictor percept for obstacle for my next collision.
      tgObstacle* nextCollider() const;

      /// Some basic information about the game.
      inline int getFrame();
      inline int getTime();

      /// Full access to the underlying game-state should be restricted to debugging
      /// use only.
      inline tgGameState* getGameState();

      inline void setDest(tgRealVec Dest);
      inline tgRealVec getDest();

// <ai4Begin>tgPerceptionDecl</ai4Begin>
   private:
      // Update state information about who tagged who last.
      void updateLastTagged();

      // Pointer to the game-state object
      tgGameState* gs;
      // The character from whose point of view percepts are to be calculated.
      tgCharacter* me;
// <ai4End>tgPerceptionDecl</ai4End>
      // The tagged character.
      tgCharacter* tagged;
      // The previous tagged character.
      tgCharacter* lastTagged;
      tgRealVec CachedDest;

      map<tgCharacter*,tgCharacter*> lastTaggedByList;

      enum cacheType
      {
         nearestCharacterCache,
         nearestObstacleCache,
         nextColliderCache,
         objectCacheSize
      };

      mutable vector<tgObstacle*> objectCache;
// <ai4Begin>tgPerceptionDecl</ai4Begin>
   };
// <ai4End>tgPerceptionDecl</ai4End>

   typedef bool (tgPerception::*tgPerceptBool)() const;
   typedef int (tgPerception::*tgPerceptInt)() const;
   typedef tgReal (tgPerception::*tgPerceptReal)() const;

   void tgPerception::setMe(tgCharacter* me)
   {
      TG_ASSERT(me);
   
      this->me = me;
   
      // Currently, the cache is only valid so long as the point of view
      // doesn't change.  That is, when a controller is selecting an
      // action for a single character, some values don't have to be
      // recomputed if they have previously already been determined.
      // Note that, caches could be maintained on a per character basis.
      // This would mean the cache could still be useful even if actions
      // were not computed for each character sequentially.  In addition,
      // caches could only be invalidated after n frames, thus avoiding
      // additional computation at the expense (as n increases) of less
      // accurate information.
      fill(objectCache.begin(),objectCache.end(), static_cast<tgObstacle*>(NULL));
   }
   
   // <ai4Begin>updateLastTaggedDefn</ai4Begin>
   void tgPerception::setTagged(tgCharacter* tagged)
   {
      TG_ASSERT(tagged);
      TG_ASSERT(tagged->getIsTagged());
   
      lastTagged = this->tagged;
      this->tagged = tagged;
      // Assume tagged was tagged by last tagged.  The lastTaggedByList will become
      // corrupt if the game ever omits to call setTagged when a new character is
      // tagged.
      lastTaggedByList[tagged] = lastTagged;
   }
   // <ai4End>updateLastTaggedDefn</ai4End>
   
   tgCharacter* tgPerception::getMe(void) const
   {
      return me;
   }
   
   tgCharacter* tgPerception::getTagged(void) const
   {
      return tagged;
   }
   
   // <ai4Begin>myPositionDefn</ai4Begin>
   tgRealVec const& tgPerception::myPosition() const
   {
      return me->getPosition();
   }
   // <ai4End>myPositionDefn</ai4End>
   
   // TODO: add a void for all empty function argument lists
   tgRealVec tgPerception::myVelocity(void) const
   {
      return me->getVelocity();
   }
   
   tgReal tgPerception::mySpeed() const
   {
      return me->getSpeed();
   }
   
   tgRealVec const& tgPerception::myOrientation(void) const
   {
      return me->getOrientation();
   }
   
   tgReal tgPerception::myMaxExtent() const
   {
      // TODO: Use more notion of extent in the rest of the game.
      return me->getRadius();
   }
   
   tgReal tgPerception::myExtent(tgRealVec const& dir) const
   {
      // Use more notion of extent in the rest of the game.
      return me->getRadius();
   }
   
   tgReal tgPerception::myMaxSpeed(void) const
   {
      return me->getMaxSpeed();
   }
   
   bool tgPerception::myselfTagged() const
   {
      return tagged == me;
   }
   
   tgRealVec const& tgPerception::taggedPosition(void) const
   {
      TG_ASSERT(tagged);
   
      return tagged->getPosition();
   }
   
   tgRealVec tgPerception::taggedVelocity(void) const
   {
      TG_ASSERT(tagged);
   
      return tagged->getVelocity();
   }
   
   tgRealVec tgPerception::taggedRelativePosition(void) const
   {
      TG_ASSERT(tagged);
   
      return taggedPosition().relativeTo(myPosition());
   }
   
   tgReal tgPerception::distanceSquaredToTagged() const
   {
      assert(tagged);
   
      return me->distanceSquaredTo(*tagged);
   }
   
   tgReal tgPerception::distanceToTagged() const
   {
      TG_ASSERT(tagged);
   
      return me->distanceTo(*tagged);
   }
   
   // <ai4Begin>taggedFuturePositionDefn</ai4Begin>
   tgRealVec tgPerception::taggedFuturePosition() const
   {
      tgRealVec p(taggedPosition());
      return p.add(taggedVelocity());
   }
   // <ai4End>taggedFuturePositionDefn</ai4End>
   
   // <ai4Begin>distanceToNearestCharacterDefn</ai4Begin>
   tgRealVec const& tgPerception::nearestCharacterPosition() const
   {
      return nearestCharacter()->getPosition();
   }
   
   tgRealVec tgPerception::nearestCharacterRelativePosition() const
   {
      return nearestCharacterPosition().relativeTo(myPosition());
   }
   
   tgReal tgPerception::distanceSquaredToNearestCharacter() const
   {
      return me->distanceSquaredTo(*nearestCharacter());
   }
   
   tgReal tgPerception::distanceToNearestCharacter() const
   {
      return me->distanceTo(*nearestCharacter());
   }
   // <ai4End>distanceToNearestCharacterDefn</ai4End>
   
   tgRealVec const& tgPerception::position(tgObstacle const& which) const
   {
      return which.getPosition();
   }
   
   tgRealVec tgPerception::relativePosition(tgObstacle const& which) const
   {
      return position(which).relativeTo(myPosition());
   }
   
   tgReal tgPerception::distanceSquaredTo(tgObstacle const& which) const
   {
      return me->distanceSquaredTo(which);
   }
   
   tgReal tgPerception::distanceTo(tgObstacle const& which) const
   {
      return me->distanceTo(which);
   }
   
   tgRealVec tgPerception::nearestObstaclePosition() const
   {
      return nearestObstacle()->getPosition();
   }
   
   tgRealVec tgPerception::nearestObstacleRelativePosition() const
   {
      return nearestObstaclePosition().relativeTo(myPosition());
   }
   
   tgReal tgPerception::distanceSquaredToNearestObstacle() const
   {
      return me->distanceSquaredTo(*nearestObstacle());
   }
   
   tgReal tgPerception::distanceToNearestObstacle() const
   {
      return me->distanceTo(*nearestObstacle());
   }
   
   int tgPerception::getFrame()
   {
      return gs->getFrame();
   }
   
   int tgPerception::getTime()
   {
      // characters only know about game time
      return gs->getTimer()->gameTime();
   }
   
   tgGameState* tgPerception::getGameState()
   {
      TG_ASSERT(gs);
   
      return gs;
   }
   tgRealVec tgPerception::getDest()
   {
      return CachedDest;
   }
   void tgPerception::setDest(tgRealVec Dest)
   {
      CachedDest=Dest;
   }
}

#endif

