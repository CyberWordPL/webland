#include <browsecore_dom.hh>
#include <browsecore_element.hh>

using browsecore::DocumentObjectModel, browsecore::HtmlElement;

const HtmlElement& DocumentObjectModel::GetRootElement() {
    return root_element;
}