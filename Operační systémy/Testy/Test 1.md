# ZADÁNÍ:
1. U-Server
2. Nakopírovat klíče
3. Vypsat jak je obsazený disk
4. Přihlásit se pomocí SSH
5. Přihlásit se pomocí SSH a pustit příkaz pro výpis běžících programů všech uživatelů
6. Výpis všech souborů, které se nacházejí v "/boot"
7. Zkopírovat soubor ~/id_rsa -> serveru /home/student

# ŘEŠENÍ:
##### 1. Hotovo
##### 2. ssh-copy-id "uzivatelskeJmeno"@"ipAdresaServeru"
##### 3. student@server:~$ df -h
Filesystem      Size  Used Avail Use% Mounted on
tmpfs           198M  724K  197M   1% /run
/dev/sda2       9.8G  5.2G  4.2G  56% /
tmpfs           989M     0  989M   0% /dev/shm
tmpfs           5.0M     0  5.0M   0% /run/lock
tmpfs           198M  4.0K  198M   1% /run/user/1000

##### 4. ssh "uzivatelskeJmeno"@"ipAdresaServeru"
##### 5. student@server:~$ ps aux
```
USER         PID %CPU %MEM    VSZ   RSS TTY      STAT START   TIME COMMAND
root           1  0.1  0.5 100360 11192 ?        Ss   07:16   0:00 /sbin/init
root           2  0.0  0.0      0     0 ?        S    07:16   0:00 [kthreadd]
root           3  0.0  0.0      0     0 ?        I<   07:16   0:00 [rcu_gp]
root           4  0.0  0.0      0     0 ?        I<   07:16   0:00 [rcu_par_gp]
root           5  0.0  0.0      0     0 ?        I<   07:16   0:00 [slub_flushwq]
root           6  0.0  0.0      0     0 ?        I<   07:16   0:00 [netns]
root           8  0.0  0.0      0     0 ?        I<   07:16   0:00 [kworker/0:0H-events_highpri]
root          10  0.0  0.0      0     0 ?        I<   07:16   0:00 [mm_percpu_wq]
root          11  0.0  0.0      0     0 ?        S    07:16   0:00 [rcu_tasks_rude_]
root          12  0.0  0.0      0     0 ?        S    07:16   0:00 [rcu_tasks_trace]
root          13  0.0  0.0      0     0 ?        S    07:16   0:00 [ksoftirqd/0]
root          14  0.0  0.0      0     0 ?        I    07:16   0:00 [rcu_sched]
root          15  0.0  0.0      0     0 ?        S    07:16   0:00 [migration/0]
root          16  0.0  0.0      0     0 ?        S    07:16   0:00 [idle_inject/0]
root          17  0.0  0.0      0     0 ?        I    07:16   0:00 [kworker/0:1-events]
root          18  0.0  0.0      0     0 ?        S    07:16   0:00 [cpuhp/0]
root          19  0.0  0.0      0     0 ?        S    07:16   0:00 [kdevtmpfs]
root          20  0.0  0.0      0     0 ?        I<   07:16   0:00 [inet_frag_wq]
root          21  0.0  0.0      0     0 ?        S    07:16   0:00 [kauditd]
root          22  0.0  0.0      0     0 ?        S    07:16   0:00 [khungtaskd]
root          23  0.0  0.0      0     0 ?        S    07:16   0:00 [oom_reaper]
root          24  0.0  0.0      0     0 ?        I<   07:16   0:00 [writeback]
root          25  0.0  0.0      0     0 ?        S    07:16   0:00 [kcompactd0]
root          26  0.0  0.0      0     0 ?        SN   07:16   0:00 [ksmd]
root          27  0.0  0.0      0     0 ?        SN   07:16   0:00 [khugepaged]
root          73  0.0  0.0      0     0 ?        I<   07:16   0:00 [kintegrityd]
root          74  0.0  0.0      0     0 ?        I<   07:16   0:00 [kblockd]
root          75  0.0  0.0      0     0 ?        I<   07:16   0:00 [blkcg_punt_bio]
root          76  0.0  0.0      0     0 ?        I<   07:16   0:00 [tpm_dev_wq]
root          77  0.0  0.0      0     0 ?        I<   07:16   0:00 [ata_sff]
root          78  0.0  0.0      0     0 ?        I<   07:16   0:00 [md]
root          79  0.0  0.0      0     0 ?        I<   07:16   0:00 [edac-poller]
root          80  0.0  0.0      0     0 ?        I<   07:16   0:00 [devfreq_wq]
root          81  0.0  0.0      0     0 ?        S    07:16   0:00 [watchdogd]
root          82  0.0  0.0      0     0 ?        I    07:16   0:00 [kworker/u2:1-flush-8:0]
root          83  0.0  0.0      0     0 ?        I<   07:16   0:00 [kworker/0:1H-kblockd]
root          85  0.0  0.0      0     0 ?        S    07:16   0:00 [kswapd0]
root          86  0.0  0.0      0     0 ?        S    07:16   0:00 [ecryptfs-kthrea]
root          88  0.0  0.0      0     0 ?        I<   07:16   0:00 [kthrotld]
root          89  0.0  0.0      0     0 ?        I<   07:16   0:00 [acpi_thermal_pm]
root          91  0.0  0.0      0     0 ?        S    07:16   0:00 [scsi_eh_0]
root          92  0.0  0.0      0     0 ?        I<   07:16   0:00 [scsi_tmf_0]
root          93  0.0  0.0      0     0 ?        S    07:16   0:00 [scsi_eh_1]
root          94  0.0  0.0      0     0 ?        I<   07:16   0:00 [scsi_tmf_1]
root          96  0.0  0.0      0     0 ?        I<   07:16   0:00 [vfio-irqfd-clea]
root          97  0.0  0.0      0     0 ?        I    07:16   0:00 [kworker/u2:4-ext4-rsv-conversion]
root          98  0.0  0.0      0     0 ?        I<   07:16   0:00 [mld]
root          99  0.0  0.0      0     0 ?        I<   07:16   0:00 [ipv6_addrconf]
root         101  0.1  0.0      0     0 ?        I    07:16   0:00 [kworker/0:2-events]
root         109  0.0  0.0      0     0 ?        I<   07:16   0:00 [kstrp]
root         112  0.0  0.0      0     0 ?        I<   07:16   0:00 [zswap-shrink]
root         113  0.0  0.0      0     0 ?        I<   07:16   0:00 [kworker/u3:0]
root         118  0.0  0.0      0     0 ?        I<   07:16   0:00 [charger_manager]
root         157  0.0  0.0      0     0 ?        S    07:16   0:00 [scsi_eh_2]
root         158  0.0  0.0      0     0 ?        I<   07:16   0:00 [scsi_tmf_2]
root         160  0.0  0.0      0     0 ?        I<   07:16   0:00 [cryptd]
root         194  0.0  0.0      0     0 ?        I<   07:16   0:00 [ttm_swap]
root         196  0.0  0.0      0     0 ?        S    07:16   0:00 [irq/18-vmwgfx]
root         198  0.0  0.0      0     0 ?        S    07:16   0:00 [card0-crtc0]
root         201  0.0  0.0      0     0 ?        S    07:16   0:00 [card0-crtc1]
root         203  0.0  0.0      0     0 ?        S    07:16   0:00 [card0-crtc2]
root         205  0.0  0.0      0     0 ?        S    07:16   0:00 [card0-crtc3]
root         208  0.0  0.0      0     0 ?        S    07:16   0:00 [card0-crtc4]
root         210  0.0  0.0      0     0 ?        S    07:16   0:00 [card0-crtc5]
root         211  0.0  0.0      0     0 ?        S    07:16   0:00 [card0-crtc6]
root         212  0.0  0.0      0     0 ?        S    07:16   0:00 [card0-crtc7]
root         237  0.0  0.0      0     0 ?        I<   07:16   0:00 [raid5wq]
root         284  0.0  0.0      0     0 ?        S    07:16   0:00 [jbd2/sda2-8]
root         285  0.0  0.0      0     0 ?        I<   07:16   0:00 [ext4-rsv-conver]
root         344  0.0  0.7  47736 15516 ?        S<s  07:16   0:00 /lib/systemd/systemd-journald
root         380  0.0  0.0      0     0 ?        I<   07:16   0:00 [kaluad]
root         383  0.0  0.0      0     0 ?        I<   07:16   0:00 [kmpath_rdacd]
root         384  0.0  0.0      0     0 ?        I<   07:16   0:00 [kmpathd]
root         385  0.0  0.0      0     0 ?        I<   07:16   0:00 [kmpath_handlerd]
root         386  0.0  1.3 289348 27100 ?        SLsl 07:16   0:00 /sbin/multipathd -d -s
root         390  0.0  0.3  25480  6424 ?        Ss   07:16   0:00 /lib/systemd/systemd-udevd
systemd+     412  0.0  0.3  89356  6500 ?        Ssl  07:16   0:00 /lib/systemd/systemd-timesyncd
systemd+     467  0.0  0.3  16120  7884 ?        Ss   07:16   0:00 /lib/systemd/systemd-networkd
systemd+     475  0.0  0.6  25260 12424 ?        Ss   07:16   0:00 /lib/systemd/systemd-resolved
message+     555  0.0  0.2   8636  4824 ?        Ss   07:16   0:00 @dbus-daemon --system --address=systemd: --nofork --nopidfile --systemd-activation --syslog-only
root         559  0.0  0.9  30120 18736 ?        Ss   07:16   0:00 /usr/bin/python3 /usr/bin/networkd-dispatcher --run-startup-triggers
root         564  0.0  0.3  23536  7872 ?        Ss   07:16   0:00 /lib/systemd/systemd-logind
root         585  0.0  0.4  15424  9380 ?        Ss   07:16   0:00 sshd: /usr/sbin/sshd -D [listener] 0 of 10-100 startups
root         593  0.0  0.0   3192  1124 tty1     Ss+  07:16   0:00 /sbin/agetty -o -p -- \u --noclear tty1 linux
root         594  0.0  1.0 107208 21200 ?        Ssl  07:16   0:00 /usr/bin/python3 /usr/share/unattended-upgrades/unattended-upgrade-shutdown --wait-for-signal
student      651  0.0  0.4  17064  9324 ?        Ss   07:16   0:00 /lib/systemd/systemd --user
student      652  0.0  0.1 103288  3460 ?        S    07:16   0:00 (sd-pam)
root         685  0.0  0.5  16916 10644 ?        Ss   07:17   0:00 sshd: student [priv]
student      705  0.0  0.3  17216  7912 ?        S    07:17   0:00 sshd: student@pts/0
student      706  0.0  0.2   5044  4076 pts/0    Ss   07:17   0:00 -bash
root         791  0.0  0.0      0     0 ?        I    07:25   0:00 [kworker/u2:0-events_unbound]
student      792  0.0  0.1   7480  3164 pts/0    R+   07:26   0:00 ps aux
```
##### 6. student@server:ls /boot
System.map-5.15.0-67-generic  config-5.15.0-67-generic  grub        initrd.img-5.15.0-67-generic  initrd.img.old  vmlinuz-5.15.0-67-generic  vmlinuz.old
System.map-5.15.0-69-generic  config-5.15.0-69-generic  initrd.img  initrd.img-5.15.0-69-generic  vmlinuz         vmlinuz-5.15.0-69-generic

##### 7. student@student:~$ scp ~/.ssh/id_rsa student@192.168.10.58:/home/student
id_rsa
