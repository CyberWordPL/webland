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
            int elementId;

            std::map<std::string_view, std::string_view> attributes;
            std::string_view contentHtml; 
            std::vector<int> childsId;
        public:
            static HtmlElement ProvideNullHtmlElement() {
                HtmlElement e;
                e.elementId = -1;
                return e;
            }

            bool IsNullElement();
    };
}

#endif