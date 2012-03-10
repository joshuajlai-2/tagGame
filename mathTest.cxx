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

#include "tgUtil2D.h"

using namespace tagGame;

tgIntVec intScaleBy2(tgIntVec const& v)
{
   tgIntVec u(v);
   return u.scale(2);
}

void mathTestInt()
{
   tgIntVec u(2);
   u[0] = 3;
   u[1] = 4;

   TG_ASSERT(25 == u.squaredLength());
   TG_ASSERT(5 == int(u.length()));

   vector<int> data(2);
   data[0] = 6;
   data[1] = 8;
   tgIntVec v(data);

   TG_ASSERT(2 == v.size());
   TG_ASSERT(data == static_cast< vector<int>& >(v));

   tgIntVec w(intScaleBy2(u));
   TG_ASSERT(v == w);
   TG_ASSERT(3 == u[0] && 4 == u[1]);
   w = u;
   w.scale(2);
   TG_ASSERT(v == w);
   TG_ASSERT(3 == u[0] && 4 == u[1]);
   u.scale(2);
   TG_ASSERT(v == u);

   v.add(u);
   v.subtract(w);
   TG_ASSERT(v == u);

   v.scale(u);
   TG_ASSERT(36 == v[0] && 64 == v[1]);

   // Makes no sense for tgIntVec
   v.normalize();
   TG_ASSERT(v.isAlmostZero());

   // Doesn't currently work for tgIntVec
   // v.randomize();

   v[1] = 8;

   while (0 == v[0] && 8 == v[1])
   {
      v.shuffle();
   }
   v.scale(-1);

   TG_ASSERT(-8 == v.minElement());
   TG_ASSERT(0 == v.maxElement());

   v.scale(-2);
   TG_ASSERT(1 == v.argMin());
   TG_ASSERT(0 == v.argMax());

   u[0] = 6;
   u[1] = 8;
   u.clampMaxLength(80);
   TG_ASSERT(6 == u[0] && 8 == u[1]);

   u.setLength(5);

   // doesn't work for tgIntVec
   TG_ASSERT(u.isAlmostZero());

   v[0] = -180;
   v[1] = 200;
   u[0] = 50;
   u[1] = 100;
   v.wrap(u);

   TG_ASSERT(20 == v[0] && 100 == v[1]);
}

void mathTestReal()
{
   tgRealVec u(2);
   u[0] = 3.0;
   u[1] = 4.0;

   TG_ASSERT(25.0 == u.squaredLength());
   TG_ASSERT(5.0 == u.length());

   vector<tgReal> data(2);
   data[0] = 6.0;
   data[1] = 8.0;
   tgRealVec v(data);

   TG_ASSERT(2 == v.size());
   TG_ASSERT(data == static_cast< vector<tgReal>& >(v));

   tgRealVec w(u);
   w.scale(2.0);
   TG_ASSERT(v == w);
   TG_ASSERT(3.0 == u[0] && 4.0 == u[1]);
   u.scale(2.0);
   TG_ASSERT(v == u);

   v.add(u);
   v.subtract(w);
   TG_ASSERT(v == u);

   v.scale(u);
   TG_ASSERT(36.0 == v[0] && 64.0 == v[1]);

   v.normalize();
   TG_ASSERT(tgMath::isAlmostEq(1.0, v.length()));

   v.randomize();

   u = v;

   while (u == v)
   {
      v.shuffle();
   }

   v.scale(-1);

   v[0] = 0.0;
   v[1] = -8.0;
   TG_ASSERT(-8.0 == v.minElement());
   TG_ASSERT(0.0 == v.maxElement());

   v.scale(-2.0);
   TG_ASSERT(0 == v.argMin());
   TG_ASSERT(1 == v.argMax());

   u[0] = 6.0;
   u[1] = 8.0;
   u.clampMaxLength(80);
   TG_ASSERT(6.0 == u[0] && 8.0 == u[1]);

   u.setLength(5.0);

   TG_ASSERT(3.0 == u[0] && 4.0 == u[1]);

   v[0] = -180.0;
   v[1] = 200.0;
   u[0] = 50.0;
   u[1] = 100.0;
   v.wrap(u);

   TG_ASSERT(20.0 == v[0] && 100.0 == v[1]);

   v[0] = 4.0;
   v[1] = 4.0;
   TG_ASSERT(tgMath::isAlmostEq(45.0, tgUtil2D::angle(v)));
   TG_ASSERT(tgMath::isAlmostEq(1.0, tgUtil2D::uniformDir().length()));

   v[0] = 1.0;
   v[1] = 0;
   u.set(1);
   u.normalize();
   tgRealVec a(tgUtil2D::perpendicularTo(v, u));
   TG_ASSERT(0 == a[0] && 1 == a[1]);
}

void mathTestStats()
{
   // TODO: proper statistical tests, this just writes out a string that
   // can be used to easily create a plot in octave for visual inspection
   tgIntVec angles(360);
   fill(angles.begin(), angles.end(), 0);

   for (int i(0); i < 100000; i++)
   {
      int const angle(int(tgReal(180) + tgMath::normalAngle(0, 30)));
      TG_ASSERT_MSG(0 <= angle && angle <= 360, "angle: " + tgUtil::itos(angle));
      angles[angle]++;
   }
   cout << "v = [ " << angles << "];\n";
   cout << "plot(v, \"^\")\n";

   fill(angles.begin(), angles.end(), 0);

   for (int i(0); i < 100000; i++)
   {
      int const angle(int(tgReal(180) + tgUtil2D::angle(tgUtil2D::normalDir(0, 30))));
      TG_ASSERT_MSG(0 <= angle && angle <= 360, "angle: " + tgUtil::itos(angle));
      angles[angle]++;
   }
   cout << "v = [ " << angles << "];\n";
   cout << "plot(v, \"^\")\n";
}

int main(int argc, char** argv)
{
   mathTestInt();

   mathTestReal();

   mathTestStats();

   exit(EXIT_SUCCESS);
}

