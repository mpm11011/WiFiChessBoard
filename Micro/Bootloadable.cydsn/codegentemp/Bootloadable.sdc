# THIS FILE IS AUTOMATICALLY GENERATED
# Project: E:\Projects\WiFiChessBoard\Micro\Bootloadable.cydsn\Bootloadable.cyprj
# Date: Mon, 18 Apr 2016 19:51:10 GMT
#set_units -time ns
create_clock -name {CyILO} -period 1000000 -waveform {0 500000} [list [get_pins {ClockBlock/ilo}] [get_pins {ClockBlock/clk_100k}] [get_pins {ClockBlock/clk_1k}] [get_pins {ClockBlock/clk_32k}]]
create_clock -name {CyIMO} -period 333.33333333333331 -waveform {0 166.666666666667} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyPLL_OUT} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/pllout}]]
create_clock -name {CyMASTER_CLK} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/clk_sync}]]
create_generated_clock -name {CyBUS_CLK} -source [get_pins {ClockBlock/clk_sync}] -edges {1 2 3} [list [get_pins {ClockBlock/clk_bus_glb}]]
create_generated_clock -name {Esp_UART_IntClock} -source [get_pins {ClockBlock/clk_sync}] -edges {1 53 105} -nominal_period 1083.3333333333333 [list [get_pins {ClockBlock/dclk_glb_0}]]
create_generated_clock -name {Debug_UART_IntClock} -source [get_pins {ClockBlock/clk_sync}] -edges {1 53 105} -nominal_period 1083.3333333333333 [list [get_pins {ClockBlock/dclk_glb_1}]]


# Component constraints for E:\Projects\WiFiChessBoard\Micro\Bootloadable.cydsn\TopDesign\TopDesign.cysch
# Project: E:\Projects\WiFiChessBoard\Micro\Bootloadable.cydsn\Bootloadable.cyprj
# Date: Mon, 18 Apr 2016 19:51:02 GMT
