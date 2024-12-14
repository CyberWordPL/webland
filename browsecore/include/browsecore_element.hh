#ifndef WEBLAND_BROWSECORE_ELEMENT_HH
#define WEBLAND_BROWSECORE_ELEMENT_HH

#include <cstdint>
#include <map>
#include <optional>
#include <string_view>
#include <vector>

namespace browsecore {
    class HtmlElement {
        friend class DocumentObjectModel;

        protected:
            std::uint32_t elementInternalId;

            std::map<std::string_view, std::string_view> attributes;
            std::string_view contentHtml; 
            std::vector<std::uint32_t> childsInternalIds;
        public:
            std::string_view GetAttribute(std::string_view attribute_name);
    };
}

#endif