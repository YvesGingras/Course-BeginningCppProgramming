//
// Created by Yves Gingras on 18-05-30.
//

#include "ToursFactory.h"

Tours ToursFactory::GetSouthAmericaTours() {

    Tours builtTours {
            "Tour Ticket Prices from Miami",
            {
                    {
                        "Colombia", {
                            { "Bogota", 8778000, 400.98 },
                            { "Cali", 2401000, 424.12 },
                            { "Medellin", 2464000, 350.98 },
                            { "Cartagena", 972000, 345.34 }
                        },
                    },

                    {
                        "Brazil", {
                            { "Rio De Janiero", 13500000, 567.45 },
                            { "Sao Paulo", 11310000, 975.45 },
                            { "Salvador", 18234000, 855.99 }
                        },
                    },

                    {
                        "Chile", {
                            { "Valdivia", 260000, 569.12 },
                            { "Santiago", 7040000, 520.00 }
                        },
                    },

                    {
                        "Argentina", {
                            { "Buenos Aires", 3010000, 723.77 }
                        }
                    }
            }
    };

    return builtTours;
}


