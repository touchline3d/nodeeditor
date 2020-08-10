#pragma once

#include <QPainter>

#include "NodeGeometry.hpp"
#include "NodeDataModel.hpp"
#include "NodeGraphicsObject.hpp"
#include "Export.hpp"

namespace QtNodes {

/// Class to allow for custom painting
class NODE_EDITOR_PUBLIC NodePainterDelegate
{

public:

  virtual
  ~NodePainterDelegate() = default;

  virtual void
  paint(QPainter* painter,
        NodeGeometry const& geom,
        NodeDataModel const * model,
		NodeGraphicsObject const & graphicsObject,
		FlowScene const& scene) = 0;
};
}
