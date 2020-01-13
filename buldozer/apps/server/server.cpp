//
// Created by vinograd on 02/01/2020.
//
#include <Requests/RequestProtocol.h>
#include <yaml-cpp/node/node.h>
#include <yaml-cpp/node/parse.h>

int main() {
    YAML::Node config = YAML::LoadFile("config.yaml");

    return 1;
}