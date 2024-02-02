#include <snp_tpp/crosshatch_raster_planner_widget.h>
#include "ui_snp_raster_planner_widget.h"

#include <noether_gui/utils.h>

#include <noether_tpp/tool_path_planners/raster/direction_generators/principal_axis_direction_generator.h>
#include <noether_tpp/tool_path_planners/raster/origin_generators/centroid_origin_generator.h>
#include <noether_tpp/tool_path_planners/raster/plane_slicer_raster_planner.h>

#include <yaml-cpp/yaml.h>

namespace snp_tpp
{
CrosshatchRasterPlannerWidget::CrosshatchRasterPlannerWidget(QWidget* parent)
  : noether::ToolPathPlannerWidget(parent), ui_(new Ui::SNPRasterPlanner())
{
  auto vbox_layout = new QVBoxLayout(this);

  ui_->setupUi(this);
  ui_->group_box;

  // Create a widget to hold the label and the spin box
  QWidget *spinBoxWidget = new QWidget;
  QHBoxLayout *spinBoxLayout = new QHBoxLayout(spinBoxWidget);

  // Create and add label to the spin box widget
  QLabel *spinBoxLabel = new QLabel("Crosshatch angle (deg)");
  spinBoxLayout->addWidget(spinBoxLabel);

  // Create and add QDoubleSpinBox to the spin box widget
  QDoubleSpinBox *double_spin_box_crosshatch = new QDoubleSpinBox;
  spinBoxLayout->addWidget(double_spin_box_crosshatch);

  // Set the layout for the spin box widget
  spinBoxWidget->setLayout(spinBoxLayout);

  vbox_layout->addWidget(ui_->group_box);
  vbox_layout->addWidget(spinBoxWidget);
}

void CrosshatchRasterPlannerWidget::configure(const YAML::Node& config)
{
  ui_->double_spin_box_rotation_offset->setValue(noether::getEntry<double>(config, "rotation_offset"));
  ui_->double_spin_box_point_spacing->setValue(noether::getEntry<double>(config, "point_spacing"));
  ui_->double_spin_box_line_spacing->setValue(noether::getEntry<double>(config, "line_spacing"));
  ui_->double_spin_box_min_segment_length->setValue(noether::getEntry<double>(config, "min_segment_length"));
  double_spin_box_crosshatch->setValue(noether::getEntry<double>(config, "crosshatch_angle"));
}

void CrosshatchRasterPlannerWidget::save(YAML::Node& config) const
{
  config["rotation_offset"] = ui_->double_spin_box_rotation_offset->value();
  config["point_spacing"] = ui_->double_spin_box_point_spacing->value();
  config["line_spacing"] = ui_->double_spin_box_line_spacing->value();
  config["min_segment_length"] = ui_->double_spin_box_min_segment_length->value();
  config["crosshatch_angle"] = double_spin_box_crosshatch->value();
}

noether::ToolPathPlanner::ConstPtr CrosshatchRasterPlannerWidget::create() const
{
  auto dir_gen =
      std::make_unique<noether::PrincipalAxisDirectionGenerator>(ui_->double_spin_box_rotation_offset->value());
  auto orig_gen = std::make_unique<noether::CentroidOriginGenerator>();
/*TODO: Make planner a vector of planners and then iterate through them with for loop,
 adding the value in the crosshatch spinbox to the value in the rotation offset spinbox

How to return multiple planners?*/
  auto planner = std::make_unique<noether::PlaneSlicerRasterPlanner>(std::move(dir_gen), std::move(orig_gen));
  planner->setLineSpacing(ui_->double_spin_box_line_spacing->value());
  planner->setPointSpacing(ui_->double_spin_box_point_spacing->value());
  planner->setMinHoleSize(0.1);
  planner->setSearchRadius(0.1);
  planner->setMinSegmentSize(ui_->double_spin_box_min_segment_length->value());

  return planner;
}

}  // namespace snp_tpp
