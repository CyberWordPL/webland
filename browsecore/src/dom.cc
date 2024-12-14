#include <browsecore_dom.hh>
#include <browsecore_element.hh>
#include <browsecore_error.hh>

using browsecore::DocumentObjectModel, browsecore::HtmlElement;

HtmlElement DocumentObjectModel::GetRootElement() {
    return GetElementByInternalId(0);
}


HtmlElement DocumentObjectModel::GetElementByInternalId(int id) {
    for(HtmlElement elem : elements) {
        if(elem.elementInternalId == 0)
            return elem;
    }

    throw browsecore::DomError::ElementWithGivenInternalIdDoesNotExist;
}