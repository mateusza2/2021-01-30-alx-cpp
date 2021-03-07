#include "SVG.hpp"

int main(){
    SVGImage img{500, 300};


    SVGRect r{10, 20, 300, 200, "blue", "yellow"};
/*
    SVGElipse e{50, 50, 300, 200, "orange", "white"};
*/

    img.add_element(r);

    for(int i=0; i<10; i++){
        img.add_element(SVGRect{20+i*10, 30+i*10, 400, 100, "yellow", "red"});
    }

/*
    img.addElement(e);
*/
    img.save_to_file("obrazek.svg");

}
