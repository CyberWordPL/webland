#ifndef WEBLAND_BROWSECORE_DOM_HH
#define WEBLAND_BROWSECORE_DOM_HH

#include <browsecore_element.hh>

#include <vector>

namespace browsecore {
    class DocumentObjectModel {
    private:
        HtmlElement root_element;
    public:
        const HtmlElement &GetRootElement();
    };
}

#endif