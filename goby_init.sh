echo "Enter name for pi: "
read hostname
echo "Name chosen is $hostname"

# Installing goby
echo "deb http://packages.gobysoft.org/ubuntu/release/ `lsb_release -c -s`/" | sudo tee /etc/apt/sources.list.d/gobysoft_release.list

sudo apt-key adv --recv-key --keyserver keyserver.ubuntu.com 19478082E2F8D3FE
sudo apt update

# minimal
# sudo apt install libgoby3-dev goby3-apps

# full
sudo apt install libgoby3-dev libgoby3-gui-dev goby3-apps goby3-gui goby3-doc goby3-test libgoby3-moos-dev goby3-moos

# Installing DCCL
sudo apt-add-repository ppa:dccl-dev/ppa
sudo apt-get update
sudo apt-get install libdccl3-dev dccl3-apps dccl3-doc dccl3-apps dccl3-compiler

# Install additional dependencies
sudo apt install cmake g++ git

# Change host name
sudo hostnamectl set-hostname hostname

# Add new user
sudo useradd -m -s /bin/bash hostname
sudo passwd <hostname>

# Add user to sudo group
sudo usermod -a -G sudo hostname
