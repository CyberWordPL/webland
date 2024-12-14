#include <browsecore_element.hh>

using browsecore::HtmlElement;

std::string_view HtmlElement::GetAttribute(std::string_view attribute_name) {
    return attributes[attribute_name];
}