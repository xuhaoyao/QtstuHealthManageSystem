# QtstuHealthManageSystem

利用链式存储结构实现一个“学生健康情况管理系统”

系统的菜单功能项如下：
1------新建学生健康表
2------向学生健康表插入某个班某学号某姓名学生信息
3------在健康表删除某个班某学号某姓名学生信息
4------从文件中读取健康表信息
5------向文件写入学生健康表信息
6------在健康表中查询学生信息（按某个班某学号来进行查找）
7------在屏幕中输出全部学生信息
8-----退出
请尝试用窗口菜单界面实现

窗口界面通过Qt的UI进行布局
我的窗口菜单界面采用了按钮点击切换界面的方式实现了系统菜单的各项功能
其中每个按钮点击的信号传递，都通过on_ XXXXButton_clicked()函数实现

下面依次介绍各个文件的主要作用:
mainwidget.h mainwidget.cpp  将系统各个功能窗口都装进了QStackedLayout布局中,是主窗口
menuwidget.h menuwidget.cpp  系统菜单功能窗口,即窗口菜单界面
insertwidget.h insertwidget.cpp 插入窗口(文件操作)
deletewidget.h deletewidget.cpp 删除窗口(链表实现)
findwidget.h findwidget.cpp     查询窗口(链表实现)
newwidget.h newwidget.cpp       新建窗口(文件操作)
printwidget.h printwidget.cpp   输出窗口(链表实现)
student.h student.cpp           学生信息类

由于我是通过文件操作实现数据在文件中的传递，故 4------从文件中读取健康表信息   5------向文件写入学生健康表信息  
这两个功能本身就在程序中实现了。
