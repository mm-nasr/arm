#include <arm_control/effort_joint_interface.h>
#include <pluginlib/class_list_macros.h>
#include <boost/scoped_ptr.hpp>

namespace arm_control
{
    typedef joint_trajectory_controller::JointTrajectoryController<trajectory_interface::QuinticSplineSegment<double>,
            hardware_interface::EffortJointInterface> JointTrajectoryController;

} // namespace

PLUGINLIB_EXPORT_CLASS(arm_control::JointTrajectoryController, controller_interface::ControllerBase);