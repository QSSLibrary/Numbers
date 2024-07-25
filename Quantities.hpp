# ifndef QSSL_QUANTITIES
    /**
     * @file Quantities.hpp
     * @author Ramtin Kosari (ramtinkosari@gmail.com)
     * @brief QSS Open Source Astronomy and Astrophysics Library's Quantities Processing Core
     * @date 2024-07-26
     */
    # define QSSL_QUANTITIES
    //-- Check Necessary Modules if QSSL is Built by QAPB
    # ifdef QAPB
        //-- Check if QSSL Units Configured
        # ifndef HAS_QSSL_MODULE_UNITS
            # error QSSL Units is Required for Quantities
        # endif // HAS_QSSL_MODULE_UNITS
    # endif // QAPB
    //-- Include QSSL Units
    # ifndef QSSL_UNITS
        # include "Units.hpp"
    # endif // QSSL_UNITS
# endif // QSSL_QUANTITIES