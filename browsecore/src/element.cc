#include <browsecore_element.hh>

using browsecore::HtmlElement;

bool HtmlElement::IsNullElement() {
    return elementId == -1;
}