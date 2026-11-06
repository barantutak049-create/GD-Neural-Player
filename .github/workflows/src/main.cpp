#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(NeuralPlayerMenu, MenuLayer) {
    bool init() {
        if (!MenuLayer::init())
            return false;

        log::info("GD Neural Player baslatildi!");

        FLAlertLayer::create(
            "GD Neural Player",
            "Neural Player basariyla yuklendi!",
            "Tamam"
        )->show();

        return true;
    }
};
