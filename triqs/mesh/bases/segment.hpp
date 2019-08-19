/*******************************************************************************
 *
 * TRIQS: a Toolbox for Research in Interacting Quantum Systems
 *
 * Copyright (C) 2013 by O. Parcollet
 *
 * TRIQS is free software: you can redistribute it and/or modify it under the
 * terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option) any later
 * version.
 *
 * TRIQS is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * TRIQS. If not, see <http://www.gnu.org/licenses/>.
 *
 ******************************************************************************/
#pragma once
#include "../details/mesh_tools.hpp"
#include "./linear.hpp"
#include "../domains/R.hpp"

namespace triqs::mesh {

  /** A linear mesh on a segment on R */
  struct segment_mesh : linear_mesh<R_domain> {
    using B        = linear_mesh<R_domain>;
    segment_mesh() = default;
    segment_mesh(double x_min, double x_max, int n_freq) : B(typename B::domain_t(), x_min, x_max, n_freq) {}
  };

} // namespace triqs::mesh
