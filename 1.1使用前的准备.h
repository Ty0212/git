1.创建仓库

2.创建GitHub账号
    git config --global user.name   "用户名"
    git config --global user.email  "邮箱"

3.设置SSH
    ssh-keygen -t rsa -C "邮箱"  根据提示按三次回车键或者根据提示设置密码
    复制生成文件 id_rsa.pub中内容

4.github账号中设置SSH
    打开个人github个人主页
    找到setting
    选择SSH and  GPG keys
    再选择new SSH key 
    title随便填，key中填写之前复制的id_rsa.pub中的内容

