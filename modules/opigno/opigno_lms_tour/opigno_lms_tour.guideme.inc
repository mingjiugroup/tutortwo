<?php

/**
 * @file
 * Defines the different Guideme tours.
 */

/**
 * Implements hook_guideme_path().
 */
function opigno_lms_tour_guideme_path() {
  return array(
    'opigno_lms_intro' => array(
      'weight' => -100,
      'steps' => array(
        '<front>' => array(
          array(
            'title' => t("Welcome !"),
            'description' => t("Welcome to Opigno LMS! We will show you around and help you get started working with this amazing tool. If you want to start exploring by yourself and dismiss this guide, just click on the 'x' icon in the top right corner."),
          ),
          array(
            'title' => t("This is the dashboard"),
            'description' => t("Opigno provides a custom dashboard for each user. Here you can add or remove blocks, drag them around, etc. Give it a try."),
            'target' => '#homebox',
            'options' => array(
              'tooltip_location' => 'top',
            ),
          ),
          array(
            'title' => t("This is the main navigation"),
            'description' => t("Here you can quickly jump to the main parts of Opigno. Lets start with the course catalogue. Click on 'Course catalogue'."),
            'target' => '#main-navigation-item-training-catalogue',
            'button_label' => t("Done"),
          ),
        ),
        'course-catalogue' => array(
          array(
            'title' => t("This is the course catalogue"),
            'description' => t("Here you can see all courses you are <strong>not</strong> already a part of. If the courses are assigned one or more categories, you can filter using the drop-down. However, you probably have no courses yet. Lets create one."),
          ),
          array(
            'title' => t("Go to the administration"),
            'description' => t("Click here to enter the administration part."),
            'target' => '#main-navigation-item-administration',
            'button_label' => t("Done"),
            'options' => array(
              'tooltip_location' => 'right',
            ),
          ),
        ),
        'admin/opigno' => array(
          array(
            'title' => t("This is the Opigno administration"),
            'description' => t("This is where you can administer all aspects of Opigno."),
          ),
          array(
            'title' => t("Go to the course administration"),
            'description' => t("Click here to go to the course administration."),
            'target' => 'a[href="' . base_path() . 'admin/opigno/content/course-administration"]',
            'button_label' => t("Done"),
            'options' => array(
              'tooltip_location' => 'left',
            ),
          ),
        ),
        'admin/opigno/content/course-administration' => array(
          array(
            'title' => t("This is the Opigno course administration"),
            'description' => t("This is where you can administer all Opigno courses."),
          ),
          array(
            'title' => t("Add a new course"),
            'description' => t("Click here to create a new course."),
            'target' => '.action-links .add-course',
            'button_label' => t("Done"),
            'options' => array(
              'tooltip_location' => 'bottom',
            ),
          ),
        ),
        'node/add/course' => array(
          array(
            'title' => t("Here you can create your course"),
            'description' => t("Start by giving it a title."),
            'target' => 'input[name="title"]',
            'options' => array(
              'tooltip_location' => 'top',
            ),
          ),
          array(
            'title' => t("Give it a description"),
            'description' => t("A description helps students understand what the course is about."),
            'target' => '#edit-body',
            'options' => array(
              'tooltip_location' => 'top',
            ),
          ),
          array(
            'title' => t("Choose this course availability"),
            'description' => t("A public course can be viewed by anyone. A private course can only be viewed by its members. Note that it is possible to have a <em>public</em> course, but <em>private</em> course content. Mix and match as you see fit."),
            'target' => '#edit-group-access-und-0',
            'options' => array(
              'tooltip_location' => 'right',
            ),
          ),
          array(
            'title' => t("Choose this course tools"),
            'description' => t("This field allows you to choose which tools are available for this course. You can change this setting later as well."),
            'target' => 'edit-opigno-course-tools-und',
            'options' => array(
              'tooltip_location' => 'right',
            ),
          ),
          array(
            'title' => t("Save the course"),
            'description' => t("There are many more options, but you can explore them later. Let's save it."),
            'target' => 'edit-submit',
            'options' => array(
              'tooltip_location' => 'right',
            ),
          ),
          array(
            'title' => t("Add a new course"),
            'description' => t("Click here to create a new course."),
            'target' => '.action-links .add-course',
            'button_label' => t("Done"),
            'options' => array(
              'tooltip_location' => 'bottom',
            ),
          ),
        ),
      ),
    ),
  );
}
