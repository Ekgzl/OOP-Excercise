#include <iostream>
#include "test.h"
using namespace std;

class rectangleType
        {
        private:
            double l;
            double w;

        public:
            rectangleType(double l = 0.0,double w=0.0) : l(l),w(w){}

            void print()
            {
                cout << "Lenght: " << l << " Weight: " <<w << endl;
            }

            rectangleType operator+(const rectangleType &rectangle)const;

            rectangleType operator*(const rectangleType& rectangle)const;

            bool operator==(const rectangleType& rectanlge)const;

            bool operator!=(const rectangleType& rectabgle)const;

            friend istream& operator>>(istream& isObject,rectangleType& object)
            {
                cout << "W: ";
                isObject >> object.w;
                cout << "L: ";
                isObject >> object.l;
                return isObject;
            }

            friend ostream& operator<<(ostream& out,rectangleType& object)
            {
                out << "W: " << object.w << " L: "<< object.l << endl;
                return out;
            }

        };


        rectangleType rectangleType::operator+(const rectangleType &rectangle) const
        {
            rectangleType tempRect;
            tempRect.l = l + rectangle.l;
            tempRect.w = w + rectangle.w;
            return  tempRect;
        }

        rectangleType rectangleType::operator*(const rectangleType &rectangle) const
        {
            rectangleType tempRect;
            tempRect.l = l * rectangle.l;
            tempRect.w = w * rectangle.w;
            return  tempRect;
        }

        bool rectangleType::operator==(const rectangleType &rectanlge) const
        {
            return(rectanlge.w==w && rectanlge.l==l);
        }

        bool rectangleType::operator!=(const rectangleType &rectabgle) const
        {
            return(!(rectabgle.w==w && rectabgle.l ==l));
        }
class boxType : rectangleType
        {
        private:
            double height;

        public:
            boxType(double l,double w,double h) : rectangleType(l,w)
            {
                if(h>=0)
                    height = h;
                else
                    height = 0;
            }

            void print()
            {
                rectangleType::print();
                cout << " Height: " << height <<endl;
            }


        };




int main() {
}