// See the file  in the main distribution directory for copyright.

#include "NTP.h"
#include "plugin/Plugin.h"
#include "analyzer/Component.h"

namespace plugin {
namespace Zeek_NTP {

class Plugin : public plugin::Plugin {
public:
	plugin::Configuration Configure() override
		{
		AddComponent(new ::analyzer::Component("NTP", ::analyzer::NTP::NTP_Analyzer::Instantiate));

		plugin::Configuration config;
		config.name = "Zeek::NTP";
		config.description = "NTP analyzer";
		return config;
		}
} plugin;

}
}
