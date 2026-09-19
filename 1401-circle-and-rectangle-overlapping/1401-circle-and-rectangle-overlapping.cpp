class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
    int Xn = max(x1, min(xCenter, x2));
    int Yn = max(y1, min(yCenter, y2));
    int Dx=Xn-xCenter;
    int Dy=Yn-yCenter;
    return (Dx*Dx+Dy*Dy)<=radius*radius;
    }
};