#pragma once

#include <godot_cpp/classes/node.hpp>

namespace godot {
class AILink : public Node {
    GDCLASS(AILink, Node)

public:
    AILink();
    ~AILink();

    void _process(double delta);

protected:
    static void _bind_methods();

};
}
