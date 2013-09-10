api = 2
core = 7.x


; Opigno modules ===============================================================

;projects[] = opigno


; Opigno themes ================================================================

projects[] = platon


; Opigno dependencies that need to be patched ==================================

; Quiz
projects[quiz][version] = 4.0-beta1
projects[quiz][subdir]  = "contrib"
projects[quiz][patch][] = "http://drupal.org/files/hide_save_button_when_no_rights_2076853.patch"
projects[quiz][patch][] = "http://drupal.org/files/quiz.module.correct_delete_access_1529302.patch"
projects[quiz][patch][] = "http://drupal.org/files/prevent_user_from_clicking_on_question_title_2076873_0.patch"
projects[quiz][patch][] = "http://drupal.org/files/quiz_question.module.og_quiz-integration.patch"

; OG
projects[og][version] = 2.3
projects[og][subdir]  = "contrib"
projects[og][patch][] = "http://drupal.org/files/og_add_role_rules_2076125_0.patch"

; OG Create Permissions
projects[og_create_perms][version] = 1.0
projects[og_create_perms][subdir]  = "contrib"
projects[og_create_perms][patch][] = "http://drupal.org/files/update_to_og_2.x_api_2077031.patch"


; Third-party modules ==========================================================

projects[admin_menu][subdir] = "contrib"
projects[admin_menu][version] = 3.0-rc4

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
projects[variable][version] = 2.3

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

projects[og][subdir]  = "contrib"
projects[og][version] = 1.0-beta3

projects[wysiwyg][subdir]  = "contrib"
projects[wysiwyg][version] = 2.2

projects[wysiwyg_template][subdir]  = "contrib"
projects[wysiwyg_template][version] = 2.9

projects[wysiwyg_filter][subdir]  = "contrib"
projects[wysiwyg_filter][version] = 1.6-rc2

projects[field_group][subdir]  = "contrib"
projects[field_group][version] = 1.2

projects[menu_attributes][subdir]  = "contrib"
projects[menu_attributes][version] = 1.0-rc2

projects[certificate][subdir]  = "contrib"
projects[certificate][version] = 2.0-beta4

projects[print][subdir]  = "contrib"
projects[print][version] = 1.2

projects[date][subdir]  = "contrib"
projects[date][version] = 2.6

projects[date_popup_authored][subdir]  = "contrib"
projects[date_popup_authored][version] = 1.1


; Third-patry libraries ========================================================

libraries[ckeditor][download][type] = get
libraries[ckeditor][download][url]  = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.3/ckeditor_3.6.3.tar.gz"
libraries[ckeditor][destination]    = "libraries"
libraries[ckeditor][directory_name] = "ckeditor"


; Panopoly base distribution ===================================================

; The Panopoly Foundation
projects[panopoly_core][version] = 1.0-rc5
projects[panopoly_core][subdir] = panopoly

projects[panopoly_images][version] = 1.0-rc5
projects[panopoly_images][subdir] = panopoly

projects[panopoly_theme][version] = 1.0-rc5
projects[panopoly_theme][subdir] = panopoly

projects[panopoly_magic][version] = 1.0-rc5
projects[panopoly_magic][subdir] = panopoly

projects[panopoly_widgets][version] = 1.0-rc5
projects[panopoly_widgets][subdir] = panopoly

; We don't want the admin module. We have our own.
;projects[panopoly_admin][version] = 1.0-rc5
;projects[panopoly_admin][subdir] = panopoly

projects[panopoly_users][version] = 1.0-rc5
projects[panopoly_users][subdir] = panopoly

; The Panopoly Toolset
; We don't care about the pages.
;projects[panopoly_pages][version] = 1.0-rc5
;projects[panopoly_pages][subdir] = panopoly

; We have our own WYSIWYG.
;projects[panopoly_wysiwyg][version] = 1.0-r5
;projects[panopoly_wysiwyg][subdir] = panopoly

projects[panopoly_search][version] = 1.0-rc5
projects[panopoly_search][subdir] = panopoly
