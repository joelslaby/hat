cd 
cd /etc/netplan
cp networks/js_hotspot.yaml networks/50-cloud-init.yaml
rm 50-cloud-init.yaml
mv networks/50-cloud-init.yaml 50-cloud-init.yaml
sudo netplan apply
sudo netplan generate
