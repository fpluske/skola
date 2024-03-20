Vytvoření patrition: 
1. fdisk [path-to-disk] {použití: fdisk /dev/sdb1}
2. g (Vytvoření podle GPT partition table)
3. n (Vytvoření partition, lze nastavit custom velikost)
4. w ("Použití změn")

Vytvoření file-system: 
1. mkfs.[file-system] [path-to-disk] {použití: mkfs.ext4 /dev/sdb1}

Mountutí disku: 
1. mount [path-to-disk] [path-where-to-mount] {použití: mount /dev/sdb1 /mnt/}

Automatický mount při spuštění systému: 
1. blkid [path-to-disk] (Zjištění UUID disku) {použití: blkid /dev/sdb1}
2. nano /etc/fstab
    /dev/disk/by-uuid/[UUID] [path-where-to-mount] [file-system] defaults 0 0