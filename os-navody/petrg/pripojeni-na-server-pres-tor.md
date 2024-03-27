sudo su -
apt update
apt install -y gpg apt-transport-https software-properties-common tor
curl https://deb.torproject.org/torproject.org/A3C4F0F979CAA22CDBA8F512EE8CBC9E886DDD89.asc | gpg --import
gpg --export A3C4F0F979CAA22CDBA8F512EE8CBC9E886DDD89 | apt-key add -
apt-add-repository -s https://deb.torproject.org/torproject.org
nano /etc/tor/torrc ZĚMNIT PARAMETRY:
    HiddenServiceDir /var/lib/tor/mywebsite/
    HiddenServicePort 80 127.0.0.1:8181
systemctl restart tor
cat /var/lib/tor/hidden_service/hostname
    ZKOPÍROVAT TO CO TO NAPSALO, JAKO URL ADRESU