/*
 * This file is part of mobata.
 *
 * mobata is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * mobata is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.

 * You should have received a copy of the GNU Lesser General Public License
 * along with mobata.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef VIEW_MSC_MSCVIEW_HPP
#define VIEW_MSC_MSCVIEW_HPP

#include "../mobatawidgets_global.hpp"

#include "../graph/graphview.hpp"

namespace view{
namespace msc{

class KMscScene;

class MOBATAWIDGETSSHARED_EXPORT KMscView
    : public graph::GraphView
{
public:
  KMscView(QWidget* parent = 0);
  KMscView(KMscScene* mscScene, QWidget* parent = 0);
  virtual	~KMscView();

public:
  KMscScene*  mscScene();
};

}//end namespace msc
}/// end namespace view

#endif