platform :ios, '7.0'
pod 'Realm'
link_with 'RealmTest', 'RealmTestTests'

post_install do |installer_representation|
  # Replace -ObjC by -force_load
  path = installer_representation.sandbox_root + 'Pods.xcconfig'
  tmp = path.to_s + '.tmp'
  File.open(path, "r") do |f|
    File.open(tmp, "w") do |g|
      f.each_line do |line|
        line.sub! '-ObjC', '-force_load $(TARGET_BUILD_DIR)/libPods.a'
        g.puts line
      end
    end
  end
  File.rename(tmp, path)

  # Remove target dependency from Pods target
  installer_representation.project.targets.each do |target|
    target.dependencies.select! { |d| d.target.name != 'Pods-Realm' }
  end
end
