1.git init      //初始化仓库

2.git status    //查看仓库状态

3.git add "文件"    //向暂存区添加文件

4.git commit    //保存仓库的历史记录
    记录一行提交信息
        git commit  -m "历史记录"
    技术详细提交信息
        git commit 
        然后回打开编辑器
            第一行：用一行文字简述提交的更改的提交内容
            第二行：空行
            第三行：技术更改的原因和详细内容
    中止提交
        提交信息留空
        关闭编辑器
        然后提交就会被中止
5.git log       //查看提交日志
    git log --pretty=short  //只显示提交信息的第一行
    git log 文件            //只显示指定文件的日志
    git log                 //显示提交前后改动
    git log -p 文件         //只显示指定文件提交前后改动

6.git diff                  //查看更改前后的差别
    git diff                //查看当前工作树与暂存区的差别
        其中+：表示新添加的行
        其中-：表示删除行
    git diff HEAD           //查看工作树和最新提交的差别
        其中+：表示新添加的行
        其中-：表示删除行



    