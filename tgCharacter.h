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

#ifndef TG_CHARACTER_H
#define TG_CHARACTER_H

#include "tgObstacleCircle.h"
#include "tgAction.h"

namespace tagGame
{
   class tgController;

// <ai4Begin>tgCharacterDecl</ai4Begin>
   /// The main class for NPCs and player characters.
   /// NPCs and player characters differ only in their controller's and renderer's.
   /// Characters are also circular obstacles.
   class tgCharacter : public tgObstacleCircle
   {
   public:
      tgCharacter(tgGameState* gs, tgController* controller);
      ~tgCharacter();

      /// Get this character's controller
      inline tgController* getController();
      /// Set this character's controller
      inline void setController(tgController* controller);
// <ai4End>tgCharacterDecl</ai4End>

      inline bool getIsTagged() const;
      inline int getTaggedTime() const;
      // TODO: rename to setTaggedTime
      void setTagged(int tagTime);

      inline void setCollideTime(int collideTime);
      inline int getCollideTime() const;

      void calcAction();
      tgAction const& getAction() const;
      inline tgReal getMaxTurnRate() const;
      inline tgReal getMaxSpeed() const;
      inline tgReal getMaxForce() const;

	  inline void setProbabilities();
	  inline tgRealVec getProbabilities();
	  inline void resetProbabilities(tgRealVec newProbable);
     inline void randomProb();

   protected:
// <ai4Begin>tgCharacterDecl</ai4Begin>
   private:
      /// Pointer to this character's (possibly shared) controller
      tgController* controller;
// <ai4End>tgCharacterDecl</ai4End>
      tgAction lastAction;
      tgReal maxTurnRate;
      tgReal maxSpeed;
      tgReal maxForce;
      tgRealVec Probabilities;
      // How long since this character was tagged (-1 if not currently tagged).
      int tagTime;
      // How long since this character collided with something (-1 if never collided).
      int collideTime;
// <ai4Begin>tgCharacterDecl</ai4Begin>
   };
// <ai4End>tgCharacterDecl</ai4End>

   bool tgCharacter::getIsTagged() const
   {
      return 0 <= tagTime;
   }
   
   int tgCharacter::getTaggedTime() const
   {
      return tagTime;
   }
   
   tgReal tgCharacter::getMaxTurnRate() const
   {
      return maxTurnRate;
   }
   
   tgReal tgCharacter::getMaxSpeed() const
   {
      if (getIsTagged()) { return 0.8 * maxSpeed; }
      return maxSpeed;
   }
   
   tgReal tgCharacter::getMaxForce() const
   {
      return maxForce;
   }
   
   tgController* tgCharacter::getController()
   {
      return controller;
   }
   
   void tgCharacter::setController(tgController* controller)
   {
      this->controller = controller;
   }
   
   void tgCharacter::setCollideTime(int collideTime)
   {
      this->collideTime = collideTime;
   }
   
   int tgCharacter::getCollideTime() const
   {
      return collideTime;
   }

   void tgCharacter::setProbabilities()
   {
     tgRealVec Probable(225);
	  for(int i(0); i < 225; i++)
	  {
        //all probabilities are 0.  If this is case, just roam.
         Probable[i]= (tgReal)1/225;
	  }
	  this->Probabilities = Probable;
   }

   tgRealVec tgCharacter::getProbabilities()
   {
	   return this->Probabilities;
   }

   void tgCharacter::resetProbabilities(tgRealVec newProbable)
   {
	   this->Probabilities = newProbable;
   }

   void tgCharacter::randomProb()
   {
      tgRealVec Probs(225);
      for(int i(0); i< 225; i++)
      {
         Probs[i] = rand()%61;
      }
      tgReal sumProbs(Probs.sum());
      for(int j(0); j<225; j++)
      {
         Probs[j] = (tgReal)Probs[j]/sumProbs;
      }
      this->Probabilities = Probs;
   }
}

#endif
