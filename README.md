# YandexMobileAds-SwiftPM
Unofficial Swift Package Manager wrapper around [YandexMobileAdsSDK](https://yandex.com/dev/mobile-ads/).

# How to install:
1. Add a package by selecting File → Add Packages… in Xcode’s menu bar.
<img width="506" alt="image" src="https://user-images.githubusercontent.com/1976216/173240129-c21a3b21-9778-4083-9bbe-600cad4f2188.png">
2. Search for the SDK using the repo's URL: https://github.com/azarovalex/YandexMobileAds-SwiftPM and select "Add Package"
<img width="471" alt="image" src="https://user-images.githubusercontent.com/1976216/173240199-ebffa282-b862-4c08-8710-ddba2d7f82e3.png">
3. Add the -ObjC option to Other Linker Flags in the Build Settings tab.
<img width="709" alt="image" src="https://user-images.githubusercontent.com/1976216/173240262-c5d2f08f-f989-4a17-a5f4-907fc42bb43b.png">
4. Add unarchived resources bundle (https://github.com/azarovalex/YandexMobileAds-SwiftPM/releases/download/5.0.2/YandexMobileAdsBundle.bundle.zip) to the project by dragging it to the Project navigator.
<img width="290" alt="image" src="https://user-images.githubusercontent.com/1976216/173240402-0483b39a-e091-4214-8a58-936e88faec82.png">
5. Make sure Resources.bundle is included in "Copy Bundle Resources" build phase, this should happen automatically.
<img width="328" alt="image" src="https://user-images.githubusercontent.com/1976216/173240473-109b9e19-d774-44b6-a247-c6e114b7b2eb.png">
