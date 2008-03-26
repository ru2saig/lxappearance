/*
 * Initial main.c file generated by Glade. Edit as required.
 * Glade will not overwrite this file.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>
#include <string.h>

#include "main-dlg-ui.h"
#include "demo.h"
#include "glade-support.h"

int main (int argc, char *argv[])
{
    GtkWidget *dlg;

#ifdef ENABLE_NLS
    bindtextdomain (GETTEXT_PACKAGE, PACKAGE_LOCALE_DIR);
    bind_textdomain_codeset (GETTEXT_PACKAGE, "UTF-8");
    textdomain (GETTEXT_PACKAGE);
#endif

    gtk_set_locale ();
    gtk_init (&argc, &argv);

    if( argc >= 3 && strcmp( argv[1], "demo" ) == 0 )
    {
        show_demo( (GdkNativeWindow)atoi( argv[2] ) );
        gtk_main();
        return 0;
    }

    dlg = create_dlg ();
    main_dlg_init( dlg );
    gtk_widget_show (dlg);

    gtk_main ();
    return 0;
}

