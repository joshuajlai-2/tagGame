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

#ifndef TG_MATRIX_H
#define TG_MATRIX_H

#include "tgVec.h"

namespace tagGame
{
   using namespace std;

   /// A basic templatized matrix class.
   /// See the comments in the tgVec base class as they also apply to this class.
   template <class T>
   class tgMatrix : public vector< tgVec<T> >
   {
   public:
      tgMatrix(unsigned const rowCount = 0, unsigned const colCount = 0);
      tgMatrix(vector< tgVec<T> > const& rows);
      tgMatrix(tgMatrix const& m);
      ~tgMatrix();

      unsigned getRowCount() const;
      unsigned getColCount() const;
      void setRowColCount(unsigned const rowCount, unsigned const colCount);
      tgVec<T> const& getRow(unsigned const i) const;
      tgMatrix& setRow(unsigned const i, tgVec<T> const& v);
      tgVec<T> const& getCol(unsigned const j) const;
      tgMatrix& setCol(unsigned const j, tgVec<T> const& v);
      vector< tgVec<T> > const& getRows() const;
      vector< tgVec<T> > const& getCols() const;

      tgMatrix& operator=(tgMatrix const& m);

      bool operator==(tgMatrix const& m) const;
      bool isAlmostEq(tgMatrix const& m) const;
      bool isAlmostZero() const;

      tgMatrix& set(T const x);
      tgMatrix& add(tgMatrix const& m);
      tgMatrix& subtract(tgMatrix const& m);
      tgMatrix& scale(T const x);
      tgMatrix& multiply(tgMatrix const& m);
      tgMatrix& transpose();
      tgMatrix& invert();

      tgVec<T> multiply(tgVec<T> const& v) const;

      T minElement() const;
      T maxElement() const;
      unsigned argMax() const;
      unsigned argMin() const;

      tgMatrix& shuffle();
      tgMatrix& randomize();
   protected:
   private:
      void computeCol(unsigned const j);

      // whenever column information is computed it is cached so that it can be retrieved
      // quickly whenever it is still valid
      mutable vector< tgVec<T> > cols;
      mutable vector<bool> colsValid;
   };

   typedef tgMatrix<int> tgIntMatrix;
   typedef tgMatrix<tgReal> tgRealMatrix;

   template <class T>
   tgMatrix<T>::tgMatrix(unsigned const rowCount, unsigned const colCount) :
      vector< tgVec<T> >(rowCount),
      cols(colCount),
      colsValid(colCount)
   {
      for (unsigned i(0); i < rowCount; i++)
      {
         (*this)[i].resize(colCount);
         // Note: tgVec sets to 0
      }
      for (unsigned j(0); j < colCount; j++)
      {
         cols[j].resize(rowCount);
      }
   
      fill(colsValid.begin(), colsValid.end(), true);
   }
   
   template <class T>
   tgMatrix<T>::tgMatrix(vector< tgVec<T> > const& rows) :
      vector< tgVec<T> >::vector(rows)
   {
      int colCountPrev(0);
      for (unsigned i(0); i < vector<T>::size(); i++)
      {
         int const n((*this)[i].size());
         TG_ASSERT(colCountPrev < 0 || colCountPrev == n);
         colCountPrev = n;
      }
      cols.resize(colCountPrev);
      for (unsigned j(0); j < colCountPrev; j++)
      {
         cols[j].resize(rows.size());
      }
      colsValid.resize(colCountPrev);
      fill(colsValid.begin(), colsValid.end(), false);
   }
   
   template <class T>
   tgMatrix<T>::tgMatrix(tgMatrix const& m) :
      vector< tgVec<T> >(m),
      cols(m.cols),
      colsValid(m.colsValid)
   {
   }
   
   template <class T>
   tgMatrix<T>::~tgMatrix()
   {
   }
   
   template <class T>
   unsigned tgMatrix<T>::getRowCount() const
   {
      return this->size();
   }
   
   template <class T>
   unsigned tgMatrix<T>::getColCount() const
   {
      return cols.size();
   }
   
   template <class T>
   void tgMatrix<T>::setRowColCount(unsigned const rowCount, unsigned const colCount)
   {
      vector<T>::resize(rowCount);
      for (unsigned i(0); i < rowCount; i++)
      {
         (*this)[i].resize(colCount);
         // Note: tgVec sets to 0
      }
      cols.resize(colCount);
      for (unsigned j(0); j < colCount; j++)
      {
         cols[j].resize(rowCount);
      }
      colsValid.resize(colCount);
      fill(colsValid.begin(), colsValid.end(), false);
   }
   
   template <class T>
   tgVec<T> const&  tgMatrix<T>::getRow(unsigned const i) const
   {
      TG_ASSERT(0 <= i && i < getRowCount());
   
      return (*this)[i];
   }
   
   template <class T>
   tgMatrix<T>& tgMatrix<T>::setRow(unsigned const i, tgVec<T> const& v)
   {
      TG_ASSERT(0 <= i && i < getRowCount());
      TG_ASSERT((*this)[i].size() == v.size());
   
      (*this)[i] = v;
   
      return *this;
   }
   
   template <class T>
   tgVec<T> const& tgMatrix<T>::getCol(unsigned const j) const
   {
      TG_ASSERT(0 <= j && j < cols.size());
      computeCol(j);
   
      return cols[j];
   }
   
   template <class T>
   tgMatrix<T>& tgMatrix<T>::setCol(unsigned const j, tgVec<T> const& v)
   {
      TG_ASSERT(0 <= j && j < cols.size());
      computeCol(j);
      TG_ASSERT(cols[j].size() == v.size());
   
      TG_ASSERT(false); // not implemented
   
      return *this;
   }
   
   template <class T>
   vector< tgVec<T> > const& tgMatrix<T>::getRows() const
   {
      return static_cast< vector< tgVec<T> >const&>(*this);
   }
   
   template <class T>
   vector< tgVec<T> > const& tgMatrix<T>::getCols() const
   {
      for (unsigned j(0); j < cols.size(); j++)
      {
         computeCol(j);
      }
      return cols;
   }
   
   template <class T>
   tgMatrix<T>& tgMatrix<T>::operator=(tgMatrix const& m)
   {
      if (this != &m)
      {
         static_cast< vector< tgVec<T> >&>(*this) = static_cast< vector< tgVec<T> >const&>(m);;
         cols = m.cols;
         colsValid = m.colsValid;
      }
      return *this;
   }
   
   // TODO: make the tgMatrix methods take adavantage of <algorithm>,
   //       like the tgVec class
   
   template <class T>
   bool tgMatrix<T>::isAlmostEq(tgMatrix const& m) const
   {
      for (unsigned i(0); i < this->rows.size(); i++)
      {
         if (!((*this)[i].isAlmostEq(m[i]))) { return false; }
      }
      return true;
   }
   
   template <class T>
   bool tgMatrix<T>::isAlmostZero() const
   {
      for (unsigned i(0); i < this->rows.size(); i++)
      {
         if (!((*this)[i].isAlmostZero())) { return false; }
      }
      return true;
   }
   
   template <class T>
   tgMatrix<T>& tgMatrix<T>::set(T const x)
   {
      for (unsigned i(0); i < vector<T>::size(); i++)
      {
         (*this)[i].set(0);
      }
      fill(colsValid.begin(), colsValid.end(), false);
   
      return *this;
   }
   
   template <class T>
   tgMatrix<T>& tgMatrix<T>::add(tgMatrix const& m)
   {
      for (unsigned i(0); i < vector<T>::size(); i++)
      {
         (*this)[i].add(m[i]);
      }
      fill(colsValid.begin(), colsValid.end(), false);
   
      return *this;
   }
   
   template <class T>
   tgMatrix<T>& tgMatrix<T>::subtract(tgMatrix const& m)
   {
      for (unsigned i(0); i < this->rows.size(); i++)
      {
         (*this)[i].subtract(m[i]);
      }
      fill(colsValid.begin(), colsValid.end(), false);
   
      return *this;
   }
   
   template <class T>
   tgMatrix<T>& tgMatrix<T>::scale(T const x)
   {
      for (unsigned i(0); i < vector<T>::size(); i++)
      {
         (*this)[i].scale(x);
      }
      fill(colsValid.begin(), colsValid.end(), false);
   
      return *this;
   }
   
   template <class T>
   tgMatrix<T>& tgMatrix<T>::multiply(tgMatrix const& m)
   {
      TG_ASSERT(getColCount() == m.getRowCount());
      tgMatrix mOld(*this);
      setRowColCount(getRowCount(), m.getColCount());
   
      for (unsigned i(0); i < getRowCount(); i++)
      {
         for (unsigned j(0); j < getColCount(); j++)
         {
            (*this)[i][j] = mOld.getRow(i).dot(m.getCol(j));
            cols[j][i] = (*this)[i][j]; // might as well update
         }
      }
      fill(colsValid.begin(), colsValid.end(), true);
   
      return *this;
   }
   
   template <class T>
   tgMatrix<T>& tgMatrix<T>::transpose()
   {
      vector< tgVec<T> > oldRows(getRows());
      static_cast< vector< tgVec <T> >&>(*this) = getCols();
      cols = oldRows;
      colsValid.resize(cols.size());
   
      fill(colsValid.begin(), colsValid.end(), true);
   
      return *this;
   }
   
   template <class T>
   tgMatrix<T>& tgMatrix<T>::invert()
   {
      TG_ASSERT(false); // not implemented
   
      fill(colsValid.begin(), colsValid.end(), false);
   
      return *this;
   }
   
   template <class T>
   tgVec<T> tgMatrix<T>::multiply(tgVec<T> const& v) const
   {
      TG_ASSERT(getColCount() == v.size());
      tgVec<T> result(getRowCount());
   
      for (unsigned i(0); i < getRowCount(); i++)
      {
         result[i] = (*this)[i].dot(v);
      }
   
      return result;
   }
   
   template <class T>
   T tgMatrix<T>::minElement() const
   {
      // would like to initialize this to Inf for tgReal and INT_MAX for int
      // could do with appropriate specializations of some function getBottom<T>
      T x(T(0));
   
      for (unsigned i(0); i < vector<T>::size(); i++)
      {
         if (0 == i) { x = (*this)[i].min(); } // unnecessary if initialized properly
         else { x = std::min(x, (*this)[i].min()); }
      }
      return x;
   }
   
   template <class T>
   T tgMatrix<T>::maxElement() const
   {
      // would like to initialize this to -Inf for tgReal and INT_MIN for int
      // could do with appropriate specializations of some function getBottom<T>
      T x(T(0));
   
      for (unsigned i(0); i < vector<T>::size(); i++)
      {
         if (0 == i) { x = (*this)[i].max(); } // unnecessary if initialized properly
         else { x = std::max(x, (*this)[i].max()); }
      }
      return x;
   }
   
   template <class T>
   unsigned tgMatrix<T>::argMax() const
   {
      tgUtil::error("not implemented");
      return 0;
   /*
      // Note: only returns the row with the maximum element
      // TODO: improve the implementation
      int which(-1);
   
      T const x(getMax());
   
      for (unsigned i(0); i < vector<T>::size(); i++)
      {
         if (x == (*this)[i].max())
         {
            which = i;
            break;
         }
      }
   
      return which;
   */
   }
   
   template <class T>
   unsigned tgMatrix<T>::argMin() const
   {
      tgUtil::error("not implemented");
      return 0;
   
   /*
      int which(-1);
   
      T const x(getMin());
   
      for (unsigned i(0); i < vector<T>::size(); i++)
      {
         if (x == (*this)[i].min())
         {
            which = i;
            break;
         }
      }
   
      return which;
   */
   }
   
   template <class T>
   tgMatrix<T>& tgMatrix<T>::shuffle()
   {
      // TODO: shuffle across rows, not just within rows
      for (unsigned i(0); i < vector<T>::size(); i++)
      {
         (*this)[i].shuffle();
      }
   
      return *this;
   }
   
   template <class T>
   tgMatrix<T>& tgMatrix<T>::randomize()
   {
      for (unsigned i(0); i < vector<T>::size(); i++)
      {
         (*this)[i].randomize();
      }
   
      return *this;
   }
   
   template <class T>
   void tgMatrix<T>::computeCol(unsigned const j)
   {
      if (colsValid[j]) { return; }
   
      for (unsigned i(0); i < vector<T>::size(); i++)
      {
         cols[j][i] = (*this)[i][j];
      }
   
      colsValid[j] = true;
   }
}

#endif
