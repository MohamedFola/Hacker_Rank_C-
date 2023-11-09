#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;


vector<string>tags;
map<string, string>attribute_and_value;

void createMap(string & attN, string & attV);

int main() {
    int N, Q;
    

    // variables to save the tag line main elements
    string tag_name, attribute_name, equal, attribute_value, query;

    // variable to save each character
    char c;

    int begin, end;


    cin >> N >> Q;

    for ( int i = 0 ; i < N ; i++ )
    {
        cin >> c;

        // check if the next character is '/' or not
        // if '/' then it is a query not a tag
        if ( cin.peek() != '/' )
        {
            cin >> tag_name;

            // check if the readed name ends with space of '>'
            // if ends with '>' then this means that the tag has no attributes
            if ( tag_name.back() == '>' )
            {
                tag_name.pop_back(); // remove '>'
                tags.push_back(tag_name); // add the tag to the vector
            }
            else
            {
                tags.push_back(tag_name);

                // loop to save all attributes
                while (1)
                {
                    cin >> attribute_name >> equal >> attribute_value;
                    // check if the end of attribute_value is '>' or not
                    // if it is '>' this means there is no more attributes
                    if ( attribute_value.back() == '>' )
                    {
                        // delete the last two elements in the valua as they are > and "
                        attribute_value.pop_back(); attribute_value.pop_back();
                        // delete the first element of the value as it is "
                        attribute_value = attribute_value.substr(1);

                        // now the value is as passed without the double quotes or > 
                        createMap(attribute_name, attribute_value);

                        // break from the infinite loop as we reached the end of the attributes
                        break;
                    }
                    else
                    {
                        // delete the last element of value as it is "
                        attribute_value.pop_back();
                        // delete the first element of the value as it is "
                        attribute_value = attribute_value.substr(1);

                        createMap(attribute_name, attribute_value);
                    }
                }
            }
        }
        else
        {
            cin >> tag_name;
            tags.pop_back();
        }
    }

    for ( int i = 0 ; i < Q ; i++ )
    {
        cin >> query;

        if ( attribute_and_value.find(query) != attribute_and_value.end() )
        {
            cout << attribute_and_value[query] << endl;
        }
        else
        {
            cout << "Not Found!" << endl;
        }

    }

    return 0;
}


void createMap(string & attN, string & attV)
{
    string theKeyOfMap;

    // loop of all tag names that found in the vector
    for ( string & str:tags )
    {
        theKeyOfMap = theKeyOfMap + str + "."; // add all tag names separated by . 
    }

    // remove the last . and then add ~ followed by the name of the attribute
    theKeyOfMap.pop_back();
    theKeyOfMap = theKeyOfMap + "~" + attN;

    // the last step is to add attN and attV to the map
    attribute_and_value[theKeyOfMap] = attV;
}
