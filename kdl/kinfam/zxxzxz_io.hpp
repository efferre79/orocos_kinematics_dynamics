#ifndef KDL_ZXXZXZ_IO_HPP
#define KDL_ZXXZXZ_IO_HPP

/***************************************************************************
                        serialchain_io.hpp -  description
                       -------------------------
    begin                : June 2006
    copyright            : (C) 2006 Erwin Aertbelien
    email                : firstname.lastname@mech.kuleuven.ac.be

 History (only major changes)( AUTHOR-Description ) :
 
 ***************************************************************************
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Lesser General Public            *
 *   License as published by the Free Software Foundation; either          *
 *   version 2.1 of the License, or (at your option) any later version.    *
 *                                                                         *
 *   This library is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU     *
 *   Lesser General Public License for more details.                       *
 *                                                                         *
 *   You should have received a copy of the GNU Lesser General Public      *
 *   License along with this library; if not, write to the Free Software   *
 *   Foundation, Inc., 59 Temple Place,                                    *
 *   Suite 330, Boston, MA  02111-1307  USA                                *
 *                                                                         *
 ***************************************************************************/
#include <fstream>
#include <kdl/kinfam/zxxzxz.hpp>

namespace KDL {
  /**
   * \brief reads the input stream and creates a zxxzxz object
   *
   * \param is input stream
   * \return a pointer to the created zxxzxz object.  The user is responsible for
   *         deleting this object.
   */
  ZXXZXZ* readZXXZXZ(std::istream& is,bool keyword=true);
  
  
  /**
   * \brief writes the zxxzxz object to an output stream.
   *
   * \param os output stream
   * \param chain  the zxxzxz object that has to be written.
   */
  std::ostream& operator << (std::ostream& os, const ZXXZXZ* chain);
  
} // end of namespace

#endif