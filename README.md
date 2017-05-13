## trident Note 5
Temporary root for the galaxy AT&T Note 5. 

## How
 * Clone this project and either 
   * build (run `make`) and place a custom `sepolicy` file in the root of the project, or 
   * `tar xf` the [prebuilt binaries](https://github.com/freddierice/trident/blob/prebuilt/prebuilt.tar.gz?raw=true) in the root of the project.
 * Open a separate terminal window and run `make log` to see logged output.
 * Run `make run` to start the exploit. You should see 
```
[+] Turn ON Mobile Hot Spot a.k.a. wifi tethering
```
 * On your phone, go to Settings > Connections > Mobile Hotspot and Tethering > Mobile Hotspot and turn it on. At this point, text should start appearing in the `make log` window. Wait until it is done: 
```
trident : [+] load started, don't touch anything!
trident : [+] overwriting init to terminate early
trident : madvise: 0
trident : proc: -1178599424
trident : [+] overwriting init function with shellcode
trident : madvise: 0
trident : proc: -764411904
trident : [+] overwriting init function with a nop
trident : madvise: 0
trident : proc: -1178599424
trident : [+] load done! -- turn off Mobile Hot Spot before continuing...
```
 * Turn off the mobile hotspot. 
 * Now type `make reverse` to continue: 
```
trident : Turn ON Mobile Hot Spot a.k.a. wifi tethering
```
 * On your phone, go to Settings > Connections > Mobile Hotspot and Tethering > Mobile Hotspot and turn it on.
```
[+] reverse loaded shell is active! -- turn off Mobile Hot Spot again
```

 * Turn the hotspot off again.
 * run `make connect`

You should now have a root shell! If any permissions issues come up, modify the sepolicy file with sepolicy-inject and upload the new version to `/data/local/tmp/sepolicy`. The new version should be loaded in a few seconds. These problems are easiest to debug with the command `adb logcat | grep -a avc`.

## Versions
This code has only been tested for the AT&T Note 5 on the October security patch. To make this work on other versions, `INIT_OFFSET` in `farm.c` may need to be modified.

## Thanks
 * https://github.com/timwr/CVE-2016-5195
 * https://bitbucket.org/joshua_brindle/sepolicy-inject
