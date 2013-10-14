api = 2
core = 7.x


; Opigno modules ===============================================================
; Drupal.org is very slow at refreshing the update XML feed. This means we often
; have to wait hours after publishing a new Opigno module before being able to
; release a new distribution version. In case of security releases, this is
; unacceptable. Use GIT revision checksums instead of real tags, as drush does
; not require the release XML feed for those.

projects[opigno][version] = 1.0-rc15
projects[opigno][subdir]  = "opigno"

projects[opigno_calendar_app][version] = 1.0-rc2
projects[opigno_calendar_app][subdir]  = "opigno"

projects[opigno_certificate_app][version] = 1.0-rc5
projects[opigno_certificate_app][subdir]  = "opigno"

projects[opigno_forum_app][version] = 1.0-rc2
projects[opigno_forum_app][subdir]  = "opigno"

projects[opigno_messaging_app][version] = 1.0-rc2
projects[opigno_messaging_app][subdir]  = "opigno"

projects[opigno_notifications_app][version] = 1.0-rc3
projects[opigno_notifications_app][subdir]  = "opigno"

projects[opigno_poll_app][type]               = module
projects[opigno_poll_app][subdir]             = "opigno"
projects[opigno_poll_app][download][type]     = git
projects[opigno_poll_app][download][branch]   = "7.x-1.x"
projects[opigno_poll_app][download][url]      = "http://git.drupal.org/project/opigno_poll_app.git"
projects[opigno_poll_app][download][revision] = 6773cbee54072a48186925ebe7fadb09e39e8038

projects[opigno_quiz_import_app][version] = 1.0-rc1
projects[opigno_quiz_import_app][subdir]  = "opigno"

projects[opigno_class_app][type]               = module
projects[opigno_class_app][subdir]             = "opigno"
projects[opigno_class_app][download][type]     = git
projects[opigno_class_app][download][branch]   = "7.x-1.x"
projects[opigno_class_app][download][url]      = "http://git.drupal.org/project/opigno_class_app.git"
projects[opigno_class_app][download][revision] = 8636776f9b6ae4b704d4a66c59041fce3641abd2

projects[opigno_quiz_app][type]               = module
projects[opigno_quiz_app][subdir]             = "opigno"
projects[opigno_quiz_app][download][type]     = git
projects[opigno_quiz_app][download][branch]   = "7.x-1.x"
projects[opigno_quiz_app][download][url]      = "http://git.drupal.org/project/opigno_quiz_app.git"
projects[opigno_quiz_app][download][revision] = ff92e1f08d83f8b4f56058316cc32bcd079b21eb

projects[opigno_wt_app][version] = 1.0-rc3
projects[opigno_wt_app][subdir]  = "opigno"

projects[opigno_course_categories_app][type]               = module
projects[opigno_course_categories_app][subdir]             = "opigno"
projects[opigno_course_categories_app][download][type]     = git
projects[opigno_course_categories_app][download][branch]   = "7.x-1.x"
projects[opigno_course_categories_app][download][url]      = "http://git.drupal.org/project/opigno_course_categories_app.git"
projects[opigno_course_categories_app][download][revision] = 570673b4ec5449b694b4f111741cdc1b7e6fc1c3

projects[tft][type]               = module
projects[tft][subdir]             = "opigno"
projects[tft][download][type]     = git
projects[tft][download][branch]   = "7.x-1.x"
projects[tft][download][url]      = "http://git.drupal.org/sandbox/wadmiraal/2071579.git"
projects[tft][download][revision] = 218f8230bec73c38223ee006d08576f85a554dc4


; Opigno themes ================================================================

projects[platon][type]               = theme
projects[platon][download][type]     = git
projects[platon][download][branch]   = "7.x-1.x"
projects[platon][download][url]      = "http://git.drupal.org/project/platon.git"
projects[platon][download][revision] = c526c059479339c1fd8901459f709fe20918df7d


;projects[open_framework][type] = theme
;projects[open_framework][download][type] = get
;projects[open_framework][download][url] = "https://github.com/SU-SWS/open_framework/archive/7.x-2.04.tar.gz"


; Third-party modules that need to be patched ==================================

; Quiz
projects[quiz][version] = 4.0-beta1
projects[quiz][subdir]  = "contrib"
projects[quiz][patch][] = "http://drupal.org/files/hide_save_button_when_no_rights_2076853.patch"
projects[quiz][patch][] = "http://drupal.org/files/quiz.module.correct_delete_access_1529302.patch"
projects[quiz][patch][] = "http://drupal.org/files/prevent_user_from_clicking_on_question_title_2076873_0.patch"
projects[quiz][patch][] = "http://drupal.org/files/quiz_question.module.og_quiz-integration.patch"
projects[quiz][patch][] = "http://drupal.org/files/QuizQuestion_FileUpload.patch"
projects[quiz][patch][] = "http://drupal.org/files/modify-quiz-to-lesson-in-ui-strings-2101063-1.patch"
projects[quiz][patch][] = "http://drupal.org/files/add_plural_quiz_name-937430-8.patch"

; Quiz File Upload
projects[quizfileupload][version] = 1.0
projects[quizfileupload][subdir]  = "contrib"
projects[quizfileupload][patch][] = "http://drupal.org/files/adding_manual_scoring_extension_validation_feedback-2092275-5.patch"

; OG
projects[og][version] = 2.3
projects[og][subdir]  = "contrib"
projects[og][patch][] = "http://drupal.org/files/og_add_role_rules_2076125_1.patch"
projects[og][patch][] = "http://drupal.org/files/og_ui.block_subscribtion_programatically-2032775.patch"

; OG Create Permissions
projects[og_create_perms][version] = 1.0
projects[og_create_perms][subdir]  = "contrib"
projects[og_create_perms][patch][] = "http://drupal.org/files/update_to_og2.x_api-2077031-2.patch"

; OG forum
projects[og_forum_D7][version] = 2.0-alpha1
projects[og_forum_D7][subdir]  = "contrib"
projects[og_forum_D7][patch][] = "http://drupal.org/files/fix-forum-access-1844104-2.patch"
projects[og_forum_D7][patch][] = "https://drupal.org/files/og_forum_D7-change-group_audience_to_gid-1802208.patch"

; Calendar (prevent warnings)
projects[calendar][subdir]  = "contrib"
projects[calendar][version] = 3.4
projects[calendar][patch][] = "http://drupal.org/files/calendar-php54-1471400-58.patch"

; Rules
projects[rules][subdir]  = "contrib"
projects[rules][version] = 2.3
projects[rules][patch][] = "http://drupal.org/files/system.rules_.inc_.patch"

; Apps
projects[apps][subdir]  = "contrib"
projects[apps][version] = 1.0-beta7
projects[apps][patch][] = "http://drupal.org/files/correct_pdo_error-12-1830680.patch"


; Third-party modules ==========================================================

projects[admin_menu][subdir] = "contrib"
projects[admin_menu][version] = 3.0-rc4

projects[devel][subdir] = "contrib"
projects[devel][version] = 1.3

projects[ctools][subdir] = "contrib"
projects[ctools][version] = 1.3

projects[views][subdir] = "contrib"
projects[views][version] = 3.7

projects[defaultconfig][subdir] = "contrib"
projects[defaultconfig][version] = 1.0-alpha9

projects[module_filter][subdir]  = "contrib"
projects[module_filter][version] = 1.8

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

projects[rules_conditional][subdir]  = "contrib"
projects[rules_conditional][version] = 1.0-beta2

projects[features][subdir]  = "contrib"
projects[features][version] = 2.0-rc5

projects[og_massadd][subdir]  = "contrib"
projects[og_massadd][version] = 1.0-beta2

projects[og_quiz][subdir]  = "contrib"
projects[og_quiz][version] = 1.0-beta6

projects[wysiwyg][subdir]  = "contrib"
projects[wysiwyg][version] = 2.2

projects[wysiwyg_template][subdir]  = "contrib"
projects[wysiwyg_template][version] = 2.9

projects[wysiwyg_filter][subdir]  = "contrib"
projects[wysiwyg_filter][version] = 1.6-rc2

projects[imce][subdir]  = "contrib"
projects[imce][version] = 1.7

projects[imce_wysiwyg][subdir]  = "contrib"
projects[imce_wysiwyg][version] = 1.0

projects[field_group][subdir]  = "contrib"
projects[field_group][version] = 1.3

projects[menu_attributes][subdir]  = "contrib"
projects[menu_attributes][version] = 1.0-rc2

projects[certificate][subdir]  = "contrib"
projects[certificate][version] = 2.0-beta4

projects[print][subdir]  = "contrib"
projects[print][version] = 1.2

projects[date][subdir]  = "contrib"
projects[date][version] = 2.6

projects[advanced_forum][subdir]  = "contrib"
projects[advanced_forum][version] = 2.3

projects[date_popup_authored][subdir]  = "contrib"
projects[date_popup_authored][version] = 1.1

projects[privatemsg][subdir]  = "contrib"
projects[privatemsg][version] = 1.4

projects[phpexcel][subdir]  = "contrib"
projects[phpexcel][version] = 3.7

projects[login_redirect][subdir]  = "contrib"
projects[login_redirect][version] = 1.1

projects[homebox][subdir]  = "contrib"
projects[homebox][version] = 2.0-beta6

projects[views_bulk_operations][subdir]  = "contrib"
projects[views_bulk_operations][version] = 3.1

projects[libraries][subdir]  = "contrib"
projects[libraries][version] = 2.1

projects[pathauto][subdir]  = "contrib"
projects[pathauto][version] = 1.2

projects[strongarm][subdir]  = "contrib"
projects[strongarm][version] = 2.0

projects[file_entity][subdir]  = "contrib"
projects[file_entity][version] = 2.0-alpha2

projects[user_import][subdir]  = "contrib"
projects[user_import][version] = 2.1


; For dev phase (disable on production) ========================================

projects[drupal_reset][subdir]  = "contrib"
projects[drupal_reset][version] = 1.3


; Third-patry libraries ========================================================

libraries[CKEditor][download][type] = get
libraries[CKEditor][download][url]  = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.3/ckeditor_3.6.3.tar.gz"
libraries[CKEditor][destination]    = "libraries"
libraries[CKEditor][directory_name] = "ckeditor"

libraries[DOMPDF][download][type] = get
libraries[DOMPDF][download][url]  = "http://dompdf.googlecode.com/files/dompdf_0-6-0_beta3.tar.gz"
libraries[DOMPDF][destination]    = "libraries"
libraries[DOMPDF][directory_name] = "dompdf"

libraries[PHPExcel][download][type] = "get"
libraries[PHPExcel][download][url]  = "https://github.com/PHPOffice/PHPExcel/archive/1.7.9.tar.gz"
libraries[PHPExcel][destination]    = "libraries"
libraries[PHPExcel][directory_name] = "PHPExcel"
libraries[PHPExcel][patch][]        = "http://drupal.org/files/changelog_version_number-1908282-3.patch"


; Panopoly base distribution ===================================================

; The Panopoly Foundation
;projects[panopoly_core][version] = 1.0-rc5
;projects[panopoly_core][subdir] = panopoly

;projects[panopoly_images][version] = 1.0-rc5
;projects[panopoly_images][subdir] = panopoly

;projects[panopoly_theme][version] = 1.0-rc5
;projects[panopoly_theme][subdir] = panopoly

;projects[panopoly_magic][version] = 1.0-rc5
;projects[panopoly_magic][subdir] = panopoly

;projects[panopoly_widgets][version] = 1.0-rc5
;projects[panopoly_widgets][subdir] = panopoly

; We don't want the admin module. We have our own.
;projects[panopoly_admin][version] = 1.0-rc5
;projects[panopoly_admin][subdir] = panopoly

;projects[panopoly_users][version] = 1.0-rc5
;projects[panopoly_users][subdir] = panopoly

; The Panopoly Toolset
; We don't care about the pages.
;projects[panopoly_pages][version] = 1.0-rc5
;projects[panopoly_pages][subdir] = panopoly

; We have our own WYSIWYG.
;projects[panopoly_wysiwyg][version] = 1.0-r5
;projects[panopoly_wysiwyg][subdir] = panopoly

;projects[panopoly_search][version] = 1.0-rc5
;projects[panopoly_search][subdir] = panopoly
