1. prihlasime se na server
2. prihlasime se jako root (sudo su -)
3. vypiseme si pomoci lsblk
4. fdisk "disk" (e. g. /dev/sdb)
5. n (new)
6. p (primary)
7. "enter"
8. p (print partition table)
9. t (change partition type)
10. L (prit filesystem options)
11. 0b (zmena na FAT32)
12. w (write changes)
13. apt install dosfstools
14. mkfs.vfat "partition" 
15. mount "partition" /mnt 
16. umount /mnt nebo /"partition"
17. touch /mnt/"soubor" (vytvori soubor)
18. > /mnt/"soubor" (vytvori soubor, nebo ho vynuluje)
19. lsof | grep /mnt nebo /"partition" (vypise otevrene soubory, ktere jsou na /mnt)
20. kill -9 "processId" (kill all processes you can with this pId)
