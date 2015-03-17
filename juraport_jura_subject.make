core = 7.x
api = 2

; Contrib
projects[ctools][subdir] = "contrib"
projects[ctools][version] = "1.4"

projects[features][subdir] = "contrib"
projects[features][version] = "2.2"

projects[field_collection][subdir] = "contrib"
projects[field_collection][version] = "1.0-beta7"
# https://www.drupal.org/node/2109627 Disable pathauto when saving field collection inline
projects[field_collection][patch][0] = https://www.drupal.org/files/issues/2109627-edit-to-field-collection-item-alters-generate-automatic-url-alias-setting-for-node.patch

projects[field_group][subdir] = "contrib"
projects[field_group][version] = "1.4"

projects[link][subdir] = "contrib"
projects[link][version] = "1.3"

projects[metatag][subdir] = "contrib"
projects[metatag][version] = "1.4"

projects[strongarm][subdir] = "contrib"
projects[strongarm][version] = "2.0"

projects[entityreference][subdir] = "contrib"
projects[entityreference][version] = "1.1"

; Juraport modules
projects[juraport_user][type] = "module"
projects[juraport_user][download][type] = "git"
projects[juraport_user][download][url] = "https://github.com/vejlebib/juraport_user.git"
projects[juraport_user][download][branch] = "master"
