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
        //-- Check if QSSL Quantities Configured
        # ifndef HAS_QSSL_MODULE_QUANTITIES
            # error QSSL Quantities is Required for Numbers
        # endif // HAS_QSSL_MODULE_QUANTITIES
        //-- Check if QSSL Constants Configured
        # ifndef HAS_QSSL_MODULE_CONSTANTS
            # error QSSL Constants is Required for Numbers
        # endif // HAS_QSSL_MODULE_CONSTANTS
        //-- Check if QSSL Units Configured
        # ifndef HAS_QSSL_MODULE_UNITS
            # error QSSL Units is Required for Numbers
        # endif // HAS_QSSL_MODULE_UNITS
    # endif // QAPB
    # ifndef QSSL_QUANTITIES
        # include "Quantities.hpp"
    # endif // QSSL_QUANTITIES
    //-- Include QSSL Constants
    # ifndef QSSL_CONSTANTS
        # include "Constants.hpp"
    # endif // QSSL_CONSTANTS
    //-- Include QSSL Units
    # ifndef QSSL_UNITS
        # include "Units.hpp"
    # endif // QSSL_UNITS
    //-- Include QSSL Quantities
# endif // QSSL_NUMBERS