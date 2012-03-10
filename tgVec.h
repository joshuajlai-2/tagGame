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

#ifndef TG_VEC_H
#define TG_VEC_H

#include "tgMath.h"

#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>
#include <cmath>

namespace tagGame
{
   using namespace std;

   /// A basic templatized vector class.
   /// The world probably doesn't need yet another vector class, but
   /// this one has several desirable properties:
   ///  - it uses the same code style as the rest of the game source;
   ///  - it is templatized to support integer and floating-point vectors;
   ///  - it is simple and light-weight;
   ///  - it avoids any "behind the scenes" copying of objects;
   ///  - it avoids almost all use of operator overloading (can make code hard to read)
   ///  - it allows arbiray length vectors (partial template specializations could be
   ///    written to provide faster special case implmentations for 2D, 3D and 4D vectors).
   ///  - it makes extensive use of STL to simplify and reduce the amount of code
   ///    (STL could be expanded and improved to make the code even simpler and shorter).
   ///
   /// It is not however meant to be a fully fledged linear algebra class.  If you
   /// are looking for such a library try www.boost.org, geometrictools.com, or any
   /// of a host of other libraries.
   template <class T>
   class tgVec : public vector<T>
   {
   public:
      tgVec(unsigned const n = 0);
      tgVec(vector<T> const& data);
      tgVec(tgVec const& v);
      // ~tgVec();

      bool isAlmostEq(tgVec const& v) const;
      bool isAlmostZero() const;

      ostream& output(ostream& out) const;

      tgVec& set(T const x);
      tgVec& add(tgVec const& v);
      tgVec& subtract(tgVec const& v);
      tgVec& scale(T const x);
      tgVec& scale(tgVec const& v);

      T length() const;
      T squaredLength() const;
      T minElement() const;
      T maxElement() const;
      unsigned argMax() const;
      unsigned argMin() const;
      T dot(tgVec const& v) const;
      T sum() const;

      tgVec& normalize();
      tgVec& setLength(T const x);
      tgVec& clampMaxLength(T const x);
      tgVec& shuffle();
      tgVec& randomize();
      tgVec& wrap(tgVec const& v);
      tgVec& clamp(tgVec const& lower, tgVec const& upper);

      /// Calculate a new vector that is this vector relative to v.
      tgVec relativeTo(tgVec const& v) const;
   protected:
   private:
   };

   template <class T>
   ostream& operator<<(ostream& out, tgVec<T> const& v);

   typedef tgVec<int> tgIntVec;
   typedef tgVec<tgReal> tgRealVec;

   template <class T>
   tgVec<T>::tgVec(unsigned const size) :
      vector<T>(size)
   {
      set(T(0));
   }
   
   template <class T>
   tgVec<T>::tgVec(vector<T> const& data) :
      vector<T>(data)
   {
   }
   
   template <class T>
   tgVec<T>::tgVec(tgVec const& v) :
      vector<T>(v) 
   {
   }
   
   // not really needed, but uncommenting this destructor causes an internal compiler error on MacOSX!
   /*
   template <class T>
   tgVec<T>::~tgVec()
   {
      vector<T>::~vector<T>();
   }
   */
   
   template <class T>
   tgVec<T>& tgVec<T>::set(T const x)
   {
      fill(vector<T>::begin(), vector<T>::end(), x);
   
      return *this;
   }
   
   template <class T>
   tgVec<T>& tgVec<T>::add(tgVec const& v)
   {
      TG_ASSERT(vector<T>::size() == v.size());
   
      transform(vector<T>::begin(), vector<T>::end(), v.begin(), vector<T>::begin(), plus<T>());
   
      return *this;
   }
   
   template <class T>
   tgVec<T>& tgVec<T>::subtract(tgVec const& v)
   {
      TG_ASSERT(vector<T>::size() == v.size());
   
      transform(vector<T>::begin(), vector<T>::end(), v.begin(), vector<T>::begin(), minus<T>());
   
      return *this;
   }
   
   template <class T>
   tgVec<T>& tgVec<T>::scale(T const x)
   {
      transform(vector<T>::begin(), vector<T>::end(), vector<T>::begin(), bind1st(multiplies<T>(), x));
   
      return *this;
   }
   
   template <class T>
   tgVec<T>& tgVec<T>::scale(tgVec const& v)
   {
      transform(vector<T>::begin(), vector<T>::end(), v.begin(), vector<T>::begin(), multiplies<T>());
   
      return *this;
   }
   
   template <class T>
   T tgVec<T>::length() const
   {
      return T(sqrt(tgReal(this->squaredLength())));
   }
   
   template <class T>
   T tgVec<T>::squaredLength() const
   {
      return this->dot(*this);
   }
   
   template <class T>
   T tgVec<T>::dot(tgVec const& v) const
   {
      return inner_product(vector<T>::begin(), vector<T>::end(), v.begin(), T(0));
   }
   
   template <class T>
   class adder : public unary_function<T, void>
   {
   public:
      adder() :
         sum(T(0))
      {
      }
   
      T sum;
   
      void operator()(T const x)
      {
        sum += x;
      }
   };
   
   template <class T>
   T tgVec<T>::sum() const
   {
       return for_each(vector<T>::begin(), vector<T>::end(), adder<T>()).sum;
   }
   
   template <class T>
   unsigned tgVec<T>::argMin() const
   {
      return min_element(vector<T>::begin(), vector<T>::end()) - vector<T>::begin();
   }
   
   template <class T>
   unsigned tgVec<T>::argMax() const
   {
      return max_element(vector<T>::begin(), vector<T>::end()) - vector<T>::begin();
   }
   
   template <class T>
   T tgVec<T>::minElement() const
   {
      return (*this)[argMin()];
   }
   
   template <class T>
   T tgVec<T>::maxElement() const
   {
      return (*this)[argMax()];
   }
   
   template <class T>
   tgVec<T>& tgVec<T>::normalize()
   {
      return setLength(T(1));
   }
   
   template <class T>
   tgVec<T>& tgVec<T>::clampMaxLength(T const x)
   {
      tgReal const l(length());
   
      if (x < l)
      {
         setLength(x);
      }
   
      return *this;
   }
   
   template <class T>
   tgVec<T>& tgVec<T>::setLength(T const x)
   {
      tgReal const l(length());
      if (tgMath::isAlmostZero(l))
      {
         set(T(0));
      }
      else
      {
         scale(x/T(l));
      }
   
      return *this;
   }
   
   template <class T>
   tgVec<T>& tgVec<T>::shuffle()
   {
      // gcc 4 complains if you just try to pass in the reference directly.
      std::pointer_to_unary_function<int, int> p(tgMath::uniform);
   
      std::random_shuffle(vector<T>::begin(), vector<T>::end(), p);
   
      return *this;
   }
   
   template <class T>
   tgVec<T>& tgVec<T>::randomize()
   {
      generate(vector<T>::begin(), vector<T>::end(), tgMath::uniform01);
   
      return *this;
   }
   
   template <class T>
   tgVec<T>& tgVec<T>::wrap(tgVec<T> const& v)
   {
      TG_ASSERT(vector<T>::size() == v.size());
   
      for (unsigned i(0); i < vector<T>::size(); i++)
      {
         // otherwise loops forever
         TG_ASSERT(0 < v[i]);
   
         while ((*this)[i] < 0)
         {
            (*this)[i] += v[i];
         }
         while (v[i] < (*this)[i])
         {
            (*this)[i] -= v[i];
         }
      }
   
      return *this;
   }
   
   template <class T>
   tgVec<T>& tgVec<T>::clamp(tgVec<T> const& lower, tgVec<T> const& upper)
   {
      for (unsigned i(0); i < vector<T>::size(); i++)
      {
         (*this)[i] = tgMath::clamp((*this)[i], lower[i], upper[i]);
      }
   
      return *this;
   }
   
   template<class T>
   bool tgVec<T>::isAlmostZero() const
   {
      for (unsigned i(0); i < vector<T>::size(); i++)
      {
         if (!tgMath::isAlmostZero((*this)[i])) { return false; }
      }
      return true;
   }
   
   template<class T>
   tgVec<T> tgVec<T>::relativeTo(tgVec<T> const& v) const
   {
      tgVec<T> u(*this);
   
      return u.subtract(v);
   }
   
   template<class T>
   ostream& tgVec<T>::output(ostream& out) const
   {
      copy(vector<T>::begin(), vector<T>::end(), ostream_iterator<T>(out, " "));
   
      return out;
   }
   
   template <class T>
   ostream& operator<<(ostream& out, tgVec<T> const& v)
   {
      return v.output(out);
   }
}

#endif
