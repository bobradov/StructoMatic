/**
 * @file OctTree.h
 * @brief Declaration of the OctTree class.
 * @author Borna Obradovic
 */

/**
 * @class OctTree
 * @brief A class representing an octree data structure.
 *
 * The OctTree class provides the basic structure and operations for an octree,
 * which is a tree data structure commonly used in 3D graphics and spatial partitioning.
 *
 * The copy constructor and copy assignment operator are deleted to prevent copying,
 * while the move constructor and move assignment operator are defaulted to allow moving.
 *
 * @author Your Name
 */
class OctTree {
public:
    OctTree() = default;
    ~OctTree() = default;

    // Delete copy constructor and copy assignment operator
    OctTree(const OctTree&) = delete;
    OctTree& operator=(const OctTree&) = delete;

    // Default move constructor and move assignment operator
    OctTree(OctTree&&) = default;
    OctTree& operator=(OctTree&&) = default;

    // Other member functions and data members
};

#endif // OCTTREE_H