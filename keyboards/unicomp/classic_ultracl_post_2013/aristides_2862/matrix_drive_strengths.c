/* Copyright 2023 Purdea Andrei
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <hardware/gpio.h>
#include <hardware/structs/pads_qspi.h>

void matrix_init_custom_configure_drive_strengths(void) {
    for (int gpio=0;gpio<NUM_BANK0_GPIOS;gpio++) {
        gpio_set_drive_strength(gpio, GPIO_DRIVE_STRENGTH_2MA);
    }

    for (int gpio=0;gpio<NUM_QSPI_GPIOS;gpio++) {
        pads_qspi_hw->io[gpio] &= ~((3 << 4) | (1 << 0));
    }
}
