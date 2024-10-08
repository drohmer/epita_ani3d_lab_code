#pragma once

#include "cgp/cgp.hpp"

struct skeleton_structure {
    // joint frame matrix expressed with respect to their parent
    cgp::numarray<cgp::mat4> joint_matrix_local; 
    // joint frame matrix expressed in global coordinate system
    cgp::numarray<cgp::mat4> joint_matrix_global;

    // joint frame matrix of the skeleton in the bind pose expressed locally (relative to their parent frame)
    cgp::numarray<cgp::mat4> joint_matrix_global_bind_pose;
    // joint frame matrix of the skeleton in the bind pose expressed in the global coordinate system
    cgp::numarray<cgp::mat4> joint_matrix_local_bind_pose;

    // Storage of the parent index of the joint hierarchy.
    //   index_of_parent = parent_index[current_index]
    cgp::numarray<int> parent_index;


    // Return the number of joints in this skeleton
    int size() const;

    // Compute the joint frame in the global coordinate system given the joint frames expressed in local frame
    //   Run through the hierarchy and update the matrix using: M^i_global = M^{parent(i)}_global M^i_local
    void update_joint_matrix_local_to_global();

    // Update the local joint frame along the hierarchy given the joint frames expressed in global frame
    //   Run through the hierarchy and update the matrix using: M^i_local = (M^{parent(i)}_global)^(-1) M^i_global
    void update_joint_matrix_global_to_local();

    // Return the indices of the joint that are direct children of the current one
    cgp::numarray<int> child(int joint_index) const;
};