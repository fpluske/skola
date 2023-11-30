1. 2 Servery propojené přes Zerotier VPN
2. Instalace vlastních klíčů na server
3. Instalace párového klíče na druhý server
4. Vypnutí SSH password authentification na druhém serveru
5. Kopírování souboru na první server
6. Provedení zálohy na GitHub tohoto souboru

1. sudo zerotier-cli join b15644912e80e307
2. ssh-copy-id student@192.168.10.79
3. ssh-copy-id student@192.168.10.116
4. nano /etc/ssh/sshd_config
   nano /etc/ssh/sshd_config.d/50-cloud~it.conf
5. scp /home/student/Stažené/maturitni_protokol_pcs_1.docx 192.168.10.79:/home/student/
6. Hotovo