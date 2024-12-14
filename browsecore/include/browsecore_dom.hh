#ifndef WEBLAND_BROWSECORE_DOM_HH
#define WEBLAND_BROWSECORE_DOM_HH

#include <browsecore_element.hh>

#include <cstdint>
#include <vector>
#include <map>

namespace browsecore {
    class DocumentObjectModel {
    private:
        std::vector<HtmlElement> elements;
    public:
        HtmlElement GetRootElement();
        HtmlElement GetElementByInternalId(std::uint32_t id);
    };
}

#endif