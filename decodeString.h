//
// Created by 余爱生 on 2020/7/28.
//

#ifndef DATASTRUCTURE_DECODESTRING_H
#define DATASTRUCTURE_DECODESTRING_H

#include <string>
#include <stack>
#include <cmath>

using namespace std;

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {

        if (image.at(sr).at(sc) == newColor)
            return image;

        imgWidth = image.at(0).size();
        imgHeight = image.size();

        search(image,sr, sc, newColor, image.at(sr).at(sc));

        return image;

    }

private:
    int imgWidth, imgHeight;

    void search(vector<vector<int>>& image, int sr, int sc, int newColor, int oldColor){

        image.at(sr).at(sc) = newColor;

        if (sr + 1 < imgHeight && image.at(sr + 1).at(sc) == oldColor)
            search(image, sr + 1, sc, newColor, oldColor);
        if (sr - 1 >= 0 && image.at(sr - 1).at(sc) == oldColor)
            search(image, sr - 1, sc, newColor, oldColor);
        if (sc + 1 < imgWidth && image.at(sr).at(sc + 1) == oldColor)
            search(image, sr, sc + 1, newColor, oldColor);
        if (sc - 1 >= 0 && image.at(sr).at(sc - 1) == oldColor)
            search(image, sr, sc - 1, newColor, oldColor);


    }



};

#endif //DATASTRUCTURE_DECODESTRING_H
