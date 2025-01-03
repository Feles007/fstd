// python3 src/swizzles.py > include/fstd/types/vector/swizzles.hpp
using x = Swizzle<0>;
using y = Swizzle<1>;
using z = Swizzle<2>;
using w = Swizzle<3>;
using xx = Swizzle<0, 0>;
using xy = Swizzle<0, 1>;
using xz = Swizzle<0, 2>;
using xw = Swizzle<0, 3>;
using yx = Swizzle<1, 0>;
using yy = Swizzle<1, 1>;
using yz = Swizzle<1, 2>;
using yw = Swizzle<1, 3>;
using zx = Swizzle<2, 0>;
using zy = Swizzle<2, 1>;
using zz = Swizzle<2, 2>;
using zw = Swizzle<2, 3>;
using wx = Swizzle<3, 0>;
using wy = Swizzle<3, 1>;
using wz = Swizzle<3, 2>;
using ww = Swizzle<3, 3>;
using xxx = Swizzle<0, 0, 0>;
using xxy = Swizzle<0, 0, 1>;
using xxz = Swizzle<0, 0, 2>;
using xxw = Swizzle<0, 0, 3>;
using xyx = Swizzle<0, 1, 0>;
using xyy = Swizzle<0, 1, 1>;
using xyz = Swizzle<0, 1, 2>;
using xyw = Swizzle<0, 1, 3>;
using xzx = Swizzle<0, 2, 0>;
using xzy = Swizzle<0, 2, 1>;
using xzz = Swizzle<0, 2, 2>;
using xzw = Swizzle<0, 2, 3>;
using xwx = Swizzle<0, 3, 0>;
using xwy = Swizzle<0, 3, 1>;
using xwz = Swizzle<0, 3, 2>;
using xww = Swizzle<0, 3, 3>;
using yxx = Swizzle<1, 0, 0>;
using yxy = Swizzle<1, 0, 1>;
using yxz = Swizzle<1, 0, 2>;
using yxw = Swizzle<1, 0, 3>;
using yyx = Swizzle<1, 1, 0>;
using yyy = Swizzle<1, 1, 1>;
using yyz = Swizzle<1, 1, 2>;
using yyw = Swizzle<1, 1, 3>;
using yzx = Swizzle<1, 2, 0>;
using yzy = Swizzle<1, 2, 1>;
using yzz = Swizzle<1, 2, 2>;
using yzw = Swizzle<1, 2, 3>;
using ywx = Swizzle<1, 3, 0>;
using ywy = Swizzle<1, 3, 1>;
using ywz = Swizzle<1, 3, 2>;
using yww = Swizzle<1, 3, 3>;
using zxx = Swizzle<2, 0, 0>;
using zxy = Swizzle<2, 0, 1>;
using zxz = Swizzle<2, 0, 2>;
using zxw = Swizzle<2, 0, 3>;
using zyx = Swizzle<2, 1, 0>;
using zyy = Swizzle<2, 1, 1>;
using zyz = Swizzle<2, 1, 2>;
using zyw = Swizzle<2, 1, 3>;
using zzx = Swizzle<2, 2, 0>;
using zzy = Swizzle<2, 2, 1>;
using zzz = Swizzle<2, 2, 2>;
using zzw = Swizzle<2, 2, 3>;
using zwx = Swizzle<2, 3, 0>;
using zwy = Swizzle<2, 3, 1>;
using zwz = Swizzle<2, 3, 2>;
using zww = Swizzle<2, 3, 3>;
using wxx = Swizzle<3, 0, 0>;
using wxy = Swizzle<3, 0, 1>;
using wxz = Swizzle<3, 0, 2>;
using wxw = Swizzle<3, 0, 3>;
using wyx = Swizzle<3, 1, 0>;
using wyy = Swizzle<3, 1, 1>;
using wyz = Swizzle<3, 1, 2>;
using wyw = Swizzle<3, 1, 3>;
using wzx = Swizzle<3, 2, 0>;
using wzy = Swizzle<3, 2, 1>;
using wzz = Swizzle<3, 2, 2>;
using wzw = Swizzle<3, 2, 3>;
using wwx = Swizzle<3, 3, 0>;
using wwy = Swizzle<3, 3, 1>;
using wwz = Swizzle<3, 3, 2>;
using www = Swizzle<3, 3, 3>;
using xxxx = Swizzle<0, 0, 0, 0>;
using xxxy = Swizzle<0, 0, 0, 1>;
using xxxz = Swizzle<0, 0, 0, 2>;
using xxxw = Swizzle<0, 0, 0, 3>;
using xxyx = Swizzle<0, 0, 1, 0>;
using xxyy = Swizzle<0, 0, 1, 1>;
using xxyz = Swizzle<0, 0, 1, 2>;
using xxyw = Swizzle<0, 0, 1, 3>;
using xxzx = Swizzle<0, 0, 2, 0>;
using xxzy = Swizzle<0, 0, 2, 1>;
using xxzz = Swizzle<0, 0, 2, 2>;
using xxzw = Swizzle<0, 0, 2, 3>;
using xxwx = Swizzle<0, 0, 3, 0>;
using xxwy = Swizzle<0, 0, 3, 1>;
using xxwz = Swizzle<0, 0, 3, 2>;
using xxww = Swizzle<0, 0, 3, 3>;
using xyxx = Swizzle<0, 1, 0, 0>;
using xyxy = Swizzle<0, 1, 0, 1>;
using xyxz = Swizzle<0, 1, 0, 2>;
using xyxw = Swizzle<0, 1, 0, 3>;
using xyyx = Swizzle<0, 1, 1, 0>;
using xyyy = Swizzle<0, 1, 1, 1>;
using xyyz = Swizzle<0, 1, 1, 2>;
using xyyw = Swizzle<0, 1, 1, 3>;
using xyzx = Swizzle<0, 1, 2, 0>;
using xyzy = Swizzle<0, 1, 2, 1>;
using xyzz = Swizzle<0, 1, 2, 2>;
using xyzw = Swizzle<0, 1, 2, 3>;
using xywx = Swizzle<0, 1, 3, 0>;
using xywy = Swizzle<0, 1, 3, 1>;
using xywz = Swizzle<0, 1, 3, 2>;
using xyww = Swizzle<0, 1, 3, 3>;
using xzxx = Swizzle<0, 2, 0, 0>;
using xzxy = Swizzle<0, 2, 0, 1>;
using xzxz = Swizzle<0, 2, 0, 2>;
using xzxw = Swizzle<0, 2, 0, 3>;
using xzyx = Swizzle<0, 2, 1, 0>;
using xzyy = Swizzle<0, 2, 1, 1>;
using xzyz = Swizzle<0, 2, 1, 2>;
using xzyw = Swizzle<0, 2, 1, 3>;
using xzzx = Swizzle<0, 2, 2, 0>;
using xzzy = Swizzle<0, 2, 2, 1>;
using xzzz = Swizzle<0, 2, 2, 2>;
using xzzw = Swizzle<0, 2, 2, 3>;
using xzwx = Swizzle<0, 2, 3, 0>;
using xzwy = Swizzle<0, 2, 3, 1>;
using xzwz = Swizzle<0, 2, 3, 2>;
using xzww = Swizzle<0, 2, 3, 3>;
using xwxx = Swizzle<0, 3, 0, 0>;
using xwxy = Swizzle<0, 3, 0, 1>;
using xwxz = Swizzle<0, 3, 0, 2>;
using xwxw = Swizzle<0, 3, 0, 3>;
using xwyx = Swizzle<0, 3, 1, 0>;
using xwyy = Swizzle<0, 3, 1, 1>;
using xwyz = Swizzle<0, 3, 1, 2>;
using xwyw = Swizzle<0, 3, 1, 3>;
using xwzx = Swizzle<0, 3, 2, 0>;
using xwzy = Swizzle<0, 3, 2, 1>;
using xwzz = Swizzle<0, 3, 2, 2>;
using xwzw = Swizzle<0, 3, 2, 3>;
using xwwx = Swizzle<0, 3, 3, 0>;
using xwwy = Swizzle<0, 3, 3, 1>;
using xwwz = Swizzle<0, 3, 3, 2>;
using xwww = Swizzle<0, 3, 3, 3>;
using yxxx = Swizzle<1, 0, 0, 0>;
using yxxy = Swizzle<1, 0, 0, 1>;
using yxxz = Swizzle<1, 0, 0, 2>;
using yxxw = Swizzle<1, 0, 0, 3>;
using yxyx = Swizzle<1, 0, 1, 0>;
using yxyy = Swizzle<1, 0, 1, 1>;
using yxyz = Swizzle<1, 0, 1, 2>;
using yxyw = Swizzle<1, 0, 1, 3>;
using yxzx = Swizzle<1, 0, 2, 0>;
using yxzy = Swizzle<1, 0, 2, 1>;
using yxzz = Swizzle<1, 0, 2, 2>;
using yxzw = Swizzle<1, 0, 2, 3>;
using yxwx = Swizzle<1, 0, 3, 0>;
using yxwy = Swizzle<1, 0, 3, 1>;
using yxwz = Swizzle<1, 0, 3, 2>;
using yxww = Swizzle<1, 0, 3, 3>;
using yyxx = Swizzle<1, 1, 0, 0>;
using yyxy = Swizzle<1, 1, 0, 1>;
using yyxz = Swizzle<1, 1, 0, 2>;
using yyxw = Swizzle<1, 1, 0, 3>;
using yyyx = Swizzle<1, 1, 1, 0>;
using yyyy = Swizzle<1, 1, 1, 1>;
using yyyz = Swizzle<1, 1, 1, 2>;
using yyyw = Swizzle<1, 1, 1, 3>;
using yyzx = Swizzle<1, 1, 2, 0>;
using yyzy = Swizzle<1, 1, 2, 1>;
using yyzz = Swizzle<1, 1, 2, 2>;
using yyzw = Swizzle<1, 1, 2, 3>;
using yywx = Swizzle<1, 1, 3, 0>;
using yywy = Swizzle<1, 1, 3, 1>;
using yywz = Swizzle<1, 1, 3, 2>;
using yyww = Swizzle<1, 1, 3, 3>;
using yzxx = Swizzle<1, 2, 0, 0>;
using yzxy = Swizzle<1, 2, 0, 1>;
using yzxz = Swizzle<1, 2, 0, 2>;
using yzxw = Swizzle<1, 2, 0, 3>;
using yzyx = Swizzle<1, 2, 1, 0>;
using yzyy = Swizzle<1, 2, 1, 1>;
using yzyz = Swizzle<1, 2, 1, 2>;
using yzyw = Swizzle<1, 2, 1, 3>;
using yzzx = Swizzle<1, 2, 2, 0>;
using yzzy = Swizzle<1, 2, 2, 1>;
using yzzz = Swizzle<1, 2, 2, 2>;
using yzzw = Swizzle<1, 2, 2, 3>;
using yzwx = Swizzle<1, 2, 3, 0>;
using yzwy = Swizzle<1, 2, 3, 1>;
using yzwz = Swizzle<1, 2, 3, 2>;
using yzww = Swizzle<1, 2, 3, 3>;
using ywxx = Swizzle<1, 3, 0, 0>;
using ywxy = Swizzle<1, 3, 0, 1>;
using ywxz = Swizzle<1, 3, 0, 2>;
using ywxw = Swizzle<1, 3, 0, 3>;
using ywyx = Swizzle<1, 3, 1, 0>;
using ywyy = Swizzle<1, 3, 1, 1>;
using ywyz = Swizzle<1, 3, 1, 2>;
using ywyw = Swizzle<1, 3, 1, 3>;
using ywzx = Swizzle<1, 3, 2, 0>;
using ywzy = Swizzle<1, 3, 2, 1>;
using ywzz = Swizzle<1, 3, 2, 2>;
using ywzw = Swizzle<1, 3, 2, 3>;
using ywwx = Swizzle<1, 3, 3, 0>;
using ywwy = Swizzle<1, 3, 3, 1>;
using ywwz = Swizzle<1, 3, 3, 2>;
using ywww = Swizzle<1, 3, 3, 3>;
using zxxx = Swizzle<2, 0, 0, 0>;
using zxxy = Swizzle<2, 0, 0, 1>;
using zxxz = Swizzle<2, 0, 0, 2>;
using zxxw = Swizzle<2, 0, 0, 3>;
using zxyx = Swizzle<2, 0, 1, 0>;
using zxyy = Swizzle<2, 0, 1, 1>;
using zxyz = Swizzle<2, 0, 1, 2>;
using zxyw = Swizzle<2, 0, 1, 3>;
using zxzx = Swizzle<2, 0, 2, 0>;
using zxzy = Swizzle<2, 0, 2, 1>;
using zxzz = Swizzle<2, 0, 2, 2>;
using zxzw = Swizzle<2, 0, 2, 3>;
using zxwx = Swizzle<2, 0, 3, 0>;
using zxwy = Swizzle<2, 0, 3, 1>;
using zxwz = Swizzle<2, 0, 3, 2>;
using zxww = Swizzle<2, 0, 3, 3>;
using zyxx = Swizzle<2, 1, 0, 0>;
using zyxy = Swizzle<2, 1, 0, 1>;
using zyxz = Swizzle<2, 1, 0, 2>;
using zyxw = Swizzle<2, 1, 0, 3>;
using zyyx = Swizzle<2, 1, 1, 0>;
using zyyy = Swizzle<2, 1, 1, 1>;
using zyyz = Swizzle<2, 1, 1, 2>;
using zyyw = Swizzle<2, 1, 1, 3>;
using zyzx = Swizzle<2, 1, 2, 0>;
using zyzy = Swizzle<2, 1, 2, 1>;
using zyzz = Swizzle<2, 1, 2, 2>;
using zyzw = Swizzle<2, 1, 2, 3>;
using zywx = Swizzle<2, 1, 3, 0>;
using zywy = Swizzle<2, 1, 3, 1>;
using zywz = Swizzle<2, 1, 3, 2>;
using zyww = Swizzle<2, 1, 3, 3>;
using zzxx = Swizzle<2, 2, 0, 0>;
using zzxy = Swizzle<2, 2, 0, 1>;
using zzxz = Swizzle<2, 2, 0, 2>;
using zzxw = Swizzle<2, 2, 0, 3>;
using zzyx = Swizzle<2, 2, 1, 0>;
using zzyy = Swizzle<2, 2, 1, 1>;
using zzyz = Swizzle<2, 2, 1, 2>;
using zzyw = Swizzle<2, 2, 1, 3>;
using zzzx = Swizzle<2, 2, 2, 0>;
using zzzy = Swizzle<2, 2, 2, 1>;
using zzzz = Swizzle<2, 2, 2, 2>;
using zzzw = Swizzle<2, 2, 2, 3>;
using zzwx = Swizzle<2, 2, 3, 0>;
using zzwy = Swizzle<2, 2, 3, 1>;
using zzwz = Swizzle<2, 2, 3, 2>;
using zzww = Swizzle<2, 2, 3, 3>;
using zwxx = Swizzle<2, 3, 0, 0>;
using zwxy = Swizzle<2, 3, 0, 1>;
using zwxz = Swizzle<2, 3, 0, 2>;
using zwxw = Swizzle<2, 3, 0, 3>;
using zwyx = Swizzle<2, 3, 1, 0>;
using zwyy = Swizzle<2, 3, 1, 1>;
using zwyz = Swizzle<2, 3, 1, 2>;
using zwyw = Swizzle<2, 3, 1, 3>;
using zwzx = Swizzle<2, 3, 2, 0>;
using zwzy = Swizzle<2, 3, 2, 1>;
using zwzz = Swizzle<2, 3, 2, 2>;
using zwzw = Swizzle<2, 3, 2, 3>;
using zwwx = Swizzle<2, 3, 3, 0>;
using zwwy = Swizzle<2, 3, 3, 1>;
using zwwz = Swizzle<2, 3, 3, 2>;
using zwww = Swizzle<2, 3, 3, 3>;
using wxxx = Swizzle<3, 0, 0, 0>;
using wxxy = Swizzle<3, 0, 0, 1>;
using wxxz = Swizzle<3, 0, 0, 2>;
using wxxw = Swizzle<3, 0, 0, 3>;
using wxyx = Swizzle<3, 0, 1, 0>;
using wxyy = Swizzle<3, 0, 1, 1>;
using wxyz = Swizzle<3, 0, 1, 2>;
using wxyw = Swizzle<3, 0, 1, 3>;
using wxzx = Swizzle<3, 0, 2, 0>;
using wxzy = Swizzle<3, 0, 2, 1>;
using wxzz = Swizzle<3, 0, 2, 2>;
using wxzw = Swizzle<3, 0, 2, 3>;
using wxwx = Swizzle<3, 0, 3, 0>;
using wxwy = Swizzle<3, 0, 3, 1>;
using wxwz = Swizzle<3, 0, 3, 2>;
using wxww = Swizzle<3, 0, 3, 3>;
using wyxx = Swizzle<3, 1, 0, 0>;
using wyxy = Swizzle<3, 1, 0, 1>;
using wyxz = Swizzle<3, 1, 0, 2>;
using wyxw = Swizzle<3, 1, 0, 3>;
using wyyx = Swizzle<3, 1, 1, 0>;
using wyyy = Swizzle<3, 1, 1, 1>;
using wyyz = Swizzle<3, 1, 1, 2>;
using wyyw = Swizzle<3, 1, 1, 3>;
using wyzx = Swizzle<3, 1, 2, 0>;
using wyzy = Swizzle<3, 1, 2, 1>;
using wyzz = Swizzle<3, 1, 2, 2>;
using wyzw = Swizzle<3, 1, 2, 3>;
using wywx = Swizzle<3, 1, 3, 0>;
using wywy = Swizzle<3, 1, 3, 1>;
using wywz = Swizzle<3, 1, 3, 2>;
using wyww = Swizzle<3, 1, 3, 3>;
using wzxx = Swizzle<3, 2, 0, 0>;
using wzxy = Swizzle<3, 2, 0, 1>;
using wzxz = Swizzle<3, 2, 0, 2>;
using wzxw = Swizzle<3, 2, 0, 3>;
using wzyx = Swizzle<3, 2, 1, 0>;
using wzyy = Swizzle<3, 2, 1, 1>;
using wzyz = Swizzle<3, 2, 1, 2>;
using wzyw = Swizzle<3, 2, 1, 3>;
using wzzx = Swizzle<3, 2, 2, 0>;
using wzzy = Swizzle<3, 2, 2, 1>;
using wzzz = Swizzle<3, 2, 2, 2>;
using wzzw = Swizzle<3, 2, 2, 3>;
using wzwx = Swizzle<3, 2, 3, 0>;
using wzwy = Swizzle<3, 2, 3, 1>;
using wzwz = Swizzle<3, 2, 3, 2>;
using wzww = Swizzle<3, 2, 3, 3>;
using wwxx = Swizzle<3, 3, 0, 0>;
using wwxy = Swizzle<3, 3, 0, 1>;
using wwxz = Swizzle<3, 3, 0, 2>;
using wwxw = Swizzle<3, 3, 0, 3>;
using wwyx = Swizzle<3, 3, 1, 0>;
using wwyy = Swizzle<3, 3, 1, 1>;
using wwyz = Swizzle<3, 3, 1, 2>;
using wwyw = Swizzle<3, 3, 1, 3>;
using wwzx = Swizzle<3, 3, 2, 0>;
using wwzy = Swizzle<3, 3, 2, 1>;
using wwzz = Swizzle<3, 3, 2, 2>;
using wwzw = Swizzle<3, 3, 2, 3>;
using wwwx = Swizzle<3, 3, 3, 0>;
using wwwy = Swizzle<3, 3, 3, 1>;
using wwwz = Swizzle<3, 3, 3, 2>;
using wwww = Swizzle<3, 3, 3, 3>;
using r = Swizzle<0>;
using g = Swizzle<1>;
using b = Swizzle<2>;
using a = Swizzle<3>;
using rr = Swizzle<0, 0>;
using rg = Swizzle<0, 1>;
using rb = Swizzle<0, 2>;
using ra = Swizzle<0, 3>;
using gr = Swizzle<1, 0>;
using gg = Swizzle<1, 1>;
using gb = Swizzle<1, 2>;
using ga = Swizzle<1, 3>;
using br = Swizzle<2, 0>;
using bg = Swizzle<2, 1>;
using bb = Swizzle<2, 2>;
using ba = Swizzle<2, 3>;
using ar = Swizzle<3, 0>;
using ag = Swizzle<3, 1>;
using ab = Swizzle<3, 2>;
using aa = Swizzle<3, 3>;
using rrr = Swizzle<0, 0, 0>;
using rrg = Swizzle<0, 0, 1>;
using rrb = Swizzle<0, 0, 2>;
using rra = Swizzle<0, 0, 3>;
using rgr = Swizzle<0, 1, 0>;
using rgg = Swizzle<0, 1, 1>;
using rgb = Swizzle<0, 1, 2>;
using rga = Swizzle<0, 1, 3>;
using rbr = Swizzle<0, 2, 0>;
using rbg = Swizzle<0, 2, 1>;
using rbb = Swizzle<0, 2, 2>;
using rba = Swizzle<0, 2, 3>;
using rar = Swizzle<0, 3, 0>;
using rag = Swizzle<0, 3, 1>;
using rab = Swizzle<0, 3, 2>;
using raa = Swizzle<0, 3, 3>;
using grr = Swizzle<1, 0, 0>;
using grg = Swizzle<1, 0, 1>;
using grb = Swizzle<1, 0, 2>;
using gra = Swizzle<1, 0, 3>;
using ggr = Swizzle<1, 1, 0>;
using ggg = Swizzle<1, 1, 1>;
using ggb = Swizzle<1, 1, 2>;
using gga = Swizzle<1, 1, 3>;
using gbr = Swizzle<1, 2, 0>;
using gbg = Swizzle<1, 2, 1>;
using gbb = Swizzle<1, 2, 2>;
using gba = Swizzle<1, 2, 3>;
using gar = Swizzle<1, 3, 0>;
using gag = Swizzle<1, 3, 1>;
using gab = Swizzle<1, 3, 2>;
using gaa = Swizzle<1, 3, 3>;
using brr = Swizzle<2, 0, 0>;
using brg = Swizzle<2, 0, 1>;
using brb = Swizzle<2, 0, 2>;
using bra = Swizzle<2, 0, 3>;
using bgr = Swizzle<2, 1, 0>;
using bgg = Swizzle<2, 1, 1>;
using bgb = Swizzle<2, 1, 2>;
using bga = Swizzle<2, 1, 3>;
using bbr = Swizzle<2, 2, 0>;
using bbg = Swizzle<2, 2, 1>;
using bbb = Swizzle<2, 2, 2>;
using bba = Swizzle<2, 2, 3>;
using bar = Swizzle<2, 3, 0>;
using bag = Swizzle<2, 3, 1>;
using bab = Swizzle<2, 3, 2>;
using baa = Swizzle<2, 3, 3>;
using arr = Swizzle<3, 0, 0>;
using arg = Swizzle<3, 0, 1>;
using arb = Swizzle<3, 0, 2>;
using ara = Swizzle<3, 0, 3>;
using agr = Swizzle<3, 1, 0>;
using agg = Swizzle<3, 1, 1>;
using agb = Swizzle<3, 1, 2>;
using aga = Swizzle<3, 1, 3>;
using abr = Swizzle<3, 2, 0>;
using abg = Swizzle<3, 2, 1>;
using abb = Swizzle<3, 2, 2>;
using aba = Swizzle<3, 2, 3>;
using aar = Swizzle<3, 3, 0>;
using aag = Swizzle<3, 3, 1>;
using aab = Swizzle<3, 3, 2>;
using aaa = Swizzle<3, 3, 3>;
using rrrr = Swizzle<0, 0, 0, 0>;
using rrrg = Swizzle<0, 0, 0, 1>;
using rrrb = Swizzle<0, 0, 0, 2>;
using rrra = Swizzle<0, 0, 0, 3>;
using rrgr = Swizzle<0, 0, 1, 0>;
using rrgg = Swizzle<0, 0, 1, 1>;
using rrgb = Swizzle<0, 0, 1, 2>;
using rrga = Swizzle<0, 0, 1, 3>;
using rrbr = Swizzle<0, 0, 2, 0>;
using rrbg = Swizzle<0, 0, 2, 1>;
using rrbb = Swizzle<0, 0, 2, 2>;
using rrba = Swizzle<0, 0, 2, 3>;
using rrar = Swizzle<0, 0, 3, 0>;
using rrag = Swizzle<0, 0, 3, 1>;
using rrab = Swizzle<0, 0, 3, 2>;
using rraa = Swizzle<0, 0, 3, 3>;
using rgrr = Swizzle<0, 1, 0, 0>;
using rgrg = Swizzle<0, 1, 0, 1>;
using rgrb = Swizzle<0, 1, 0, 2>;
using rgra = Swizzle<0, 1, 0, 3>;
using rggr = Swizzle<0, 1, 1, 0>;
using rggg = Swizzle<0, 1, 1, 1>;
using rggb = Swizzle<0, 1, 1, 2>;
using rgga = Swizzle<0, 1, 1, 3>;
using rgbr = Swizzle<0, 1, 2, 0>;
using rgbg = Swizzle<0, 1, 2, 1>;
using rgbb = Swizzle<0, 1, 2, 2>;
using rgba = Swizzle<0, 1, 2, 3>;
using rgar = Swizzle<0, 1, 3, 0>;
using rgag = Swizzle<0, 1, 3, 1>;
using rgab = Swizzle<0, 1, 3, 2>;
using rgaa = Swizzle<0, 1, 3, 3>;
using rbrr = Swizzle<0, 2, 0, 0>;
using rbrg = Swizzle<0, 2, 0, 1>;
using rbrb = Swizzle<0, 2, 0, 2>;
using rbra = Swizzle<0, 2, 0, 3>;
using rbgr = Swizzle<0, 2, 1, 0>;
using rbgg = Swizzle<0, 2, 1, 1>;
using rbgb = Swizzle<0, 2, 1, 2>;
using rbga = Swizzle<0, 2, 1, 3>;
using rbbr = Swizzle<0, 2, 2, 0>;
using rbbg = Swizzle<0, 2, 2, 1>;
using rbbb = Swizzle<0, 2, 2, 2>;
using rbba = Swizzle<0, 2, 2, 3>;
using rbar = Swizzle<0, 2, 3, 0>;
using rbag = Swizzle<0, 2, 3, 1>;
using rbab = Swizzle<0, 2, 3, 2>;
using rbaa = Swizzle<0, 2, 3, 3>;
using rarr = Swizzle<0, 3, 0, 0>;
using rarg = Swizzle<0, 3, 0, 1>;
using rarb = Swizzle<0, 3, 0, 2>;
using rara = Swizzle<0, 3, 0, 3>;
using ragr = Swizzle<0, 3, 1, 0>;
using ragg = Swizzle<0, 3, 1, 1>;
using ragb = Swizzle<0, 3, 1, 2>;
using raga = Swizzle<0, 3, 1, 3>;
using rabr = Swizzle<0, 3, 2, 0>;
using rabg = Swizzle<0, 3, 2, 1>;
using rabb = Swizzle<0, 3, 2, 2>;
using raba = Swizzle<0, 3, 2, 3>;
using raar = Swizzle<0, 3, 3, 0>;
using raag = Swizzle<0, 3, 3, 1>;
using raab = Swizzle<0, 3, 3, 2>;
using raaa = Swizzle<0, 3, 3, 3>;
using grrr = Swizzle<1, 0, 0, 0>;
using grrg = Swizzle<1, 0, 0, 1>;
using grrb = Swizzle<1, 0, 0, 2>;
using grra = Swizzle<1, 0, 0, 3>;
using grgr = Swizzle<1, 0, 1, 0>;
using grgg = Swizzle<1, 0, 1, 1>;
using grgb = Swizzle<1, 0, 1, 2>;
using grga = Swizzle<1, 0, 1, 3>;
using grbr = Swizzle<1, 0, 2, 0>;
using grbg = Swizzle<1, 0, 2, 1>;
using grbb = Swizzle<1, 0, 2, 2>;
using grba = Swizzle<1, 0, 2, 3>;
using grar = Swizzle<1, 0, 3, 0>;
using grag = Swizzle<1, 0, 3, 1>;
using grab = Swizzle<1, 0, 3, 2>;
using graa = Swizzle<1, 0, 3, 3>;
using ggrr = Swizzle<1, 1, 0, 0>;
using ggrg = Swizzle<1, 1, 0, 1>;
using ggrb = Swizzle<1, 1, 0, 2>;
using ggra = Swizzle<1, 1, 0, 3>;
using gggr = Swizzle<1, 1, 1, 0>;
using gggg = Swizzle<1, 1, 1, 1>;
using gggb = Swizzle<1, 1, 1, 2>;
using ggga = Swizzle<1, 1, 1, 3>;
using ggbr = Swizzle<1, 1, 2, 0>;
using ggbg = Swizzle<1, 1, 2, 1>;
using ggbb = Swizzle<1, 1, 2, 2>;
using ggba = Swizzle<1, 1, 2, 3>;
using ggar = Swizzle<1, 1, 3, 0>;
using ggag = Swizzle<1, 1, 3, 1>;
using ggab = Swizzle<1, 1, 3, 2>;
using ggaa = Swizzle<1, 1, 3, 3>;
using gbrr = Swizzle<1, 2, 0, 0>;
using gbrg = Swizzle<1, 2, 0, 1>;
using gbrb = Swizzle<1, 2, 0, 2>;
using gbra = Swizzle<1, 2, 0, 3>;
using gbgr = Swizzle<1, 2, 1, 0>;
using gbgg = Swizzle<1, 2, 1, 1>;
using gbgb = Swizzle<1, 2, 1, 2>;
using gbga = Swizzle<1, 2, 1, 3>;
using gbbr = Swizzle<1, 2, 2, 0>;
using gbbg = Swizzle<1, 2, 2, 1>;
using gbbb = Swizzle<1, 2, 2, 2>;
using gbba = Swizzle<1, 2, 2, 3>;
using gbar = Swizzle<1, 2, 3, 0>;
using gbag = Swizzle<1, 2, 3, 1>;
using gbab = Swizzle<1, 2, 3, 2>;
using gbaa = Swizzle<1, 2, 3, 3>;
using garr = Swizzle<1, 3, 0, 0>;
using garg = Swizzle<1, 3, 0, 1>;
using garb = Swizzle<1, 3, 0, 2>;
using gara = Swizzle<1, 3, 0, 3>;
using gagr = Swizzle<1, 3, 1, 0>;
using gagg = Swizzle<1, 3, 1, 1>;
using gagb = Swizzle<1, 3, 1, 2>;
using gaga = Swizzle<1, 3, 1, 3>;
using gabr = Swizzle<1, 3, 2, 0>;
using gabg = Swizzle<1, 3, 2, 1>;
using gabb = Swizzle<1, 3, 2, 2>;
using gaba = Swizzle<1, 3, 2, 3>;
using gaar = Swizzle<1, 3, 3, 0>;
using gaag = Swizzle<1, 3, 3, 1>;
using gaab = Swizzle<1, 3, 3, 2>;
using gaaa = Swizzle<1, 3, 3, 3>;
using brrr = Swizzle<2, 0, 0, 0>;
using brrg = Swizzle<2, 0, 0, 1>;
using brrb = Swizzle<2, 0, 0, 2>;
using brra = Swizzle<2, 0, 0, 3>;
using brgr = Swizzle<2, 0, 1, 0>;
using brgg = Swizzle<2, 0, 1, 1>;
using brgb = Swizzle<2, 0, 1, 2>;
using brga = Swizzle<2, 0, 1, 3>;
using brbr = Swizzle<2, 0, 2, 0>;
using brbg = Swizzle<2, 0, 2, 1>;
using brbb = Swizzle<2, 0, 2, 2>;
using brba = Swizzle<2, 0, 2, 3>;
using brar = Swizzle<2, 0, 3, 0>;
using brag = Swizzle<2, 0, 3, 1>;
using brab = Swizzle<2, 0, 3, 2>;
using braa = Swizzle<2, 0, 3, 3>;
using bgrr = Swizzle<2, 1, 0, 0>;
using bgrg = Swizzle<2, 1, 0, 1>;
using bgrb = Swizzle<2, 1, 0, 2>;
using bgra = Swizzle<2, 1, 0, 3>;
using bggr = Swizzle<2, 1, 1, 0>;
using bggg = Swizzle<2, 1, 1, 1>;
using bggb = Swizzle<2, 1, 1, 2>;
using bgga = Swizzle<2, 1, 1, 3>;
using bgbr = Swizzle<2, 1, 2, 0>;
using bgbg = Swizzle<2, 1, 2, 1>;
using bgbb = Swizzle<2, 1, 2, 2>;
using bgba = Swizzle<2, 1, 2, 3>;
using bgar = Swizzle<2, 1, 3, 0>;
using bgag = Swizzle<2, 1, 3, 1>;
using bgab = Swizzle<2, 1, 3, 2>;
using bgaa = Swizzle<2, 1, 3, 3>;
using bbrr = Swizzle<2, 2, 0, 0>;
using bbrg = Swizzle<2, 2, 0, 1>;
using bbrb = Swizzle<2, 2, 0, 2>;
using bbra = Swizzle<2, 2, 0, 3>;
using bbgr = Swizzle<2, 2, 1, 0>;
using bbgg = Swizzle<2, 2, 1, 1>;
using bbgb = Swizzle<2, 2, 1, 2>;
using bbga = Swizzle<2, 2, 1, 3>;
using bbbr = Swizzle<2, 2, 2, 0>;
using bbbg = Swizzle<2, 2, 2, 1>;
using bbbb = Swizzle<2, 2, 2, 2>;
using bbba = Swizzle<2, 2, 2, 3>;
using bbar = Swizzle<2, 2, 3, 0>;
using bbag = Swizzle<2, 2, 3, 1>;
using bbab = Swizzle<2, 2, 3, 2>;
using bbaa = Swizzle<2, 2, 3, 3>;
using barr = Swizzle<2, 3, 0, 0>;
using barg = Swizzle<2, 3, 0, 1>;
using barb = Swizzle<2, 3, 0, 2>;
using bara = Swizzle<2, 3, 0, 3>;
using bagr = Swizzle<2, 3, 1, 0>;
using bagg = Swizzle<2, 3, 1, 1>;
using bagb = Swizzle<2, 3, 1, 2>;
using baga = Swizzle<2, 3, 1, 3>;
using babr = Swizzle<2, 3, 2, 0>;
using babg = Swizzle<2, 3, 2, 1>;
using babb = Swizzle<2, 3, 2, 2>;
using baba = Swizzle<2, 3, 2, 3>;
using baar = Swizzle<2, 3, 3, 0>;
using baag = Swizzle<2, 3, 3, 1>;
using baab = Swizzle<2, 3, 3, 2>;
using baaa = Swizzle<2, 3, 3, 3>;
using arrr = Swizzle<3, 0, 0, 0>;
using arrg = Swizzle<3, 0, 0, 1>;
using arrb = Swizzle<3, 0, 0, 2>;
using arra = Swizzle<3, 0, 0, 3>;
using argr = Swizzle<3, 0, 1, 0>;
using argg = Swizzle<3, 0, 1, 1>;
using argb = Swizzle<3, 0, 1, 2>;
using arga = Swizzle<3, 0, 1, 3>;
using arbr = Swizzle<3, 0, 2, 0>;
using arbg = Swizzle<3, 0, 2, 1>;
using arbb = Swizzle<3, 0, 2, 2>;
using arba = Swizzle<3, 0, 2, 3>;
using arar = Swizzle<3, 0, 3, 0>;
using arag = Swizzle<3, 0, 3, 1>;
using arab = Swizzle<3, 0, 3, 2>;
using araa = Swizzle<3, 0, 3, 3>;
using agrr = Swizzle<3, 1, 0, 0>;
using agrg = Swizzle<3, 1, 0, 1>;
using agrb = Swizzle<3, 1, 0, 2>;
using agra = Swizzle<3, 1, 0, 3>;
using aggr = Swizzle<3, 1, 1, 0>;
using aggg = Swizzle<3, 1, 1, 1>;
using aggb = Swizzle<3, 1, 1, 2>;
using agga = Swizzle<3, 1, 1, 3>;
using agbr = Swizzle<3, 1, 2, 0>;
using agbg = Swizzle<3, 1, 2, 1>;
using agbb = Swizzle<3, 1, 2, 2>;
using agba = Swizzle<3, 1, 2, 3>;
using agar = Swizzle<3, 1, 3, 0>;
using agag = Swizzle<3, 1, 3, 1>;
using agab = Swizzle<3, 1, 3, 2>;
using agaa = Swizzle<3, 1, 3, 3>;
using abrr = Swizzle<3, 2, 0, 0>;
using abrg = Swizzle<3, 2, 0, 1>;
using abrb = Swizzle<3, 2, 0, 2>;
using abra = Swizzle<3, 2, 0, 3>;
using abgr = Swizzle<3, 2, 1, 0>;
using abgg = Swizzle<3, 2, 1, 1>;
using abgb = Swizzle<3, 2, 1, 2>;
using abga = Swizzle<3, 2, 1, 3>;
using abbr = Swizzle<3, 2, 2, 0>;
using abbg = Swizzle<3, 2, 2, 1>;
using abbb = Swizzle<3, 2, 2, 2>;
using abba = Swizzle<3, 2, 2, 3>;
using abar = Swizzle<3, 2, 3, 0>;
using abag = Swizzle<3, 2, 3, 1>;
using abab = Swizzle<3, 2, 3, 2>;
using abaa = Swizzle<3, 2, 3, 3>;
using aarr = Swizzle<3, 3, 0, 0>;
using aarg = Swizzle<3, 3, 0, 1>;
using aarb = Swizzle<3, 3, 0, 2>;
using aara = Swizzle<3, 3, 0, 3>;
using aagr = Swizzle<3, 3, 1, 0>;
using aagg = Swizzle<3, 3, 1, 1>;
using aagb = Swizzle<3, 3, 1, 2>;
using aaga = Swizzle<3, 3, 1, 3>;
using aabr = Swizzle<3, 3, 2, 0>;
using aabg = Swizzle<3, 3, 2, 1>;
using aabb = Swizzle<3, 3, 2, 2>;
using aaba = Swizzle<3, 3, 2, 3>;
using aaar = Swizzle<3, 3, 3, 0>;
using aaag = Swizzle<3, 3, 3, 1>;
using aaab = Swizzle<3, 3, 3, 2>;
using aaaa = Swizzle<3, 3, 3, 3>;
