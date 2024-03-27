Mountutí disku: 
1. mount [path-to-disk] [path-where-to-mount] {použití: mount /dev/sdb1 /mnt/}

Automatický mount při spuštění systému: 
1. blkid [path-to-disk] (Zjištění UUID disku) {použití: blkid /dev/sdb1}
2. nano /etc/fstab
    [UUID] [path-where-to-mount] [file-system] defaults 0 0