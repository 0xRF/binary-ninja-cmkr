
#include <binaryninjaapi.h>

using namespace BinaryNinja;
extern "C" {

BN_DECLARE_CORE_ABI_VERSION
BINARYNINJAPLUGIN
bool CorePluginInit() {
    Log(BNLogLevel::InfoLog, "%s\n", "Congrats the plugin is loaded");
    return true;
}

}