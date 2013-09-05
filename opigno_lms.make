api = 2
core = 7.x

; Opigno modules
projects[] = opigno
projects[] = opigno_quiz_app
projects[] = opigno_wt_app

; Opigno themes
projects[] = platon

; Opigno dependencies that need to be patched
; Quiz
projects[quiz][version] = 4.0-beta1
projects[quiz][subdir]  = "contrib"
projects[quiz][patch][] = "http://drupal.org/files/hide_save_button_when_no_rights_2076853.patch"
projects[quiz][patch][] = "http://drupal.org/files/quiz.module.correct_delete_access_1529302.patch"
projects[quiz][patch][] = "http://drupal.org/files/prevent_user_from_clicking_on_question_title_2076873_0.patch"
projects[quiz][patch][] = "http://drupal.org/files/quiz_question.module.og_quiz-integration.patch"
; Og
projects[og][version] = 2.3
projects[og][subdir]  = "contrib"
projects[og][patch][] = "http://drupal.org/files/og_add_role_rules_2076125.patch"
; OG Create Permissions
projects[og_create_perms][version] = 1.0
projects[og_create_perms][subdir]  = "contrib"
projects[og_create_perms][patch][] = "http://drupal.org/files/update_to_og_2.x_api_2077031.patch"

; Third-party modules
projects[admin_menu][subdir] = "contrib"
projects[admin_menu][version] = 3.0-rc4

projects[module_filter][subdir]  = "contrib"
projects[module_filter][version] = 1.8

projects[ctools][subdir]  = "contrib"
projects[ctools][version] = 1.3

projects[views][subdir]  = "contrib"
projects[views][version] = 3.7

projects[views_bulk_operations][subdir]  = "contrib"
projects[views_bulk_operations][version] = 3.1

projects[entity][subdir]  = "contrib"
projects[entity][version] = 1.2

projects[entityreference][subdir]  = "contrib"
projects[entityreference][version] = 1.0

projects[entityreference_prepopulate][subdir]  = "contrib"
projects[entityreference_prepopulate][version] = 1.3

projects[token][subdir]  = "contrib"
projects[token][version] = 1.5

projects[multiselect][subdir]  = "contrib"
projects[multiselect][version] = 1.9

projects[crumbs][subdir]  = "contrib"
projects[crumbs][version] = 2.0-beta9

projects[variable][subdir]  = "contrib"
projects[variable][version] = 2.9

projects[i18n][subdir]  = "contrib"
projects[i18n][version] = 1.10

projects[rules][subdir]  = "contrib"
projects[rules][version] = 2.3

projects[rules_conditional][subdir]  = "contrib"
projects[rules_conditional][version] = 1.0-beta2

projects[apps][subdir]  = "contrib"
projects[apps][version] = 1.0-beta7

projects[features][subdir]  = "contrib"
projects[features][version] = 2.0-rc3

projects[og_massadd][subdir]  = "contrib"
projects[og_massadd][version] = 1.0-beta2

projects[og_quiz][subdir]  = "contrib"
projects[og_quiz][version] = 1.0-beta3

projects[wysiwyg][subdir]  = "contrib"
projects[wysiwyg][version] = 2.2

projects[wysiwyg_template][subdir]  = "contrib"
projects[wysiwyg_template][version] = 2.9

projects[field_group][subdir]  = "contrib"
projects[field_group][version] = 1.2

projects[menu_attributes][subdir]  = "contrib"
projects[menu_attributes][version] = 1.0-rc2


; Third-patry libraries
libraries[ckeditor][download][type] = get
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.3/ckeditor_3.6.3.tar.gz"
libraries[ckeditor][destination] = libraries
libraries[ckeditor][directory_name] = ckeditor
