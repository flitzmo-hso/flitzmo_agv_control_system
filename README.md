# agv_control_system

This is the git repo of the agv control system. 
The project has launched in 2020 (Summer semester) as part of the innovation project (<a href="https://www.hs-offenburg.de/">University of Applied Sciences Offenburg</a>).
Academic supervisor:  <a href="https://imla.hs-offenburg.de/personen/prof-dr-ing-theo-lutz/">Prof. Dr.-Ing. Theo Lutz</a>

## Demo

![](https://github.com/flitzmo-hso/flitzmo_agv_control_system/blob/main/gif.gif)

## Traffic Editor

*Create workspace* <br> <br>
```bash
sudo apt update
sudo apt install libyaml-cpp-dev qt5-default \  
libopencv-dev libopencv-videoio-dev \   
libignition-plugin-dev libignition-common3-dev 
mkdir -p ~/colcon_workspace/src 
cd ~/colcon_workspace/src 
git clone https://github.com/open-rmf/rmf_traffic_editor 
cd ~/colcon_workspace 
source /opt/ros/foxy/setup.bash 
colcon build --packages-select rmf_traffic_editor 

```


*Start Traffic Editor* <br> <br>
```bash
source /opt/ros/foxy/setup.bash 
source ~/colcon_workspace/install/setup.bash 
traffic-editor

```

## Start RMF Demo Maps
--------------------------------
Fast way (then code snippets after 'Fast way' are obsolet):  <br>

1. Terminal öffnen <br>
2a) bash startAll.sh (Alles direkt starten)  <br>
2b) bash startPanel.sh (Nur Gui Server starten)  <br>
----------------------------------

```bash
source /opt/ros/foxy/setup.bash 
source ~/rmf_ws/install/setup.bash 
ros2 launch rmf_demos office.launch.xml 
```

## Start Demo Panel
Start RMF Demo Map. <br>
Navigate to localhost:5000

## Autors: 
- Winter semester 20/21: Patrizia Beck, Evgeniya Puchkova, Aline Schaub, Max Sauer, Christoph Werner
- Summer semester 21: Evgeniya Puchkova, Aline Schaub, Max Sauer, Christoph Werner
