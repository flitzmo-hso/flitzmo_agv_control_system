# agv_control_system

This is the git repo of the agv control system. 
The project has launched in 2020 (Summer semester) as part of the innovation project (<a href="https://www.hs-offenburg.de/">University of Applied Sciences Offenburg</a>).
Academic supervisor:  <a href="https://imla.hs-offenburg.de/personen/prof-dr-ing-theo-lutz/">Prof. Dr.-Ing. Theo Lutz</a>

## Demo

*Gif* 

## Traffic Editor

*Create workspace* <br> <br>
sudo apt update <br>
sudo apt install libyaml-cpp-dev qt5-default \  <br>
libopencv-dev libopencv-videoio-dev \   <br>
libignition-plugin-dev libignition-common3-dev <br>
mkdir -p ~/colcon_workspace/srccd ~/colcon_workspace/src <br>
git clone https://github.com/open-rmf/rmf_traffic_editor  <br>
cd ~/colcon_workspace <br>
source /opt/ros/foxy/setup.bash <br>
colcon build --packages-select rmf_traffic_editor <br>

*Start Traffic Editor* <br> <br>
source /opt/ros/foxy/setup.bash <br>
source ~/colcon_workspace/install/setup.bash <br>
traffic-editor

## Start RMF Demo Maps
source /opt/ros/foxy/setup.bash <br>
source ~/rmf_ws/install/setup.bash <br>
ros2 launch rmf_demos office.launch.xml <br>

## Start Demo Panel
Start RMF Demo Map. <br>
Navigate to localhost:5000

## Autors: 
- Winter semester 20/21: Patrizia Beck, Evgeniya Puchkova, Aline Schaub, Max Sauer, Christoph Werner
- Summer semester 21: Evgeniya Puchkova, Aline Schaub, Max Sauer, Christoph Werner
