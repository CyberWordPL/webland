#ifndef WEBLAND_BROWSECORE_ELEMENT_HH
#define WEBLAND_BROWSECORE_ELEMENT_HH

#include <map>
#include <optional>
#include <string_view>
#include <vector>

namespace browsecore {
    class HtmlElement {
        friend class DocumentObjectModel;

        protected:
            int elementInternalId;

            std::map<std::string_view, std::string_view> attributes;
            std::string_view contentHtml; 
            std::vector<int> childsInternalIds;
        public:
    };
}

#endif