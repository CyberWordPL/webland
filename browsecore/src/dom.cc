#include <browsecore_dom.hh>
#include <browsecore_element.hh>
#include <browsecore_error.hh>

using browsecore::DocumentObjectModel, browsecore::HtmlElement;

HtmlElement DocumentObjectModel::GetRootElement() {
    for(HtmlElement elem : elements) {
        if(elem.elementId == 0)
            return elem;
    }

    // How you found here?
    // Do you look on empty page?
    throw browsecore::DomError::RootElementDoesNotExist;
}