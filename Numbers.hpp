# ifndef QSSL_NUMBERS
    /**
     * @file Numbers.hpp
     * @author Ramtin Kosari (ramtinkosari@gmail.com)
     * @brief QSS Open Source Astronomy and Astrophysics Library's Numbers Processing Core
     * @date 2024-07-24
     */
    # define QSSL_NUMBERS
    //-- Check if Necessary Modules are Included
    # ifdef QAPB
        //-- Check if QSSL Units Configured
        # ifndef HAS_QSSL_MODULE_UNITS
            # error QSSL Units is Required for Numbers
        # endif // HAS_QSSL_MODULE_UNITS
    # endif // QAPB
    //-- Include QSSL Units
    # ifndef QSSL_UNITS
        # include "Units.hpp"
    # endif // QSSL_UNITS
# endif // QSSL_NUMBERS