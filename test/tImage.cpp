// -*- C++ -*-  Copyright (c) Microsoft Corporation; see license.txt
#include "Image.h"
#include "Stat.h"
using namespace hh;


int main() {
    if (1) {
        Image image(V(20, 20), Pixel(65, 66, 67, 72));
        Bndrule bndrule = Bndrule::reflected;
        Pixel gcolor(255, 255, 255, 255);
        {
            const Grid<2,Pixel>& grid = image;
            SHOW(image[19][19]);
            Grid<2,Pixel> newgrid = crop(grid, V(0, 0), V(10, 10), twice(bndrule), &gcolor);
            SHOW(newgrid.dims());
        }
    }
}
