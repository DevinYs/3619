/*
* register definition: don't edit
* ATS361X REG Version_V1.9
* 2023-12-22
*/
#ifndef __ATS361X_REG_H___
#define __ATS361X_REG_H___

//--------------MEMCTL-------------------------------------------//
//--------------Register Address---------------------------------------//
#define     MEMCTL_BASE                                                       0x50008500
#define     MEM_CTRL                                                          (MEMCTL_BASE+0x00)
#define     MEM_SW                                                            (MEMCTL_BASE+0x08)

#define     MEM_SW_RAM3_SW                                                    3
#define     MEM_SW_RAM2_SW                                                    2
#define     MEM_SW_RAM1_SW                                                    1
#define     MEM_SW_RAM0_SW                                                    0

//--------------DMACTL-------------------------------------------//
//--------------Register Address---------------------------------------//
#define     DMACTL_BASE                                                       0x50010000
#define     DMAIP                                                             (DMACTL_BASE+0x00000000)
#define     DMAIE                                                             (DMACTL_BASE+0x00000004)
#define     DMA0CTL                                                           (DMACTL_BASE+0x00000100)
#define     DMA0START                                                         (DMACTL_BASE+0x00000104)
#define     DMA0SADDR0                                                        (DMACTL_BASE+0x00000108)
#define     DMA0SADDR1                                                        (DMACTL_BASE+0x0000010C)
#define     DMA0DADDR0                                                        (DMACTL_BASE+0x00000110)
#define     DMA0DADDR1                                                        (DMACTL_BASE+0x00000114)
#define     DMA0BC                                                            (DMACTL_BASE+0x00000118)
#define     DMA0RC                                                            (DMACTL_BASE+0x0000011c)
#define     DMA1CTL                                                           (DMACTL_BASE+0x00000200)
#define     DMA1START                                                         (DMACTL_BASE+0x00000204)
#define     DMA1SADDR0                                                        (DMACTL_BASE+0x00000208)
#define     DMA1SADDR1                                                        (DMACTL_BASE+0x0000020c)
#define     DMA1DADDR0                                                        (DMACTL_BASE+0x00000210)
#define     DMA1DADDR1                                                        (DMACTL_BASE+0x00000214)
#define     DMA1BC                                                            (DMACTL_BASE+0x00000218)
#define     DMA1RC                                                            (DMACTL_BASE+0x0000021c)
#define     DMA2CTL                                                           (DMACTL_BASE+0x00000300)
#define     DMA2START                                                         (DMACTL_BASE+0x00000304)
#define     DMA2SADDR0                                                        (DMACTL_BASE+0x00000308)
#define     DMA2SADDR1                                                        (DMACTL_BASE+0x0000030c)
#define     DMA2DADDR0                                                        (DMACTL_BASE+0x00000310)
#define     DMA2DADDR1                                                        (DMACTL_BASE+0x00000314)
#define     DMA2BC                                                            (DMACTL_BASE+0x00000318)
#define     DMA2RC                                                            (DMACTL_BASE+0x0000031c)
#define     DMA3CTL                                                           (DMACTL_BASE+0x00000400)
#define     DMA3START                                                         (DMACTL_BASE+0x00000404)
#define     DMA3SADDR0                                                        (DMACTL_BASE+0x00000408)
#define     DMA3SADDR1                                                        (DMACTL_BASE+0x0000040c)
#define     DMA3DADDR0                                                        (DMACTL_BASE+0x00000410)
#define     DMA3DADDR1                                                        (DMACTL_BASE+0x00000414)
#define     DMA3BC                                                            (DMACTL_BASE+0x00000418)
#define     DMA3RC                                                            (DMACTL_BASE+0x0000041c)
#define     DMA4CTL                                                           (DMACTL_BASE+0x00000500)
#define     DMA4START                                                         (DMACTL_BASE+0x00000504)
#define     DMA4SADDR0                                                        (DMACTL_BASE+0x00000508)
#define     DMA4SADDR1                                                        (DMACTL_BASE+0x0000050c)
#define     DMA4DADDR0                                                        (DMACTL_BASE+0x00000510)
#define     DMA4DADDR1                                                        (DMACTL_BASE+0x00000514)
#define     DMA4BC                                                            (DMACTL_BASE+0x00000518)
#define     DMA4RC                                                            (DMACTL_BASE+0x0000051c)
#define     DMA5CTL                                                           (DMACTL_BASE+0x00000600)
#define     DMA5START                                                         (DMACTL_BASE+0x00000604)
#define     DMA5SADDR0                                                        (DMACTL_BASE+0x00000608)
#define     DMA5SADDR1                                                        (DMACTL_BASE+0x0000060c)
#define     DMA5DADDR0                                                        (DMACTL_BASE+0x00000610)
#define     DMA5DADDR1                                                        (DMACTL_BASE+0x00000614)
#define     DMA5BC                                                            (DMACTL_BASE+0x00000618)
#define     DMA5RC                                                            (DMACTL_BASE+0x0000061c)
#define     DMA6CTL                                                           (DMACTL_BASE+0x00000700)
#define     DMA6START                                                         (DMACTL_BASE+0x00000704)
#define     DMA6SADDR0                                                        (DMACTL_BASE+0x00000708)
#define     DMA6SADDR1                                                        (DMACTL_BASE+0x0000070c)
#define     DMA6DADDR0                                                        (DMACTL_BASE+0x00000710)
#define     DMA6DADDR1                                                        (DMACTL_BASE+0x00000714)
#define     DMA6BC                                                            (DMACTL_BASE+0x00000718)
#define     DMA6RC                                                            (DMACTL_BASE+0x0000071c)
#define     DMA7CTL                                                           (DMACTL_BASE+0x00000800)
#define     DMA7START                                                         (DMACTL_BASE+0x00000804)
#define     DMA7SADDR0                                                        (DMACTL_BASE+0x00000808)
#define     DMA7SADDR1                                                        (DMACTL_BASE+0x0000080c)
#define     DMA7DADDR0                                                        (DMACTL_BASE+0x00000810)
#define     DMA7DADDR1                                                        (DMACTL_BASE+0x00000814)
#define     DMA7BC                                                            (DMACTL_BASE+0x00000818)
#define     DMA7RC                                                            (DMACTL_BASE+0x0000081c)
#define     DMA8CTL                                                           (DMACTL_BASE+0x00000900)
#define     DMA8START                                                         (DMACTL_BASE+0x00000904)
#define     DMA8SADDR0                                                        (DMACTL_BASE+0x00000908)
#define     DMA8SADDR1                                                        (DMACTL_BASE+0x0000090c)
#define     DMA8DADDR0                                                        (DMACTL_BASE+0x00000910)
#define     DMA8DADDR1                                                        (DMACTL_BASE+0x00000914)
#define     DMA8BC                                                            (DMACTL_BASE+0x00000918)
#define     DMA8RC                                                            (DMACTL_BASE+0x0000091c)
#define     DMA9CTL                                                           (DMACTL_BASE+0x00000a00)
#define     DMA9START                                                         (DMACTL_BASE+0x00000a04)
#define     DMA9SADDR0                                                        (DMACTL_BASE+0x00000a08)
#define     DMA9SADDR1                                                        (DMACTL_BASE+0x00000a0c)
#define     DMA9DADDR0                                                        (DMACTL_BASE+0x00000a10)
#define     DMA9DADDR1                                                        (DMACTL_BASE+0x00000a14)
#define     DMA9BC                                                            (DMACTL_BASE+0x00000a18)
#define     DMA9RC                                                            (DMACTL_BASE+0x00000a1c)
#define     DMA10CTL                                                          (DMACTL_BASE+0x00000b00)
#define     DMA10START                                                        (DMACTL_BASE+0x00000b04)
#define     DMA10SADDR0                                                       (DMACTL_BASE+0x00000b08)
#define     DMA10SADDR1                                                       (DMACTL_BASE+0x00000b0C)
#define     DMA10DADDR0                                                       (DMACTL_BASE+0x00000b10)
#define     DMA10DADDR1                                                       (DMACTL_BASE+0x00000b14)
#define     DMA10BC                                                           (DMACTL_BASE+0x00000b18)
#define     DMA10RC                                                           (DMACTL_BASE+0x00000b1c)
#define     DMA11CTL                                                          (DMACTL_BASE+0x00000c00)
#define     DMA11START                                                        (DMACTL_BASE+0x00000c04)
#define     DMA11SADDR0                                                       (DMACTL_BASE+0x00000c08)
#define     DMA11SADDR1                                                       (DMACTL_BASE+0x00000c0c)
#define     DMA11DADDR0                                                       (DMACTL_BASE+0x00000c10)
#define     DMA11DADDR1                                                       (DMACTL_BASE+0x00000c14)
#define     DMA11BC                                                           (DMACTL_BASE+0x00000c18)
#define     DMA11RC                                                           (DMACTL_BASE+0x00000c1c)
#define     DMA12CTL                                                          (DMACTL_BASE+0x00000d00)
#define     DMA12START                                                        (DMACTL_BASE+0x00000d04)
#define     DMA12SADDR0                                                       (DMACTL_BASE+0x00000d08)
#define     DMA12SADDR1                                                       (DMACTL_BASE+0x00000d0c)
#define     DMA12DADDR0                                                       (DMACTL_BASE+0x00000d10)
#define     DMA12DADDR1                                                       (DMACTL_BASE+0x00000d14)
#define     DMA12BC                                                           (DMACTL_BASE+0x00000d18)
#define     DMA12RC                                                           (DMACTL_BASE+0x00000d1c)
#define     DMA13CTL                                                          (DMACTL_BASE+0x00000e00)
#define     DMA13START                                                        (DMACTL_BASE+0x00000e04)
#define     DMA13SADDR0                                                       (DMACTL_BASE+0x00000e08)
#define     DMA13SADDR1                                                       (DMACTL_BASE+0x00000e0c)
#define     DMA13DADDR0                                                       (DMACTL_BASE+0x00000e10)
#define     DMA13DADDR1                                                       (DMACTL_BASE+0x00000e14)
#define     DMA13BC                                                           (DMACTL_BASE+0x00000e18)
#define     DMA13RC                                                           (DMACTL_BASE+0x00000e1c)
#define     DMA14CTL                                                          (DMACTL_BASE+0x00000f00)
#define     DMA14START                                                        (DMACTL_BASE+0x00000f04)
#define     DMA14SADDR0                                                       (DMACTL_BASE+0x00000f08)
#define     DMA14SADDR1                                                       (DMACTL_BASE+0x00000f0c)
#define     DMA14DADDR0                                                       (DMACTL_BASE+0x00000f10)
#define     DMA14DADDR1                                                       (DMACTL_BASE+0x00000f14)
#define     DMA14BC                                                           (DMACTL_BASE+0x00000f18)
#define     DMA14RC                                                           (DMACTL_BASE+0x00000f1c)
#define     DMA15CTL                                                          (DMACTL_BASE+0x00001000)
#define     DMA15START                                                        (DMACTL_BASE+0x00001004)
#define     DMA15SADDR0                                                       (DMACTL_BASE+0x00001008)
#define     DMA15SADDR1                                                       (DMACTL_BASE+0x0000100c)
#define     DMA15DADDR0                                                       (DMACTL_BASE+0x00001010)
#define     DMA15DADDR1                                                       (DMACTL_BASE+0x00001014)
#define     DMA15BC                                                           (DMACTL_BASE+0x00001018)
#define     DMA15RC                                                           (DMACTL_BASE+0x0000101c)

//--------------Bits Location------------------------------------------//
#define     DMAIP_DMA15HFIP                                                   31
#define     DMAIP_DMA14HFIP                                                   30
#define     DMAIP_DMA13HFIP                                                   29
#define     DMAIP_DMA12HFIP                                                   28
#define     DMAIP_DMA11HFIP                                                   27
#define     DMAIP_DMA10HFIP                                                   26
#define     DMAIP_DMA9HFIP                                                    25
#define     DMAIP_DMA8HFIP                                                    24
#define     DMAIP_DMA7HFIP                                                    23
#define     DMAIP_DMA6HFIP                                                    22
#define     DMAIP_DMA5HFIP                                                    21
#define     DMAIP_DMA4HFIP                                                    20
#define     DMAIP_DMA3HFIP                                                    19
#define     DMAIP_DMA2HFIP                                                    18
#define     DMAIP_DMA1HFIP                                                    17
#define     DMAIP_DMA0HFIP                                                    16
#define     DMAIP_DMA15TCIP                                                   15
#define     DMAIP_DMA14TCIP                                                   14
#define     DMAIP_DMA13TCIP                                                   13
#define     DMAIP_DMA12TCIP                                                   12
#define     DMAIP_DMA11TCIP                                                   11
#define     DMAIP_DMA10TCIP                                                   10
#define     DMAIP_DMA9TCIP                                                    9
#define     DMAIP_DMA8TCIP                                                    8
#define     DMAIP_DMA7TCIP                                                    7
#define     DMAIP_DMA6TCIP                                                    6
#define     DMAIP_DMA5TCIP                                                    5
#define     DMAIP_DMA4TCIP                                                    4
#define     DMAIP_DMA3TCIP                                                    3
#define     DMAIP_DMA2TCIP                                                    2
#define     DMAIP_DMA1TCIP                                                    1
#define     DMAIP_DMA0TCIP                                                    0

#define     DMAIE_DMA15FIE                                                    31
#define     DMAIE_DMA14FIE                                                    30
#define     DMAIE_DMA13FIE                                                    29
#define     DMAIE_DMA12FIE                                                    28
#define     DMAIE_DMA11FIE                                                    27
#define     DMAIE_DMA10FIE                                                    26
#define     DMAIE_DMA9FIE                                                     25
#define     DMAIE_DMA8FIE                                                     24
#define     DMAIE_DMA7HFIE                                                    23
#define     DMAIE_DMA6HFIE                                                    22
#define     DMAIE_DMA5HFIE                                                    21
#define     DMAIE_DMA4HFIE                                                    20
#define     DMAIE_DMA3HFIE                                                    19
#define     DMAIE_DMA2HFIE                                                    18
#define     DMAIE_DMA1HFIE                                                    17
#define     DMAIE_DMA0HFIE                                                    16
#define     DMAIE_DMA15CIE                                                    15
#define     DMAIE_DMA14CIE                                                    14
#define     DMAIE_DMA13CIE                                                    13
#define     DMAIE_DMA12CIE                                                    12
#define     DMAIE_DMA11CIE                                                    11
#define     DMAIE_DMA10CIE                                                    10
#define     DMAIE_DMA9CIE                                                     9
#define     DMAIE_DMA8CIE                                                     8
#define     DMAIE_DMA7TCIE                                                    7
#define     DMAIE_DMA6TCIE                                                    6
#define     DMAIE_DMA5TCIE                                                    5
#define     DMAIE_DMA4TCIE                                                    4
#define     DMAIE_DMA3TCIE                                                    3
#define     DMAIE_DMA2TCIE                                                    2
#define     DMAIE_DMA1TCIE                                                    1
#define     DMAIE_DMA0TCIE                                                    0

#define     DMA0CTL_TWS_E                                                     21
#define     DMA0CTL_TWS_SHIFT                                                 20
#define     DMA0CTL_TWS_MASK                                                  (0x3<<20)
#define     DMA0CTL_RELOAD                                                    18
#define     DMA0CTL_TRM                                                       17
#define     DMA0CTL_AUDIOTYPE                                                 16
#define     DMA0CTL_DAM                                                       15
#define     DMA0CTL_DSTSL_E                                                   12
#define     DMA0CTL_DSTSL_SHIFT                                               8
#define     DMA0CTL_DSTSL_MASK                                                (0x1F<<8)
#define     DMA0CTL_SAM                                                       7
#define     DMA0CTL_SRCSL_E                                                   4
#define     DMA0CTL_SRCSL_SHIFT                                               0
#define     DMA0CTL_SRCSL_MASK                                                (0x1F<<0)

#define     DMA0START_DMASTART                                                0

#define     DMA0SADDR0_DMASADDR_E                                             31
#define     DMA0SADDR0_DMASADDR_SHIFT                                         0
#define     DMA0SADDR0_DMASADDR_MASK                                          (0xFFFFFFFF<<0)

#define     DMA0SADDR1_DMASADDR_E                                             31
#define     DMA0SADDR1_DMASADDR_SHIFT                                         0
#define     DMA0SADDR1_DMASADDR_MASK                                          (0xFFFFFFFF<<0)

#define     DMA0DADDR0_DMADADDR_E                                             31
#define     DMA0DADDR0_DMADADDR_SHIFT                                         0
#define     DMA0DADDR0_DMADADDR_MASK                                          (0xFFFFFFFF<<0)

#define     DMA0DADDR1_DMADADDR_E                                             31
#define     DMA0DADDR1_DMADADDR_SHIFT                                         0
#define     DMA0DADDR1_DMADADDR_MASK                                          (0xFFFFFFFF<<0)

#define     DMA0BC_DMABYTECOUNTER_E                                           19
#define     DMA0BC_DMABYTECOUNTER_SHIFT                                       0
#define     DMA0BC_DMABYTECOUNTER_MASK                                        (0xFFFFF<<0)

#define     DMA0RC_DMAREMAINCOUNTER_E                                         19
#define     DMA0RC_DMAREMAINCOUNTER_SHIFT                                     0
#define     DMA0RC_DMAREMAINCOUNTER_MASK                                      (0xFFFFF<<0)

#define     DMA1CTL_TWS_E                                                     21
#define     DMA1CTL_TWS_SHIFT                                                 20
#define     DMA1CTL_TWS_MASK                                                  (0x3<<20)
#define     DMA1CTL_RELOAD                                                    18
#define     DMA1CTL_TRM                                                       17
#define     DMA1CTL_AUDIOTYPE                                                 16
#define     DMA1CTL_DAM                                                       15
#define     DMA1CTL_DSTSL_E                                                   12
#define     DMA1CTL_DSTSL_SHIFT                                               8
#define     DMA1CTL_DSTSL_MASK                                                (0x1F<<8)
#define     DMA1CTL_SAM                                                       7
#define     DMA1CTL_SRCSL_E                                                   4
#define     DMA1CTL_SRCSL_SHIFT                                               0
#define     DMA1CTL_SRCSL_MASK                                                (0x1F<<0)

#define     DMA1START_DMASTART                                                0

#define     DMA1SADDR0_DMASADDR_E                                             31
#define     DMA1SADDR0_DMASADDR_SHIFT                                         0
#define     DMA1SADDR0_DMASADDR_MASK                                          (0xFFFFFFFF<<0)

#define     DMA1SADDR1_DMASADDR_E                                             31
#define     DMA1SADDR1_DMASADDR_SHIFT                                         0
#define     DMA1SADDR1_DMASADDR_MASK                                          (0xFFFFFFFF<<0)

#define     DMA1DADDR0_DMADADDR_E                                             31
#define     DMA1DADDR0_DMADADDR_SHIFT                                         0
#define     DMA1DADDR0_DMADADDR_MASK                                          (0xFFFFFFFF<<0)

#define     DMA1DADDR1_DMADADDR_E                                             31
#define     DMA1DADDR1_DMADADDR_SHIFT                                         0
#define     DMA1DADDR1_DMADADDR_MASK                                          (0xFFFFFFFF<<0)

#define     DMA1BC_DMABYTECOUNTER_E                                           19
#define     DMA1BC_DMABYTECOUNTER_SHIFT                                       0
#define     DMA1BC_DMABYTECOUNTER_MASK                                        (0xFFFFF<<0)

#define     DMA1RC_DMAREMAINCOUNTER_E                                         19
#define     DMA1RC_DMAREMAINCOUNTER_SHIFT                                     0
#define     DMA1RC_DMAREMAINCOUNTER_MASK                                      (0xFFFFF<<0)

#define     DMA2CTL_TWS_E                                                     21
#define     DMA2CTL_TWS_SHIFT                                                 20
#define     DMA2CTL_TWS_MASK                                                  (0x3<<20)
#define     DMA2CTL_RELOAD                                                    18
#define     DMA2CTL_TRM                                                       17
#define     DMA2CTL_AUDIOTYPE                                                 16
#define     DMA2CTL_DAM                                                       15
#define     DMA2CTL_DSTSL_E                                                   12
#define     DMA2CTL_DSTSL_SHIFT                                               8
#define     DMA2CTL_DSTSL_MASK                                                (0x1F<<8)
#define     DMA2CTL_SAM                                                       7
#define     DMA2CTL_SRCSL_E                                                   4
#define     DMA2CTL_SRCSL_SHIFT                                               0
#define     DMA2CTL_SRCSL_MASK                                                (0x1F<<0)

#define     DMA2START_DMASTART                                                0

#define     DMA2SADDR0_DMASADDR_E                                             31
#define     DMA2SADDR0_DMASADDR_SHIFT                                         0
#define     DMA2SADDR0_DMASADDR_MASK                                          (0xFFFFFFFF<<0)

#define     DMA2SADDR1_DMASADDR_E                                             31
#define     DMA2SADDR1_DMASADDR_SHIFT                                         0
#define     DMA2SADDR1_DMASADDR_MASK                                          (0xFFFFFFFF<<0)

#define     DMA2DADDR0_DMADADDR_E                                             31
#define     DMA2DADDR0_DMADADDR_SHIFT                                         0
#define     DMA2DADDR0_DMADADDR_MASK                                          (0xFFFFFFFF<<0)

#define     DMA2DADDR1_DMADADDR_E                                             31
#define     DMA2DADDR1_DMADADDR_SHIFT                                         0
#define     DMA2DADDR1_DMADADDR_MASK                                          (0xFFFFFFFF<<0)

#define     DMA2BC_DMABYTECOUNTER_E                                           19
#define     DMA2BC_DMABYTECOUNTER_SHIFT                                       0
#define     DMA2BC_DMABYTECOUNTER_MASK                                        (0xFFFFF<<0)

#define     DMA2RC_DMAREMAINCOUNTER_E                                         19
#define     DMA2RC_DMAREMAINCOUNTER_SHIFT                                     0
#define     DMA2RC_DMAREMAINCOUNTER_MASK                                      (0xFFFFF<<0)

#define     DMA3CTL_TWS_E                                                     21
#define     DMA3CTL_TWS_SHIFT                                                 20
#define     DMA3CTL_TWS_MASK                                                  (0x3<<20)
#define     DMA3CTL_RELOAD                                                    18
#define     DMA3CTL_TRM                                                       17
#define     DMA3CTL_AUDIOTYPE                                                 16
#define     DMA3CTL_DAM                                                       15
#define     DMA3CTL_DSTSL_E                                                   12
#define     DMA3CTL_DSTSL_SHIFT                                               8
#define     DMA3CTL_DSTSL_MASK                                                (0x1F<<8)
#define     DMA3CTL_SAM                                                       7
#define     DMA3CTL_SRCSL_E                                                   4
#define     DMA3CTL_SRCSL_SHIFT                                               0
#define     DMA3CTL_SRCSL_MASK                                                (0x1F<<0)

#define     DMA3START_DMASTART                                                0

#define     DMA3SADDR0_DMASADDR_E                                             31
#define     DMA3SADDR0_DMASADDR_SHIFT                                         0
#define     DMA3SADDR0_DMASADDR_MASK                                          (0xFFFFFFFF<<0)

#define     DMA3SADDR1_DMASADDR_E                                             31
#define     DMA3SADDR1_DMASADDR_SHIFT                                         0
#define     DMA3SADDR1_DMASADDR_MASK                                          (0xFFFFFFFF<<0)

#define     DMA3DADDR0_DMADADDR_E                                             31
#define     DMA3DADDR0_DMADADDR_SHIFT                                         0
#define     DMA3DADDR0_DMADADDR_MASK                                          (0xFFFFFFFF<<0)

#define     DMA3DADDR1_DMADADDR_E                                             31
#define     DMA3DADDR1_DMADADDR_SHIFT                                         0
#define     DMA3DADDR1_DMADADDR_MASK                                          (0xFFFFFFFF<<0)

#define     DMA3BC_DMABYTECOUNTER_E                                           19
#define     DMA3BC_DMABYTECOUNTER_SHIFT                                       0
#define     DMA3BC_DMABYTECOUNTER_MASK                                        (0xFFFFF<<0)

#define     DMA3RC_DMAREMAINCOUNTER_E                                         19
#define     DMA3RC_DMAREMAINCOUNTER_SHIFT                                     0
#define     DMA3RC_DMAREMAINCOUNTER_MASK                                      (0xFFFFF<<0)

#define     DMA4CTL_TWS_E                                                     21
#define     DMA4CTL_TWS_SHIFT                                                 20
#define     DMA4CTL_TWS_MASK                                                  (0x3<<20)
#define     DMA4CTL_RELOAD                                                    18
#define     DMA4CTL_TRM                                                       17
#define     DMA4CTL_AUDIOTYPE                                                 16
#define     DMA4CTL_DAM                                                       15
#define     DMA4CTL_DSTSL_E                                                   12
#define     DMA4CTL_DSTSL_SHIFT                                               8
#define     DMA4CTL_DSTSL_MASK                                                (0x1F<<8)
#define     DMA4CTL_SAM                                                       7
#define     DMA4CTL_SRCSL_E                                                   4
#define     DMA4CTL_SRCSL_SHIFT                                               0
#define     DMA4CTL_SRCSL_MASK                                                (0x1F<<0)

#define     DMA4START_DMASTART                                                0

#define     DMA4SADDR0_DMASADDR_E                                             31
#define     DMA4SADDR0_DMASADDR_SHIFT                                         0
#define     DMA4SADDR0_DMASADDR_MASK                                          (0xFFFFFFFF<<0)

#define     DMA4SADDR1_DMASADDR_E                                             31
#define     DMA4SADDR1_DMASADDR_SHIFT                                         0
#define     DMA4SADDR1_DMASADDR_MASK                                          (0xFFFFFFFF<<0)

#define     DMA4DADDR0_DMADADDR_E                                             31
#define     DMA4DADDR0_DMADADDR_SHIFT                                         0
#define     DMA4DADDR0_DMADADDR_MASK                                          (0xFFFFFFFF<<0)

#define     DMA4DADDR1_DMADADDR_E                                             31
#define     DMA4DADDR1_DMADADDR_SHIFT                                         0
#define     DMA4DADDR1_DMADADDR_MASK                                          (0xFFFFFFFF<<0)

#define     DMA4BC_DMABYTECOUNTER_E                                           19
#define     DMA4BC_DMABYTECOUNTER_SHIFT                                       0
#define     DMA4BC_DMABYTECOUNTER_MASK                                        (0xFFFFF<<0)

#define     DMA4RC_DMAREMAINCOUNTER_E                                         19
#define     DMA4RC_DMAREMAINCOUNTER_SHIFT                                     0
#define     DMA4RC_DMAREMAINCOUNTER_MASK                                      (0xFFFFF<<0)

#define     DMA5CTL_TWS_E                                                     21
#define     DMA5CTL_TWS_SHIFT                                                 20
#define     DMA5CTL_TWS_MASK                                                  (0x3<<20)
#define     DMA5CTL_RELOAD                                                    18
#define     DMA5CTL_TRM                                                       17
#define     DMA5CTL_AUDIOTYPE                                                 16
#define     DMA5CTL_DAM                                                       15
#define     DMA5CTL_DSTSL_E                                                   12
#define     DMA5CTL_DSTSL_SHIFT                                               8
#define     DMA5CTL_DSTSL_MASK                                                (0x1F<<8)
#define     DMA5CTL_SAM                                                       7
#define     DMA5CTL_SRCSL_E                                                   4
#define     DMA5CTL_SRCSL_SHIFT                                               0
#define     DMA5CTL_SRCSL_MASK                                                (0x1F<<0)

#define     DMA5START_DMASTART                                                0

#define     DMA5SADDR0_DMASADDR_E                                             31
#define     DMA5SADDR0_DMASADDR_SHIFT                                         0
#define     DMA5SADDR0_DMASADDR_MASK                                          (0xFFFFFFFF<<0)

#define     DMA5SADDR1_DMASADDR_E                                             31
#define     DMA5SADDR1_DMASADDR_SHIFT                                         0
#define     DMA5SADDR1_DMASADDR_MASK                                          (0xFFFFFFFF<<0)

#define     DMA5DADDR0_DMADADDR_E                                             31
#define     DMA5DADDR0_DMADADDR_SHIFT                                         0
#define     DMA5DADDR0_DMADADDR_MASK                                          (0xFFFFFFFF<<0)

#define     DMA5DADDR1_DMADADDR_E                                             31
#define     DMA5DADDR1_DMADADDR_SHIFT                                         0
#define     DMA5DADDR1_DMADADDR_MASK                                          (0xFFFFFFFF<<0)

#define     DMA5BC_DMABYTECOUNTER_E                                           19
#define     DMA5BC_DMABYTECOUNTER_SHIFT                                       0
#define     DMA5BC_DMABYTECOUNTER_MASK                                        (0xFFFFF<<0)

#define     DMA5RC_DMAREMAINCOUNTER_E                                         19
#define     DMA5RC_DMAREMAINCOUNTER_SHIFT                                     0
#define     DMA5RC_DMAREMAINCOUNTER_MASK                                      (0xFFFFF<<0)

#define     DMA6CTL_TWS_E                                                     21
#define     DMA6CTL_TWS_SHIFT                                                 20
#define     DMA6CTL_TWS_MASK                                                  (0x3<<20)
#define     DMA6CTL_RELOAD                                                    18
#define     DMA6CTL_TRM                                                       17
#define     DMA6CTL_AUDIOTYPE                                                 16
#define     DMA6CTL_DAM                                                       15
#define     DMA6CTL_DSTSL_E                                                   12
#define     DMA6CTL_DSTSL_SHIFT                                               8
#define     DMA6CTL_DSTSL_MASK                                                (0x1F<<8)
#define     DMA6CTL_SAM                                                       7
#define     DMA6CTL_SRCSL_E                                                   4
#define     DMA6CTL_SRCSL_SHIFT                                               0
#define     DMA6CTL_SRCSL_MASK                                                (0x1F<<0)

#define     DMA6START_DMASTART                                                0

#define     DMA6SADDR0_DMASADDR_E                                             31
#define     DMA6SADDR0_DMASADDR_SHIFT                                         0
#define     DMA6SADDR0_DMASADDR_MASK                                          (0xFFFFFFFF<<0)

#define     DMA6SADDR1_DMASADDR_E                                             31
#define     DMA6SADDR1_DMASADDR_SHIFT                                         0
#define     DMA6SADDR1_DMASADDR_MASK                                          (0xFFFFFFFF<<0)

#define     DMA6DADDR0_DMADADDR_E                                             31
#define     DMA6DADDR0_DMADADDR_SHIFT                                         0
#define     DMA6DADDR0_DMADADDR_MASK                                          (0xFFFFFFFF<<0)

#define     DMA6DADDR1_DMADADDR_E                                             31
#define     DMA6DADDR1_DMADADDR_SHIFT                                         0
#define     DMA6DADDR1_DMADADDR_MASK                                          (0xFFFFFFFF<<0)

#define     DMA6BC_DMABYTECOUNTER_E                                           19
#define     DMA6BC_DMABYTECOUNTER_SHIFT                                       0
#define     DMA6BC_DMABYTECOUNTER_MASK                                        (0xFFFFF<<0)

#define     DMA6RC_DMAREMAINCOUNTER_E                                         19
#define     DMA6RC_DMAREMAINCOUNTER_SHIFT                                     0
#define     DMA6RC_DMAREMAINCOUNTER_MASK                                      (0xFFFFF<<0)

#define     DMA7CTL_TWS_E                                                     21
#define     DMA7CTL_TWS_SHIFT                                                 20
#define     DMA7CTL_TWS_MASK                                                  (0x3<<20)
#define     DMA7CTL_RELOAD                                                    18
#define     DMA7CTL_TRM                                                       17
#define     DMA7CTL_AUDIOTYPE                                                 16
#define     DMA7CTL_DAM                                                       15
#define     DMA7CTL_DSTSL_E                                                   12
#define     DMA7CTL_DSTSL_SHIFT                                               8
#define     DMA7CTL_DSTSL_MASK                                                (0x1F<<8)
#define     DMA7CTL_SAM                                                       7
#define     DMA7CTL_SRCSL_E                                                   4
#define     DMA7CTL_SRCSL_SHIFT                                               0
#define     DMA7CTL_SRCSL_MASK                                                (0x1F<<0)

#define     DMA7START_DMASTART                                                0

#define     DMA7SADDR0_DMASADDR_E                                             31
#define     DMA7SADDR0_DMASADDR_SHIFT                                         0
#define     DMA7SADDR0_DMASADDR_MASK                                          (0xFFFFFFFF<<0)

#define     DMA7SADDR1_DMASADDR_E                                             31
#define     DMA7SADDR1_DMASADDR_SHIFT                                         0
#define     DMA7SADDR1_DMASADDR_MASK                                          (0xFFFFFFFF<<0)

#define     DMA7DADDR0_DMADADDR_E                                             31
#define     DMA7DADDR0_DMADADDR_SHIFT                                         0
#define     DMA7DADDR0_DMADADDR_MASK                                          (0xFFFFFFFF<<0)

#define     DMA7DADDR1_DMADADDR_E                                             31
#define     DMA7DADDR1_DMADADDR_SHIFT                                         0
#define     DMA7DADDR1_DMADADDR_MASK                                          (0xFFFFFFFF<<0)

#define     DMA7BC_DMABYTECOUNTER_E                                           19
#define     DMA7BC_DMABYTECOUNTER_SHIFT                                       0
#define     DMA7BC_DMABYTECOUNTER_MASK                                        (0xFFFFF<<0)

#define     DMA7RC_DMAREMAINCOUNTER_E                                         19
#define     DMA7RC_DMAREMAINCOUNTER_SHIFT                                     0
#define     DMA7RC_DMAREMAINCOUNTER_MASK                                      (0xFFFFF<<0)

#define     DMA8CTL_TWS_E                                                     21
#define     DMA8CTL_TWS_SHIFT                                                 20
#define     DMA8CTL_TWS_MASK                                                  (0x3<<20)
#define     DMA8CTL_RELOAD                                                    18
#define     DMA8CTL_TRM                                                       17
#define     DMA8CTL_AUDIOTYPE                                                 16
#define     DMA8CTL_DAM                                                       15
#define     DMA8CTL_DSTSL_E                                                   12
#define     DMA8CTL_DSTSL_SHIFT                                               8
#define     DMA8CTL_DSTSL_MASK                                                (0x1F<<8)
#define     DMA8CTL_SAM                                                       7
#define     DMA8CTL_SRCSL_E                                                   4
#define     DMA8CTL_SRCSL_SHIFT                                               0
#define     DMA8CTL_SRCSL_MASK                                                (0x1F<<0)

#define     DMA8START_DMASTART                                                0

#define     DMA8SADDR0_DMASADDR_E                                             31
#define     DMA8SADDR0_DMASADDR_SHIFT                                         0
#define     DMA8SADDR0_DMASADDR_MASK                                          (0xFFFFFFFF<<0)

#define     DMA8SADDR1_DMASADDR_E                                             31
#define     DMA8SADDR1_DMASADDR_SHIFT                                         0
#define     DMA8SADDR1_DMASADDR_MASK                                          (0xFFFFFFFF<<0)

#define     DMA8DADDR0_DMADADDR_E                                             31
#define     DMA8DADDR0_DMADADDR_SHIFT                                         0
#define     DMA8DADDR0_DMADADDR_MASK                                          (0xFFFFFFFF<<0)

#define     DMA8DADDR1_DMADADDR_E                                             31
#define     DMA8DADDR1_DMADADDR_SHIFT                                         0
#define     DMA8DADDR1_DMADADDR_MASK                                          (0xFFFFFFFF<<0)

#define     DMA8BC_DMABYTECOUNTER_E                                           19
#define     DMA8BC_DMABYTECOUNTER_SHIFT                                       0
#define     DMA8BC_DMABYTECOUNTER_MASK                                        (0xFFFFF<<0)

#define     DMA8RC_DMAREMAINCOUNTER_E                                         19
#define     DMA8RC_DMAREMAINCOUNTER_SHIFT                                     0
#define     DMA8RC_DMAREMAINCOUNTER_MASK                                      (0xFFFFF<<0)

#define     DMA9CTL_TWS_E                                                     21
#define     DMA9CTL_TWS_SHIFT                                                 20
#define     DMA9CTL_TWS_MASK                                                  (0x3<<20)
#define     DMA9CTL_RELOAD                                                    18
#define     DMA9CTL_TRM                                                       17
#define     DMA9CTL_AUDIOTYPE                                                 16
#define     DMA9CTL_DAM                                                       15
#define     DMA9CTL_DSTSL_E                                                   12
#define     DMA9CTL_DSTSL_SHIFT                                               8
#define     DMA9CTL_DSTSL_MASK                                                (0x1F<<8)
#define     DMA9CTL_SAM                                                       7
#define     DMA9CTL_SRCSL_E                                                   4
#define     DMA9CTL_SRCSL_SHIFT                                               0
#define     DMA9CTL_SRCSL_MASK                                                (0x1F<<0)

#define     DMA9START_DMASTART                                                0

#define     DMA9SADDR0_DMASADDR_E                                             31
#define     DMA9SADDR0_DMASADDR_SHIFT                                         0
#define     DMA9SADDR0_DMASADDR_MASK                                          (0xFFFFFFFF<<0)

#define     DMA9SADDR1_DMASADDR_E                                             31
#define     DMA9SADDR1_DMASADDR_SHIFT                                         0
#define     DMA9SADDR1_DMASADDR_MASK                                          (0xFFFFFFFF<<0)

#define     DMA9DADDR0_DMADADDR_E                                             31
#define     DMA9DADDR0_DMADADDR_SHIFT                                         0
#define     DMA9DADDR0_DMADADDR_MASK                                          (0xFFFFFFFF<<0)

#define     DMA9DADDR1_DMADADDR_E                                             31
#define     DMA9DADDR1_DMADADDR_SHIFT                                         0
#define     DMA9DADDR1_DMADADDR_MASK                                          (0xFFFFFFFF<<0)

#define     DMA9BC_DMABYTECOUNTER_E                                           19
#define     DMA9BC_DMABYTECOUNTER_SHIFT                                       0
#define     DMA9BC_DMABYTECOUNTER_MASK                                        (0xFFFFF<<0)

#define     DMA9RC_DMAREMAINCOUNTER_E                                         19
#define     DMA9RC_DMAREMAINCOUNTER_SHIFT                                     0
#define     DMA9RC_DMAREMAINCOUNTER_MASK                                      (0xFFFFF<<0)

#define     DMA10CTL_TWS_E                                                    21
#define     DMA10CTL_TWS_SHIFT                                                20
#define     DMA10CTL_TWS_MASK                                                 (0x3<<20)
#define     DMA10CTL_RELOAD                                                   18
#define     DMA10CTL_TRM                                                      17
#define     DMA10CTL_AUDIOTYPE                                                16
#define     DMA10CTL_DAM                                                      15
#define     DMA10CTL_DSTSL_E                                                  12
#define     DMA10CTL_DSTSL_SHIFT                                              8
#define     DMA10CTL_DSTSL_MASK                                               (0x1F<<8)
#define     DMA10CTL_SAM                                                      7
#define     DMA10CTL_SRCSL_E                                                  4
#define     DMA10CTL_SRCSL_SHIFT                                              0
#define     DMA10CTL_SRCSL_MASK                                               (0x1F<<0)

#define     DMA10START_DMASTART                                               0

#define     DMA10SADDR0_DMASADDR_E                                            31
#define     DMA10SADDR0_DMASADDR_SHIFT                                        0
#define     DMA10SADDR0_DMASADDR_MASK                                         (0xFFFFFFFF<<0)

#define     DMA10SADDR1_DMASADDR_E                                            31
#define     DMA10SADDR1_DMASADDR_SHIFT                                        0
#define     DMA10SADDR1_DMASADDR_MASK                                         (0xFFFFFFFF<<0)

#define     DMA10DADDR0_DMADADDR_E                                            31
#define     DMA10DADDR0_DMADADDR_SHIFT                                        0
#define     DMA10DADDR0_DMADADDR_MASK                                         (0xFFFFFFFF<<0)

#define     DMA10DADDR1_DMADADDR_E                                            31
#define     DMA10DADDR1_DMADADDR_SHIFT                                        0
#define     DMA10DADDR1_DMADADDR_MASK                                         (0xFFFFFFFF<<0)

#define     DMA10BC_DMABYTECOUNTER_E                                          19
#define     DMA10BC_DMABYTECOUNTER_SHIFT                                      0
#define     DMA10BC_DMABYTECOUNTER_MASK                                       (0xFFFFF<<0)

#define     DMA10RC_DMAREMAINCOUNTER_E                                        19
#define     DMA10RC_DMAREMAINCOUNTER_SHIFT                                    0
#define     DMA10RC_DMAREMAINCOUNTER_MASK                                     (0xFFFFF<<0)

#define     DMA11CTL_TWS_E                                                    21
#define     DMA11CTL_TWS_SHIFT                                                20
#define     DMA11CTL_TWS_MASK                                                 (0x3<<20)
#define     DMA11CTL_RELOAD                                                   18
#define     DMA11CTL_TRM                                                      17
#define     DMA11CTL_AUDIOTYPE                                                16
#define     DMA11CTL_DAM                                                      15
#define     DMA11CTL_DSTSL_E                                                  12
#define     DMA11CTL_DSTSL_SHIFT                                              8
#define     DMA11CTL_DSTSL_MASK                                               (0x1F<<8)
#define     DMA11CTL_SAM                                                      7
#define     DMA11CTL_SRCSL_E                                                  4
#define     DMA11CTL_SRCSL_SHIFT                                              0
#define     DMA11CTL_SRCSL_MASK                                               (0x1F<<0)

#define     DMA11START_DMASTART                                               0

#define     DMA11SADDR0_DMASADDR_E                                            31
#define     DMA11SADDR0_DMASADDR_SHIFT                                        0
#define     DMA11SADDR0_DMASADDR_MASK                                         (0xFFFFFFFF<<0)

#define     DMA11SADDR1_DMASADDR_E                                            31
#define     DMA11SADDR1_DMASADDR_SHIFT                                        0
#define     DMA11SADDR1_DMASADDR_MASK                                         (0xFFFFFFFF<<0)

#define     DMA11DADDR0_DMADADDR_E                                            31
#define     DMA11DADDR0_DMADADDR_SHIFT                                        0
#define     DMA11DADDR0_DMADADDR_MASK                                         (0xFFFFFFFF<<0)

#define     DMA11DADDR1_DMADADDR_E                                            31
#define     DMA11DADDR1_DMADADDR_SHIFT                                        0
#define     DMA11DADDR1_DMADADDR_MASK                                         (0xFFFFFFFF<<0)

#define     DMA11BC_DMABYTECOUNTER_E                                          19
#define     DMA11BC_DMABYTECOUNTER_SHIFT                                      0
#define     DMA11BC_DMABYTECOUNTER_MASK                                       (0xFFFFF<<0)

#define     DMA11RC_DMAREMAINCOUNTER_E                                        19
#define     DMA11RC_DMAREMAINCOUNTER_SHIFT                                    0
#define     DMA11RC_DMAREMAINCOUNTER_MASK                                     (0xFFFFF<<0)

#define     DMA12CTL_TWS_E                                                    21
#define     DMA12CTL_TWS_SHIFT                                                20
#define     DMA12CTL_TWS_MASK                                                 (0x3<<20)
#define     DMA12CTL_RELOAD                                                   18
#define     DMA12CTL_TRM                                                      17
#define     DMA12CTL_AUDIOTYPE                                                16
#define     DMA12CTL_DAM                                                      15
#define     DMA12CTL_DSTSL_E                                                  12
#define     DMA12CTL_DSTSL_SHIFT                                              8
#define     DMA12CTL_DSTSL_MASK                                               (0x1F<<8)
#define     DMA12CTL_SAM                                                      7
#define     DMA12CTL_SRCSL_E                                                  4
#define     DMA12CTL_SRCSL_SHIFT                                              0
#define     DMA12CTL_SRCSL_MASK                                               (0x1F<<0)

#define     DMA12START_DMASTART                                               0

#define     DMA12SADDR0_DMASADDR_E                                            31
#define     DMA12SADDR0_DMASADDR_SHIFT                                        0
#define     DMA12SADDR0_DMASADDR_MASK                                         (0xFFFFFFFF<<0)

#define     DMA12SADDR1_DMASADDR_E                                            31
#define     DMA12SADDR1_DMASADDR_SHIFT                                        0
#define     DMA12SADDR1_DMASADDR_MASK                                         (0xFFFFFFFF<<0)

#define     DMA12DADDR0_DMADADDR_E                                            31
#define     DMA12DADDR0_DMADADDR_SHIFT                                        0
#define     DMA12DADDR0_DMADADDR_MASK                                         (0xFFFFFFFF<<0)

#define     DMA12DADDR1_DMADADDR_E                                            31
#define     DMA12DADDR1_DMADADDR_SHIFT                                        0
#define     DMA12DADDR1_DMADADDR_MASK                                         (0xFFFFFFFF<<0)

#define     DMA12BC_DMABYTECOUNTER_E                                          19
#define     DMA12BC_DMABYTECOUNTER_SHIFT                                      0
#define     DMA12BC_DMABYTECOUNTER_MASK                                       (0xFFFFF<<0)

#define     DMA12RC_DMAREMAINCOUNTER_E                                        19
#define     DMA12RC_DMAREMAINCOUNTER_SHIFT                                    0
#define     DMA12RC_DMAREMAINCOUNTER_MASK                                     (0xFFFFF<<0)

#define     DMA13CTL_TWS_E                                                    21
#define     DMA13CTL_TWS_SHIFT                                                20
#define     DMA13CTL_TWS_MASK                                                 (0x3<<20)
#define     DMA13CTL_RELOAD                                                   18
#define     DMA13CTL_TRM                                                      17
#define     DMA13CTL_AUDIOTYPE                                                16
#define     DMA13CTL_DAM                                                      15
#define     DMA13CTL_DSTSL_E                                                  12
#define     DMA13CTL_DSTSL_SHIFT                                              8
#define     DMA13CTL_DSTSL_MASK                                               (0x1F<<8)
#define     DMA13CTL_SAM                                                      7
#define     DMA13CTL_SRCSL_E                                                  4
#define     DMA13CTL_SRCSL_SHIFT                                              0
#define     DMA13CTL_SRCSL_MASK                                               (0x1F<<0)

#define     DMA13START_DMASTART                                               0

#define     DMA13SADDR0_DMASADDR_E                                            31
#define     DMA13SADDR0_DMASADDR_SHIFT                                        0
#define     DMA13SADDR0_DMASADDR_MASK                                         (0xFFFFFFFF<<0)

#define     DMA13SADDR1_DMASADDR_E                                            31
#define     DMA13SADDR1_DMASADDR_SHIFT                                        0
#define     DMA13SADDR1_DMASADDR_MASK                                         (0xFFFFFFFF<<0)

#define     DMA13DADDR0_DMADADDR_E                                            31
#define     DMA13DADDR0_DMADADDR_SHIFT                                        0
#define     DMA13DADDR0_DMADADDR_MASK                                         (0xFFFFFFFF<<0)

#define     DMA13DADDR1_DMADADDR_E                                            31
#define     DMA13DADDR1_DMADADDR_SHIFT                                        0
#define     DMA13DADDR1_DMADADDR_MASK                                         (0xFFFFFFFF<<0)

#define     DMA13BC_DMABYTECOUNTER_E                                          19
#define     DMA13BC_DMABYTECOUNTER_SHIFT                                      0
#define     DMA13BC_DMABYTECOUNTER_MASK                                       (0xFFFFF<<0)

#define     DMA13RC_DMAREMAINCOUNTER_E                                        19
#define     DMA13RC_DMAREMAINCOUNTER_SHIFT                                    0
#define     DMA13RC_DMAREMAINCOUNTER_MASK                                     (0xFFFFF<<0)

#define     DMA14CTL_TWS_E                                                    21
#define     DMA14CTL_TWS_SHIFT                                                20
#define     DMA14CTL_TWS_MASK                                                 (0x3<<20)
#define     DMA14CTL_RELOAD                                                   18
#define     DMA14CTL_TRM                                                      17
#define     DMA14CTL_AUDIOTYPE                                                16
#define     DMA14CTL_DAM                                                      15
#define     DMA14CTL_DSTSL_E                                                  12
#define     DMA14CTL_DSTSL_SHIFT                                              8
#define     DMA14CTL_DSTSL_MASK                                               (0x1F<<8)
#define     DMA14CTL_SAM                                                      7
#define     DMA14CTL_SRCSL_E                                                  4
#define     DMA14CTL_SRCSL_SHIFT                                              0
#define     DMA14CTL_SRCSL_MASK                                               (0x1F<<0)

#define     DMA14START_DMASTART                                               0

#define     DMA14SADDR0_DMASADDR_E                                            31
#define     DMA14SADDR0_DMASADDR_SHIFT                                        0
#define     DMA14SADDR0_DMASADDR_MASK                                         (0xFFFFFFFF<<0)

#define     DMA14SADDR1_DMASADDR_E                                            31
#define     DMA14SADDR1_DMASADDR_SHIFT                                        0
#define     DMA14SADDR1_DMASADDR_MASK                                         (0xFFFFFFFF<<0)

#define     DMA14DADDR0_DMADADDR_E                                            31
#define     DMA14DADDR0_DMADADDR_SHIFT                                        0
#define     DMA14DADDR0_DMADADDR_MASK                                         (0xFFFFFFFF<<0)

#define     DMA14DADDR1_DMADADDR_E                                            31
#define     DMA14DADDR1_DMADADDR_SHIFT                                        0
#define     DMA14DADDR1_DMADADDR_MASK                                         (0xFFFFFFFF<<0)

#define     DMA14BC_DMABYTECOUNTER_E                                          19
#define     DMA14BC_DMABYTECOUNTER_SHIFT                                      0
#define     DMA14BC_DMABYTECOUNTER_MASK                                       (0xFFFFF<<0)

#define     DMA14RC_DMAREMAINCOUNTER_E                                        19
#define     DMA14RC_DMAREMAINCOUNTER_SHIFT                                    0
#define     DMA14RC_DMAREMAINCOUNTER_MASK                                     (0xFFFFF<<0)

#define     DMA15CTL_TWS_E                                                    21
#define     DMA15CTL_TWS_SHIFT                                                20
#define     DMA15CTL_TWS_MASK                                                 (0x3<<20)
#define     DMA15CTL_RELOAD                                                   18
#define     DMA15CTL_TRM                                                      17
#define     DMA15CTL_AUDIOTYPE                                                16
#define     DMA15CTL_DAM                                                      15
#define     DMA15CTL_DSTSL_E                                                  12
#define     DMA15CTL_DSTSL_SHIFT                                              8
#define     DMA15CTL_DSTSL_MASK                                               (0x1F<<8)
#define     DMA15CTL_SAM                                                      7
#define     DMA15CTL_SRCSL_E                                                  4
#define     DMA15CTL_SRCSL_SHIFT                                              0
#define     DMA15CTL_SRCSL_MASK                                               (0x1F<<0)

#define     DMA15START_DMASTART                                               0

#define     DMA15SADDR0_DMASADDR_E                                            31
#define     DMA15SADDR0_DMASADDR_SHIFT                                        0
#define     DMA15SADDR0_DMASADDR_MASK                                         (0xFFFFFFFF<<0)

#define     DMA15SADDR1_DMASADDR_E                                            31
#define     DMA15SADDR1_DMASADDR_SHIFT                                        0
#define     DMA15SADDR1_DMASADDR_MASK                                         (0xFFFFFFFF<<0)

#define     DMA15DADDR0_DMADADDR_E                                            31
#define     DMA15DADDR0_DMADADDR_SHIFT                                        0
#define     DMA15DADDR0_DMADADDR_MASK                                         (0xFFFFFFFF<<0)

#define     DMA15DADDR1_DMADADDR_E                                            31
#define     DMA15DADDR1_DMADADDR_SHIFT                                        0
#define     DMA15DADDR1_DMADADDR_MASK                                         (0xFFFFFFFF<<0)

#define     DMA15BC_DMABYTECOUNTER_E                                          19
#define     DMA15BC_DMABYTECOUNTER_SHIFT                                      0
#define     DMA15BC_DMABYTECOUNTER_MASK                                       (0xFFFFF<<0)

#define     DMA15RC_DMAREMAINCOUNTER_E                                        19
#define     DMA15RC_DMAREMAINCOUNTER_SHIFT                                    0
#define     DMA15RC_DMAREMAINCOUNTER_MASK                                     (0xFFFFF<<0)

//--------------PMU-------------------------------------------//
//--------------Register Address---------------------------------------//
#define     PMU_BASE                                                          0x50008200
#define     SYSTEM_CTL                                                        (PMU_BASE+0x00)
#define     PMU_INT                                                           (PMU_BASE+0x04)
#define     STO_CTL                                                           (PMU_BASE+0x08)

//--------------Bits Location------------------------------------------//
#define     SYSTEM_CTL_VDD_CC_LIMIT_E                                         7
#define     SYSTEM_CTL_VDD_CC_LIMIT_SHIFT                                     6
#define     SYSTEM_CTL_VDD_CC_LIMIT_MASK                                      (0x3<<6)
#define     SYSTEM_CTL_EN_VDD_CC                                              4
#define     SYSTEM_CTL_VDD_BIAS                                               3
#define     SYSTEM_CTL_VDD_SET_E                                              2
#define     SYSTEM_CTL_VDD_SET_SHIFT                                          0
#define     SYSTEM_CTL_VDD_SET_MASK                                           (0x7<<0)

#define     PMU_INT_SYSTEM_RESET_PD                                           15
#define     PMU_INT_WD_RESET_PD                                               14
#define     PMU_INT_S3_PD                                                     13
#define     PMU_INT_CHIPEN_SHORTPD_PD                                         11
#define     PMU_INT_AVCC_LOW_PD                                               10
#define     PMU_INT_VCC_LOW_PD                                                9
#define     PMU_INT_VDD_LOW_PD                                                8
#define     PMU_INT_CHIPEN_SHORTPD_RESET                                      4
#define     PMU_INT_CHIPEN_SHORTPD_INTEN                                      3
#define     PMU_INT_AVCC_LOW_INTEN                                            2
#define     PMU_INT_VCC_LOW_INTEN                                             1
#define     PMU_INT_VDD_LOW_INTEN                                             0

#define     STO_CTL_WD_PD_OUT                                                 14
#define     STO_CTL_AVCC_LOW_OUT                                              13
#define     STO_CTL_VDD_LOW_OUT                                               12
#define     STO_CTL_VCC_LOW_OUT                                               11
#define     STO_CTL_PLL_LOCK_OUT                                              10
#define     STO_CTL_NOCLK_OUT                                                 9
#define     STO_CTL_POWER_OK_OUT                                              8
#define     STO_CTL_WD_PD_OUT_EN                                              6
#define     STO_CTL_AVCC_LOW_OUT_EN                                           5
#define     STO_CTL_VDD_LOW_OUT_EN                                            4
#define     STO_CTL_VCC_LOW_OUT_EN                                            3
#define     STO_CTL_PLL_LOCK_OUT_EN                                           2
#define     STO_CTL_NOCLK_OUT_EN                                              1
#define     STO_CTL_POWER_OK_OUT_EN                                           0

//--------------CMUD-------------------------------------------//
//--------------Register Address---------------------------------------//
#define     CMUD_BASE                                                         0x50008000
#define     CMU_DSPCLK                                                        (CMUD_BASE+0x0000)
#define     CMU_DEVCLKEN                                                      (CMUD_BASE+0x0004)
#define     CMU_BUSCLK                                                        (CMUD_BASE+0x0008)
#define     CMU_SPI0CLK                                                       (CMUD_BASE+0x000c)
#define     CMU_SPI1CLK                                                       (CMUD_BASE+0x0010)
#define     CMU_UARTCLK                                                       (CMUD_BASE+0x0014)
#define     CMU_I2C0CLK                                                       (CMUD_BASE+0x0018)
#define     CMU_I2C1CLK                                                       (CMUD_BASE+0x001c)
#define     CMU_ASRCCLK                                                       (CMUD_BASE+0x0020)
#define     CMU_ADCCLK                                                        (CMUD_BASE+0x0024)
#define     CMU_DACCLK                                                        (CMUD_BASE+0x0028)
#define     CMU_DMICCLK                                                       (CMUD_BASE+0x002C)
#define     CMU_I2SG0CLK                                                      (CMUD_BASE+0x0030)
#define     CMU_I2SG1CLK                                                      (CMUD_BASE+0x0034)
#define     CMU_I2SG2CLK                                                      (CMUD_BASE+0x0038)
#define     CMU_I2SG3CLK                                                      (CMUD_BASE+0x003C)
#define     CMU_I2STXCLK                                                      (CMUD_BASE+0x0040)
#define     CMU_I2SRXCLK                                                      (CMUD_BASE+0x0044)
#define     CMU_BCLKDECT                                                      (CMUD_BASE+0x0048)
#define     CMU_GPIOCLK                                                       (CMUD_BASE+0x004C)
#define     CMU_MEMCLKEN                                                      (CMUD_BASE+0x0050)
#define     CMU_MEMCLKSRC                                                     (CMUD_BASE+0x0054)

//--------------Bits Location------------------------------------------//
#define     CMU_DSPCLK_DSPCLKDIV_E                                            7
#define     CMU_DSPCLK_DSPCLKDIV_SHIFT                                        4
#define     CMU_DSPCLK_DSPCLKDIV_MASK                                         (0xF<<4)
#define     CMU_DSPCLK_DSPCLKSRC_E                                            1
#define     CMU_DSPCLK_DSPCLKSRC_SHIFT                                        0
#define     CMU_DSPCLK_DSPCLKSRC_MASK                                         (0x3<<0)

#define     CMU_DEVCLKEN_I2STX5CLKEN                                          16
#define     CMU_DEVCLKEN_I2SRX1CLKEN                                          15
#define     CMU_DEVCLKEN_I2SRX0CLKEN                                          14
#define     CMU_DEVCLKEN_I2STX1CLKEN                                          13
#define     CMU_DEVCLKEN_I2STX0CLKEN                                          12
#define     CMU_DEVCLKEN_DACCLKEN                                             9
#define     CMU_DEVCLKEN_ADCCLKEN                                             8
#define     CMU_DEVCLKEN_I2C1CLKEN                                            7
#define     CMU_DEVCLKEN_SPI1CLKEN                                            6
#define     CMU_DEVCLKEN_UARTCLKEN                                            5
#define     CMU_DEVCLKEN_I2C0CLKEN                                            4
#define     CMU_DEVCLKEN_SPI0CLKEN                                            3
#define     CMU_DEVCLKEN_DMACLKEN                                             2
#define     CMU_DEVCLKEN_ASRCCLKEN                                            1
#define     CMU_DEVCLKEN_DSPCLKEN                                             0

#define     CMU_BUSCLK_AHBCLKDIV_E                                            1
#define     CMU_BUSCLK_AHBCLKDIV_SHIFT                                        0
#define     CMU_BUSCLK_AHBCLKDIV_MASK                                         (0x3<<0)

#define     CMU_SPI0CLK_SPI0CLKSRC_E                                          9
#define     CMU_SPI0CLK_SPI0CLKSRC_SHIFT                                      8
#define     CMU_SPI0CLK_SPI0CLKSRC_MASK                                       (0x3<<8)
#define     CMU_SPI0CLK_SPI0CLKDIV_E                                          3
#define     CMU_SPI0CLK_SPI0CLKDIV_SHIFT                                      0
#define     CMU_SPI0CLK_SPI0CLKDIV_MASK                                       (0xF<<0)

#define     CMU_SPI1CLK_SPI1CLKSRC_E                                          9
#define     CMU_SPI1CLK_SPI1CLKSRC_SHIFT                                      8
#define     CMU_SPI1CLK_SPI1CLKSRC_MASK                                       (0x3<<8)
#define     CMU_SPI1CLK_SPI1CLKDIV_E                                          3
#define     CMU_SPI1CLK_SPI1CLKDIV_SHIFT                                      0
#define     CMU_SPI1CLK_SPI1CLKDIV_MASK                                       (0xF<<0)

#define     CMU_UARTCLK_UARTCLKSRC_E                                          5
#define     CMU_UARTCLK_UARTCLKSRC_SHIFT                                      4
#define     CMU_UARTCLK_UARTCLKSRC_MASK                                       (0x3<<4)
#define     CMU_UARTCLK_UARTCLKDIV_E                                          1
#define     CMU_UARTCLK_UARTCLKDIV_SHIFT                                      0
#define     CMU_UARTCLK_UARTCLKDIV_MASK                                       (0x3<<0)

#define     CMU_I2C0CLK_I2C0CLKSRC_E                                          5
#define     CMU_I2C0CLK_I2C0CLKSRC_SHIFT                                      4
#define     CMU_I2C0CLK_I2C0CLKSRC_MASK                                       (0x3<<4)
#define     CMU_I2C0CLK_I2C0CLKDIV_E                                          1
#define     CMU_I2C0CLK_I2C0CLKDIV_SHIFT                                      0
#define     CMU_I2C0CLK_I2C0CLKDIV_MASK                                       (0x3<<0)

#define     CMU_I2C1CLK_I2C1CLKSRC_E                                          5
#define     CMU_I2C1CLK_I2C1CLKSRC_SHIFT                                      4
#define     CMU_I2C1CLK_I2C1CLKSRC_MASK                                       (0x3<<4)
#define     CMU_I2C1CLK_I2C1CLKDIV_E                                          1
#define     CMU_I2C1CLK_I2C1CLKDIV_SHIFT                                      0
#define     CMU_I2C1CLK_I2C1CLKDIV_MASK                                       (0x3<<0)

#define     CMU_ASRCCLK_ASRCCLKSRC                                            8
#define     CMU_ASRCCLK_ASRCCLKDIV_E                                          2
#define     CMU_ASRCCLK_ASRCCLKDIV_SHIFT                                      0
#define     CMU_ASRCCLK_ASRCCLKDIV_MASK                                       (0x7<<0)

#define     CMU_ADCCLK_FIRCLKDIV_E                                            31
#define     CMU_ADCCLK_FIRCLKDIV_SHIFT                                        28
#define     CMU_ADCCLK_FIRCLKDIV_MASK                                         (0xF<<28)
#define     CMU_ADCCLK_FIRCLKRVS                                              27
#define     CMU_ADCCLK_FIRCLKEN                                               26
#define     CMU_ADCCLK_ADCCLKDIV_E                                            7
#define     CMU_ADCCLK_ADCCLKDIV_SHIFT                                        6
#define     CMU_ADCCLK_ADCCLKDIV_MASK                                         (0x3<<6)
#define     CMU_ADCCLK_AMICLKRVS                                              5
#define     CMU_ADCCLK_AMICCLKEN                                              4
#define     CMU_ADCCLK_SHCLKEN                                                3
#define     CMU_ADCCLK_ADCFIFO0CLKEN                                          1
#define     CMU_ADCCLK_ADCCLKSRC                                              0

#define     CMU_DACCLK_DACCLKSWITCH_NOCLK                                     28
#define     CMU_DACCLK_DACFIFO1CLKEN                                          22
#define     CMU_DACCLK_TTSCICFIRCLKEN                                         21
#define     CMU_DACCLK_TTSFIR2CLKDIV_E                                        19
#define     CMU_DACCLK_TTSFIR2CLKDIV_SHIFT                                    18
#define     CMU_DACCLK_TTSFIR2CLKDIV_MASK                                     (0x3<<18)
#define     CMU_DACCLK_TTSFIRCLKDIV                                           17
#define     CMU_DACCLK_TTSROOTDIV                                             16
#define     CMU_DACCLK_DACFIFO0CLKEN                                          14
#define     CMU_DACCLK_DACCICFIRCLKEN                                         13
#define     CMU_DACCLK_DACSDMCLKEN                                            12
#define     CMU_DACCLK_DACFIR2XCLKDIV_E                                       11
#define     CMU_DACCLK_DACFIR2XCLKDIV_SHIFT                                   10
#define     CMU_DACCLK_DACFIR2XCLKDIV_MASK                                    (0x3<<10)
#define     CMU_DACCLK_DACFIRCLKDIV                                           9
#define     CMU_DACCLK_DACCICCLKDIV                                           8
#define     CMU_DACCLK_DACCLKSRC                                              4
#define     CMU_DACCLK_DACCLKDIV_E                                            1
#define     CMU_DACCLK_DACCLKDIV_SHIFT                                        0
#define     CMU_DACCLK_DACCLKDIV_MASK                                         (0x3<<0)

#define     CMU_DMICCLK_DMIC01CLKDIV_E                                        7
#define     CMU_DMICCLK_DMIC01CLKDIV_SHIFT                                    6
#define     CMU_DMICCLK_DMIC01CLKDIV_MASK                                     (0x3<<6)
#define     CMU_DMICCLK_DMIC01CLKRVS                                          5
#define     CMU_DMICCLK_DMIC01CLKEN                                           4
#define     CMU_DMICCLK_DMICCLKPREDIV                                         3
#define     CMU_DMICCLK_DMICOVFS_E                                            2
#define     CMU_DMICCLK_DMICOVFS_SHIFT                                        1
#define     CMU_DMICCLK_DMICOVFS_MASK                                         (0x3<<1)
#define     CMU_DMICCLK_DMICCLKEN                                             0

#define     CMU_I2SG0CLK_SRDCLKSRC_E                                          31
#define     CMU_I2SG0CLK_SRDCLKSRC_SHIFT                                      30
#define     CMU_I2SG0CLK_SRDCLKSRC_MASK                                       (0x3<<30)
#define     CMU_I2SG0CLK_SRDCLKEN                                             29
#define     CMU_I2SG0CLK_BCLKORVS                                             27
#define     CMU_I2SG0CLK_LRCLKOEN                                             26
#define     CMU_I2SG0CLK_BCLKOEN                                              25
#define     CMU_I2SG0CLK_MCLKOEN                                              24
#define     CMU_I2SG0CLK_LRCLKDEBTHRD_E                                       23
#define     CMU_I2SG0CLK_LRCLKDEBTHRD_SHIFT                                   22
#define     CMU_I2SG0CLK_LRCLKDEBTHRD_MASK                                    (0x3<<22)
#define     CMU_I2SG0CLK_LRCLKDEBEN                                           21
#define     CMU_I2SG0CLK_LRCLKPROC_E                                          20
#define     CMU_I2SG0CLK_LRCLKPROC_SHIFT                                      19
#define     CMU_I2SG0CLK_LRCLKPROC_MASK                                       (0x3<<19)
#define     CMU_I2SG0CLK_LRCLKDIV_E                                           18
#define     CMU_I2SG0CLK_LRCLKDIV_SHIFT                                       16
#define     CMU_I2SG0CLK_LRCLKDIV_MASK                                        (0x7<<16)
#define     CMU_I2SG0CLK_BCLKDIV_E                                            15
#define     CMU_I2SG0CLK_BCLKDIV_SHIFT                                        14
#define     CMU_I2SG0CLK_BCLKDIV_MASK                                         (0x3<<14)
#define     CMU_I2SG0CLK_BCLKEXTREV                                           13
#define     CMU_I2SG0CLK_BLRCLKSRC                                            12
#define     CMU_I2SG0CLK_BCLKDEBEN                                            11
#define     CMU_I2SG0CLK_MCLKEXTREV                                           10
#define     CMU_I2SG0CLK_MCLKSRC_E                                            9
#define     CMU_I2SG0CLK_MCLKSRC_SHIFT                                        8
#define     CMU_I2SG0CLK_MCLKSRC_MASK                                         (0x3<<8)
#define     CMU_I2SG0CLK_G0CLKEN                                              7
#define     CMU_I2SG0CLK_BCLKDEBTHRD_E                                        6
#define     CMU_I2SG0CLK_BCLKDEBTHRD_SHIFT                                    5
#define     CMU_I2SG0CLK_BCLKDEBTHRD_MASK                                     (0x3<<5)
#define     CMU_I2SG0CLK_G0CLKSRC                                             4
#define     CMU_I2SG0CLK_G0CLKDIV_E                                           3
#define     CMU_I2SG0CLK_G0CLKDIV_SHIFT                                       0
#define     CMU_I2SG0CLK_G0CLKDIV_MASK                                        (0xF<<0)

#define     CMU_I2SG1CLK_SRDCLKSRC_E                                          31
#define     CMU_I2SG1CLK_SRDCLKSRC_SHIFT                                      30
#define     CMU_I2SG1CLK_SRDCLKSRC_MASK                                       (0x3<<30)
#define     CMU_I2SG1CLK_SRDCLKEN                                             29
#define     CMU_I2SG1CLK_BCLKORVS                                             27
#define     CMU_I2SG1CLK_LRCLKOEN                                             26
#define     CMU_I2SG1CLK_BCLKOEN                                              25
#define     CMU_I2SG1CLK_MCLKOEN                                              24
#define     CMU_I2SG1CLK_LRCLKDEBTHRD_E                                       23
#define     CMU_I2SG1CLK_LRCLKDEBTHRD_SHIFT                                   22
#define     CMU_I2SG1CLK_LRCLKDEBTHRD_MASK                                    (0x3<<22)
#define     CMU_I2SG1CLK_LRCLKDEBEN                                           21
#define     CMU_I2SG1CLK_LRCLKPROC_E                                          20
#define     CMU_I2SG1CLK_LRCLKPROC_SHIFT                                      19
#define     CMU_I2SG1CLK_LRCLKPROC_MASK                                       (0x3<<19)
#define     CMU_I2SG1CLK_LRCLKDIV_E                                           18
#define     CMU_I2SG1CLK_LRCLKDIV_SHIFT                                       16
#define     CMU_I2SG1CLK_LRCLKDIV_MASK                                        (0x7<<16)
#define     CMU_I2SG1CLK_BCLKDIV_E                                            15
#define     CMU_I2SG1CLK_BCLKDIV_SHIFT                                        14
#define     CMU_I2SG1CLK_BCLKDIV_MASK                                         (0x3<<14)
#define     CMU_I2SG1CLK_BCLKEXTREV                                           13
#define     CMU_I2SG1CLK_BLRCLKSRC                                            12
#define     CMU_I2SG1CLK_BCLKDEBEN                                            11
#define     CMU_I2SG1CLK_G1CLKEN                                              7
#define     CMU_I2SG1CLK_BCLKDEBTHRD_E                                        6
#define     CMU_I2SG1CLK_BCLKDEBTHRD_SHIFT                                    5
#define     CMU_I2SG1CLK_BCLKDEBTHRD_MASK                                     (0x3<<5)
#define     CMU_I2SG1CLK_G1CLKSRC                                             4
#define     CMU_I2SG1CLK_G1CLKDIV_E                                           3
#define     CMU_I2SG1CLK_G1CLKDIV_SHIFT                                       0
#define     CMU_I2SG1CLK_G1CLKDIV_MASK                                        (0xF<<0)

#define     CMU_I2SG2CLK_SRDCLKSRC_E                                          31
#define     CMU_I2SG2CLK_SRDCLKSRC_SHIFT                                      30
#define     CMU_I2SG2CLK_SRDCLKSRC_MASK                                       (0x3<<30)
#define     CMU_I2SG2CLK_SRDCLKEN                                             29
#define     CMU_I2SG2CLK_BCLKORVS                                             27
#define     CMU_I2SG2CLK_LRCLKOEN                                             26
#define     CMU_I2SG2CLK_BCLKOEN                                              25
#define     CMU_I2SG2CLK_MCLKOEN                                              24
#define     CMU_I2SG2CLK_LRCLKDEBTHRD_E                                       23
#define     CMU_I2SG2CLK_LRCLKDEBTHRD_SHIFT                                   22
#define     CMU_I2SG2CLK_LRCLKDEBTHRD_MASK                                    (0x3<<22)
#define     CMU_I2SG2CLK_LRCLKDEBEN                                           21
#define     CMU_I2SG2CLK_LRCLKPROC_E                                          20
#define     CMU_I2SG2CLK_LRCLKPROC_SHIFT                                      19
#define     CMU_I2SG2CLK_LRCLKPROC_MASK                                       (0x3<<19)
#define     CMU_I2SG2CLK_LRCLKDIV_E                                           18
#define     CMU_I2SG2CLK_LRCLKDIV_SHIFT                                       16
#define     CMU_I2SG2CLK_LRCLKDIV_MASK                                        (0x7<<16)
#define     CMU_I2SG2CLK_BCLKDIV_E                                            15
#define     CMU_I2SG2CLK_BCLKDIV_SHIFT                                        14
#define     CMU_I2SG2CLK_BCLKDIV_MASK                                         (0x3<<14)
#define     CMU_I2SG2CLK_BCLKEXTREV                                           13
#define     CMU_I2SG2CLK_BLRCLKSRC                                            12
#define     CMU_I2SG2CLK_BCLKDEBEN                                            11
#define     CMU_I2SG2CLK_G2CLKEN                                              7
#define     CMU_I2SG2CLK_BCLKDEBTHRD_E                                        6
#define     CMU_I2SG2CLK_BCLKDEBTHRD_SHIFT                                    5
#define     CMU_I2SG2CLK_BCLKDEBTHRD_MASK                                     (0x3<<5)
#define     CMU_I2SG2CLK_G2CLKSRC                                             4
#define     CMU_I2SG2CLK_G2CLKDIV_E                                           3
#define     CMU_I2SG2CLK_G2CLKDIV_SHIFT                                       0
#define     CMU_I2SG2CLK_G2CLKDIV_MASK                                        (0xF<<0)

#define     CMU_I2SG3CLK_SRDCLKSRC_E                                          31
#define     CMU_I2SG3CLK_SRDCLKSRC_SHIFT                                      30
#define     CMU_I2SG3CLK_SRDCLKSRC_MASK                                       (0x3<<30)
#define     CMU_I2SG3CLK_SRDCLKEN                                             29
#define     CMU_I2SG3CLK_BCLKORVS                                             27
#define     CMU_I2SG3CLK_LRCLKOEN                                             26
#define     CMU_I2SG3CLK_BCLKOEN                                              25
#define     CMU_I2SG3CLK_MCLKOEN                                              24
#define     CMU_I2SG3CLK_LRCLKDEBTHRD_E                                       23
#define     CMU_I2SG3CLK_LRCLKDEBTHRD_SHIFT                                   22
#define     CMU_I2SG3CLK_LRCLKDEBTHRD_MASK                                    (0x3<<22)
#define     CMU_I2SG3CLK_LRCLKDEBEN                                           21
#define     CMU_I2SG3CLK_LRCLKPROC_E                                          20
#define     CMU_I2SG3CLK_LRCLKPROC_SHIFT                                      19
#define     CMU_I2SG3CLK_LRCLKPROC_MASK                                       (0x3<<19)
#define     CMU_I2SG3CLK_LRCLKDIV_E                                           18
#define     CMU_I2SG3CLK_LRCLKDIV_SHIFT                                       16
#define     CMU_I2SG3CLK_LRCLKDIV_MASK                                        (0x7<<16)
#define     CMU_I2SG3CLK_BCLKDIV_E                                            15
#define     CMU_I2SG3CLK_BCLKDIV_SHIFT                                        14
#define     CMU_I2SG3CLK_BCLKDIV_MASK                                         (0x3<<14)
#define     CMU_I2SG3CLK_BCLKEXTREV                                           13
#define     CMU_I2SG3CLK_BLRCLKSRC                                            12
#define     CMU_I2SG3CLK_BCLKEXTDEB                                           11
#define     CMU_I2SG3CLK_G3CLKEN                                              7
#define     CMU_I2SG3CLK_BCLKDEBTHRD_E                                        6
#define     CMU_I2SG3CLK_BCLKDEBTHRD_SHIFT                                    5
#define     CMU_I2SG3CLK_BCLKDEBTHRD_MASK                                     (0x3<<5)
#define     CMU_I2SG3CLK_G3CLKSRC                                             4
#define     CMU_I2SG3CLK_G3CLKDIV_E                                           3
#define     CMU_I2SG3CLK_G3CLKDIV_SHIFT                                       0
#define     CMU_I2SG3CLK_G3CLKDIV_MASK                                        (0xF<<0)

#define     CMU_I2STXCLK_I2STX1FIFOCLKEN                                      7
#define     CMU_I2STXCLK_I2STX1CLKSRC_E                                       5
#define     CMU_I2STXCLK_I2STX1CLKSRC_SHIFT                                   4
#define     CMU_I2STXCLK_I2STX1CLKSRC_MASK                                    (0x3<<4)
#define     CMU_I2STXCLK_I2STX0FIFOCLKEN                                      3
#define     CMU_I2STXCLK_I2STX0CLKSRC_E                                       1
#define     CMU_I2STXCLK_I2STX0CLKSRC_SHIFT                                   0
#define     CMU_I2STXCLK_I2STX0CLKSRC_MASK                                    (0x3<<0)

#define     CMU_I2SRXCLK_I2SRX1FIFOCLKEN                                      7
#define     CMU_I2SRXCLK_I2SRX1CLKSRC_E                                       5
#define     CMU_I2SRXCLK_I2SRX1CLKSRC_SHIFT                                   4
#define     CMU_I2SRXCLK_I2SRX1CLKSRC_MASK                                    (0x3<<4)
#define     CMU_I2SRXCLK_I2SRX0FIFOCLKEN                                      3
#define     CMU_I2SRXCLK_I2SRX0CLKSRC_E                                       1
#define     CMU_I2SRXCLK_I2SRX0CLKSRC_SHIFT                                   0
#define     CMU_I2SRXCLK_I2SRX0CLKSRC_MASK                                    (0x3<<0)

#define     CMU_BCLKDECT_CLKON_TINTEN                                         19
#define     CMU_BCLKDECT_NOCLK_INTEN                                          18
#define     CMU_BCLKDECT_CLKON_INTPD                                          17
#define     CMU_BCLKDECT_CLKON_DECTEN                                         16
#define     CMU_BCLKDECT_NOCLK_DECTCOUNTER_E                                  15
#define     CMU_BCLKDECT_NOCLK_DECTCOUNTER_SHIFT                              6
#define     CMU_BCLKDECT_NOCLK_DECTCOUNTER_MASK                               (0x3FF<<6)
#define     CMU_BCLKDECT_NOCLK_TINTPD                                         5
#define     CMU_BCLKDECT_NOCLK_DECTEN                                         4
#define     CMU_BCLKDECT_GXBCLK_SEL_E                                         3
#define     CMU_BCLKDECT_GXBCLK_SEL_SHIFT                                     2
#define     CMU_BCLKDECT_GXBCLK_SEL_MASK                                      (0x3<<2)

#define     CMU_GPIOCLK_GPIOCLKSRC                                            0

#define     CMU_MEMCLKEN_ASRCRAM3CLKEN                                        19
#define     CMU_MEMCLKEN_ASRCRAM2CLKEN                                        16
#define     CMU_MEMCLKEN_ASRCRAM1CLKEN                                        13
#define     CMU_MEMCLKEN_ASRCRAM0CLKEN                                        10
#define     CMU_MEMCLKEN_ASRCROM11CLKEN                                       7
#define     CMU_MEMCLKEN_ASRCROM10CLKEN                                       4
#define     CMU_MEMCLKEN_ASRCROM03CLKEN                                       3
#define     CMU_MEMCLKEN_ASRCROM02CLKEN                                       2
#define     CMU_MEMCLKEN_ASRCROM01CLKEN                                       1
#define     CMU_MEMCLKEN_ASRCROM00CLKEN                                       0

#define     CMU_MEMCLKSRC_ASRCRAM23CLKSRC_E                                   27
#define     CMU_MEMCLKSRC_ASRCRAM23CLKSRC_SHIFT                               25
#define     CMU_MEMCLKSRC_ASRCRAM23CLKSRC_MASK                                (0x7<<25)
#define     CMU_MEMCLKSRC_ASRCRAM01CLKSRC_E                                   24
#define     CMU_MEMCLKSRC_ASRCRAM01CLKSRC_SHIFT                               22
#define     CMU_MEMCLKSRC_ASRCRAM01CLKSRC_MASK                                (0x7<<22)
#define     CMU_MEMCLKSRC_ASRCRAM3CLKSRC_E                                    21
#define     CMU_MEMCLKSRC_ASRCRAM3CLKSRC_SHIFT                                19
#define     CMU_MEMCLKSRC_ASRCRAM3CLKSRC_MASK                                 (0x7<<19)
#define     CMU_MEMCLKSRC_ASRCRAM2CLKSRC_E                                    18
#define     CMU_MEMCLKSRC_ASRCRAM2CLKSRC_SHIFT                                16
#define     CMU_MEMCLKSRC_ASRCRAM2CLKSRC_MASK                                 (0x7<<16)
#define     CMU_MEMCLKSRC_ASRCRAM1CLKSRC_E                                    15
#define     CMU_MEMCLKSRC_ASRCRAM1CLKSRC_SHIFT                                13
#define     CMU_MEMCLKSRC_ASRCRAM1CLKSRC_MASK                                 (0x7<<13)
#define     CMU_MEMCLKSRC_ASRCRAM0CLKSRC_E                                    12
#define     CMU_MEMCLKSRC_ASRCRAM0CLKSRC_SHIFT                                10
#define     CMU_MEMCLKSRC_ASRCRAM0CLKSRC_MASK                                 (0x7<<10)
#define     CMU_MEMCLKSRC_ASRCROM11CLKSRC_E                                   9
#define     CMU_MEMCLKSRC_ASRCROM11CLKSRC_SHIFT                               7
#define     CMU_MEMCLKSRC_ASRCROM11CLKSRC_MASK                                (0x7<<7)
#define     CMU_MEMCLKSRC_ASRCROM10CLKSRC_E                                   6
#define     CMU_MEMCLKSRC_ASRCROM10CLKSRC_SHIFT                               4
#define     CMU_MEMCLKSRC_ASRCROM10CLKSRC_MASK                                (0x7<<4)
#define     CMU_MEMCLKSRC_ASRCROM03CLKSRC                                     3
#define     CMU_MEMCLKSRC_ASRCROM02CLKSRC                                     2
#define     CMU_MEMCLKSRC_ASRCROM01CLKSRC                                     1
#define     CMU_MEMCLKSRC_ASRCROM00CLKSRC                                     0

//--------------CMUA-------------------------------------------//
//--------------Register Address---------------------------------------//
#define     CMUA_BASE                                                         0x50008100
#define     HOSC_CTL                                                          (CMUA_BASE+0x00)
#define     AUDIOPLL_CTL                                                      (CMUA_BASE+0x04)
#define     DSPPLL_CTL                                                        (CMUA_BASE+0x08)
#define     RC64M_CTL                                                         (CMUA_BASE+0x0c)
#define     CLKIN_CTL                                                         (CMUA_BASE+0x1C)
#define     AVDDLDO_CTL                                                       (CMUA_BASE+0x20)

//--------------Bits Location------------------------------------------//
#define     HOSC_CTL_HOSCI_BC_SEL_E                                           23
#define     HOSC_CTL_HOSCI_BC_SEL_SHIFT                                       21
#define     HOSC_CTL_HOSCI_BC_SEL_MASK                                        (0x7<<21)
#define     HOSC_CTL_HOSCI_TC_SEL_E                                           20
#define     HOSC_CTL_HOSCI_TC_SEL_SHIFT                                       16
#define     HOSC_CTL_HOSCI_TC_SEL_MASK                                        (0x1F<<16)
#define     HOSC_CTL_HOSCO_BC_SEL_E                                           15
#define     HOSC_CTL_HOSCO_BC_SEL_SHIFT                                       13
#define     HOSC_CTL_HOSCO_BC_SEL_MASK                                        (0x7<<13)
#define     HOSC_CTL_HOSCO_TC_SEL_E                                           12
#define     HOSC_CTL_HOSCO_TC_SEL_SHIFT                                       8
#define     HOSC_CTL_HOSCO_TC_SEL_MASK                                        (0x1F<<8)
#define     HOSC_CTL_RBIASOFF                                                 7
#define     HOSC_CTL_HOSCOUT_SEL                                              6
#define     HOSC_CTL_HOSCVDD_DEBSEL                                           5
#define     HOSC_CTL_HGMC_E                                                   4
#define     HOSC_CTL_HGMC_SHIFT                                               1
#define     HOSC_CTL_HGMC_MASK                                                (0xF<<1)
#define     HOSC_CTL_HOSC_EN                                                  0

#define     AUDIOPLL_CTL_AUDPLL_LOCK                                          8
#define     AUDIOPLL_CTL_AUDPLLEN                                             7
#define     AUDIOPLL_CTL_AUDPLLSRC                                            6
#define     AUDIOPLL_CTL_AUDPLLFSRL                                           3
#define     AUDIOPLL_CTL_AUDPLL_INCLK_E                                       2
#define     AUDIOPLL_CTL_AUDPLL_INCLK_SHIFT                                   0
#define     AUDIOPLL_CTL_AUDPLL_INCLK_MASK                                    (0x7<<0)

#define     DSPPLL_CTL_DSPPLL_LOCK                                            8
#define     DSPPLL_CTL_DSPPLL_EN                                              7
#define     DSPPLL_CTL_DSPPLL_SRC                                             6
#define     DSPPLL_CTL_SCORE_E                                                5
#define     DSPPLL_CTL_SCORE_SHIFT                                            0
#define     DSPPLL_CTL_SCORE_MASK                                             (0x3F<<0)

#define     RC64M_CTL_FRQCAL_E                                                30
#define     RC64M_CTL_FRQCAL_SHIFT                                            25
#define     RC64M_CTL_FRQCAL_MASK                                             (0x3F<<25)
#define     RC64M_CTL_CALDONE                                                 24
#define     RC64M_CTL_FRQASET_E                                               23
#define     RC64M_CTL_FRQASET_SHIFT                                           14
#define     RC64M_CTL_FRQASET_MASK                                            (0x3FF<<14)
#define     RC64M_CTL_INRANGE_E                                               13
#define     RC64M_CTL_INRANGE_SHIFT                                           12
#define     RC64M_CTL_INRANGE_MASK                                            (0x3<<12)
#define     RC64M_CTL_FRQMSET_E                                               9
#define     RC64M_CTL_FRQMSET_SHIFT                                           4
#define     RC64M_CTL_FRQMSET_MASK                                            (0x3F<<4)
#define     RC64M_CTL_CALMODE                                                 3
#define     RC64M_CTL_CALEN                                                   2
#define     RC64M_CTL_CALREF                                                  1

#define     CLKIN_CTL_ACLKIN_SEL_E                                            3
#define     CLKIN_CTL_ACLKIN_SEL_SHIFT                                        2
#define     CLKIN_CTL_ACLKIN_SEL_MASK                                         (0x3<<2)
#define     CLKIN_CTL_ACLKIN_EN                                               0

#define     AVDDLDO_CTL_AVDD_PD_BIASSET                                       5
#define     AVDDLDO_CTL_AVDD_PD_EN                                            4
#define     AVDDLDO_CTL_AVDD_VSET_E                                           3
#define     AVDDLDO_CTL_AVDD_VSET_SHIFT                                       2
#define     AVDDLDO_CTL_AVDD_VSET_MASK                                        (0x3<<2)
#define     AVDDLDO_CTL_AVDD_EN                                               0

//--------------RMU-------------------------------------------//
//--------------Register Address---------------------------------------//
#define     RMU_BASE                                                          0x50008400
#define     MRCR0                                                             (RMU_BASE+0x000)
#define     CHIP_ID                                                      (RMU_BASE+0x004)
#define     DSP_VCT_ADDR                                                      (RMU_BASE+0x008)

//--------------Bits Location------------------------------------------//
#define     MRCR0_I2SSRD3_RESET                                               21
#define     MRCR0_I2SSRD2_RESET                                               20
#define     MRCR0_I2SSRD1_RESET                                               19
#define     MRCR0_I2SSRD0_RESET                                               18
#define     MRCR0_I2STX5_RESET                                                16
#define     MRCR0_I2SRX1_RESET                                                15
#define     MRCR0_I2SRX0_RESET                                                14
#define     MRCR0_I2STX1_RESET                                                13
#define     MRCR0_I2STX0_RESET                                                12
#define     MRCR0_AUDIO_REF_RESET                                             10
#define     MRCR0_DAC_RESET                                                   9
#define     MRCR0_ADC_RESET                                                   8
#define     MRCR0_I2C1_RESET                                                  7
#define     MRCR0_SPI1_RESET                                                  6
#define     MRCR0_UART_RESET                                                  5
#define     MRCR0_I2C0_RESET                                                  4
#define     MRCR0_SPI0_RESET                                                  3
#define     MRCR0_DMA_RESET                                                   2
#define     MRCR0_ASRC_RESET                                                  1
#define     MRCR0_DSP_RESET                                                   0

#define     DSP_VCT_ADDR_DSP_VCT_ADDR_E                                       31
#define     DSP_VCT_ADDR_DSP_VCT_ADDR_SHIFT                                   0
#define     DSP_VCT_ADDR_DSP_VCT_ADDR_MASK                                    (0xFFFFFFFF<<0)

//--------------INTC-------------------------------------------//
//--------------Register Address---------------------------------------//
#define     INTC_BASE                                                         0x50008300
#define     SLAVE_CTRL                                                        (INTC_BASE+0x000)
#define     IO_STATUS                                                         (INTC_BASE+0x04)

//--------------Bits Location------------------------------------------//
#define     SLAVE_CTRL_SLV_PD                                                 5
#define     SLAVE_CTRL_SLV_INT_EN                                             4
#define     SLAVE_CTRL_SLV_RS_PD                                              2
#define     SLAVE_CTRL_SLV_RS_INT_EN                                          1
#define     SLAVE_CTRL_SLV_RS_EN                                              0

#define     IO_STATUS_SPINOREX_STA                                            1
#define     IO_STATUS_I2CSEL_STA                                              0

//--------------WD-------------------------------------------//
//--------------Register Address---------------------------------------//
#define     WD_BASE                                                           0x50008600
#define     WD_CTL                                                            (WD_BASE+0x00)

//--------------Bits Location------------------------------------------//
#define     WD_CTL_IRQP                                                       6
#define     WD_CTL_SIGS                                                       5
#define     WD_CTL_WDEN                                                       4
#define     WD_CTL_CLKSEL_E                                                   3
#define     WD_CTL_CLKSEL_SHIFT                                               1
#define     WD_CTL_CLKSEL_MASK                                                (0x7<<1)
#define     WD_CTL_CLR                                                        0

//--------------DAC-------------------------------------------//
//--------------Register Address---------------------------------------//
#define     DAC_BASE                                                          0x50030000
#define     DAC_DIGCTL                                                        (DAC_BASE+0x00)
#define     DAC1_DIGCTL                                                       (DAC_BASE+0x04)
#define     DAC_FIFOCTL                                                       (DAC_BASE+0x08)
#define     DAC_STAT                                                          (DAC_BASE+0x0c)
#define     DAC_DAT_FIFO0                                                     (DAC_BASE+0x10)
#define     DAC_DAT_FIFO1                                                     (DAC_BASE+0x14)
#define     SDM_DITHER_CTL                                                    (DAC_BASE+0x28)
#define     AUTO_MUTE_L_CTL                                                   (DAC_BASE+0x2C)
#define     AUTO_MUTE_R_CTL                                                   (DAC_BASE+0x30)
#define     VOL_LCH                                                           (DAC_BASE+0x34)
#define     VOL_RCH                                                           (DAC_BASE+0x38)
#define     VOL1_LCH                                                          (DAC_BASE+0x3c)
#define     VOL1_RCH                                                          (DAC_BASE+0x40)
#define     FIFO0_CNT                                                         (DAC_BASE+0x44)
#define     FIFO1_CNT                                                         (DAC_BASE+0x48)
#define     SDM_SAMPLES_CNT                                                   (DAC_BASE+0x4c)
#define     SDM1_SAMPLES_CNT                                                  (DAC_BASE+0x54)
#define     DC_REF_DAT_L                                                      (DAC_BASE+0x60)
#define     DC_REF_DAT_R                                                      (DAC_BASE+0x64)
#define     DAC_ALL_IRQ                                                       (DAC_BASE+0x68)
#define     DAC_ALL_PD                                                        (DAC_BASE+0x6c)
#define     DAC_ANACTL0                                                       (DAC_BASE+0x70)
#define     DAC_ANACTL1                                                       (DAC_BASE+0x74)
#define     DAC_ANACTL2                                                       (DAC_BASE+0x78)
#define     DAC_BIAS                                                          (DAC_BASE+0x7c)
#define     CLK_EXCEPTION                                                     (DAC_BASE+0x84)
#define     DAC_ANACTL3                                                       (DAC_BASE+0x88)

//--------------Bits Location------------------------------------------//
#define     DAC_DIGCTL_US_FILTER_MODE_E                                       31
#define     DAC_DIGCTL_US_FILTER_MODE_SHIFT                                   29
#define     DAC_DIGCTL_US_FILTER_MODE_MASK                                    (0x7<<29)
#define     DAC_DIGCTL_SDM_MODE_SEL                                           25
#define     DAC_DIGCTL_SDM_DITH_EN                                            24
#define     DAC_DIGCTL_AD2DA_CHSEL_E                                          23
#define     DAC_DIGCTL_AD2DA_CHSEL_SHIFT                                      22
#define     DAC_DIGCTL_AD2DA_CHSEL_MASK                                       (0x3<<22)
#define     DAC_DIGCTL_AD2DALPENL                                             21
#define     DAC_DIGCTL_AD2DALPENR                                             20
#define     DAC_DIGCTL_ADC01MIX                                               19
#define     DAC_DIGCTL_DAF0M2DAEN                                             17
#define     DAC_DIGCTL_DADCS                                                  16
#define     DAC_DIGCTL_DADEN                                                  15
#define     DAC_DIGCTL_DDDEN                                                  14
#define     DAC_DIGCTL_MULT_DEVICE_E                                          11
#define     DAC_DIGCTL_MULT_DEVICE_SHIFT                                      10
#define     DAC_DIGCTL_MULT_DEVICE_MASK                                       (0x3<<10)
#define     DAC_DIGCTL_DALRMIX                                                9
#define     DAC_DIGCTL_DACHNUM                                                8
#define     DAC_DIGCTL_SR_E                                                   7
#define     DAC_DIGCTL_SR_SHIFT                                               4
#define     DAC_DIGCTL_SR_MASK                                                (0xF<<4)
#define     DAC_DIGCTL_CIC_RATE                                               3
#define     DAC_DIGCTL_ENDITH                                                 2
#define     DAC_DIGCTL_DDEN_R                                                 1
#define     DAC_DIGCTL_DDEN_L                                                 0

#define     DAC1_DIGCTL_TTS_MIX_SDM                                           18
#define     DAC1_DIGCTL_DAF1M2DAEN                                            17
#define     DAC1_DIGCTL_DALRMIX                                               9
#define     DAC1_DIGCTL_DACHNUM                                               8
#define     DAC1_DIGCTL_SR_1_E                                                7
#define     DAC1_DIGCTL_SR_1_SHIFT                                            4
#define     DAC1_DIGCTL_SR_1_MASK                                             (0xF<<4)
#define     DAC1_DIGCTL_DDEN_R                                                1
#define     DAC1_DIGCTL_DDEN_L                                                0

#define     DAC_FIFOCTL_DRQ1_LEVEL_E                                          31
#define     DAC_FIFOCTL_DRQ1_LEVEL_SHIFT                                      27
#define     DAC_FIFOCTL_DRQ1_LEVEL_MASK                                       (0x1F<<27)
#define     DAC_FIFOCTL_DAC1IS_E                                              26
#define     DAC_FIFOCTL_DAC1IS_SHIFT                                          24
#define     DAC_FIFOCTL_DAC1IS_MASK                                           (0x7<<24)
#define     DAC_FIFOCTL_DACFIFO1_DMAWIDTH                                     23
#define     DAC_FIFOCTL_DAF1IS_E                                              22
#define     DAC_FIFOCTL_DAF1IS_SHIFT                                          20
#define     DAC_FIFOCTL_DAF1IS_MASK                                           (0x7<<20)
#define     DAC_FIFOCTL_DAF1EDE                                               17
#define     DAC_FIFOCTL_DAF1RT                                                16
#define     DAC_FIFOCTL_DRQ0_LEVEL_E                                          15
#define     DAC_FIFOCTL_DRQ0_LEVEL_SHIFT                                      11
#define     DAC_FIFOCTL_DRQ0_LEVEL_MASK                                       (0x1F<<11)
#define     DAC_FIFOCTL_DAC0IS_E                                              10
#define     DAC_FIFOCTL_DAC0IS_SHIFT                                          8
#define     DAC_FIFOCTL_DAC0IS_MASK                                           (0x7<<8)
#define     DAC_FIFOCTL_DACFIFO0_DMAWIDTH                                     7
#define     DAC_FIFOCTL_DAF0IS_E                                              6
#define     DAC_FIFOCTL_DAF0IS_SHIFT                                          4
#define     DAC_FIFOCTL_DAF0IS_MASK                                           (0x7<<4)
#define     DAC_FIFOCTL_DAF0EDE                                               1
#define     DAC_FIFOCTL_DAF0RT                                                0

#define     DAC_STAT_DAF1S_E                                                  21
#define     DAC_STAT_DAF1S_SHIFT                                              16
#define     DAC_STAT_DAF1S_MASK                                               (0x3F<<16)
#define     DAC_STAT_DAF0S_E                                                  5
#define     DAC_STAT_DAF0S_SHIFT                                              0
#define     DAC_STAT_DAF0S_MASK                                               (0x3F<<0)

#define     DAC_DAT_FIFO0_DAFDAT_E                                            31
#define     DAC_DAT_FIFO0_DAFDAT_SHIFT                                        8
#define     DAC_DAT_FIFO0_DAFDAT_MASK                                         (0xFFFFFF<<8)

#define     DAC_DAT_FIFO1_DAFDAT_E                                            31
#define     DAC_DAT_FIFO1_DAFDAT_SHIFT                                        8
#define     DAC_DAT_FIFO1_DAFDAT_MASK                                         (0xFFFFFF<<8)

#define     SDM_DITHER_CTL_SHIFT_BIT_E                                        4
#define     SDM_DITHER_CTL_SHIFT_BIT_SHIFT                                    1
#define     SDM_DITHER_CTL_SHIFT_BIT_MASK                                     (0xF<<1)
#define     SDM_DITHER_CTL_EN                                                 0

#define     AUTO_MUTE_L_CTL_AMCNT_E                                           31
#define     AUTO_MUTE_L_CTL_AMCNT_SHIFT                                       16
#define     AUTO_MUTE_L_CTL_AMCNT_MASK                                        (0xFFFF<<16)
#define     AUTO_MUTE_L_CTL_AMTH_E                                            15
#define     AUTO_MUTE_L_CTL_AMTH_SHIFT                                        4
#define     AUTO_MUTE_L_CTL_AMTH_MASK                                         (0xFFF<<4)
#define     AUTO_MUTE_L_CTL_MUTE_SDM                                          3
#define     AUTO_MUTE_L_CTL_AUMUTE_LINK                                       2
#define     AUTO_MUTE_L_CTL_AUMUTE_PA_CTL                                     1
#define     AUTO_MUTE_L_CTL_AMEN                                              0

#define     AUTO_MUTE_R_CTL_AMCNT_E                                           31
#define     AUTO_MUTE_R_CTL_AMCNT_SHIFT                                       16
#define     AUTO_MUTE_R_CTL_AMCNT_MASK                                        (0xFFFF<<16)
#define     AUTO_MUTE_R_CTL_AMTH_E                                            15
#define     AUTO_MUTE_R_CTL_AMTH_SHIFT                                        4
#define     AUTO_MUTE_R_CTL_AMTH_MASK                                         (0xFFF<<4)
#define     AUTO_MUTE_R_CTL_MUTE_SDM                                          3
#define     AUTO_MUTE_R_CTL_AUMUTE_PA_CTL                                     1
#define     AUTO_MUTE_R_CTL_AMEN                                              0

#define     VOL_LCH_TO_CNT                                                    20
#define     VOL_LCH_ADJ_CNT_E                                                 19
#define     VOL_LCH_ADJ_CNT_SHIFT                                             12
#define     VOL_LCH_ADJ_CNT_MASK                                              (0xFF<<12)
#define     VOL_LCH_DONE_STA                                                  11
#define     VOL_LCH_SOFT_STEP_EN                                              10
#define     VOL_LCH_VOLLZCTOEN                                                9
#define     VOL_LCH_VOLLZCEN                                                  8
#define     VOL_LCH_VOLL_E                                                    7
#define     VOL_LCH_VOLL_SHIFT                                                0
#define     VOL_LCH_VOLL_MASK                                                 (0xFF<<0)

#define     VOL_RCH_TO_CNT                                                    20
#define     VOL_RCH_ADJ_CNT_E                                                 19
#define     VOL_RCH_ADJ_CNT_SHIFT                                             12
#define     VOL_RCH_ADJ_CNT_MASK                                              (0xFF<<12)
#define     VOL_RCH_DONE_STA                                                  11
#define     VOL_RCH_SOFT_STEP_EN                                              10
#define     VOL_RCH_VOLRZCTOEN                                                9
#define     VOL_RCH_VOLRZCEN                                                  8
#define     VOL_RCH_VOLR_E                                                    7
#define     VOL_RCH_VOLR_SHIFT                                                0
#define     VOL_RCH_VOLR_MASK                                                 (0xFF<<0)

#define     VOL1_LCH_TO_CNT                                                   20
#define     VOL1_LCH_ADJ_CNT_E                                                19
#define     VOL1_LCH_ADJ_CNT_SHIFT                                            12
#define     VOL1_LCH_ADJ_CNT_MASK                                             (0xFF<<12)
#define     VOL1_LCH_DONE_STA                                                 11
#define     VOL1_LCH_SOFT_STEP_EN                                             10
#define     VOL1_LCH_VOLLZCTOEN                                               9
#define     VOL1_LCH_VOLLZCEN                                                 8
#define     VOL1_LCH_VOLL_E                                                   7
#define     VOL1_LCH_VOLL_SHIFT                                               0
#define     VOL1_LCH_VOLL_MASK                                                (0xFF<<0)

#define     VOL1_RCH_TO_CNT                                                   20
#define     VOL1_RCH_ADJ_CNT_E                                                19
#define     VOL1_RCH_ADJ_CNT_SHIFT                                            12
#define     VOL1_RCH_ADJ_CNT_MASK                                             (0xFF<<12)
#define     VOL1_RCH_DONE_STA                                                 11
#define     VOL1_RCH_SOFT_STEP_EN                                             10
#define     VOL1_RCH_VOLRZCTOEN                                               9
#define     VOL1_RCH_VOLRZCEN                                                 8
#define     VOL1_RCH_VOLR_E                                                   7
#define     VOL1_RCH_VOLR_SHIFT                                               0
#define     VOL1_RCH_VOLR_MASK                                                (0xFF<<0)

#define     FIFO0_CNT_EN                                                      16
#define     FIFO0_CNT_CNT_E                                                   15
#define     FIFO0_CNT_CNT_SHIFT                                               0
#define     FIFO0_CNT_CNT_MASK                                                (0xFFFF<<0)

#define     FIFO1_CNT_EN                                                      16
#define     FIFO1_CNT_CNT_E                                                   15
#define     FIFO1_CNT_CNT_SHIFT                                               0
#define     FIFO1_CNT_CNT_MASK                                                (0xFFFF<<0)

#define     SDM_SAMPLES_CNT_EN                                                28
#define     SDM_SAMPLES_CNT_CNT_E                                             27
#define     SDM_SAMPLES_CNT_CNT_SHIFT                                         0
#define     SDM_SAMPLES_CNT_CNT_MASK                                          (0xFFFFFFF<<0)

#define     SDM1_SAMPLES_CNT_EN                                               28
#define     SDM1_SAMPLES_CNT_CNT_E                                            27
#define     SDM1_SAMPLES_CNT_CNT_SHIFT                                        0
#define     SDM1_SAMPLES_CNT_CNT_MASK                                         (0xFFFFFFF<<0)

#define     DC_REF_DAT_L_DC_DAT_E                                             31
#define     DC_REF_DAT_L_DC_DAT_SHIFT                                         8
#define     DC_REF_DAT_L_DC_DAT_MASK                                          (0xFFFFFF<<8)

#define     DC_REF_DAT_R_DC_DAT_E                                             31
#define     DC_REF_DAT_R_DC_DAT_SHIFT                                         8
#define     DC_REF_DAT_R_DC_DAT_MASK                                          (0xFFFFFF<<8)

#define     DAC_ALL_IRQ_AMR_IRQ_EN                                            23
#define     DAC_ALL_IRQ_AML_IRQ_EN                                            22
#define     DAC_ALL_IRQ_SDM_CNT1_IE                                           21
#define     DAC_ALL_IRQ_SDM_CNT_IE                                            20
#define     DAC_ALL_IRQ_FIFO1_CNT_IE                                          19
#define     DAC_ALL_IRQ_FIFO0_CNT_IE                                          18
#define     DAC_ALL_IRQ_VOLR1_IRQ_EN                                          17
#define     DAC_ALL_IRQ_VOLL1_IRQ_EN                                          16
#define     DAC_ALL_IRQ_VOLR_IRQ_EN                                           15
#define     DAC_ALL_IRQ_VOLL_IRQ_EN                                           14
#define     DAC_ALL_IRQ_DAF1EIE                                               13
#define     DAC_ALL_IRQ_FIFO1_EMPTY_IRQ                                       12
#define     DAC_ALL_IRQ_FIFO1_FULL_IRQ                                        11
#define     DAC_ALL_IRQ_DAF0EIE                                               10
#define     DAC_ALL_IRQ_FIFO0_EMPTY_IRQ                                       9
#define     DAC_ALL_IRQ_FIFO0_FULL_IRQ                                        8

#define     DAC_ALL_PD_AMR_OUT_PD                                             25
#define     DAC_ALL_PD_AML_OUT_PD                                             24
#define     DAC_ALL_PD_AMR_IN_PD                                              23
#define     DAC_ALL_PD_AML_IN_PD                                              22
#define     DAC_ALL_PD_SDM_CNT1_PD                                            21
#define     DAC_ALL_PD_SDM_CNT_PD                                             20
#define     DAC_ALL_PD_FIFO1_CNT_PD                                           19
#define     DAC_ALL_PD_FIFO0_CNT_PD                                           18
#define     DAC_ALL_PD_VOL1_RCH_DONE_PD                                       17
#define     DAC_ALL_PD_VOL1_LCH_DONE_PD                                       16
#define     DAC_ALL_PD_VOL_RCH_DONE_PD                                        15
#define     DAC_ALL_PD_VOL_LCH_DONE_PD                                        14
#define     DAC_ALL_PD_DAF1EIP                                                13
#define     DAC_ALL_PD_FIFO1_EMPTY_PD                                         12
#define     DAC_ALL_PD_FIFO1_FULL_PD                                          11
#define     DAC_ALL_PD_DAF0EIP                                                10
#define     DAC_ALL_PD_FIFO0_EMPTY_PD                                         9
#define     DAC_ALL_PD_FIFO0_FULL_PD                                          8

#define     DAC_ANACTL0_AUMUTE_ZERO_CTL_R                                     21
#define     DAC_ANACTL0_AUMUTE_ZERO_CTL_L                                     20
#define     DAC_ANACTL0_DLYSEL_E                                              16
#define     DAC_ANACTL0_DLYSEL_SHIFT                                          15
#define     DAC_ANACTL0_DLYSEL_MASK                                           (0x3<<15)
#define     DAC_ANACTL0_ZEROREN                                               14
#define     DAC_ANACTL0_SEL_FBCAP                                             13
#define     DAC_ANACTL0_DFCEN                                                 12
#define     DAC_ANACTL0_PAVOL_E                                               10
#define     DAC_ANACTL0_PAVOL_SHIFT                                           9
#define     DAC_ANACTL0_PAVOL_MASK                                            (0x3<<9)
#define     DAC_ANACTL0_DARSEL                                                8
#define     DAC_ANACTL0_PAROSEN                                               7
#define     DAC_ANACTL0_PAREN                                                 6
#define     DAC_ANACTL0_PALOSEN                                               5
#define     DAC_ANACTL0_PALEN                                                 4
#define     DAC_ANACTL0_ZEROLEN                                               3
#define     DAC_ANACTL0_DAENR                                                 2
#define     DAC_ANACTL0_DAENL                                                 1
#define     DAC_ANACTL0_BIASEN                                                0


#define     DAC_ANACTL2_SHDBGEN                                               20
#define     DAC_ANACTL2_SHCL_SET_E                                            19
#define     DAC_ANACTL2_SHCL_SET_SHIFT                                        12
#define     DAC_ANACTL2_SHCL_SET_MASK                                         (0xFF<<12)
#define     DAC_ANACTL2_SHCL_PW_E                                             11
#define     DAC_ANACTL2_SHCL_PW_SHIFT                                         4
#define     DAC_ANACTL2_SHCL_PW_MASK                                          (0xFF<<4)
#define     DAC_ANACTL2_SHCL_SEL_E                                            3
#define     DAC_ANACTL2_SHCL_SEL_SHIFT                                        2
#define     DAC_ANACTL2_SHCL_SEL_MASK                                         (0x3<<2)
#define     DAC_ANACTL2_OPCLAMP_EN                                            1
#define     DAC_ANACTL2_SH_CLKEN                                              0

#define     DAC_BIAS_BIASCTRLH_E                                              21
#define     DAC_BIAS_BIASCTRLH_SHIFT                                          20
#define     DAC_BIAS_BIASCTRLH_MASK                                           (0x3<<20)
#define     DAC_BIAS_PAIQS_E                                                  18
#define     DAC_BIAS_PAIQS_SHIFT                                              16
#define     DAC_BIAS_PAIQS_MASK                                               (0x7<<16)
#define     DAC_BIAS_IPA_E                                                    14
#define     DAC_BIAS_IPA_SHIFT                                                12
#define     DAC_BIAS_IPA_MASK                                                 (0x7<<12)
#define     DAC_BIAS_ITC_E                                                    9
#define     DAC_BIAS_ITC_SHIFT                                                8
#define     DAC_BIAS_ITC_MASK                                                 (0x3<<8)
#define     DAC_BIAS_IOPCLAMPN_E                                              7
#define     DAC_BIAS_IOPCLAMPN_SHIFT                                          6
#define     DAC_BIAS_IOPCLAMPN_MASK                                           (0x3<<6)
#define     DAC_BIAS_IOPCLAMPP_E                                              5
#define     DAC_BIAS_IOPCLAMPP_SHIFT                                          4
#define     DAC_BIAS_IOPCLAMPP_MASK                                           (0x3<<4)
#define     DAC_BIAS_IOPCM1_E                                                 3
#define     DAC_BIAS_IOPCM1_SHIFT                                             2
#define     DAC_BIAS_IOPCM1_MASK                                              (0x3<<2)
#define     DAC_BIAS_IOPVB_E                                                  1
#define     DAC_BIAS_IOPVB_SHIFT                                              0
#define     DAC_BIAS_IOPVB_MASK                                               (0x3<<0)

#define     CLK_EXCEPTION_CLK_EXCEPTION                                       31
#define     CLK_EXCEPTION_VOL1_HW_FADEOUT_DONE                                22
#define     CLK_EXCEPTION_VOL_HW_FADEOUT_DONE                                 20
#define     CLK_EXCEPTION_VOL1_ADJ_CNT_E                                      19
#define     CLK_EXCEPTION_VOL1_ADJ_CNT_SHIFT                                  12
#define     CLK_EXCEPTION_VOL1_ADJ_CNT_MASK                                   (0xFF<<12)
#define     CLK_EXCEPTION_VOL_ADJ_CNT_E                                       11
#define     CLK_EXCEPTION_VOL_ADJ_CNT_SHIFT                                   4
#define     CLK_EXCEPTION_VOL_ADJ_CNT_MASK                                    (0xFF<<4)
#define     CLK_EXCEPTION_HW_MUTE_VOL1_EN                                     1
#define     CLK_EXCEPTION_HW_MUTE_VOL_EN                                      0

#define     DAC_ANACTL3_FLAG_SHUFF_EN                                         27
#define     DAC_ANACTL3_FLAG_SHIFT_EN                                         26
#define     DAC_ANACTL3_SEG_HIGH_EN                                           25
#define     DAC_ANACTL3_SEG_LOW_EN                                            24
#define     DAC_ANACTL3_DATA_COUNT_NUM_E                                      23
#define     DAC_ANACTL3_DATA_COUNT_NUM_SHIFT                                  8
#define     DAC_ANACTL3_DATA_COUNT_NUM_MASK                                   (0xFFFF<<8)
#define     DAC_ANACTL3_DATA_THR_E                                            7
#define     DAC_ANACTL3_DATA_THR_SHIFT                                        2
#define     DAC_ANACTL3_DATA_THR_MASK                                         (0x3F<<2)

//--------------ADC-------------------------------------------//
//--------------Register Address---------------------------------------//
#define     ADC_BASE                                                          0x50030100
#define     ADC_DIGCTL                                                        (ADC_BASE+0x00)
#define     CH0_DIGCTL                                                        (ADC_BASE+0x04)
#define     CH1_DIGCTL                                                        (ADC_BASE+0x08)
#define     CH0_GAIN                                                          (ADC_BASE+0x24)
#define     CH1_GAIN                                                          (ADC_BASE+0x28)
#define     ADC_FIFOCTL                                                       (ADC_BASE+0x44)
#define     ADC_STAT                                                          (ADC_BASE+0x48)
#define     ADC_FIFO0_DAT                                                     (ADC_BASE+0x4c)
#define     ADC0_CTL                                                          (ADC_BASE+0x58)
#define     ADC0_BIAS                                                         (ADC_BASE+0x5c)
#define     ADC1_CTL                                                          (ADC_BASE+0x60)
#define     ADC1_BIAS                                                         (ADC_BASE+0x64)
#define     ADC_COM0_CTL                                                      (ADC_BASE+0x78)
#define     ADC_VMIC_CTL                                                      (ADC_BASE+0x80)
#define     AAL0_CTL                                                          (ADC_BASE+0x84)
#define     AAL1_CTL                                                          (ADC_BASE+0x88)

//--------------Bits Location------------------------------------------//
#define     ADC_DIGCTL_ANA0_GAIN_DONE_PD                                      31
#define     ADC_DIGCTL_ANA1_GAIN_DONE_PD                                      30
#define     ADC_DIGCTL_AAL_MODE                                               29
#define     ADC_DIGCTL_FILTER_MD_SEL_E                                        28
#define     ADC_DIGCTL_FILTER_MD_SEL_SHIFT                                    25
#define     ADC_DIGCTL_FILTER_MD_SEL_MASK                                     (0xF<<25)
#define     ADC_DIGCTL_DMIC_OVFS_E                                            24
#define     ADC_DIGCTL_DMIC_OVFS_SHIFT                                        22
#define     ADC_DIGCTL_DMIC_OVFS_MASK                                         (0x7<<22)
#define     ADC_DIGCTL_AMIC_OVFS_E                                            21
#define     ADC_DIGCTL_AMIC_OVFS_SHIFT                                        19
#define     ADC_DIGCTL_AMIC_OVFS_MASK                                         (0x7<<19)
#define     ADC_DIGCTL_ADC1_DIG_EN                                            12
#define     ADC_DIGCTL_ADC0_DIG_EN                                            11
#define     ADC_DIGCTL_DMIC_PRE_GAIN_E                                        10
#define     ADC_DIGCTL_DMIC_PRE_GAIN_SHIFT                                    8
#define     ADC_DIGCTL_DMIC_PRE_GAIN_MASK                                     (0x7<<8)
#define     ADC_DIGCTL_ANA_GAIN_IRQ                                           5
#define     ADC_DIGCTL_DMIC01_CHS                                             4
#define     ADC_DIGCTL_ADDEN                                                  3
#define     ADC_DIGCTL_AADEN                                                  2
#define     ADC_DIGCTL_ADDCS                                                  1

#define     CH0_DIGCTL_ADOS_E                                                 20
#define     CH0_DIGCTL_ADOS_SHIFT                                             18
#define     CH0_DIGCTL_ADOS_MASK                                              (0x7<<18)
#define     CH0_DIGCTL_MIC_SEL                                                17
#define     CH0_DIGCTL_DAT_OUT_EN                                             15
#define     CH0_DIGCTL_HPF_AS_TS_E                                            14
#define     CH0_DIGCTL_HPF_AS_TS_SHIFT                                        13
#define     CH0_DIGCTL_HPF_AS_TS_MASK                                         (0x3<<13)
#define     CH0_DIGCTL_HPF_AS_EN                                              12
#define     CH0_DIGCTL_HPFEN                                                  11
#define     CH0_DIGCTL_HPF_S                                                  10
#define     CH0_DIGCTL_HPF_N_E                                                9
#define     CH0_DIGCTL_HPF_N_SHIFT                                            4
#define     CH0_DIGCTL_HPF_N_MASK                                             (0x3F<<4)

#define     CH1_DIGCTL_ADOS_E                                                 20
#define     CH1_DIGCTL_ADOS_SHIFT                                             18
#define     CH1_DIGCTL_ADOS_MASK                                              (0x7<<18)
#define     CH1_DIGCTL_MIC_SEL                                                17
#define     CH1_DIGCTL_DAT_OUT_EN                                             15
#define     CH1_DIGCTL_HPF_AS_TS_E                                            14
#define     CH1_DIGCTL_HPF_AS_TS_SHIFT                                        13
#define     CH1_DIGCTL_HPF_AS_TS_MASK                                         (0x3<<13)
#define     CH1_DIGCTL_HPF_AS_EN                                              12
#define     CH1_DIGCTL_HPFEN                                                  11
#define     CH1_DIGCTL_HPF_S                                                  10
#define     CH1_DIGCTL_HPF_N_E                                                9
#define     CH1_DIGCTL_HPF_N_SHIFT                                            4
#define     CH1_DIGCTL_HPF_N_MASK                                             (0x3F<<4)

#define     CH0_GAIN_DONE_PD                                                  31
#define     CH0_GAIN_GAIN_IRQ_EN                                              30
#define     CH0_GAIN_GAIN_STATE                                               29
#define     CH0_GAIN_TIMEOUT_LENGTH                                           27
#define     CH0_GAIN_TIMEOUT_EN                                               26
#define     CH0_GAIN_ZEROCROSS_EN                                             25
#define     CH0_GAIN_SOFT_STEP_EN                                             24
#define     CH0_GAIN_PERIOD_E                                                 23
#define     CH0_GAIN_PERIOD_SHIFT                                             16
#define     CH0_GAIN_PERIOD_MASK                                              (0xFF<<16)
#define     CH0_GAIN_GAIN_E                                                   9
#define     CH0_GAIN_GAIN_SHIFT                                               0
#define     CH0_GAIN_GAIN_MASK                                                (0x3FF<<0)

#define     CH1_GAIN_DONE_PD                                                  31
#define     CH1_GAIN_GAIN_IRQ_EN                                              30
#define     CH1_GAIN_GAIN_STATE                                               29
#define     CH1_GAIN_TIMEOUT_LENGTH                                           27
#define     CH1_GAIN_TIMEOUT_EN                                               26
#define     CH1_GAIN_ZEROCROSS_EN                                             25
#define     CH1_GAIN_SOFT_STEP_EN                                             24
#define     CH1_GAIN_PERIOD_E                                                 23
#define     CH1_GAIN_PERIOD_SHIFT                                             16
#define     CH1_GAIN_PERIOD_MASK                                              (0xFF<<16)
#define     CH1_GAIN_GAIN_E                                                   9
#define     CH1_GAIN_GAIN_SHIFT                                               0
#define     CH1_GAIN_GAIN_MASK                                                (0x3FF<<0)

#define     ADC_FIFOCTL_DRQ_LEVEL_E                                           14
#define     ADC_FIFOCTL_DRQ_LEVEL_SHIFT                                       8
#define     ADC_FIFOCTL_DRQ_LEVEL_MASK                                        (0x7F<<8)
#define     ADC_FIFOCTL_ADCFIFO0_DMAWIDTH                                     7
#define     ADC_FIFOCTL_ADF0OS_E                                              6
#define     ADC_FIFOCTL_ADF0OS_SHIFT                                          4
#define     ADC_FIFOCTL_ADF0OS_MASK                                           (0x7<<4)
#define     ADC_FIFOCTL_ADF0FIE                                               2
#define     ADC_FIFOCTL_ADF0FDE                                               1
#define     ADC_FIFOCTL_ADF0RT                                                0

#define     ADC_STAT_FIFO0_EMPTY_ERIRQ                                        12
#define     ADC_STAT_FIFO0_FULL_ERIRQ                                         11
#define     ADC_STAT_FIFO0_EMPTY_ERPD                                         10
#define     ADC_STAT_FIFO0_FULL_ERPD                                          9
#define     ADC_STAT_ADF0EF                                                   8
#define     ADC_STAT_ADF0IP                                                   7
#define     ADC_STAT_ADF0S_E                                                  6
#define     ADC_STAT_ADF0S_SHIFT                                              0
#define     ADC_STAT_ADF0S_MASK                                               (0x7F<<0)

#define     ADC_FIFO0_DAT_ADDAT_E                                             31
#define     ADC_FIFO0_DAT_ADDAT_SHIFT                                         8
#define     ADC_FIFO0_DAT_ADDAT_MASK                                          (0xFFFFFF<<8)

#define     ADC0_CTL_ADC_PRE_ZCTO_E                                           31
#define     ADC0_CTL_ADC_PRE_ZCTO_SHIFT                                       30
#define     ADC0_CTL_ADC_PRE_ZCTO_MASK                                        (0x3<<30)
#define     ADC0_CTL_ADC_PRE_SSTO_E                                           29
#define     ADC0_CTL_ADC_PRE_SSTO_SHIFT                                       28
#define     ADC0_CTL_ADC_PRE_SSTO_MASK                                        (0x3<<28)
#define     ADC0_CTL_ADC_PRE_SSEN                                             27
#define     ADC0_CTL_ADC_PRE_ZCDEN                                            26
#define     ADC0_CTL_ADC_PRE_INPUTN_PD                                        25
#define     ADC0_CTL_ADC_PRE_INPUTP_PD                                        24
#define     ADC0_CTL_ADC_PRE_CHOPCLK_SEL                                      23
#define     ADC0_CTL_ADC_PRE_CHOPEN                                           22
#define     ADC0_CTL_ADC_PRE_SE_SEL                                           21
#define     ADC0_CTL_ADC_PRE_INMODE                                           20
#define     ADC0_CTL_ADC_PRE_FASUP                                            19
#define     ADC0_CTL_ADC_PREVOL_E                                             18
#define     ADC0_CTL_ADC_PREVOL_SHIFT                                         14
#define     ADC0_CTL_ADC_PREVOL_MASK                                          (0x1F<<14)
#define     ADC0_CTL_ADC_PREINR_E                                             13
#define     ADC0_CTL_ADC_PREINR_SHIFT                                         12
#define     ADC0_CTL_ADC_PREINR_MASK                                          (0x3<<12)
#define     ADC0_CTL_ADC_CHOPCLK_SEL                                          11
#define     ADC0_CTL_ADC_CHOPEN                                               10
#define     ADC0_CTL_ADC_DLY_E                                                9
#define     ADC0_CTL_ADC_DLY_SHIFT                                            8
#define     ADC0_CTL_ADC_DLY_MASK                                             (0x3<<8)
#define     ADC0_CTL_ADC_EQU_CONS_E                                           7
#define     ADC0_CTL_ADC_EQU_CONS_SHIFT                                       5
#define     ADC0_CTL_ADC_EQU_CONS_MASK                                        (0x7<<5)
#define     ADC0_CTL_ADC_DEMSEL                                               4
#define     ADC0_CTL_ADC_DEMEN                                                3
#define     ADC0_CTL_ADC_PREAMPEN                                             2
#define     ADC0_CTL_ADC_EN                                                   1
#define     ADC0_CTL_DAC_EN                                                   0

#define     ADC0_BIAS_PRE_GCDP                                                31
#define     ADC0_BIAS_PREOP_IQSH_E                                            23
#define     ADC0_BIAS_PREOP_IQSH_SHIFT                                        21
#define     ADC0_BIAS_PREOP_IQSH_MASK                                         (0x7<<21)
#define     ADC0_BIAS_OPBUF_ODSCH                                             20
#define     ADC0_BIAS_OPBUF_IQSH_E                                            19
#define     ADC0_BIAS_OPBUF_IQSH_SHIFT                                        18
#define     ADC0_BIAS_OPBUF_IQSH_MASK                                         (0x3<<18)
#define     ADC0_BIAS_IS_ABIAS_E                                              17
#define     ADC0_BIAS_IS_ABIAS_SHIFT                                          16
#define     ADC0_BIAS_IS_ABIAS_MASK                                           (0x3<<16)
#define     ADC0_BIAS_IS_PREOP_E                                              15
#define     ADC0_BIAS_IS_PREOP_SHIFT                                          12
#define     ADC0_BIAS_IS_PREOP_MASK                                           (0xF<<12)
#define     ADC0_BIAS_IS_BUFOP_E                                              11
#define     ADC0_BIAS_IS_BUFOP_SHIFT                                          9
#define     ADC0_BIAS_IS_BUFOP_MASK                                           (0x7<<9)
#define     ADC0_BIAS_IS_DLY_E                                                8
#define     ADC0_BIAS_IS_DLY_SHIFT                                            6
#define     ADC0_BIAS_IS_DLY_MASK                                             (0x7<<6)
#define     ADC0_BIAS_IS_OP2_E                                                5
#define     ADC0_BIAS_IS_OP2_SHIFT                                            3
#define     ADC0_BIAS_IS_OP2_MASK                                             (0x7<<3)
#define     ADC0_BIAS_IS_OP1_E                                                2
#define     ADC0_BIAS_IS_OP1_SHIFT                                            0
#define     ADC0_BIAS_IS_OP1_MASK                                             (0x7<<0)

#define     ADC1_CTL_ADC_PRE_ZCTO_E                                           31
#define     ADC1_CTL_ADC_PRE_ZCTO_SHIFT                                       30
#define     ADC1_CTL_ADC_PRE_ZCTO_MASK                                        (0x3<<30)
#define     ADC1_CTL_ADC_PRE_SSTO_E                                           29
#define     ADC1_CTL_ADC_PRE_SSTO_SHIFT                                       28
#define     ADC1_CTL_ADC_PRE_SSTO_MASK                                        (0x3<<28)
#define     ADC1_CTL_ADC_PRE_SSEN                                             27
#define     ADC1_CTL_ADC_PRE_ZCDEN                                            26
#define     ADC1_CTL_ADC_PRE_INPUTN_PD                                        25
#define     ADC1_CTL_ADC_PRE_INPUTP_PD                                        24
#define     ADC1_CTL_ADC_PRE_CHOPCLK_SEL                                      23
#define     ADC1_CTL_ADC_PRE_CHOPEN                                           22
#define     ADC1_CTL_ADC_PRE_SE_SEL                                           21
#define     ADC1_CTL_ADC_PRE_INMODE                                           20
#define     ADC1_CTL_ADC_PRE_FASUP                                            19
#define     ADC1_CTL_ADC_PREVOL_E                                             18
#define     ADC1_CTL_ADC_PREVOL_SHIFT                                         14
#define     ADC1_CTL_ADC_PREVOL_MASK                                          (0x1F<<14)
#define     ADC1_CTL_ADC_PREINR_E                                             13
#define     ADC1_CTL_ADC_PREINR_SHIFT                                         12
#define     ADC1_CTL_ADC_PREINR_MASK                                          (0x3<<12)
#define     ADC1_CTL_ADC_CHOPCLK_SEL                                          11
#define     ADC1_CTL_ADC_CHOPEN                                               10
#define     ADC1_CTL_ADC_DLY_E                                                9
#define     ADC1_CTL_ADC_DLY_SHIFT                                            8
#define     ADC1_CTL_ADC_DLY_MASK                                             (0x3<<8)
#define     ADC1_CTL_ADC_EQU_CONS_E                                           7
#define     ADC1_CTL_ADC_EQU_CONS_SHIFT                                       5
#define     ADC1_CTL_ADC_EQU_CONS_MASK                                        (0x7<<5)
#define     ADC1_CTL_ADC_DEMSEL                                               4
#define     ADC1_CTL_ADC_DEMEN                                                3
#define     ADC1_CTL_ADC_PREAMPEN                                             2
#define     ADC1_CTL_ADC_EN                                                   1
#define     ADC1_CTL_DAC_EN                                                   0

#define     ADC1_BIAS_PRE_GCDP                                                31
#define     ADC1_BIAS_PREOP_IQSH_E                                            23
#define     ADC1_BIAS_PREOP_IQSH_SHIFT                                        21
#define     ADC1_BIAS_PREOP_IQSH_MASK                                         (0x7<<21)
#define     ADC1_BIAS_OPBUF_ODSCH                                             20
#define     ADC1_BIAS_OPBUF_IQSH_E                                            19
#define     ADC1_BIAS_OPBUF_IQSH_SHIFT                                        18
#define     ADC1_BIAS_OPBUF_IQSH_MASK                                         (0x3<<18)
#define     ADC1_BIAS_IS_ABIAS_E                                              17
#define     ADC1_BIAS_IS_ABIAS_SHIFT                                          16
#define     ADC1_BIAS_IS_ABIAS_MASK                                           (0x3<<16)
#define     ADC1_BIAS_IS_PREOP_E                                              15
#define     ADC1_BIAS_IS_PREOP_SHIFT                                          12
#define     ADC1_BIAS_IS_PREOP_MASK                                           (0xF<<12)
#define     ADC1_BIAS_IS_BUFOP_E                                              11
#define     ADC1_BIAS_IS_BUFOP_SHIFT                                          9
#define     ADC1_BIAS_IS_BUFOP_MASK                                           (0x7<<9)
#define     ADC1_BIAS_IS_DLY_E                                                8
#define     ADC1_BIAS_IS_DLY_SHIFT                                            6
#define     ADC1_BIAS_IS_DLY_MASK                                             (0x7<<6)
#define     ADC1_BIAS_IS_OP2_E                                                5
#define     ADC1_BIAS_IS_OP2_SHIFT                                            3
#define     ADC1_BIAS_IS_OP2_MASK                                             (0x7<<3)
#define     ADC1_BIAS_IS_OP1_E                                                2
#define     ADC1_BIAS_IS_OP1_SHIFT                                            0
#define     ADC1_BIAS_IS_OP1_MASK                                             (0x7<<0)

#define     ADC_COM0_CTL_IS_OPVB_E                                            19
#define     ADC_COM0_CTL_IS_OPVB_SHIFT                                        18
#define     ADC_COM0_CTL_IS_OPVB_MASK                                         (0x3<<18)
#define     ADC_COM0_CTL_IS_OPCM1_E                                           17
#define     ADC_COM0_CTL_IS_OPCM1_SHIFT                                       16
#define     ADC_COM0_CTL_IS_OPCM1_MASK                                        (0x3<<16)
#define     ADC_COM0_CTL_IS_VBIAS_E                                           15
#define     ADC_COM0_CTL_IS_VBIAS_SHIFT                                       12
#define     ADC_COM0_CTL_IS_VBIAS_MASK                                        (0xF<<12)
#define     ADC_COM0_CTL_SHCL_SET_E                                           11
#define     ADC_COM0_CTL_SHCL_SET_SHIFT                                       8
#define     ADC_COM0_CTL_SHCL_SET_MASK                                        (0xF<<8)
#define     ADC_COM0_CTL_SHCL_PW_E                                            7
#define     ADC_COM0_CTL_SHCL_PW_SHIFT                                        4
#define     ADC_COM0_CTL_SHCL_PW_MASK                                         (0xF<<4)
#define     ADC_COM0_CTL_SHCL_SEL                                             3
#define     ADC_COM0_CTL_NDBFM                                                2

#define     ADC_VMIC_CTL_SOFTUP_EN                                            7
#define     ADC_VMIC_CTL_VMIC0_VOL_E                                          6
#define     ADC_VMIC_CTL_VMIC0_VOL_SHIFT                                      4
#define     ADC_VMIC_CTL_VMIC0_VOL_MASK                                       (0x7<<4)
#define     ADC_VMIC_CTL_VMIC_BIAS_CTL_E                                      3
#define     ADC_VMIC_CTL_VMIC_BIAS_CTL_SHIFT                                  2
#define     ADC_VMIC_CTL_VMIC_BIAS_CTL_MASK                                   (0x3<<2)
#define     ADC_VMIC_CTL_VMIC0_EN_E                                           1
#define     ADC_VMIC_CTL_VMIC0_EN_SHIFT                                       0
#define     ADC_VMIC_CTL_VMIC0_EN_MASK                                        (0x3<<0)

#define     AAL0_CTL_AAL_EN                                                   29
#define     AAL0_CTL_AAL_RECOVER_MODE                                         28
#define     AAL0_CTL_RLC_E                                                    27
#define     AAL0_CTL_RLC_SHIFT                                                25
#define     AAL0_CTL_RLC_MASK                                                 (0x7<<25)
#define     AAL0_CTL_AAL_FL_E                                                 24
#define     AAL0_CTL_AAL_FL_SHIFT                                             20
#define     AAL0_CTL_AAL_FL_MASK                                              (0x1F<<20)
#define     AAL0_CTL_AAL_VT1_E                                                19
#define     AAL0_CTL_AAL_VT1_SHIFT                                            15
#define     AAL0_CTL_AAL_VT1_MASK                                             (0x1F<<15)
#define     AAL0_CTL_AAL_VT0_E                                                14
#define     AAL0_CTL_AAL_VT0_SHIFT                                            10
#define     AAL0_CTL_AAL_VT0_MASK                                             (0x1F<<10)
#define     AAL0_CTL_AAL_MAX_E                                                9
#define     AAL0_CTL_AAL_MAX_SHIFT                                            5
#define     AAL0_CTL_AAL_MAX_MASK                                             (0x1F<<5)
#define     AAL0_CTL_AAL_CNT_E                                                4
#define     AAL0_CTL_AAL_CNT_SHIFT                                            0
#define     AAL0_CTL_AAL_CNT_MASK                                             (0x1F<<0)

#define     AAL1_CTL_AAL_EN                                                   29
#define     AAL1_CTL_AAL_RECOVER_MODE                                         28
#define     AAL1_CTL_RLC_E                                                    27
#define     AAL1_CTL_RLC_SHIFT                                                25
#define     AAL1_CTL_RLC_MASK                                                 (0x7<<25)
#define     AAL1_CTL_AAL_FL_E                                                 24
#define     AAL1_CTL_AAL_FL_SHIFT                                             20
#define     AAL1_CTL_AAL_FL_MASK                                              (0x1F<<20)
#define     AAL1_CTL_AAL_VT1_E                                                19
#define     AAL1_CTL_AAL_VT1_SHIFT                                            15
#define     AAL1_CTL_AAL_VT1_MASK                                             (0x1F<<15)
#define     AAL1_CTL_AAL_VT0_E                                                14
#define     AAL1_CTL_AAL_VT0_SHIFT                                            10
#define     AAL1_CTL_AAL_VT0_MASK                                             (0x1F<<10)
#define     AAL1_CTL_AAL_MAX_E                                                9
#define     AAL1_CTL_AAL_MAX_SHIFT                                            5
#define     AAL1_CTL_AAL_MAX_MASK                                             (0x1F<<5)
#define     AAL1_CTL_AAL_CNT_E                                                4
#define     AAL1_CTL_AAL_CNT_SHIFT                                            0
#define     AAL1_CTL_AAL_CNT_MASK                                             (0x1F<<0)

//--------------ADDA_PMU-------------------------------------------//
//--------------Register Address---------------------------------------//
#define     ADDA_PMU_BASE                                                     0x50030200
#define     REF_LDO_CTL                                                       (ADDA_PMU_BASE+0x00)

//--------------Bits Location------------------------------------------//
#define     REF_LDO_CTL_REF_DBG_SEL_E                                         27
#define     REF_LDO_CTL_REF_DBG_SEL_SHIFT                                     26
#define     REF_LDO_CTL_REF_DBG_SEL_MASK                                      (0x3<<26)
#define     REF_LDO_CTL_REF_DGB_EN                                            25
#define     REF_LDO_CTL_IB_DGB                                                24
#define     REF_LDO_CTL_ADLDO_PD_CTL_E                                        23
#define     REF_LDO_CTL_ADLDO_PD_CTL_SHIFT                                    22
#define     REF_LDO_CTL_ADLDO_PD_CTL_MASK                                     (0x3<<22)
#define     REF_LDO_CTL_ADLDO_VOL_E                                           21
#define     REF_LDO_CTL_ADLDO_VOL_SHIFT                                       20
#define     REF_LDO_CTL_ADLDO_VOL_MASK                                        (0x3<<20)
#define     REF_LDO_CTL_ADLDO_EN_E                                            19
#define     REF_LDO_CTL_ADLDO_EN_SHIFT                                        18
#define     REF_LDO_CTL_ADLDO_EN_MASK                                         (0x3<<18)
#define     REF_LDO_CTL_IB_ADLDO_E                                            17
#define     REF_LDO_CTL_IB_ADLDO_SHIFT                                        16
#define     REF_LDO_CTL_IB_ADLDO_MASK                                         (0x3<<16)
#define     REF_LDO_CTL_DALDO_PD_CTL_E                                        15
#define     REF_LDO_CTL_DALDO_PD_CTL_SHIFT                                    14
#define     REF_LDO_CTL_DALDO_PD_CTL_MASK                                     (0x3<<14)
#define     REF_LDO_CTL_DALDO_VOL_E                                           13
#define     REF_LDO_CTL_DALDO_VOL_SHIFT                                       12
#define     REF_LDO_CTL_DALDO_VOL_MASK                                        (0x3<<12)
#define     REF_LDO_CTL_DALDO_EN_E                                            11
#define     REF_LDO_CTL_DALDO_EN_SHIFT                                        10
#define     REF_LDO_CTL_DALDO_EN_MASK                                         (0x3<<10)
#define     REF_LDO_CTL_IB_DALDO_E                                            9
#define     REF_LDO_CTL_IB_DALDO_SHIFT                                        8
#define     REF_LDO_CTL_IB_DALDO_MASK                                         (0x3<<8)
#define     REF_LDO_CTL_VREF_VOL_E                                            7
#define     REF_LDO_CTL_VREF_VOL_SHIFT                                        4
#define     REF_LDO_CTL_VREF_VOL_MASK                                         (0xF<<4)
#define     REF_LDO_CTL_VREF_PD                                               3
#define     REF_LDO_CTL_IB_VREF                                               2
#define     REF_LDO_CTL_VREF_FU                                               1
#define     REF_LDO_CTL_VREF_EN                                               0

//--------------I2STX0-------------------------------------------//
//--------------Register Address---------------------------------------//
#define     I2STX0_BASE                                                       0x50030400
#define     I2STX0_CTL                                                        (I2STX0_BASE+0x00)
#define     I2STX0_FIFOCTL                                                    (I2STX0_BASE+0x04)
#define     I2STX0_FIFOSTA                                                    (I2STX0_BASE+0x08)
#define     I2STX0_DAT                                                        (I2STX0_BASE+0x0C)
#define     I2STX0_FIFO_CNT                                                   (I2STX0_BASE+0x10)

//--------------Bits Location------------------------------------------//
#define     I2STX0_CTL_SENDDSP_INTEN                                          31
#define     I2STX0_CTL_SENDCPU_INTEN                                          30
#define     I2STX0_CTL_DLINE_E                                                29
#define     I2STX0_CTL_DLINE_SHIFT                                            27
#define     I2STX0_CTL_DLINE_MASK                                             (0x7<<27)
#define     I2STX0_CTL_SLOT_E                                                 26
#define     I2STX0_CTL_SLOT_SHIFT                                             24
#define     I2STX0_CTL_SLOT_MASK                                              (0x7<<24)
#define     I2STX0_CTL_TXD_DELAY_E                                            22
#define     I2STX0_CTL_TXD_DELAY_SHIFT                                        21
#define     I2STX0_CTL_TXD_DELAY_MASK                                         (0x3<<21)
#define     I2STX0_CTL_SYNC                                                   18
#define     I2STX0_CTL_DSOURCE_E                                              17
#define     I2STX0_CTL_DSOURCE_SHIFT                                          15
#define     I2STX0_CTL_DSOURCE_MASK                                           (0x7<<15)
#define     I2STX0_CTL_MUTSOURCE_E                                            14
#define     I2STX0_CTL_MUTSOURCE_SHIFT                                        12
#define     I2STX0_CTL_MUTSOURCE_MASK                                         (0x7<<12)
#define     I2STX0_CTL_ORDER                                                  9
#define     I2STX0_CTL_MODE                                                   8
#define     I2STX0_CTL_SAMPSIZE_E                                             5
#define     I2STX0_CTL_SAMPSIZE_SHIFT                                         4
#define     I2STX0_CTL_SAMPSIZE_MASK                                          (0x3<<4)
#define     I2STX0_CTL_CHANWID                                                3
#define     I2STX0_CTL_FORMAT_E                                               2
#define     I2STX0_CTL_FORMAT_SHIFT                                           1
#define     I2STX0_CTL_FORMAT_MASK                                            (0x3<<1)

#define     I2STX0_FIFOCTL_NOTFILL_LEVEL_E                                    16
#define     I2STX0_FIFOCTL_NOTFILL_LEVEL_SHIFT                                12
#define     I2STX0_FIFOCTL_NOTFILL_LEVEL_MASK                                 (0x1F<<12)
#define     I2STX0_FIFOCTL_TX_ER_IE                                           11
#define     I2STX0_FIFOCTL_TXFIFO_DMAWIDTH                                    7
#define     I2STX0_FIFOCTL_FIFO_IN_SEL_E                                      6
#define     I2STX0_FIFOCTL_FIFO_IN_SEL_SHIFT                                  4
#define     I2STX0_FIFOCTL_FIFO_IN_SEL_MASK                                   (0x7<<4)
#define     I2STX0_FIFOCTL_FIFO_DSPDMA_DEN                                    3
#define     I2STX0_FIFOCTL_FIFO_IEN                                           2
#define     I2STX0_FIFOCTL_FIFO_DEN                                           1
#define     I2STX0_FIFOCTL_FIFO_RST                                           0

#define     I2STX0_FIFOSTA_TX_ER_PD                                           10
#define     I2STX0_FIFOSTA_FIFO_ER                                            9
#define     I2STX0_FIFOSTA_TFFU                                               8
#define     I2STX0_FIFOSTA_IP                                                 7
#define     I2STX0_FIFOSTA_STA_E                                              6
#define     I2STX0_FIFOSTA_STA_SHIFT                                          0
#define     I2STX0_FIFOSTA_STA_MASK                                           (0x7F<<0)

#define     I2STX0_DAT_DAT_E                                                  31
#define     I2STX0_DAT_DAT_SHIFT                                              0
#define     I2STX0_DAT_DAT_MASK                                               (0xFFFFFFFF<<0)

#define     I2STX0_FIFO_CNT_IP                                                18
#define     I2STX0_FIFO_CNT_IE                                                17
#define     I2STX0_FIFO_CNT_EN                                                16
#define     I2STX0_FIFO_CNT_CNT_E                                             15
#define     I2STX0_FIFO_CNT_CNT_SHIFT                                         0
#define     I2STX0_FIFO_CNT_CNT_MASK                                          (0xFFFF<<0)

//--------------I2STX1-------------------------------------------//
//--------------Register Address---------------------------------------//
#define     I2STX1_BASE                                                       0x50030480
#define     I2STX1_CTL                                                        (I2STX1_BASE+0x00)
#define     I2STX1_FIFOCTL                                                    (I2STX1_BASE+0x04)
#define     I2STX1_FIFOSTA                                                    (I2STX1_BASE+0x08)
#define     I2STX1_DAT                                                        (I2STX1_BASE+0x0C)
#define     I2STX1_FIFO_CNT                                                   (I2STX1_BASE+0x10)

//--------------Bits Location------------------------------------------//
#define     I2STX1_CTL_SENDDSP_INTEN                                          31
#define     I2STX1_CTL_SENDCPU_INTEN                                          30
#define     I2STX1_CTL_DLINE_E                                                29
#define     I2STX1_CTL_DLINE_SHIFT                                            27
#define     I2STX1_CTL_DLINE_MASK                                             (0x7<<27)
#define     I2STX1_CTL_SLOT_E                                                 26
#define     I2STX1_CTL_SLOT_SHIFT                                             24
#define     I2STX1_CTL_SLOT_MASK                                              (0x7<<24)
#define     I2STX1_CTL_TXD_DELAY_E                                            22
#define     I2STX1_CTL_TXD_DELAY_SHIFT                                        21
#define     I2STX1_CTL_TXD_DELAY_MASK                                         (0x3<<21)
#define     I2STX1_CTL_SYNC                                                   18
#define     I2STX1_CTL_DSOURCE_E                                              17
#define     I2STX1_CTL_DSOURCE_SHIFT                                          15
#define     I2STX1_CTL_DSOURCE_MASK                                           (0x7<<15)
#define     I2STX1_CTL_MUTSOURCE_E                                            14
#define     I2STX1_CTL_MUTSOURCE_SHIFT                                        12
#define     I2STX1_CTL_MUTSOURCE_MASK                                         (0x7<<12)
#define     I2STX1_CTL_ORDER                                                  9
#define     I2STX1_CTL_MODE                                                   8
#define     I2STX1_CTL_SAMPSIZE_E                                             5
#define     I2STX1_CTL_SAMPSIZE_SHIFT                                         4
#define     I2STX1_CTL_SAMPSIZE_MASK                                          (0x3<<4)
#define     I2STX1_CTL_CHANWID                                                3
#define     I2STX1_CTL_FORMAT_E                                               2
#define     I2STX1_CTL_FORMAT_SHIFT                                           1
#define     I2STX1_CTL_FORMAT_MASK                                            (0x3<<1)

#define     I2STX1_FIFOCTL_NOTFILL_LEVEL_E                                    16
#define     I2STX1_FIFOCTL_NOTFILL_LEVEL_SHIFT                                12
#define     I2STX1_FIFOCTL_NOTFILL_LEVEL_MASK                                 (0x1F<<12)
#define     I2STX1_FIFOCTL_TX_ER_IE                                           11
#define     I2STX1_FIFOCTL_TXFIFO_DMAWIDTH                                    7
#define     I2STX1_FIFOCTL_FIFO_IN_SEL_E                                      6
#define     I2STX1_FIFOCTL_FIFO_IN_SEL_SHIFT                                  4
#define     I2STX1_FIFOCTL_FIFO_IN_SEL_MASK                                   (0x7<<4)
#define     I2STX1_FIFOCTL_FIFO_DSPDMA_DEN                                    3
#define     I2STX1_FIFOCTL_FIFO_IEN                                           2
#define     I2STX1_FIFOCTL_FIFO_DEN                                           1
#define     I2STX1_FIFOCTL_FIFO_RST                                           0

#define     I2STX1_FIFOSTA_TX_ER_PD                                           10
#define     I2STX1_FIFOSTA_FIFO_ER                                            9
#define     I2STX1_FIFOSTA_TFFU                                               8
#define     I2STX1_FIFOSTA_IP                                                 7
#define     I2STX1_FIFOSTA_STA_E                                              6
#define     I2STX1_FIFOSTA_STA_SHIFT                                          0
#define     I2STX1_FIFOSTA_STA_MASK                                           (0x7F<<0)

#define     I2STX1_DAT_DAT_E                                                  31
#define     I2STX1_DAT_DAT_SHIFT                                              0
#define     I2STX1_DAT_DAT_MASK                                               (0xFFFFFFFF<<0)

#define     I2STX1_FIFO_CNT_IP                                                18
#define     I2STX1_FIFO_CNT_IE                                                17
#define     I2STX1_FIFO_CNT_EN                                                16
#define     I2STX1_FIFO_CNT_CNT_E                                             15
#define     I2STX1_FIFO_CNT_CNT_SHIFT                                         0
#define     I2STX1_FIFO_CNT_CNT_MASK                                          (0xFFFF<<0)


//--------------I2S_EN-------------------------------------------//
//--------------Register Address---------------------------------------//
#define     I2S_EN_BASE                                                       0x50030800
#define     I2S_EN                                                            (I2S_EN_BASE+0x0)

//--------------Bits Location------------------------------------------//
#define     I2S_EN_RX1_EN                                                     9
#define     I2S_EN_RX0_EN                                                     8
#define     I2S_EN_TX5_EN                                                     5
#define     I2S_EN_TX1_EN                                                     1
#define     I2S_EN_TX0_EN                                                     0

//--------------I2SRX0-------------------------------------------//
//--------------Register Address---------------------------------------//
#define     I2SRX0_BASE                                                       0x50030900
#define     I2SRX0_CTL                                                        (I2SRX0_BASE+0x0)
#define     I2SRX0_FIFOCTL                                                    (I2SRX0_BASE+0x4)
#define     I2SRX0_FIFOSTA                                                    (I2SRX0_BASE+0x8)
#define     I2SRX0_DAT                                                        (I2SRX0_BASE+0xC)

//--------------Bits Location------------------------------------------//
#define     I2SRX0_CTL_SENDDSP_INTEN                                          31
#define     I2SRX0_CTL_SENDCPU_INTEN                                          30
#define     I2SRX0_CTL_DLINE_E                                                29
#define     I2SRX0_CTL_DLINE_SHIFT                                            27
#define     I2SRX0_CTL_DLINE_MASK                                             (0x7<<27)
#define     I2SRX0_CTL_SLOT_E                                                 26
#define     I2SRX0_CTL_SLOT_SHIFT                                             24
#define     I2SRX0_CTL_SLOT_MASK                                              (0x7<<24)
#define     I2SRX0_CTL_SYNC                                                   18
#define     I2SRX0_CTL_DSOURCE_E                                              17
#define     I2SRX0_CTL_DSOURCE_SHIFT                                          15
#define     I2SRX0_CTL_DSOURCE_MASK                                           (0x7<<15)
#define     I2SRX0_CTL_MUTSOURCE_E                                            14
#define     I2SRX0_CTL_MUTSOURCE_SHIFT                                        12
#define     I2SRX0_CTL_MUTSOURCE_MASK                                         (0x7<<12)
#define     I2SRX0_CTL_ORDER                                                  9
#define     I2SRX0_CTL_MODE                                                   8
#define     I2SRX0_CTL_SAMPSIZE_E                                             5
#define     I2SRX0_CTL_SAMPSIZE_SHIFT                                         4
#define     I2SRX0_CTL_SAMPSIZE_MASK                                          (0x3<<4)
#define     I2SRX0_CTL_CHANWID                                                3
#define     I2SRX0_CTL_FORMAT_E                                               2
#define     I2SRX0_CTL_FORMAT_SHIFT                                           1
#define     I2SRX0_CTL_FORMAT_MASK                                            (0x3<<1)

#define     I2SRX0_FIFOCTL_FILL_LEVEL_E                                       16
#define     I2SRX0_FIFOCTL_FILL_LEVEL_SHIFT                                   12
#define     I2SRX0_FIFOCTL_FILL_LEVEL_MASK                                    (0x1F<<12)
#define     I2SRX0_FIFOCTL_RX_ER_IE                                           11
#define     I2SRX0_FIFOCTL_RXFIFO_DMAWIDTH                                    7
#define     I2SRX0_FIFOCTL_RXFOS_E                                            6
#define     I2SRX0_FIFOCTL_RXFOS_SHIFT                                        4
#define     I2SRX0_FIFOCTL_RXFOS_MASK                                         (0x7<<4)
#define     I2SRX0_FIFOCTL_RXFF_DSPDMA_DEN                                    3
#define     I2SRX0_FIFOCTL_RXFFIE                                             2
#define     I2SRX0_FIFOCTL_RXFFDE                                             1
#define     I2SRX0_FIFOCTL_RXFRT                                              0

#define     I2SRX0_FIFOSTA_RX_ER_PD                                           10
#define     I2SRX0_FIFOSTA_FIFO_ER                                            9
#define     I2SRX0_FIFOSTA_RXFEF                                              8
#define     I2SRX0_FIFOSTA_RXFIP                                              7
#define     I2SRX0_FIFOSTA_RXFS_E                                             6
#define     I2SRX0_FIFOSTA_RXFS_SHIFT                                         0
#define     I2SRX0_FIFOSTA_RXFS_MASK                                          (0x7F<<0)

#define     I2SRX0_DAT_RXDAT_E                                                31
#define     I2SRX0_DAT_RXDAT_SHIFT                                            0
#define     I2SRX0_DAT_RXDAT_MASK                                             (0xFFFFFFFF<<0)

//--------------I2SRX1-------------------------------------------//
//--------------Register Address---------------------------------------//
#define     I2SRX1_BASE                                                       0x50030980
#define     I2SRX1_CTL                                                        (I2SRX1_BASE+0x0)
#define     I2SRX1_FIFOCTL                                                    (I2SRX1_BASE+0x4)
#define     I2SRX1_FIFOSTA                                                    (I2SRX1_BASE+0x8)
#define     I2SRX1_DAT                                                        (I2SRX1_BASE+0xC)

//--------------Bits Location------------------------------------------//
#define     I2SRX1_CTL_SENDDSP_INTEN                                          31
#define     I2SRX1_CTL_SENDCPU_INTEN                                          30
#define     I2SRX1_CTL_DLINE_E                                                29
#define     I2SRX1_CTL_DLINE_SHIFT                                            27
#define     I2SRX1_CTL_DLINE_MASK                                             (0x7<<27)
#define     I2SRX1_CTL_SLOT_E                                                 26
#define     I2SRX1_CTL_SLOT_SHIFT                                             24
#define     I2SRX1_CTL_SLOT_MASK                                              (0x7<<24)
#define     I2SRX1_CTL_SYNC                                                   18
#define     I2SRX1_CTL_DSOURCE_E                                              17
#define     I2SRX1_CTL_DSOURCE_SHIFT                                          15
#define     I2SRX1_CTL_DSOURCE_MASK                                           (0x7<<15)
#define     I2SRX1_CTL_MUTSOURCE_E                                            14
#define     I2SRX1_CTL_MUTSOURCE_SHIFT                                        12
#define     I2SRX1_CTL_MUTSOURCE_MASK                                         (0x7<<12)
#define     I2SRX1_CTL_ORDER                                                  9
#define     I2SRX1_CTL_MODE                                                   8
#define     I2SRX1_CTL_SAMPSIZE_E                                             5
#define     I2SRX1_CTL_SAMPSIZE_SHIFT                                         4
#define     I2SRX1_CTL_SAMPSIZE_MASK                                          (0x3<<4)
#define     I2SRX1_CTL_CHANWID                                                3
#define     I2SRX1_CTL_FORMAT_E                                               2
#define     I2SRX1_CTL_FORMAT_SHIFT                                           1
#define     I2SRX1_CTL_FORMAT_MASK                                            (0x3<<1)

#define     I2SRX1_FIFOCTL_FILL_LEVEL_E                                       16
#define     I2SRX1_FIFOCTL_FILL_LEVEL_SHIFT                                   12
#define     I2SRX1_FIFOCTL_FILL_LEVEL_MASK                                    (0x1F<<12)
#define     I2SRX1_FIFOCTL_RX_ER_IE                                           11
#define     I2SRX1_FIFOCTL_RXFIFO_DMAWIDTH                                    7
#define     I2SRX1_FIFOCTL_RXFOS_E                                            6
#define     I2SRX1_FIFOCTL_RXFOS_SHIFT                                        4
#define     I2SRX1_FIFOCTL_RXFOS_MASK                                         (0x7<<4)
#define     I2SRX1_FIFOCTL_RXFF_DSPDMA_DEN                                    3
#define     I2SRX1_FIFOCTL_RXFFIE                                             2
#define     I2SRX1_FIFOCTL_RXFFDE                                             1
#define     I2SRX1_FIFOCTL_RXFRT                                              0

#define     I2SRX1_FIFOSTA_RX_ER_PD                                           10
#define     I2SRX1_FIFOSTA_FIFO_ER                                            9
#define     I2SRX1_FIFOSTA_RXFEF                                              8
#define     I2SRX1_FIFOSTA_RXFIP                                              7
#define     I2SRX1_FIFOSTA_RXFS_E                                             6
#define     I2SRX1_FIFOSTA_RXFS_SHIFT                                         0
#define     I2SRX1_FIFOSTA_RXFS_MASK                                          (0x7F<<0)

#define     I2SRX1_DAT_RXDAT_E                                                31
#define     I2SRX1_DAT_RXDAT_SHIFT                                            0
#define     I2SRX1_DAT_RXDAT_MASK                                             (0xFFFFFFFF<<0)

//--------------I2STX5-------------------------------------------//
//--------------Register Address---------------------------------------//
#define     I2STX5_BASE                                                       0x50030700
#define     I2STX5_CTL                                                        (I2STX5_BASE+0x0)
//--------------I2SRD0-------------------------------------------//
//--------------Register Address---------------------------------------//
#define     I2SRD0_BASE                                                       0x50030C00
#define     I2SRD0_CTL                                                        (I2SRD0_BASE+0x00)
#define     I2SRD0_STA                                                        (I2SRD0_BASE+0x04)

//--------------Bits Location------------------------------------------//
#define     I2SRD0_CTL_SENDDSP_INTEN                                          31
#define     I2SRD0_CTL_SENDCPU_INTEN                                          30
#define     I2SRD0_CTL_CHW_TH_E                                               17
#define     I2SRD0_CTL_CHW_TH_SHIFT                                           16
#define     I2SRD0_CTL_CHW_TH_MASK                                            (0x3<<16)
#define     I2SRD0_CTL_TO_MUTE                                                14
#define     I2SRD0_CTL_SRC_MUTE                                               13
#define     I2SRD0_CTL_CHW_MUTE                                               12
#define     I2SRD0_CTL_TO_IE                                                  11
#define     I2SRD0_CTL_SRC_IE                                                 10
#define     I2SRD0_CTL_CHW_IE                                                 8
#define     I2SRD0_CTL_CNT_TIM_E                                              5
#define     I2SRD0_CTL_CNT_TIM_SHIFT                                          4
#define     I2SRD0_CTL_CNT_TIM_MASK                                           (0x3<<4)
#define     I2SRD0_CTL_SRD_TH_E                                               3
#define     I2SRD0_CTL_SRD_TH_SHIFT                                           1
#define     I2SRD0_CTL_SRD_TH_MASK                                            (0x7<<1)
#define     I2SRD0_CTL_SRD_EN                                                 0

#define     I2SRD0_STA_TO_PD                                                  31
#define     I2SRD0_STA_SRC_PD                                                 30
#define     I2SRD0_STA_CHW_PD                                                 29
#define     I2SRD0_STA_SRC_CNT_E                                              24
#define     I2SRD0_STA_SRC_CNT_SHIFT                                          12
#define     I2SRD0_STA_SRC_CNT_MASK                                           (0x1FFF<<12)
#define     I2SRD0_STA_CHW_CNT_E                                              9
#define     I2SRD0_STA_CHW_CNT_SHIFT                                          0
#define     I2SRD0_STA_CHW_CNT_MASK                                           (0x3FF<<0)

//--------------I2SRD1-------------------------------------------//
//--------------Register Address---------------------------------------//
#define     I2SRD1_BASE                                                       0x50030C80
#define     I2SRD1_CTL                                                        (I2SRD1_BASE+0x00)
#define     I2SRD1_STA                                                        (I2SRD1_BASE+0x04)

//--------------Bits Location------------------------------------------//
#define     I2SRD1_CTL_SENDDSP_INTEN                                          31
#define     I2SRD1_CTL_SENDCPU_INTEN                                          30
#define     I2SRD1_CTL_CHW_TH_E                                               17
#define     I2SRD1_CTL_CHW_TH_SHIFT                                           16
#define     I2SRD1_CTL_CHW_TH_MASK                                            (0x3<<16)
#define     I2SRD1_CTL_TO_MUTE                                                14
#define     I2SRD1_CTL_SRC_MUTE                                               13
#define     I2SRD1_CTL_CHW_MUTE                                               12
#define     I2SRD1_CTL_TO_IE                                                  11
#define     I2SRD1_CTL_SRC_IE                                                 10
#define     I2SRD1_CTL_CHW_IE                                                 8
#define     I2SRD1_CTL_CNT_TIM_E                                              5
#define     I2SRD1_CTL_CNT_TIM_SHIFT                                          4
#define     I2SRD1_CTL_CNT_TIM_MASK                                           (0x3<<4)
#define     I2SRD1_CTL_SRD_TH_E                                               3
#define     I2SRD1_CTL_SRD_TH_SHIFT                                           1
#define     I2SRD1_CTL_SRD_TH_MASK                                            (0x7<<1)
#define     I2SRD1_CTL_SRD_EN                                                 0

#define     I2SRD1_STA_TO_PD                                                  31
#define     I2SRD1_STA_SRC_PD                                                 30
#define     I2SRD1_STA_CHW_PD                                                 29
#define     I2SRD1_STA_SRC_CNT_E                                              24
#define     I2SRD1_STA_SRC_CNT_SHIFT                                          12
#define     I2SRD1_STA_SRC_CNT_MASK                                           (0x1FFF<<12)
#define     I2SRD1_STA_CHW_CNT_E                                              9
#define     I2SRD1_STA_CHW_CNT_SHIFT                                          0
#define     I2SRD1_STA_CHW_CNT_MASK                                           (0x3FF<<0)

//--------------I2SRD2-------------------------------------------//
//--------------Register Address---------------------------------------//
#define     I2SRD2_BASE                                                       0x50030D00
#define     I2SRD2_CTL                                                        (I2SRD2_BASE+0x00)
#define     I2SRD2_STA                                                        (I2SRD2_BASE+0x04)

//--------------Bits Location------------------------------------------//
#define     I2SRD2_CTL_SENDDSP_INTEN                                          31
#define     I2SRD2_CTL_SENDCPU_INTEN                                          30
#define     I2SRD2_CTL_CHW_TH_E                                               17
#define     I2SRD2_CTL_CHW_TH_SHIFT                                           16
#define     I2SRD2_CTL_CHW_TH_MASK                                            (0x3<<16)
#define     I2SRD2_CTL_TO_MUTE                                                14
#define     I2SRD2_CTL_SRC_MUTE                                               13
#define     I2SRD2_CTL_CHW_MUTE                                               12
#define     I2SRD2_CTL_TO_IE                                                  11
#define     I2SRD2_CTL_SRC_IE                                                 10
#define     I2SRD2_CTL_CHW_IE                                                 8
#define     I2SRD2_CTL_CNT_TIM_E                                              5
#define     I2SRD2_CTL_CNT_TIM_SHIFT                                          4
#define     I2SRD2_CTL_CNT_TIM_MASK                                           (0x3<<4)
#define     I2SRD2_CTL_SRD_TH_E                                               3
#define     I2SRD2_CTL_SRD_TH_SHIFT                                           1
#define     I2SRD2_CTL_SRD_TH_MASK                                            (0x7<<1)
#define     I2SRD2_CTL_SRD_EN                                                 0

#define     I2SRD2_STA_TO_PD                                                  31
#define     I2SRD2_STA_SRC_PD                                                 30
#define     I2SRD2_STA_CHW_PD                                                 29
#define     I2SRD2_STA_SRC_CNT_E                                              24
#define     I2SRD2_STA_SRC_CNT_SHIFT                                          12
#define     I2SRD2_STA_SRC_CNT_MASK                                           (0x1FFF<<12)
#define     I2SRD2_STA_CHW_CNT_E                                              9
#define     I2SRD2_STA_CHW_CNT_SHIFT                                          0
#define     I2SRD2_STA_CHW_CNT_MASK                                           (0x3FF<<0)

//--------------I2SRD3-------------------------------------------//
//--------------Register Address---------------------------------------//
#define     I2SRD3_BASE                                                       0x50030D80
#define     I2SRD3_CTL                                                        (I2SRD3_BASE+0x00)
#define     I2SRD3_STA                                                        (I2SRD3_BASE+0x04)

//--------------Bits Location------------------------------------------//
#define     I2SRD3_CTL_SENDDSP_INTEN                                          31
#define     I2SRD3_CTL_SENDCPU_INTEN                                          30
#define     I2SRD3_CTL_CHW_TH_E                                               17
#define     I2SRD3_CTL_CHW_TH_SHIFT                                           16
#define     I2SRD3_CTL_CHW_TH_MASK                                            (0x3<<16)
#define     I2SRD3_CTL_TO_MUTE                                                14
#define     I2SRD3_CTL_SRC_MUTE                                               13
#define     I2SRD3_CTL_CHW_MUTE                                               12
#define     I2SRD3_CTL_TO_IE                                                  11
#define     I2SRD3_CTL_SRC_IE                                                 10
#define     I2SRD3_CTL_CHW_IE                                                 8
#define     I2SRD3_CTL_CNT_TIM_E                                              5
#define     I2SRD3_CTL_CNT_TIM_SHIFT                                          4
#define     I2SRD3_CTL_CNT_TIM_MASK                                           (0x3<<4)
#define     I2SRD3_CTL_SRD_TH_E                                               3
#define     I2SRD3_CTL_SRD_TH_SHIFT                                           1
#define     I2SRD3_CTL_SRD_TH_MASK                                            (0x7<<1)
#define     I2SRD3_CTL_SRD_EN                                                 0

#define     I2SRD3_STA_TO_PD                                                  31
#define     I2SRD3_STA_SRC_PD                                                 30
#define     I2SRD3_STA_CHW_PD                                                 29
#define     I2SRD3_STA_SRC_CNT_E                                              24
#define     I2SRD3_STA_SRC_CNT_SHIFT                                          12
#define     I2SRD3_STA_SRC_CNT_MASK                                           (0x1FFF<<12)
#define     I2SRD3_STA_CHW_CNT_E                                              9
#define     I2SRD3_STA_CHW_CNT_SHIFT                                          0
#define     I2SRD3_STA_CHW_CNT_MASK                                           (0x3FF<<0)
#if 1 // todo : asrc driver not ready yet, use asrc reg marco below when zhuhai get asrc driver done 20240103
//--------------ASRC-------------------------------------------//
//--------------Register Address---------------------------------------//
#define     ASRC_BASE                                                         0x50028000
#define     ASRC_SEL                                                          (ASRC_BASE+0x00000000)
#define     ASRC_AUDIO                                                        (ASRC_BASE+0x00000004)
#define     ASRC0_CTL                                                         (ASRC_BASE+0x00000100)
#define     ASRC0_FIFO                                                        (ASRC_BASE+0x00000104)
#define     ASRC0_FIFO_LEVEL                                                  (ASRC_BASE+0x00000108)
#define     ASRC0_INTERRUPT                                                   (ASRC_BASE+0x0000010c)
#define     ASRC0_FILTER                                                      (ASRC_BASE+0x00000110)
#define     ASRC0_DECIMATIONRATIO_L                                           (ASRC_BASE+0x00000114)
#define     ASRC0_DECIMATIONRATIO_H                                           (ASRC_BASE+0x00000118)
#define     ASRC0_FADE                                                        (ASRC_BASE+0x0000011c)
#define     ASRC0_PHASE_DELTA                                                 (ASRC_BASE+0x00000120)
#define     ASRC0_PHASE_ACC_L                                                 (ASRC_BASE+0x00000124)
#define     ASRC0_PHASE_ACC_H                                                 (ASRC_BASE+0x00000128)
#define     ASRC0_PHASE_DIFF_L                                                (ASRC_BASE+0x0000012c)
#define     ASRC0_PHASE_DIFF_H                                                (ASRC_BASE+0x00000130)
#define     ASRC0_PHASE_SHIFTBIT                                              (ASRC_BASE+0x00000134)
#define     ASRC0_FRAMESIZE                                                   (ASRC_BASE+0x00000138)
#define     ASRC0_SHIFT_TABLEBIT                                              (ASRC_BASE+0x0000013c)
#define     ASRC0_TABLEADDR                                                   (ASRC_BASE+0x00000140)
#define     ASRC0_FIFO_IN_DATA                                                (ASRC_BASE+0x00000144)
#define     ASRC0_FIFO_OUT_DATA                                               (ASRC_BASE+0x00000148)
#define     ASRC1_CTL                                                         (ASRC_BASE+0x00000200)
#define     ASRC1_FIFO                                                        (ASRC_BASE+0x00000204)
#define     ASRC1_FIFO_LEVEL                                                  (ASRC_BASE+0x00000208)
#define     ASRC1_INTERRUPT                                                   (ASRC_BASE+0x0000020c)
#define     ASRC1_FILTER                                                      (ASRC_BASE+0x00000210)
#define     ASRC1_DECIMATIONRATIO_L                                           (ASRC_BASE+0x00000214)
#define     ASRC1_DECIMATIONRATIO_H                                           (ASRC_BASE+0x00000218)
#define     ASRC1_FADE                                                        (ASRC_BASE+0x0000021c)
#define     ASRC1_PHASE_DELTA                                                 (ASRC_BASE+0x00000220)
#define     ASRC1_PHASE_ACC_L                                                 (ASRC_BASE+0x00000224)
#define     ASRC1_PHASE_ACC_H                                                 (ASRC_BASE+0x00000228)
#define     ASRC1_PHASE_DIFF_L                                                (ASRC_BASE+0x0000022c)
#define     ASRC1_PHASE_DIFF_H                                                (ASRC_BASE+0x00000230)
#define     ASRC1_PHASE_SHIFTBIT                                              (ASRC_BASE+0x00000234)
#define     ASRC1_FRAMESIZE                                                   (ASRC_BASE+0x00000238)
#define     ASRC1_SHIFT_TABLEBIT                                              (ASRC_BASE+0x0000023c)
#define     ASRC1_TABLEADDR                                                   (ASRC_BASE+0x00000240)
#define     ASRC1_FIFO_IN_DATA                                                (ASRC_BASE+0x00000244)
#define     ASRC1_FIFO_OUT_DATA                                               (ASRC_BASE+0x00000248)
#define     ASRC2_CTL                                                         (ASRC_BASE+0x00000300)
#define     ASRC2_FIFO                                                        (ASRC_BASE+0x00000304)
#define     ASRC2_FIFO_LEVEL                                                  (ASRC_BASE+0x00000308)
#define     ASRC2_INTERRUPT                                                   (ASRC_BASE+0x0000030c)
#define     ASRC2_FILTER                                                      (ASRC_BASE+0x00000310)
#define     ASRC2_DECIMATIONRATIO_L                                           (ASRC_BASE+0x00000314)
#define     ASRC2_DECIMATIONRATIO_H                                           (ASRC_BASE+0x00000318)
#define     ASRC2_FADE                                                        (ASRC_BASE+0x0000031c)
#define     ASRC2_PHASE_DELTA                                                 (ASRC_BASE+0x00000320)
#define     ASRC2_PHASE_ACC_L                                                 (ASRC_BASE+0x00000324)
#define     ASRC2_PHASE_ACC_H                                                 (ASRC_BASE+0x00000328)
#define     ASRC2_PHASE_DIFF_L                                                (ASRC_BASE+0x0000032c)
#define     ASRC2_PHASE_DIFF_H                                                (ASRC_BASE+0x00000330)
#define     ASRC2_PHASE_SHIFTBIT                                              (ASRC_BASE+0x00000334)
#define     ASRC2_FRAMESIZE                                                   (ASRC_BASE+0x00000338)
#define     ASRC2_SHIFT_TABLEBIT                                              (ASRC_BASE+0x0000033c)
#define     ASRC2_TABLEADDR                                                   (ASRC_BASE+0x00000340)
#define     ASRC2_FIFO_IN_DATA                                                (ASRC_BASE+0x00000344)
#define     ASRC2_FIFO_OUT_DATA                                               (ASRC_BASE+0x00000348)
#define     ASRC3_CTL                                                         (ASRC_BASE+0x00000400)
#define     ASRC3_FIFO                                                        (ASRC_BASE+0x00000404)
#define     ASRC3_FIFO_LEVEL                                                  (ASRC_BASE+0x00000408)
#define     ASRC3_INTERRUPT                                                   (ASRC_BASE+0x0000040c)
#define     ASRC3_FILTER                                                      (ASRC_BASE+0x00000410)
#define     ASRC3_DECIMATIONRATIO_L                                           (ASRC_BASE+0x00000414)
#define     ASRC3_DECIMATIONRATIO_H                                           (ASRC_BASE+0x00000418)
#define     ASRC3_FADE                                                        (ASRC_BASE+0x0000041c)
#define     ASRC3_PHASE_DELTA                                                 (ASRC_BASE+0x00000420)
#define     ASRC3_PHASE_ACC_L                                                 (ASRC_BASE+0x00000424)
#define     ASRC3_PHASE_ACC_H                                                 (ASRC_BASE+0x00000428)
#define     ASRC3_PHASE_DIFF_L                                                (ASRC_BASE+0x0000042c)
#define     ASRC3_PHASE_DIFF_H                                                (ASRC_BASE+0x00000430)
#define     ASRC3_PHASE_SHIFTBIT                                              (ASRC_BASE+0x00000434)
#define     ASRC3_FRAMESIZE                                                   (ASRC_BASE+0x00000438)
#define     ASRC3_SHIFT_TABLEBIT                                              (ASRC_BASE+0x0000043c)
#define     ASRC3_TABLEADDR                                                   (ASRC_BASE+0x00000440)
#define     ASRC3_FIFO_IN_DATA                                                (ASRC_BASE+0x00000444)
#define     ASRC3_FIFO_OUT_DATA                                               (ASRC_BASE+0x00000448)

//--------------Bits Location------------------------------------------//
#define     ASRC_SEL_OUT_CONNECT3_E                                           30
#define     ASRC_SEL_OUT_CONNECT3_SHIFT                                       28
#define     ASRC_SEL_OUT_CONNECT3_MASK                                        (0x7<<28)
#define     ASRC_SEL_IN_CONNECT3_E                                            27
#define     ASRC_SEL_IN_CONNECT3_SHIFT                                        25
#define     ASRC_SEL_IN_CONNECT3_MASK                                         (0x7<<25)
#define     ASRC_SEL_ASRC3_SEL                                                24
#define     ASRC_SEL_OUT_CONNECT2_E                                           22
#define     ASRC_SEL_OUT_CONNECT2_SHIFT                                       20
#define     ASRC_SEL_OUT_CONNECT2_MASK                                        (0x7<<20)
#define     ASRC_SEL_IN_CONNECT2_E                                            19
#define     ASRC_SEL_IN_CONNECT2_SHIFT                                        17
#define     ASRC_SEL_IN_CONNECT2_MASK                                         (0x7<<17)
#define     ASRC_SEL_ASRC2_SEL                                                16
#define     ASRC_SEL_OUT_CONNECT1_E                                           14
#define     ASRC_SEL_OUT_CONNECT1_SHIFT                                       12
#define     ASRC_SEL_OUT_CONNECT1_MASK                                        (0x7<<12)
#define     ASRC_SEL_IN_CONNECT1_E                                            11
#define     ASRC_SEL_IN_CONNECT1_SHIFT                                        9
#define     ASRC_SEL_IN_CONNECT1_MASK                                         (0x7<<9)
#define     ASRC_SEL_ASRC1_SEL                                                8
#define     ASRC_SEL_OUT_CONNECT0_E                                           6
#define     ASRC_SEL_OUT_CONNECT0_SHIFT                                       4
#define     ASRC_SEL_OUT_CONNECT0_MASK                                        (0x7<<4)
#define     ASRC_SEL_IN_CONNECT0_E                                            3
#define     ASRC_SEL_IN_CONNECT0_SHIFT                                        1
#define     ASRC_SEL_IN_CONNECT0_MASK                                         (0x7<<1)
#define     ASRC_SEL_ASRC0_SEL                                                0

#define     ASRC_AUDIO_OUT_CONNECT3_AUDIOSEL_E                                30
#define     ASRC_AUDIO_OUT_CONNECT3_AUDIOSEL_SHIFT                            28
#define     ASRC_AUDIO_OUT_CONNECT3_AUDIOSEL_MASK                             (0x7<<28)
#define     ASRC_AUDIO_IN_CONNECT3_AUDIOSEL_E                                 26
#define     ASRC_AUDIO_IN_CONNECT3_AUDIOSEL_SHIFT                             24
#define     ASRC_AUDIO_IN_CONNECT3_AUDIOSEL_MASK                              (0x7<<24)
#define     ASRC_AUDIO_OUT_CONNECT2_AUDIOSEL_E                                22
#define     ASRC_AUDIO_OUT_CONNECT2_AUDIOSEL_SHIFT                            20
#define     ASRC_AUDIO_OUT_CONNECT2_AUDIOSEL_MASK                             (0x7<<20)
#define     ASRC_AUDIO_IN_CONNECT2_AUDIOSEL_E                                 18
#define     ASRC_AUDIO_IN_CONNECT2_AUDIOSEL_SHIFT                             16
#define     ASRC_AUDIO_IN_CONNECT2_AUDIOSEL_MASK                              (0x7<<16)
#define     ASRC_AUDIO_OUT_CONNECT1_AUDIOSEL_E                                14
#define     ASRC_AUDIO_OUT_CONNECT1_AUDIOSEL_SHIFT                            12
#define     ASRC_AUDIO_OUT_CONNECT1_AUDIOSEL_MASK                             (0x7<<12)
#define     ASRC_AUDIO_IN_CONNECT1_AUDIOSEL_E                                 10
#define     ASRC_AUDIO_IN_CONNECT1_AUDIOSEL_SHIFT                             8
#define     ASRC_AUDIO_IN_CONNECT1_AUDIOSEL_MASK                              (0x7<<8)
#define     ASRC_AUDIO_OUT_CONNECT0_AUDIOSEL_E                                6
#define     ASRC_AUDIO_OUT_CONNECT0_AUDIOSEL_SHIFT                            4
#define     ASRC_AUDIO_OUT_CONNECT0_AUDIOSEL_MASK                             (0x7<<4)
#define     ASRC_AUDIO_IN_CONNECT0_AUDIOSEL_E                                 2
#define     ASRC_AUDIO_IN_CONNECT0_AUDIOSEL_SHIFT                             0
#define     ASRC_AUDIO_IN_CONNECT0_AUDIOSEL_MASK                              (0x7<<0)

#define     ASRC0_CTL_DMA_MODE_OUT                                            31
#define     ASRC0_CTL_DMA_MODE_IN                                             30
#define     ASRC0_CTL_SCLK_RATIO_E                                            29
#define     ASRC0_CTL_SCLK_RATIO_SHIFT                                        28
#define     ASRC0_CTL_SCLK_RATIO_MASK                                         (0x3<<28)
#define     ASRC0_CTL_PHASE_TRACK_EN                                          27
#define     ASRC0_CTL_PHASE_OVFS_EN_E                                         26
#define     ASRC0_CTL_PHASE_OVFS_EN_SHIFT                                     25
#define     ASRC0_CTL_PHASE_OVFS_EN_MASK                                      (0x3<<25)
#define     ASRC0_CTL_MASTER_ID_E                                             17
#define     ASRC0_CTL_MASTER_ID_SHIFT                                         16
#define     ASRC0_CTL_MASTER_ID_MASK                                          (0x3<<16)
#define     ASRC0_CTL_MASTER_EN                                               15
#define     ASRC0_CTL_PHASEOV_INT_EN                                          14
#define     ASRC0_CTL_PHASE_INT_EN                                            13
#define     ASRC0_CTL_FADE_INT_EN                                             11
#define     ASRC0_CTL_LAST_FRAME                                              10
#define     ASRC0_CTL_UPDATE_PHASE_EN                                         9
#define     ASRC0_CTL_FIFO_IN_EN                                              8
#define     ASRC0_CTL_FIFO_OUT_EN                                             7
#define     ASRC0_CTL_RESET_HISTORY                                           6
#define     ASRC0_CTL_FADE_EN                                                 5
#define     ASRC0_CTL_UPDATE_DECIMA_EN                                        4
#define     ASRC0_CTL_ASRC_TYPE                                               3
#define     ASRC0_CTL_ASRC_MODE_E                                             2
#define     ASRC0_CTL_ASRC_MODE_SHIFT                                         1
#define     ASRC0_CTL_ASRC_MODE_MASK                                          (0x3<<1)
#define     ASRC0_CTL_FRAME_START                                             0

#define     ASRC0_FIFO_SCLKOUT_RATIO_BIT_E                                    31
#define     ASRC0_FIFO_SCLKOUT_RATIO_BIT_SHIFT                                30
#define     ASRC0_FIFO_SCLKOUT_RATIO_BIT_MASK                                 (0x3<<30)
#define     ASRC0_FIFO_SCLKIN_RATIO_BIT_E                                     29
#define     ASRC0_FIFO_SCLKIN_RATIO_BIT_SHIFT                                 28
#define     ASRC0_FIFO_SCLKIN_RATIO_BIT_MASK                                  (0x3<<28)
#define     ASRC0_FIFO_FIFO_RD_LEVEL_E                                        25
#define     ASRC0_FIFO_FIFO_RD_LEVEL_SHIFT                                    20
#define     ASRC0_FIFO_FIFO_RD_LEVEL_MASK                                     (0x3F<<20)
#define     ASRC0_FIFO_AUDIO_OUT_CHAN_E                                       18
#define     ASRC0_FIFO_AUDIO_OUT_CHAN_SHIFT                                   17
#define     ASRC0_FIFO_AUDIO_OUT_CHAN_MASK                                    (0x3<<17)
#define     ASRC0_FIFO_AUDIO_OUT_FORMAT                                       16
#define     ASRC0_FIFO_FIFO_WT_LEVEL_E                                        9
#define     ASRC0_FIFO_FIFO_WT_LEVEL_SHIFT                                    4
#define     ASRC0_FIFO_FIFO_WT_LEVEL_MASK                                     (0x3F<<4)
#define     ASRC0_FIFO_CHS                                                    3
#define     ASRC0_FIFO_AUDIO_IN_CHAN_E                                        2
#define     ASRC0_FIFO_AUDIO_IN_CHAN_SHIFT                                    1
#define     ASRC0_FIFO_AUDIO_IN_CHAN_MASK                                     (0x3<<1)
#define     ASRC0_FIFO_AUDIO_IN_FORMAT                                        0

#define     ASRC0_FIFO_LEVEL_FIFO_OUT_LEVEL_E                                 22
#define     ASRC0_FIFO_LEVEL_FIFO_OUT_LEVEL_SHIFT                             17
#define     ASRC0_FIFO_LEVEL_FIFO_OUT_LEVEL_MASK                              (0x3F<<17)
#define     ASRC0_FIFO_LEVEL_FIFO_OUT_INTERRUPT_EN                            16
#define     ASRC0_FIFO_LEVEL_FIFO_IN_LEVEL_E                                  6
#define     ASRC0_FIFO_LEVEL_FIFO_IN_LEVEL_SHIFT                              1
#define     ASRC0_FIFO_LEVEL_FIFO_IN_LEVEL_MASK                               (0x3F<<1)
#define     ASRC0_FIFO_LEVEL_FIFO_IN_INTERRUPT_EN                             0

#define     ASRC0_INTERRUPT_PHASE_OV                                          5
#define     ASRC0_INTERRUPT_PHASE_PD                                          4
#define     ASRC0_INTERRUPT_FADE_END                                          3
#define     ASRC0_INTERRUPT_OUTFIFO_FULL                                      2
#define     ASRC0_INTERRUPT_INFIFO_EMPTY                                      1
#define     ASRC0_INTERRUPT_FRAME_END                                         0

#define     ASRC0_FILTER_TAB_SIZE_E                                           26
#define     ASRC0_FILTER_TAB_SIZE_SHIFT                                       16
#define     ASRC0_FILTER_TAB_SIZE_MASK                                        (0x7FF<<16)
#define     ASRC0_FILTER_TAB_STEP_BIT                                         8
#define     ASRC0_FILTER_FILTER_TAPS_E                                        7
#define     ASRC0_FILTER_FILTER_TAPS_SHIFT                                    0
#define     ASRC0_FILTER_FILTER_TAPS_MASK                                     (0xFF<<0)

#define     ASRC0_DECIMATIONRATIO_L_DECIMA_SIGN                               31
#define     ASRC0_DECIMATIONRATIO_L_DECIMA_LOW_E                              30
#define     ASRC0_DECIMATIONRATIO_L_DECIMA_LOW_SHIFT                          0
#define     ASRC0_DECIMATIONRATIO_L_DECIMA_LOW_MASK                           (0x7FFFFFFF<<0)

#define     ASRC0_DECIMATIONRATIO_H_DECIM_STEP_BIT_E                          28
#define     ASRC0_DECIMATIONRATIO_H_DECIM_STEP_BIT_SHIFT                      24
#define     ASRC0_DECIMATIONRATIO_H_DECIM_STEP_BIT_MASK                       (0x1F<<24)
#define     ASRC0_DECIMATIONRATIO_H_DECIMA_HIGH_E                             21
#define     ASRC0_DECIMATIONRATIO_H_DECIMA_HIGH_SHIFT                         0
#define     ASRC0_DECIMATIONRATIO_H_DECIMA_HIGH_MASK                          (0x3FFFFF<<0)

#define     ASRC0_FADE_FADE_SIZE_E                                            28
#define     ASRC0_FADE_FADE_SIZE_SHIFT                                        24
#define     ASRC0_FADE_FADE_SIZE_MASK                                         (0x1F<<24)
#define     ASRC0_FADE_FADE_GAIN_E                                            22
#define     ASRC0_FADE_FADE_GAIN_SHIFT                                        1
#define     ASRC0_FADE_FADE_GAIN_MASK                                         (0x3FFFFF<<1)
#define     ASRC0_FADE_FADE_MODE                                              0

#define     ASRC0_PHASE_DELTA_PHASE_DELTA_SIGN                                31
#define     ASRC0_PHASE_DELTA_PHASE_DELTA_E                                   30
#define     ASRC0_PHASE_DELTA_PHASE_DELTA_SHIFT                               0
#define     ASRC0_PHASE_DELTA_PHASE_DELTA_MASK                                (0x7FFFFFFF<<0)

#define     ASRC0_PHASE_ACC_L_PHASE_ACC_LOW_E                                 31
#define     ASRC0_PHASE_ACC_L_PHASE_ACC_LOW_SHIFT                             0
#define     ASRC0_PHASE_ACC_L_PHASE_ACC_LOW_MASK                              (0xFFFFFFFF<<0)

#define     ASRC0_PHASE_ACC_H_PHASE_ACC_SIGN                                  31
#define     ASRC0_PHASE_ACC_H_PHASE_ACC_HIGH_E                                30
#define     ASRC0_PHASE_ACC_H_PHASE_ACC_HIGH_SHIFT                            0
#define     ASRC0_PHASE_ACC_H_PHASE_ACC_HIGH_MASK                             (0x7FFFFFFF<<0)

#define     ASRC0_PHASE_DIFF_L_PHASE_DIFF_LOW_E                               31
#define     ASRC0_PHASE_DIFF_L_PHASE_DIFF_LOW_SHIFT                           0
#define     ASRC0_PHASE_DIFF_L_PHASE_DIFF_LOW_MASK                            (0xFFFFFFFF<<0)

#define     ASRC0_PHASE_DIFF_H_PHASE_DIFF_SIGN                                31
#define     ASRC0_PHASE_DIFF_H_PHASE_DIFF_HIGH_E                              30
#define     ASRC0_PHASE_DIFF_H_PHASE_DIFF_HIGH_SHIFT                          0
#define     ASRC0_PHASE_DIFF_H_PHASE_DIFF_HIGH_MASK                           (0x7FFFFFFF<<0)

#define     ASRC0_PHASE_SHIFTBIT_PHASE_SHIFTS_E                               31
#define     ASRC0_PHASE_SHIFTBIT_PHASE_SHIFTS_SHIFT                           28
#define     ASRC0_PHASE_SHIFTBIT_PHASE_SHIFTS_MASK                            (0xF<<28)
#define     ASRC0_PHASE_SHIFTBIT_PHASE_CLK_FIXED                              27
#define     ASRC0_PHASE_SHIFTBIT_PHASE_CLK_RATIO_E                            26
#define     ASRC0_PHASE_SHIFTBIT_PHASE_CLK_RATIO_SHIFT                        24
#define     ASRC0_PHASE_SHIFTBIT_PHASE_CLK_RATIO_MASK                         (0x7<<24)
#define     ASRC0_PHASE_SHIFTBIT_PHASE_SAMPERS_E                              20
#define     ASRC0_PHASE_SHIFTBIT_PHASE_SAMPERS_SHIFT                          16
#define     ASRC0_PHASE_SHIFTBIT_PHASE_SAMPERS_MASK                           (0x1F<<16)
#define     ASRC0_PHASE_SHIFTBIT_PHASE_FRAMECNT_E                             12
#define     ASRC0_PHASE_SHIFTBIT_PHASE_FRAMECNT_SHIFT                         8
#define     ASRC0_PHASE_SHIFTBIT_PHASE_FRAMECNT_MASK                          (0x1F<<8)
#define     ASRC0_PHASE_SHIFTBIT_PHASE_PEROID_E                               4
#define     ASRC0_PHASE_SHIFTBIT_PHASE_PEROID_SHIFT                           0
#define     ASRC0_PHASE_SHIFTBIT_PHASE_PEROID_MASK                            (0x1F<<0)

#define     ASRC0_FRAMESIZE_OUT_SAMPES_E                                      31
#define     ASRC0_FRAMESIZE_OUT_SAMPES_SHIFT                                  16
#define     ASRC0_FRAMESIZE_OUT_SAMPES_MASK                                   (0xFFFF<<16)
#define     ASRC0_FRAMESIZE_IN_SAMPS_E                                        15
#define     ASRC0_FRAMESIZE_IN_SAMPS_SHIFT                                    0
#define     ASRC0_FRAMESIZE_IN_SAMPS_MASK                                     (0xFFFF<<0)

#define     ASRC0_SHIFT_TABLEBIT_E_SHIFTS_E                                   29
#define     ASRC0_SHIFT_TABLEBIT_E_SHIFTS_SHIFT                               24
#define     ASRC0_SHIFT_TABLEBIT_E_SHIFTS_MASK                                (0x3F<<24)
#define     ASRC0_SHIFT_TABLEBIT_D_SHIFTS_E                                   23
#define     ASRC0_SHIFT_TABLEBIT_D_SHIFTS_SHIFT                               18
#define     ASRC0_SHIFT_TABLEBIT_D_SHIFTS_MASK                                (0x3F<<18)
#define     ASRC0_SHIFT_TABLEBIT_C_SHIFTS_E                                   17
#define     ASRC0_SHIFT_TABLEBIT_C_SHIFTS_SHIFT                               12
#define     ASRC0_SHIFT_TABLEBIT_C_SHIFTS_MASK                                (0x3F<<12)
#define     ASRC0_SHIFT_TABLEBIT_B_SHIFTS_E                                   11
#define     ASRC0_SHIFT_TABLEBIT_B_SHIFTS_SHIFT                               6
#define     ASRC0_SHIFT_TABLEBIT_B_SHIFTS_MASK                                (0x3F<<6)
#define     ASRC0_SHIFT_TABLEBIT_A_SHIFTS_E                                   5
#define     ASRC0_SHIFT_TABLEBIT_A_SHIFTS_SHIFT                               0
#define     ASRC0_SHIFT_TABLEBIT_A_SHIFTS_MASK                                (0x3F<<0)

#define     ASRC0_TABLEADDR_ADDR_E                                            31
#define     ASRC0_TABLEADDR_ADDR_SHIFT                                        0
#define     ASRC0_TABLEADDR_ADDR_MASK                                         (0xFFFFFFFF<<0)

#define     ASRC0_FIFO_IN_DATA_DATA_E                                         31
#define     ASRC0_FIFO_IN_DATA_DATA_SHIFT                                     0
#define     ASRC0_FIFO_IN_DATA_DATA_MASK                                      (0xFFFFFFFF<<0)

#define     ASRC0_FIFO_OUT_DATA_DATA_E                                        31
#define     ASRC0_FIFO_OUT_DATA_DATA_SHIFT                                    0
#define     ASRC0_FIFO_OUT_DATA_DATA_MASK                                     (0xFFFFFFFF<<0)

#define     ASRC1_CTL_DMA_MODE_OUT                                            31
#define     ASRC1_CTL_DMA_MODE_IN                                             30
#define     ASRC1_CTL_SCLK_RATIO_E                                            29
#define     ASRC1_CTL_SCLK_RATIO_SHIFT                                        28
#define     ASRC1_CTL_SCLK_RATIO_MASK                                         (0x3<<28)
#define     ASRC1_CTL_PHASE_TRACK_EN                                          27
#define     ASRC1_CTL_PHASE_OVFS_EN_E                                         26
#define     ASRC1_CTL_PHASE_OVFS_EN_SHIFT                                     25
#define     ASRC1_CTL_PHASE_OVFS_EN_MASK                                      (0x3<<25)
#define     ASRC1_CTL_MASTER_ID_E                                             17
#define     ASRC1_CTL_MASTER_ID_SHIFT                                         16
#define     ASRC1_CTL_MASTER_ID_MASK                                          (0x3<<16)
#define     ASRC1_CTL_MASTER_EN                                               15
#define     ASRC1_CTL_PHASEOV_INT_EN                                          14
#define     ASRC1_CTL_PHASE_INT_EN                                            13
#define     ASRC1_CTL_FADE_INT_EN                                             11
#define     ASRC1_CTL_LAST_FRAME                                              10
#define     ASRC1_CTL_UPDATE_PHASE_EN                                         9
#define     ASRC1_CTL_FIFO_IN_EN                                              8
#define     ASRC1_CTL_FIFO_OUT_EN                                             7
#define     ASRC1_CTL_RESET_HISTORY                                           6
#define     ASRC1_CTL_FADE_EN                                                 5
#define     ASRC1_CTL_UPDATE_DECIMA_EN                                        4
#define     ASRC1_CTL_ASRC_TYPE                                               3
#define     ASRC1_CTL_ASRC_MODE_E                                             2
#define     ASRC1_CTL_ASRC_MODE_SHIFT                                         1
#define     ASRC1_CTL_ASRC_MODE_MASK                                          (0x3<<1)
#define     ASRC1_CTL_FRAME_START                                             0

#define     ASRC1_FIFO_SCLKOUT_RATIO_BIT_E                                    31
#define     ASRC1_FIFO_SCLKOUT_RATIO_BIT_SHIFT                                30
#define     ASRC1_FIFO_SCLKOUT_RATIO_BIT_MASK                                 (0x3<<30)
#define     ASRC1_FIFO_SCLKIN_RATIO_BIT_E                                     29
#define     ASRC1_FIFO_SCLKIN_RATIO_BIT_SHIFT                                 28
#define     ASRC1_FIFO_SCLKIN_RATIO_BIT_MASK                                  (0x3<<28)
#define     ASRC1_FIFO_FIFO_RD_LEVEL_E                                        25
#define     ASRC1_FIFO_FIFO_RD_LEVEL_SHIFT                                    20
#define     ASRC1_FIFO_FIFO_RD_LEVEL_MASK                                     (0x3F<<20)
#define     ASRC1_FIFO_AUDIO_OUT_CHAN_E                                       18
#define     ASRC1_FIFO_AUDIO_OUT_CHAN_SHIFT                                   17
#define     ASRC1_FIFO_AUDIO_OUT_CHAN_MASK                                    (0x3<<17)
#define     ASRC1_FIFO_AUDIO_OUT_FORMAT                                       16
#define     ASRC1_FIFO_FIFO_WT_LEVEL_E                                        9
#define     ASRC1_FIFO_FIFO_WT_LEVEL_SHIFT                                    4
#define     ASRC1_FIFO_FIFO_WT_LEVEL_MASK                                     (0x3F<<4)
#define     ASRC1_FIFO_CHS                                                    3
#define     ASRC1_FIFO_AUDIO_IN_CHAN_E                                        2
#define     ASRC1_FIFO_AUDIO_IN_CHAN_SHIFT                                    1
#define     ASRC1_FIFO_AUDIO_IN_CHAN_MASK                                     (0x3<<1)
#define     ASRC1_FIFO_AUDIO_IN_FORMAT                                        0

#define     ASRC1_FIFO_LEVEL_FIFO_OUT_LEVEL_E                                 22
#define     ASRC1_FIFO_LEVEL_FIFO_OUT_LEVEL_SHIFT                             17
#define     ASRC1_FIFO_LEVEL_FIFO_OUT_LEVEL_MASK                              (0x3F<<17)
#define     ASRC1_FIFO_LEVEL_FIFO_OUT_INTERRUPT_EN                            16
#define     ASRC1_FIFO_LEVEL_FIFO_IN_LEVEL_E                                  6
#define     ASRC1_FIFO_LEVEL_FIFO_IN_LEVEL_SHIFT                              1
#define     ASRC1_FIFO_LEVEL_FIFO_IN_LEVEL_MASK                               (0x3F<<1)
#define     ASRC1_FIFO_LEVEL_FIFO_IN_INTERRUPT_EN                             0

#define     ASRC1_INTERRUPT_PHASE_OV                                          5
#define     ASRC1_INTERRUPT_PHASE_PD                                          4
#define     ASRC1_INTERRUPT_FADE_END                                          3
#define     ASRC1_INTERRUPT_OUTFIFO_FULL                                      2
#define     ASRC1_INTERRUPT_INFIFO_EMPTY                                      1
#define     ASRC1_INTERRUPT_FRAME_END                                         0

#define     ASRC1_FILTER_TAB_SIZE_E                                           26
#define     ASRC1_FILTER_TAB_SIZE_SHIFT                                       16
#define     ASRC1_FILTER_TAB_SIZE_MASK                                        (0x7FF<<16)
#define     ASRC1_FILTER_TAB_STEP_BIT                                         8
#define     ASRC1_FILTER_FILTER_TAPS_E                                        7
#define     ASRC1_FILTER_FILTER_TAPS_SHIFT                                    0
#define     ASRC1_FILTER_FILTER_TAPS_MASK                                     (0xFF<<0)

#define     ASRC1_DECIMATIONRATIO_L_DECIMA_SIGN                               31
#define     ASRC1_DECIMATIONRATIO_L_DECIMA_LOW_E                              30
#define     ASRC1_DECIMATIONRATIO_L_DECIMA_LOW_SHIFT                          0
#define     ASRC1_DECIMATIONRATIO_L_DECIMA_LOW_MASK                           (0x7FFFFFFF<<0)

#define     ASRC1_DECIMATIONRATIO_H_DECIM_STEP_BIT_E                          28
#define     ASRC1_DECIMATIONRATIO_H_DECIM_STEP_BIT_SHIFT                      24
#define     ASRC1_DECIMATIONRATIO_H_DECIM_STEP_BIT_MASK                       (0x1F<<24)
#define     ASRC1_DECIMATIONRATIO_H_DECIMA_HIGH_E                             21
#define     ASRC1_DECIMATIONRATIO_H_DECIMA_HIGH_SHIFT                         0
#define     ASRC1_DECIMATIONRATIO_H_DECIMA_HIGH_MASK                          (0x3FFFFF<<0)

#define     ASRC1_FADE_FADE_SIZE_E                                            28
#define     ASRC1_FADE_FADE_SIZE_SHIFT                                        24
#define     ASRC1_FADE_FADE_SIZE_MASK                                         (0x1F<<24)
#define     ASRC1_FADE_FADE_GAIN_E                                            22
#define     ASRC1_FADE_FADE_GAIN_SHIFT                                        1
#define     ASRC1_FADE_FADE_GAIN_MASK                                         (0x3FFFFF<<1)
#define     ASRC1_FADE_FADE_MODE                                              0

#define     ASRC1_PHASE_DELTA_PHASE_DELTA_SIGN                                31
#define     ASRC1_PHASE_DELTA_PHASE_DELTA_E                                   30
#define     ASRC1_PHASE_DELTA_PHASE_DELTA_SHIFT                               0
#define     ASRC1_PHASE_DELTA_PHASE_DELTA_MASK                                (0x7FFFFFFF<<0)

#define     ASRC1_PHASE_ACC_L_PHASE_ACC_LOW_E                                 31
#define     ASRC1_PHASE_ACC_L_PHASE_ACC_LOW_SHIFT                             0
#define     ASRC1_PHASE_ACC_L_PHASE_ACC_LOW_MASK                              (0xFFFFFFFF<<0)

#define     ASRC1_PHASE_ACC_H_PHASE_ACC_SIGN                                  31
#define     ASRC1_PHASE_ACC_H_PHASE_ACC_HIGH_E                                30
#define     ASRC1_PHASE_ACC_H_PHASE_ACC_HIGH_SHIFT                            0
#define     ASRC1_PHASE_ACC_H_PHASE_ACC_HIGH_MASK                             (0x7FFFFFFF<<0)

#define     ASRC1_PHASE_DIFF_L_PHASE_DIFF_LOW_E                               31
#define     ASRC1_PHASE_DIFF_L_PHASE_DIFF_LOW_SHIFT                           0
#define     ASRC1_PHASE_DIFF_L_PHASE_DIFF_LOW_MASK                            (0xFFFFFFFF<<0)

#define     ASRC1_PHASE_DIFF_H_PHASE_DIFF_SIGN                                31
#define     ASRC1_PHASE_DIFF_H_PHASE_DIFF_HIGH_E                              30
#define     ASRC1_PHASE_DIFF_H_PHASE_DIFF_HIGH_SHIFT                          0
#define     ASRC1_PHASE_DIFF_H_PHASE_DIFF_HIGH_MASK                           (0x7FFFFFFF<<0)

#define     ASRC1_PHASE_SHIFTBIT_PHASE_SHIFTS_E                               31
#define     ASRC1_PHASE_SHIFTBIT_PHASE_SHIFTS_SHIFT                           28
#define     ASRC1_PHASE_SHIFTBIT_PHASE_SHIFTS_MASK                            (0xF<<28)
#define     ASRC1_PHASE_SHIFTBIT_PHASE_CLK_FIXED                              27
#define     ASRC1_PHASE_SHIFTBIT_PHASE_CLK_RATIO_E                            26
#define     ASRC1_PHASE_SHIFTBIT_PHASE_CLK_RATIO_SHIFT                        24
#define     ASRC1_PHASE_SHIFTBIT_PHASE_CLK_RATIO_MASK                         (0x7<<24)
#define     ASRC1_PHASE_SHIFTBIT_PHASE_SAMPERS_E                              20
#define     ASRC1_PHASE_SHIFTBIT_PHASE_SAMPERS_SHIFT                          16
#define     ASRC1_PHASE_SHIFTBIT_PHASE_SAMPERS_MASK                           (0x1F<<16)
#define     ASRC1_PHASE_SHIFTBIT_PHASE_FRAMECNT_E                             12
#define     ASRC1_PHASE_SHIFTBIT_PHASE_FRAMECNT_SHIFT                         8
#define     ASRC1_PHASE_SHIFTBIT_PHASE_FRAMECNT_MASK                          (0x1F<<8)
#define     ASRC1_PHASE_SHIFTBIT_PHASE_PEROID_E                               4
#define     ASRC1_PHASE_SHIFTBIT_PHASE_PEROID_SHIFT                           0
#define     ASRC1_PHASE_SHIFTBIT_PHASE_PEROID_MASK                            (0x1F<<0)

#define     ASRC1_FRAMESIZE_OUT_SAMPES_E                                      31
#define     ASRC1_FRAMESIZE_OUT_SAMPES_SHIFT                                  16
#define     ASRC1_FRAMESIZE_OUT_SAMPES_MASK                                   (0xFFFF<<16)
#define     ASRC1_FRAMESIZE_IN_SAMPS_E                                        15
#define     ASRC1_FRAMESIZE_IN_SAMPS_SHIFT                                    0
#define     ASRC1_FRAMESIZE_IN_SAMPS_MASK                                     (0xFFFF<<0)

#define     ASRC1_SHIFT_TABLEBIT_E_SHIFTS_E                                   29
#define     ASRC1_SHIFT_TABLEBIT_E_SHIFTS_SHIFT                               24
#define     ASRC1_SHIFT_TABLEBIT_E_SHIFTS_MASK                                (0x3F<<24)
#define     ASRC1_SHIFT_TABLEBIT_D_SHIFTS_E                                   23
#define     ASRC1_SHIFT_TABLEBIT_D_SHIFTS_SHIFT                               18
#define     ASRC1_SHIFT_TABLEBIT_D_SHIFTS_MASK                                (0x3F<<18)
#define     ASRC1_SHIFT_TABLEBIT_C_SHIFTS_E                                   17
#define     ASRC1_SHIFT_TABLEBIT_C_SHIFTS_SHIFT                               12
#define     ASRC1_SHIFT_TABLEBIT_C_SHIFTS_MASK                                (0x3F<<12)
#define     ASRC1_SHIFT_TABLEBIT_B_SHIFTS_E                                   11
#define     ASRC1_SHIFT_TABLEBIT_B_SHIFTS_SHIFT                               6
#define     ASRC1_SHIFT_TABLEBIT_B_SHIFTS_MASK                                (0x3F<<6)
#define     ASRC1_SHIFT_TABLEBIT_A_SHIFTS_E                                   5
#define     ASRC1_SHIFT_TABLEBIT_A_SHIFTS_SHIFT                               0
#define     ASRC1_SHIFT_TABLEBIT_A_SHIFTS_MASK                                (0x3F<<0)

#define     ASRC1_TABLEADDR_ADDR_E                                            31
#define     ASRC1_TABLEADDR_ADDR_SHIFT                                        0
#define     ASRC1_TABLEADDR_ADDR_MASK                                         (0xFFFFFFFF<<0)

#define     ASRC1_FIFO_IN_DATA_DATA_E                                         31
#define     ASRC1_FIFO_IN_DATA_DATA_SHIFT                                     0
#define     ASRC1_FIFO_IN_DATA_DATA_MASK                                      (0xFFFFFFFF<<0)

#define     ASRC1_FIFO_OUT_DATA_DATA_E                                        31
#define     ASRC1_FIFO_OUT_DATA_DATA_SHIFT                                    0
#define     ASRC1_FIFO_OUT_DATA_DATA_MASK                                     (0xFFFFFFFF<<0)

#define     ASRC2_CTL_DMA_MODE_OUT                                            31
#define     ASRC2_CTL_DMA_MODE_IN                                             30
#define     ASRC2_CTL_SCLK_RATIO_E                                            29
#define     ASRC2_CTL_SCLK_RATIO_SHIFT                                        28
#define     ASRC2_CTL_SCLK_RATIO_MASK                                         (0x3<<28)
#define     ASRC2_CTL_PHASE_TRACK_EN                                          27
#define     ASRC2_CTL_PHASE_OVFS_EN_E                                         26
#define     ASRC2_CTL_PHASE_OVFS_EN_SHIFT                                     25
#define     ASRC2_CTL_PHASE_OVFS_EN_MASK                                      (0x3<<25)
#define     ASRC2_CTL_MASTER_ID_E                                             17
#define     ASRC2_CTL_MASTER_ID_SHIFT                                         16
#define     ASRC2_CTL_MASTER_ID_MASK                                          (0x3<<16)
#define     ASRC2_CTL_MASTER_EN                                               15
#define     ASRC2_CTL_PHASEOV_INT_EN                                          14
#define     ASRC2_CTL_PHASE_INT_EN                                            13
#define     ASRC2_CTL_FADE_INT_EN                                             11
#define     ASRC2_CTL_LAST_FRAME                                              10
#define     ASRC2_CTL_UPDATE_PHASE_EN                                         9
#define     ASRC2_CTL_FIFO_IN_EN                                              8
#define     ASRC2_CTL_FIFO_OUT_EN                                             7
#define     ASRC2_CTL_RESET_HISTORY                                           6
#define     ASRC2_CTL_FADE_EN                                                 5
#define     ASRC2_CTL_UPDATE_DECIMA_EN                                        4
#define     ASRC2_CTL_ASRC_TYPE                                               3
#define     ASRC2_CTL_ASRC_MODE_E                                             2
#define     ASRC2_CTL_ASRC_MODE_SHIFT                                         1
#define     ASRC2_CTL_ASRC_MODE_MASK                                          (0x3<<1)
#define     ASRC2_CTL_FRAME_START                                             0

#define     ASRC2_FIFO_SCLKOUT_RATIO_BIT_E                                    31
#define     ASRC2_FIFO_SCLKOUT_RATIO_BIT_SHIFT                                30
#define     ASRC2_FIFO_SCLKOUT_RATIO_BIT_MASK                                 (0x3<<30)
#define     ASRC2_FIFO_SCLKIN_RATIO_BIT_E                                     29
#define     ASRC2_FIFO_SCLKIN_RATIO_BIT_SHIFT                                 28
#define     ASRC2_FIFO_SCLKIN_RATIO_BIT_MASK                                  (0x3<<28)
#define     ASRC2_FIFO_FIFO_RD_LEVEL_E                                        25
#define     ASRC2_FIFO_FIFO_RD_LEVEL_SHIFT                                    20
#define     ASRC2_FIFO_FIFO_RD_LEVEL_MASK                                     (0x3F<<20)
#define     ASRC2_FIFO_AUDIO_OUT_CHAN_E                                       18
#define     ASRC2_FIFO_AUDIO_OUT_CHAN_SHIFT                                   17
#define     ASRC2_FIFO_AUDIO_OUT_CHAN_MASK                                    (0x3<<17)
#define     ASRC2_FIFO_AUDIO_OUT_FORMAT                                       16
#define     ASRC2_FIFO_FIFO_WT_LEVEL_E                                        9
#define     ASRC2_FIFO_FIFO_WT_LEVEL_SHIFT                                    4
#define     ASRC2_FIFO_FIFO_WT_LEVEL_MASK                                     (0x3F<<4)
#define     ASRC2_FIFO_CHS                                                    3
#define     ASRC2_FIFO_AUDIO_IN_CHAN_E                                        2
#define     ASRC2_FIFO_AUDIO_IN_CHAN_SHIFT                                    1
#define     ASRC2_FIFO_AUDIO_IN_CHAN_MASK                                     (0x3<<1)
#define     ASRC2_FIFO_AUDIO_IN_FORMAT                                        0

#define     ASRC2_FIFO_LEVEL_FIFO_OUT_LEVEL_E                                 22
#define     ASRC2_FIFO_LEVEL_FIFO_OUT_LEVEL_SHIFT                             17
#define     ASRC2_FIFO_LEVEL_FIFO_OUT_LEVEL_MASK                              (0x3F<<17)
#define     ASRC2_FIFO_LEVEL_FIFO_OUT_INTERRUPT_EN                            16
#define     ASRC2_FIFO_LEVEL_FIFO_IN_LEVEL_E                                  6
#define     ASRC2_FIFO_LEVEL_FIFO_IN_LEVEL_SHIFT                              1
#define     ASRC2_FIFO_LEVEL_FIFO_IN_LEVEL_MASK                               (0x3F<<1)
#define     ASRC2_FIFO_LEVEL_FIFO_IN_INTERRUPT_EN                             0

#define     ASRC2_INTERRUPT_PHASE_OV                                          5
#define     ASRC2_INTERRUPT_PHASE_PD                                          4
#define     ASRC2_INTERRUPT_FADE_END                                          3
#define     ASRC2_INTERRUPT_OUTFIFO_FULL                                      2
#define     ASRC2_INTERRUPT_INFIFO_EMPTY                                      1
#define     ASRC2_INTERRUPT_FRAME_END                                         0

#define     ASRC2_FILTER_TAB_SIZE_E                                           26
#define     ASRC2_FILTER_TAB_SIZE_SHIFT                                       16
#define     ASRC2_FILTER_TAB_SIZE_MASK                                        (0x7FF<<16)
#define     ASRC2_FILTER_TAB_STEP_BIT                                         8
#define     ASRC2_FILTER_FILTER_TAPS_E                                        7
#define     ASRC2_FILTER_FILTER_TAPS_SHIFT                                    0
#define     ASRC2_FILTER_FILTER_TAPS_MASK                                     (0xFF<<0)

#define     ASRC2_DECIMATIONRATIO_L_DECIMA_SIGN                               31
#define     ASRC2_DECIMATIONRATIO_L_DECIMA_LOW_E                              30
#define     ASRC2_DECIMATIONRATIO_L_DECIMA_LOW_SHIFT                          0
#define     ASRC2_DECIMATIONRATIO_L_DECIMA_LOW_MASK                           (0x7FFFFFFF<<0)

#define     ASRC2_DECIMATIONRATIO_H_DECIM_STEP_BIT_E                          28
#define     ASRC2_DECIMATIONRATIO_H_DECIM_STEP_BIT_SHIFT                      24
#define     ASRC2_DECIMATIONRATIO_H_DECIM_STEP_BIT_MASK                       (0x1F<<24)
#define     ASRC2_DECIMATIONRATIO_H_DECIMA_HIGH_E                             21
#define     ASRC2_DECIMATIONRATIO_H_DECIMA_HIGH_SHIFT                         0
#define     ASRC2_DECIMATIONRATIO_H_DECIMA_HIGH_MASK                          (0x3FFFFF<<0)

#define     ASRC2_FADE_FADE_SIZE_E                                            28
#define     ASRC2_FADE_FADE_SIZE_SHIFT                                        24
#define     ASRC2_FADE_FADE_SIZE_MASK                                         (0x1F<<24)
#define     ASRC2_FADE_FADE_GAIN_E                                            22
#define     ASRC2_FADE_FADE_GAIN_SHIFT                                        1
#define     ASRC2_FADE_FADE_GAIN_MASK                                         (0x3FFFFF<<1)
#define     ASRC2_FADE_FADE_MODE                                              0

#define     ASRC2_PHASE_DELTA_PHASE_DELTA_SIGN                                31
#define     ASRC2_PHASE_DELTA_PHASE_DELTA_E                                   30
#define     ASRC2_PHASE_DELTA_PHASE_DELTA_SHIFT                               0
#define     ASRC2_PHASE_DELTA_PHASE_DELTA_MASK                                (0x7FFFFFFF<<0)

#define     ASRC2_PHASE_ACC_L_PHASE_ACC_LOW_E                                 31
#define     ASRC2_PHASE_ACC_L_PHASE_ACC_LOW_SHIFT                             0
#define     ASRC2_PHASE_ACC_L_PHASE_ACC_LOW_MASK                              (0xFFFFFFFF<<0)

#define     ASRC2_PHASE_ACC_H_PHASE_ACC_SIGN                                  31
#define     ASRC2_PHASE_ACC_H_PHASE_ACC_HIGH_E                                30
#define     ASRC2_PHASE_ACC_H_PHASE_ACC_HIGH_SHIFT                            0
#define     ASRC2_PHASE_ACC_H_PHASE_ACC_HIGH_MASK                             (0x7FFFFFFF<<0)

#define     ASRC2_PHASE_DIFF_L_PHASE_DIFF_LOW_E                               31
#define     ASRC2_PHASE_DIFF_L_PHASE_DIFF_LOW_SHIFT                           0
#define     ASRC2_PHASE_DIFF_L_PHASE_DIFF_LOW_MASK                            (0xFFFFFFFF<<0)

#define     ASRC2_PHASE_DIFF_H_PHASE_DIFF_SIGN                                31
#define     ASRC2_PHASE_DIFF_H_PHASE_DIFF_HIGH_E                              30
#define     ASRC2_PHASE_DIFF_H_PHASE_DIFF_HIGH_SHIFT                          0
#define     ASRC2_PHASE_DIFF_H_PHASE_DIFF_HIGH_MASK                           (0x7FFFFFFF<<0)

#define     ASRC2_PHASE_SHIFTBIT_PHASE_SHIFTS_E                               31
#define     ASRC2_PHASE_SHIFTBIT_PHASE_SHIFTS_SHIFT                           28
#define     ASRC2_PHASE_SHIFTBIT_PHASE_SHIFTS_MASK                            (0xF<<28)
#define     ASRC2_PHASE_SHIFTBIT_PHASE_CLK_FIXED                              27
#define     ASRC2_PHASE_SHIFTBIT_PHASE_CLK_RATIO_E                            26
#define     ASRC2_PHASE_SHIFTBIT_PHASE_CLK_RATIO_SHIFT                        24
#define     ASRC2_PHASE_SHIFTBIT_PHASE_CLK_RATIO_MASK                         (0x7<<24)
#define     ASRC2_PHASE_SHIFTBIT_PHASE_SAMPERS_E                              20
#define     ASRC2_PHASE_SHIFTBIT_PHASE_SAMPERS_SHIFT                          16
#define     ASRC2_PHASE_SHIFTBIT_PHASE_SAMPERS_MASK                           (0x1F<<16)
#define     ASRC2_PHASE_SHIFTBIT_PHASE_FRAMECNT_E                             12
#define     ASRC2_PHASE_SHIFTBIT_PHASE_FRAMECNT_SHIFT                         8
#define     ASRC2_PHASE_SHIFTBIT_PHASE_FRAMECNT_MASK                          (0x1F<<8)
#define     ASRC2_PHASE_SHIFTBIT_PHASE_PEROID_E                               4
#define     ASRC2_PHASE_SHIFTBIT_PHASE_PEROID_SHIFT                           0
#define     ASRC2_PHASE_SHIFTBIT_PHASE_PEROID_MASK                            (0x1F<<0)

#define     ASRC2_FRAMESIZE_OUT_SAMPES_E                                      31
#define     ASRC2_FRAMESIZE_OUT_SAMPES_SHIFT                                  16
#define     ASRC2_FRAMESIZE_OUT_SAMPES_MASK                                   (0xFFFF<<16)
#define     ASRC2_FRAMESIZE_IN_SAMPS_E                                        15
#define     ASRC2_FRAMESIZE_IN_SAMPS_SHIFT                                    0
#define     ASRC2_FRAMESIZE_IN_SAMPS_MASK                                     (0xFFFF<<0)

#define     ASRC2_SHIFT_TABLEBIT_E_SHIFTS_E                                   29
#define     ASRC2_SHIFT_TABLEBIT_E_SHIFTS_SHIFT                               24
#define     ASRC2_SHIFT_TABLEBIT_E_SHIFTS_MASK                                (0x3F<<24)
#define     ASRC2_SHIFT_TABLEBIT_D_SHIFTS_E                                   23
#define     ASRC2_SHIFT_TABLEBIT_D_SHIFTS_SHIFT                               18
#define     ASRC2_SHIFT_TABLEBIT_D_SHIFTS_MASK                                (0x3F<<18)
#define     ASRC2_SHIFT_TABLEBIT_C_SHIFTS_E                                   17
#define     ASRC2_SHIFT_TABLEBIT_C_SHIFTS_SHIFT                               12
#define     ASRC2_SHIFT_TABLEBIT_C_SHIFTS_MASK                                (0x3F<<12)
#define     ASRC2_SHIFT_TABLEBIT_B_SHIFTS_E                                   11
#define     ASRC2_SHIFT_TABLEBIT_B_SHIFTS_SHIFT                               6
#define     ASRC2_SHIFT_TABLEBIT_B_SHIFTS_MASK                                (0x3F<<6)
#define     ASRC2_SHIFT_TABLEBIT_A_SHIFTS_E                                   5
#define     ASRC2_SHIFT_TABLEBIT_A_SHIFTS_SHIFT                               0
#define     ASRC2_SHIFT_TABLEBIT_A_SHIFTS_MASK                                (0x3F<<0)

#define     ASRC2_TABLEADDR_ADDR_E                                            31
#define     ASRC2_TABLEADDR_ADDR_SHIFT                                        0
#define     ASRC2_TABLEADDR_ADDR_MASK                                         (0xFFFFFFFF<<0)

#define     ASRC2_FIFO_IN_DATA_DATA_E                                         31
#define     ASRC2_FIFO_IN_DATA_DATA_SHIFT                                     0
#define     ASRC2_FIFO_IN_DATA_DATA_MASK                                      (0xFFFFFFFF<<0)

#define     ASRC2_FIFO_OUT_DATA_DATA_E                                        31
#define     ASRC2_FIFO_OUT_DATA_DATA_SHIFT                                    0
#define     ASRC2_FIFO_OUT_DATA_DATA_MASK                                     (0xFFFFFFFF<<0)

#define     ASRC3_CTL_DMA_MODE_OUT                                            31
#define     ASRC3_CTL_DMA_MODE_IN                                             30
#define     ASRC3_CTL_SCLK_RATIO_E                                            29
#define     ASRC3_CTL_SCLK_RATIO_SHIFT                                        28
#define     ASRC3_CTL_SCLK_RATIO_MASK                                         (0x3<<28)
#define     ASRC3_CTL_PHASE_TRACK_EN                                          27
#define     ASRC3_CTL_PHASE_OVFS_EN_E                                         26
#define     ASRC3_CTL_PHASE_OVFS_EN_SHIFT                                     25
#define     ASRC3_CTL_PHASE_OVFS_EN_MASK                                      (0x3<<25)
#define     ASRC3_CTL_MASTER_ID_E                                             17
#define     ASRC3_CTL_MASTER_ID_SHIFT                                         16
#define     ASRC3_CTL_MASTER_ID_MASK                                          (0x3<<16)
#define     ASRC3_CTL_MASTER_EN                                               15
#define     ASRC3_CTL_PHASEOV_INT_EN                                          14
#define     ASRC3_CTL_PHASE_INT_EN                                            13
#define     ASRC3_CTL_FADE_INT_EN                                             11
#define     ASRC3_CTL_LAST_FRAME                                              10
#define     ASRC3_CTL_UPDATE_PHASE_EN                                         9
#define     ASRC3_CTL_FIFO_IN_EN                                              8
#define     ASRC3_CTL_FIFO_OUT_EN                                             7
#define     ASRC3_CTL_RESET_HISTORY                                           6
#define     ASRC3_CTL_FADE_EN                                                 5
#define     ASRC3_CTL_UPDATE_DECIMA_EN                                        4
#define     ASRC3_CTL_ASRC_TYPE                                               3
#define     ASRC3_CTL_ASRC_MODE_E                                             2
#define     ASRC3_CTL_ASRC_MODE_SHIFT                                         1
#define     ASRC3_CTL_ASRC_MODE_MASK                                          (0x3<<1)
#define     ASRC3_CTL_FRAME_START                                             0

#define     ASRC3_FIFO_SCLKOUT_RATIO_BIT_E                                    31
#define     ASRC3_FIFO_SCLKOUT_RATIO_BIT_SHIFT                                30
#define     ASRC3_FIFO_SCLKOUT_RATIO_BIT_MASK                                 (0x3<<30)
#define     ASRC3_FIFO_SCLKIN_RATIO_BIT_E                                     29
#define     ASRC3_FIFO_SCLKIN_RATIO_BIT_SHIFT                                 28
#define     ASRC3_FIFO_SCLKIN_RATIO_BIT_MASK                                  (0x3<<28)
#define     ASRC3_FIFO_FIFO_RD_LEVEL_E                                        25
#define     ASRC3_FIFO_FIFO_RD_LEVEL_SHIFT                                    20
#define     ASRC3_FIFO_FIFO_RD_LEVEL_MASK                                     (0x3F<<20)
#define     ASRC3_FIFO_AUDIO_OUT_CHAN_E                                       18
#define     ASRC3_FIFO_AUDIO_OUT_CHAN_SHIFT                                   17
#define     ASRC3_FIFO_AUDIO_OUT_CHAN_MASK                                    (0x3<<17)
#define     ASRC3_FIFO_AUDIO_OUT_FORMAT                                       16
#define     ASRC3_FIFO_FIFO_WT_LEVEL_E                                        9
#define     ASRC3_FIFO_FIFO_WT_LEVEL_SHIFT                                    4
#define     ASRC3_FIFO_FIFO_WT_LEVEL_MASK                                     (0x3F<<4)
#define     ASRC3_FIFO_CHS                                                    3
#define     ASRC3_FIFO_AUDIO_IN_CHAN_E                                        2
#define     ASRC3_FIFO_AUDIO_IN_CHAN_SHIFT                                    1
#define     ASRC3_FIFO_AUDIO_IN_CHAN_MASK                                     (0x3<<1)
#define     ASRC3_FIFO_AUDIO_IN_FORMAT                                        0

#define     ASRC3_FIFO_LEVEL_FIFO_OUT_LEVEL_E                                 22
#define     ASRC3_FIFO_LEVEL_FIFO_OUT_LEVEL_SHIFT                             17
#define     ASRC3_FIFO_LEVEL_FIFO_OUT_LEVEL_MASK                              (0x3F<<17)
#define     ASRC3_FIFO_LEVEL_FIFO_OUT_INTERRUPT_EN                            16
#define     ASRC3_FIFO_LEVEL_FIFO_IN_LEVEL_E                                  6
#define     ASRC3_FIFO_LEVEL_FIFO_IN_LEVEL_SHIFT                              1
#define     ASRC3_FIFO_LEVEL_FIFO_IN_LEVEL_MASK                               (0x3F<<1)
#define     ASRC3_FIFO_LEVEL_FIFO_IN_INTERRUPT_EN                             0

#define     ASRC3_INTERRUPT_PHASE_OV                                          5
#define     ASRC3_INTERRUPT_PHASE_PD                                          4
#define     ASRC3_INTERRUPT_FADE_END                                          3
#define     ASRC3_INTERRUPT_OUTFIFO_FULL                                      2
#define     ASRC3_INTERRUPT_INFIFO_EMPTY                                      1
#define     ASRC3_INTERRUPT_FRAME_END                                         0

#define     ASRC3_FILTER_TAB_SIZE_E                                           26
#define     ASRC3_FILTER_TAB_SIZE_SHIFT                                       16
#define     ASRC3_FILTER_TAB_SIZE_MASK                                        (0x7FF<<16)
#define     ASRC3_FILTER_TAB_STEP_BIT                                         8
#define     ASRC3_FILTER_FILTER_TAPS_E                                        7
#define     ASRC3_FILTER_FILTER_TAPS_SHIFT                                    0
#define     ASRC3_FILTER_FILTER_TAPS_MASK                                     (0xFF<<0)

#define     ASRC3_DECIMATIONRATIO_L_DECIMA_SIGN                               31
#define     ASRC3_DECIMATIONRATIO_L_DECIMA_LOW_E                              30
#define     ASRC3_DECIMATIONRATIO_L_DECIMA_LOW_SHIFT                          0
#define     ASRC3_DECIMATIONRATIO_L_DECIMA_LOW_MASK                           (0x7FFFFFFF<<0)

#define     ASRC3_DECIMATIONRATIO_H_DECIM_STEP_BIT_E                          28
#define     ASRC3_DECIMATIONRATIO_H_DECIM_STEP_BIT_SHIFT                      24
#define     ASRC3_DECIMATIONRATIO_H_DECIM_STEP_BIT_MASK                       (0x1F<<24)
#define     ASRC3_DECIMATIONRATIO_H_DECIMA_HIGH_E                             21
#define     ASRC3_DECIMATIONRATIO_H_DECIMA_HIGH_SHIFT                         0
#define     ASRC3_DECIMATIONRATIO_H_DECIMA_HIGH_MASK                          (0x3FFFFF<<0)

#define     ASRC3_FADE_FADE_SIZE_E                                            28
#define     ASRC3_FADE_FADE_SIZE_SHIFT                                        24
#define     ASRC3_FADE_FADE_SIZE_MASK                                         (0x1F<<24)
#define     ASRC3_FADE_FADE_GAIN_E                                            22
#define     ASRC3_FADE_FADE_GAIN_SHIFT                                        1
#define     ASRC3_FADE_FADE_GAIN_MASK                                         (0x3FFFFF<<1)
#define     ASRC3_FADE_FADE_MODE                                              0

#define     ASRC3_PHASE_DELTA_PHASE_DELTA_SIGN                                31
#define     ASRC3_PHASE_DELTA_PHASE_DELTA_E                                   30
#define     ASRC3_PHASE_DELTA_PHASE_DELTA_SHIFT                               0
#define     ASRC3_PHASE_DELTA_PHASE_DELTA_MASK                                (0x7FFFFFFF<<0)

#define     ASRC3_PHASE_ACC_L_PHASE_ACC_LOW_E                                 31
#define     ASRC3_PHASE_ACC_L_PHASE_ACC_LOW_SHIFT                             0
#define     ASRC3_PHASE_ACC_L_PHASE_ACC_LOW_MASK                              (0xFFFFFFFF<<0)

#define     ASRC3_PHASE_ACC_H_PHASE_ACC_SIGN                                  31
#define     ASRC3_PHASE_ACC_H_PHASE_ACC_HIGH_E                                30
#define     ASRC3_PHASE_ACC_H_PHASE_ACC_HIGH_SHIFT                            0
#define     ASRC3_PHASE_ACC_H_PHASE_ACC_HIGH_MASK                             (0x7FFFFFFF<<0)

#define     ASRC3_PHASE_DIFF_L_PHASE_DIFF_LOW_E                               31
#define     ASRC3_PHASE_DIFF_L_PHASE_DIFF_LOW_SHIFT                           0
#define     ASRC3_PHASE_DIFF_L_PHASE_DIFF_LOW_MASK                            (0xFFFFFFFF<<0)

#define     ASRC3_PHASE_DIFF_H_PHASE_DIFF_SIGN                                31
#define     ASRC3_PHASE_DIFF_H_PHASE_DIFF_HIGH_E                              30
#define     ASRC3_PHASE_DIFF_H_PHASE_DIFF_HIGH_SHIFT                          0
#define     ASRC3_PHASE_DIFF_H_PHASE_DIFF_HIGH_MASK                           (0x7FFFFFFF<<0)

#define     ASRC3_PHASE_SHIFTBIT_PHASE_SHIFTS_E                               31
#define     ASRC3_PHASE_SHIFTBIT_PHASE_SHIFTS_SHIFT                           28
#define     ASRC3_PHASE_SHIFTBIT_PHASE_SHIFTS_MASK                            (0xF<<28)
#define     ASRC3_PHASE_SHIFTBIT_PHASE_CLK_FIXED                              27
#define     ASRC3_PHASE_SHIFTBIT_PHASE_CLK_RATIO_E                            26
#define     ASRC3_PHASE_SHIFTBIT_PHASE_CLK_RATIO_SHIFT                        24
#define     ASRC3_PHASE_SHIFTBIT_PHASE_CLK_RATIO_MASK                         (0x7<<24)
#define     ASRC3_PHASE_SHIFTBIT_PHASE_SAMPERS_E                              20
#define     ASRC3_PHASE_SHIFTBIT_PHASE_SAMPERS_SHIFT                          16
#define     ASRC3_PHASE_SHIFTBIT_PHASE_SAMPERS_MASK                           (0x1F<<16)
#define     ASRC3_PHASE_SHIFTBIT_PHASE_FRAMECNT_E                             12
#define     ASRC3_PHASE_SHIFTBIT_PHASE_FRAMECNT_SHIFT                         8
#define     ASRC3_PHASE_SHIFTBIT_PHASE_FRAMECNT_MASK                          (0x1F<<8)
#define     ASRC3_PHASE_SHIFTBIT_PHASE_PEROID_E                               4
#define     ASRC3_PHASE_SHIFTBIT_PHASE_PEROID_SHIFT                           0
#define     ASRC3_PHASE_SHIFTBIT_PHASE_PEROID_MASK                            (0x1F<<0)

#define     ASRC3_FRAMESIZE_OUT_SAMPES_E                                      31
#define     ASRC3_FRAMESIZE_OUT_SAMPES_SHIFT                                  16
#define     ASRC3_FRAMESIZE_OUT_SAMPES_MASK                                   (0xFFFF<<16)
#define     ASRC3_FRAMESIZE_IN_SAMPS_E                                        15
#define     ASRC3_FRAMESIZE_IN_SAMPS_SHIFT                                    0
#define     ASRC3_FRAMESIZE_IN_SAMPS_MASK                                     (0xFFFF<<0)

#define     ASRC3_SHIFT_TABLEBIT_E_SHIFTS_E                                   29
#define     ASRC3_SHIFT_TABLEBIT_E_SHIFTS_SHIFT                               24
#define     ASRC3_SHIFT_TABLEBIT_E_SHIFTS_MASK                                (0x3F<<24)
#define     ASRC3_SHIFT_TABLEBIT_D_SHIFTS_E                                   23
#define     ASRC3_SHIFT_TABLEBIT_D_SHIFTS_SHIFT                               18
#define     ASRC3_SHIFT_TABLEBIT_D_SHIFTS_MASK                                (0x3F<<18)
#define     ASRC3_SHIFT_TABLEBIT_C_SHIFTS_E                                   17
#define     ASRC3_SHIFT_TABLEBIT_C_SHIFTS_SHIFT                               12
#define     ASRC3_SHIFT_TABLEBIT_C_SHIFTS_MASK                                (0x3F<<12)
#define     ASRC3_SHIFT_TABLEBIT_B_SHIFTS_E                                   11
#define     ASRC3_SHIFT_TABLEBIT_B_SHIFTS_SHIFT                               6
#define     ASRC3_SHIFT_TABLEBIT_B_SHIFTS_MASK                                (0x3F<<6)
#define     ASRC3_SHIFT_TABLEBIT_A_SHIFTS_E                                   5
#define     ASRC3_SHIFT_TABLEBIT_A_SHIFTS_SHIFT                               0
#define     ASRC3_SHIFT_TABLEBIT_A_SHIFTS_MASK                                (0x3F<<0)

#define     ASRC3_TABLEADDR_ADDR_E                                            31
#define     ASRC3_TABLEADDR_ADDR_SHIFT                                        0
#define     ASRC3_TABLEADDR_ADDR_MASK                                         (0xFFFFFFFF<<0)

#define     ASRC3_FIFO_IN_DATA_DATA_E                                         31
#define     ASRC3_FIFO_IN_DATA_DATA_SHIFT                                     0
#define     ASRC3_FIFO_IN_DATA_DATA_MASK                                      (0xFFFFFFFF<<0)

#define     ASRC3_FIFO_OUT_DATA_DATA_E                                        31
#define     ASRC3_FIFO_OUT_DATA_DATA_SHIFT                                    0
#define     ASRC3_FIFO_OUT_DATA_DATA_MASK                                     (0xFFFFFFFF<<0)
#else
//--------------ASRC-------------------------------------------//
//--------------Register Address---------------------------------------//
#define     ASRC_BASE                                                         0x50028000
#define     ASRC_SEL                                                          (ASRC_BASE+0x00000000)
#define     ASRC_AUDIO                                                        (ASRC_BASE+0x00000004)
#define     ASRC_DEBUG                                                        (ASRC_BASE+0x00000008)

#define     ASRC0_CTL                                                         (ASRC_BASE+0x00000100)
#define     ASRC0_FIFO                                                        (ASRC_BASE+0x00000104)
#define     ASRC0_FIFO_LEVEL                                                  (ASRC_BASE+0x00000108)
#define     ASRC0_INTERRUPT                                                   (ASRC_BASE+0x0000010c)
#define     ASRC0_FILTER                                                      (ASRC_BASE+0x00000110)
#define     ASRC0_DECIMATION_RATIO_L                                          (ASRC_BASE+0x00000114)
#define     ASRC0_DECIMATION_RATIO_H                                          (ASRC_BASE+0x00000118)
#define     ASRC0_MUTE                                                        (ASRC_BASE+0x0000011c)
#define     ASRC0_PHASE_DELTA                                                 (ASRC_BASE+0x00000120)
#define     ASRC0_PHASE_ACC_L                                                 (ASRC_BASE+0x00000124)
#define     ASRC0_PHASE_ACC_H                                                 (ASRC_BASE+0x00000128)
#define     ASRC0_PHASE_DIFF_L                                                (ASRC_BASE+0x0000012c)
#define     ASRC0_PHASE_DIFF_H                                                (ASRC_BASE+0x00000130)
#define     ASRC0_PHASE_SHIFTBITS                                             (ASRC_BASE+0x00000134)
#define     ASRC0_FRAMESIZE                                                   (ASRC_BASE+0x00000138)
#define     ASRC0_SHIFT_TABLEBITS                                             (ASRC_BASE+0x0000013c)
#define     ASRC0_TABLEADDR                                                   (ASRC_BASE+0x00000140)
#define     ASRC0_FIFO_IN_DATA                                                (ASRC_BASE+0x00000144)
#define     ASRC0_FIFO_OUT_DATA                                               (ASRC_BASE+0x00000148)

#define     ASRC1_CTL                                                         (ASRC_BASE+0x00000200)
#define     ASRC1_FIFO                                                        (ASRC_BASE+0x00000204)
#define     ASRC1_FIFO_LEVEL                                                  (ASRC_BASE+0x00000208)
#define     ASRC1_INTERRUPT                                                   (ASRC_BASE+0x0000020c)
#define     ASRC1_FILTER                                                      (ASRC_BASE+0x00000210)
#define     ASRC1_DECIMATION_RATIO_L                                          (ASRC_BASE+0x00000214)
#define     ASRC1_DECIMATION_RATIO_H                                          (ASRC_BASE+0x00000218)
#define     ASRC1_MUTE                                                        (ASRC_BASE+0x0000021c)
#define     ASRC1_PHASE_DELTA                                                 (ASRC_BASE+0x00000220)
#define     ASRC1_PHASE_ACC_L                                                 (ASRC_BASE+0x00000224)
#define     ASRC1_PHASE_ACC_H                                                 (ASRC_BASE+0x00000228)
#define     ASRC1_PHASE_DIFF_L                                                (ASRC_BASE+0x0000022c)
#define     ASRC1_PHASE_DIFF_H                                                (ASRC_BASE+0x00000230)
#define     ASRC1_PHASE_SHIFTBITS                                             (ASRC_BASE+0x00000234)
#define     ASRC1_FRAMESIZE                                                   (ASRC_BASE+0x00000238)
#define     ASRC1_SHIFT_TABLEBITS                                             (ASRC_BASE+0x0000023c)
#define     ASRC1_TABLEADDR                                                   (ASRC_BASE+0x00000240)
#define     ASRC1_FIFO_IN_DATA                                                (ASRC_BASE+0x00000244)
#define     ASRC1_FIFO_OUT_DATA                                               (ASRC_BASE+0x00000248)

#define     ASRC2_CTL                                                         (ASRC_BASE+0x00000300)
#define     ASRC2_FIFO                                                        (ASRC_BASE+0x00000304)
#define     ASRC2_FIFO_LEVEL                                                  (ASRC_BASE+0x00000308)
#define     ASRC2_INTERRUPT                                                   (ASRC_BASE+0x0000030c)
#define     ASRC2_FILTER                                                      (ASRC_BASE+0x00000310)
#define     ASRC2_DECIMATION_RATIO_L                                          (ASRC_BASE+0x00000314)
#define     ASRC2_DECIMATION_RATIO_H                                          (ASRC_BASE+0x00000318)
#define     ASRC2_MUTE                                                        (ASRC_BASE+0x0000031c)
#define     ASRC2_PHASE_DELTA                                                 (ASRC_BASE+0x00000320)
#define     ASRC2_PHASE_ACC_L                                                 (ASRC_BASE+0x00000324)
#define     ASRC2_PHASE_ACC_H                                                 (ASRC_BASE+0x00000328)
#define     ASRC2_PHASE_DIFF_L                                                (ASRC_BASE+0x0000032c)
#define     ASRC2_PHASE_DIFF_H                                                (ASRC_BASE+0x00000330)
#define     ASRC2_PHASE_SHIFTBITS                                             (ASRC_BASE+0x00000334)
#define     ASRC2_FRAMESIZE                                                   (ASRC_BASE+0x00000338)
#define     ASRC2_SHIFT_TABLEBITS                                             (ASRC_BASE+0x0000033c)
#define     ASRC2_TABLEADDR                                                   (ASRC_BASE+0x00000340)
#define     ASRC2_FIFO_IN_DATA                                                (ASRC_BASE+0x00000344)
#define     ASRC2_FIFO_OUT_DATA                                               (ASRC_BASE+0x00000348)

#define     ASRC3_CTL                                                         (ASRC_BASE+0x00000400)
#define     ASRC3_FIFO                                                        (ASRC_BASE+0x00000404)
#define     ASRC3_FIFO_LEVEL                                                  (ASRC_BASE+0x00000408)
#define     ASRC3_INTERRUPT                                                   (ASRC_BASE+0x0000040c)
#define     ASRC3_FILTER                                                      (ASRC_BASE+0x00000410)
#define     ASRC3_DECIMATION_RATIO_L                                          (ASRC_BASE+0x00000414)
#define     ASRC3_DECIMATION_RATIO_H                                          (ASRC_BASE+0x00000418)
#define     ASRC3_MUTE                                                        (ASRC_BASE+0x0000041c)
#define     ASRC3_PHASE_DELTA                                                 (ASRC_BASE+0x00000420)
#define     ASRC3_PHASE_ACC_L                                                 (ASRC_BASE+0x00000424)
#define     ASRC3_PHASE_ACC_H                                                 (ASRC_BASE+0x00000428)
#define     ASRC3_PHASE_DIFF_L                                                (ASRC_BASE+0x0000042c)
#define     ASRC3_PHASE_DIFF_H                                                (ASRC_BASE+0x00000430)
#define     ASRC3_PHASE_SHIFTBITS                                             (ASRC_BASE+0x00000434)
#define     ASRC3_FRAMESIZE                                                   (ASRC_BASE+0x00000438)
#define     ASRC3_SHIFT_TABLEBITS                                             (ASRC_BASE+0x0000043c)
#define     ASRC3_TABLEADDR                                                   (ASRC_BASE+0x00000440)
#define     ASRC3_FIFO_IN_DATA                                                (ASRC_BASE+0x00000444)
#define     ASRC3_FIFO_OUT_DATA                                               (ASRC_BASE+0x00000448)

//--------------Bits Location------------------------------------------//
#define     ASRC_SEL_OUTCONNECT3_E                                            30
#define     ASRC_SEL_OUTCONNECT3_SHIFT                                        28
#define     ASRC_SEL_OUTCONNECT3_MASK                                         (0x7<<28)
#define     ASRC_SEL_INCONNECT3_E                                             27
#define     ASRC_SEL_INCONNECT3_SHIFT                                         25
#define     ASRC_SEL_INCONNECT3_MASK                                          (0x7<<25)
#define     ASRC_SEL_ASRC3_SEL                                                24
#define     ASRC_SEL_OUTCONNECT2_E                                            22
#define     ASRC_SEL_OUTCONNECT2_SHIFT                                        20
#define     ASRC_SEL_OUTCONNECT2_MASK                                         (0x7<<20)
#define     ASRC_SEL_INCONNECT2_E                                             19
#define     ASRC_SEL_INCONNECT2_SHIFT                                         17
#define     ASRC_SEL_INCONNECT2_MASK                                          (0x7<<17)
#define     ASRC_SEL_ASRC2_SEL                                                16
#define     ASRC_SEL_OUTCONNECT1_E                                            14
#define     ASRC_SEL_OUTCONNECT1_SHIFT                                        12
#define     ASRC_SEL_OUTCONNECT1_MASK                                         (0x7<<12)
#define     ASRC_SEL_INCONNECT1_E                                             11
#define     ASRC_SEL_INCONNECT1_SHIFT                                         9
#define     ASRC_SEL_INCONNECT1_MASK                                          (0x7<<9)
#define     ASRC_SEL_ASRC1_SEL                                                8
#define     ASRC_SEL_OUTCONNECT0_E                                            6
#define     ASRC_SEL_OUTCONNECT0_SHIFT                                        4
#define     ASRC_SEL_OUTCONNECT0_MASK                                         (0x7<<4)
#define     ASRC_SEL_INCONNECT0_E                                             3
#define     ASRC_SEL_INCONNECT0_SHIFT                                         1
#define     ASRC_SEL_INCONNECT0_MASK                                          (0x7<<1)
#define     ASRC_SEL_ASRC0_SEL                                                0

#define     ASRC_AUDIO_OUT_CONNECT3_AUDIOSEL_E                                 30
#define     ASRC_AUDIO_OUT_CONNECT3_AUDIOSEL_SHIFT                             28
#define     ASRC_AUDIO_OUT_CONNECT3_AUDIOSEL_MASK                              (0x7<<28)
#define     ASRC_AUDIO_IN_CONNECT3_AUDIOSEL_E                                  26
#define     ASRC_AUDIO_IN_CONNECT3_AUDIOSEL_SHIFT                              24
#define     ASRC_AUDIO_IN_CONNECT3_AUDIOSEL_MASK                               (0x7<<24)
#define     ASRC_AUDIO_OUT_CONNECT2_AUDIOSEL_E                                 22
#define     ASRC_AUDIO_OUT_CONNECT2_AUDIOSEL_SHIFT                             20
#define     ASRC_AUDIO_OUT_CONNECT2_AUDIOSEL_MASK                              (0x7<<20)
#define     ASRC_AUDIO_IN_CONNECT2_AUDIOSEL_E                                  18
#define     ASRC_AUDIO_IN_CONNECT2_AUDIOSEL_SHIFT                              16
#define     ASRC_AUDIO_IN_CONNECT2_AUDIOSEL_MASK                               (0x7<<16)
#define     ASRC_AUDIO_OUT_CONNECT1_AUDIOSEL_E                                 14
#define     ASRC_AUDIO_OUT_CONNECT1_AUDIOSEL_SHIFT                             12
#define     ASRC_AUDIO_OUT_CONNECT1_AUDIOSEL_MASK                              (0x7<<12)
#define     ASRC_AUDIO_IN_CONNECT0_AUDIOSEL_E                                  2
#define     ASRC_AUDIO_IN_CONNECT0_AUDIOSEL_SHIFT                              0
#define     ASRC_AUDIO_IN_CONNECT0_AUDIOSEL_MASK                               (0x7<<0)
#define     ASRC_AUDIO_OUT_CONNECT0_AUDIOSEL_E                                 6
#define     ASRC_AUDIO_OUT_CONNECT0_AUDIOSEL_SHIFT                             4
#define     ASRC_AUDIO_OUT_CONNECT0_AUDIOSEL_MASK                              (0x7<<4)

#define     ASRC0_FIFO_SCLKOUT_RATIO_BIT_E                                    31
#define     ASRC0_FIFO_SCLKOUT_RATIO_BIT_SHIFT                                30
#define     ASRC0_FIFO_SCLKOUT_RATIO_BIT_MASK                                 (0x3<<30)
#define     ASRC0_FIFO_SCLKIN_RATIO_BIT_E                                     29
#define     ASRC0_FIFO_SCLKIN_RATIO_BIT_SHIFT                                 28
#define     ASRC0_FIFO_SCLKIN_RATIO_BIT_MASK                                  (0x3<<28)
#define     ASRC0_FIFO_FIFO_WT_LEVEL_E                                        25
#define     ASRC0_FIFO_FIFO_WT_LEVEL_SHIFT                                    20
#define     ASRC0_FIFO_FIFO_WT_LEVEL_MASK                                     (0x3F<<20)
#define     ASRC0_FIFO_AUDIOOUT_CHANS_E                                       18
#define     ASRC0_FIFO_AUDIOOUT_CHANS_SHIFT                                   17
#define     ASRC0_FIFO_AUDIOOUT_CHANS_MASK                                    (0x3<<17)
#define     ASRC0_FIFO_AUDIOOUTFORMAT                                         16
#define     ASRC0_FIFO_FIFO_RD_LEVEL_E                                        9
#define     ASRC0_FIFO_FIFO_RD_LEVEL_SHIFT                                    4
#define     ASRC0_FIFO_FIFO_RD_LEVEL_MASK                                     (0x3F<<4)
#define     ASRC0_FIFO_CHS                                                    3
#define     ASRC0_FIFO_AUDIOIN_CHANS_E                                        2
#define     ASRC0_FIFO_AUDIOIN_CHANS_SHIFT                                    1
#define     ASRC0_FIFO_AUDIOIN_CHANS_MASK                                     (0x3<<1)
#define     ASRC0_FIFO_AUDIOINFORMAT                                          0

#define     ASRC0_CTL_DMA_MODE_OUT                                            31
#define     ASRC0_CTL_DMA_MODE_IN                                             30
#define     ASRC0_CTL_SCLK_RATIO_E                                            29
#define     ASRC0_CTL_SCLK_RATIO_SHIFT                                        28
#define     ASRC0_CTL_SCLK_RATIO_MASK                                         (0x3<<28)
#define     ASRC0_CTL_LAST_FRAME                                              10
#define     ASRC0_CTL_UPDATE_PHASE_EN                                         9
#define     ASRC0_CTL_RESET_FIFO_IN                                           8
#define     ASRC0_CTL_RESET_FIFO_OUT                                          7
#define     ASRC0_CTL_RESET_HISTORY                                           6
#define     ASRC0_CTL_MUTE_EN                                                 5
#define     ASRC0_CTL_UPDATE_DECIMA_EN                                        4
#define     ASRC0_CTL_ASRC_TYPE                                               3
#define     ASRC0_CTL_ASRC_MODE_E                                             2
#define     ASRC0_CTL_ASRC_MODE_SHIFT                                         1
#define     ASRC0_CTL_ASRC_MODE_MASK                                          (0x3<<1)
#define     ASRC0_CTL_FRAME_START                                             0

#define     ASRC0_INTERRUPT_OUTFIFO_EMPTY_PADING                              2
#define     ASRC0_INTERRUPT_INFIFO_FULL_PADING                                1
#define     ASRC0_INTERRUPT_ONE_FRAME_END                                     0

#define     ASRC0_FILTER_COMPRESSEDTABSIZE_E                                  26
#define     ASRC0_FILTER_COMPRESSEDTABSIZE_SHIFT                              16
#define     ASRC0_FILTER_COMPRESSEDTABSIZE_MASK                               (0x7FF<<16)
#define     ASRC0_FILTER_COARSETABSTEPBIT                                     8
#define     ASRC0_FILTER_FILTER_TAPS_E                                        7
#define     ASRC0_FILTER_FILTER_TAPS_SHIFT                                    0
#define     ASRC0_FILTER_FILTER_TAPS_MASK                                     (0xFF<<0)

#define     ASRC0_DECIMATION_RATIO_L_DECI_RATIO_SIGN                          31
#define     ASRC0_DECIMATION_RATIO_L_LOWBIT_E                                 30
#define     ASRC0_DECIMATION_RATIO_L_LOWBIT_SHIFT                             0
#define     ASRC0_DECIMATION_RATIO_L_LOWBIT_MASK                              (0x7FFFFFFF<<0)

#define     ASRC0_DECIMATION_RATIO_H_RATIO_SIZE_BIT_E                         28
#define     ASRC0_DECIMATION_RATIO_H_RATIO_SIZE_BIT_SHIFT                     24
#define     ASRC0_DECIMATION_RATIO_H_RATIO_SIZE_BIT_MASK                      (0x1F<<24)
#define     ASRC0_DECIMATION_RATIO_H_HIGHBIT_E                                21
#define     ASRC0_DECIMATION_RATIO_H_HIGHBIT_SHIFT                            0
#define     ASRC0_DECIMATION_RATIO_H_HIGHBIT_MASK                             (0x3FFFFF<<0)

#define     ASRC0_MUTE_MUTE_SIZE_E                                            28
#define     ASRC0_MUTE_MUTE_SIZE_SHIFT                                        24
#define     ASRC0_MUTE_MUTE_SIZE_MASK                                         (0x1F<<24)
#define     ASRC0_MUTE_MUTE_GAIN_E                                            22
#define     ASRC0_MUTE_MUTE_GAIN_SHIFT                                        1
#define     ASRC0_MUTE_MUTE_GAIN_MASK                                         (0x3FFFFF<<1)
#define     ASRC0_MUTE_MUTE_MODE                                              0

#define     ASRC0_PHASE_DELTA_PHASE_DELT_SIGN                                 31
#define     ASRC0_PHASE_DELTA_PHASE_DELT_E                                    30
#define     ASRC0_PHASE_DELTA_PHASE_DELT_SHIFT                                0
#define     ASRC0_PHASE_DELTA_PHASE_DELT_MASK                                 (0x7FFFFFFF<<0)

#define     ASRC0_PHASE_ACC_L_PHASE_ACC_SIGN                                  31
#define     ASRC0_PHASE_ACC_L_PHASE_ACC_E                                     30
#define     ASRC0_PHASE_ACC_L_PHASE_ACC_SHIFT                                 0
#define     ASRC0_PHASE_ACC_L_PHASE_ACC_MASK                                  (0x7FFFFFFF<<0)

#define     ASRC0_PHASE_ACC_H_PHASE_ACC_E                                     31
#define     ASRC0_PHASE_ACC_H_PHASE_ACC_SHIFT                                 0
#define     ASRC0_PHASE_ACC_H_PHASE_ACC_MASK                                  (0xFFFFFFFF<<0)

#define     ASRC0_PHASE_DIFF_L_PHASE_DIFF_SIGN                                31
#define     ASRC0_PHASE_DIFF_L_PHASE_DIFF_E                                   30
#define     ASRC0_PHASE_DIFF_L_PHASE_DIFF_SHIFT                               0
#define     ASRC0_PHASE_DIFF_L_PHASE_DIFF_MASK                                (0x7FFFFFFF<<0)

#define     ASRC0_PHASE_DIFF_H_PHASE_DIFF_E                                   31
#define     ASRC0_PHASE_DIFF_H_PHASE_DIFF_SHIFT                               0
#define     ASRC0_PHASE_DIFF_H_PHASE_DIFF_MASK                                (0xFFFFFFFF<<0)

#define     ASRC0_PHASE_SHIFTBITS_SAMPPERFRM_SHIFT2_E                         20
#define     ASRC0_PHASE_SHIFTBITS_SAMPPERFRM_SHIFT2_SHIFT                     16
#define     ASRC0_PHASE_SHIFTBITS_SAMPPERFRM_SHIFT2_MASK                      (0x1F<<16)
#define     ASRC0_PHASE_SHIFTBITS_FRAMECNTS_SHIFT1_E                          12
#define     ASRC0_PHASE_SHIFTBITS_FRAMECNTS_SHIFT1_SHIFT                      8
#define     ASRC0_PHASE_SHIFTBITS_FRAMECNTS_SHIFT1_MASK                       (0x1F<<8)
#define     ASRC0_PHASE_SHIFTBITS_FRAMESIZE_BIT_E                             4
#define     ASRC0_PHASE_SHIFTBITS_FRAMESIZE_BIT_SHIFT                         0
#define     ASRC0_PHASE_SHIFTBITS_FRAMESIZE_BIT_MASK                          (0x1F<<0)

#define     ASRC0_FRAMESIZE_OUTSAMPS_E                                        31
#define     ASRC0_FRAMESIZE_OUTSAMPS_SHIFT                                    16
#define     ASRC0_FRAMESIZE_OUTSAMPS_MASK                                     (0xFFFF<<16)
#define     ASRC0_FRAMESIZE_INSAMPS_E                                         15
#define     ASRC0_FRAMESIZE_INSAMPS_SHIFT                                     0
#define     ASRC0_FRAMESIZE_INSAMPS_MASK                                      (0xFFFF<<0)

#define     ASRC0_SHIFT_TABLEBITS_E_SHIFTS_E                                  29
#define     ASRC0_SHIFT_TABLEBITS_E_SHIFTS_SHIFT                              24
#define     ASRC0_SHIFT_TABLEBITS_E_SHIFTS_MASK                               (0x3F<<24)
#define     ASRC0_SHIFT_TABLEBITS_D_SHIFTS_E                                  23
#define     ASRC0_SHIFT_TABLEBITS_D_SHIFTS_SHIFT                              18
#define     ASRC0_SHIFT_TABLEBITS_D_SHIFTS_MASK                               (0x3F<<18)
#define     ASRC0_SHIFT_TABLEBITS_C_SHIFTS_E                                  17
#define     ASRC0_SHIFT_TABLEBITS_C_SHIFTS_SHIFT                              12
#define     ASRC0_SHIFT_TABLEBITS_C_SHIFTS_MASK                               (0x3F<<12)
#define     ASRC0_SHIFT_TABLEBITS_B_SHIFTS_E                                  11
#define     ASRC0_SHIFT_TABLEBITS_B_SHIFTS_SHIFT                              6
#define     ASRC0_SHIFT_TABLEBITS_B_SHIFTS_MASK                               (0x3F<<6)
#define     ASRC0_SHIFT_TABLEBITS_A_SHIFTS_E                                  5
#define     ASRC0_SHIFT_TABLEBITS_A_SHIFTS_SHIFT                              0
#define     ASRC0_SHIFT_TABLEBITS_A_SHIFTS_MASK                               (0x3F<<0)

#define     ASRC0_TABLEADDR_ADDR_E                                            31
#define     ASRC0_TABLEADDR_ADDR_SHIFT                                        0
#define     ASRC0_TABLEADDR_ADDR_MASK                                         (0xFFFFFFFF<<0)

#define     ASRC0_FIFO_IN_DATA_DATA_E                                         31
#define     ASRC0_FIFO_IN_DATA_DATA_SHIFT                                     0
#define     ASRC0_FIFO_IN_DATA_DATA_MASK                                      (0xFFFFFFFF<<0)

#define     ASRC0_FIFO_OUT_DATA_DATA_E                                        31
#define     ASRC0_FIFO_OUT_DATA_DATA_SHIFT                                    0
#define     ASRC0_FIFO_OUT_DATA_DATA_MASK                                     (0xFFFFFFFF<<0)

#define     ASRC1_FIFO_SCLKOUT_RATIO_BIT_E                                    31
#define     ASRC1_FIFO_SCLKOUT_RATIO_BIT_SHIFT                                30
#define     ASRC1_FIFO_SCLKOUT_RATIO_BIT_MASK                                 (0x3<<30)
#define     ASRC1_FIFO_SCLKIN_RATIO_BIT_E                                     29
#define     ASRC1_FIFO_SCLKIN_RATIO_BIT_SHIFT                                 28
#define     ASRC1_FIFO_SCLKIN_RATIO_BIT_MASK                                  (0x3<<28)
#define     ASRC1_FIFO_FIFO_WT_LEVEL_E                                        25
#define     ASRC1_FIFO_FIFO_WT_LEVEL_SHIFT                                    20
#define     ASRC1_FIFO_FIFO_WT_LEVEL_MASK                                     (0x3F<<20)
#define     ASRC1_FIFO_AUDIOOUT_CHANS_E                                       18
#define     ASRC1_FIFO_AUDIOOUT_CHANS_SHIFT                                   17
#define     ASRC1_FIFO_AUDIOOUT_CHANS_MASK                                    (0x3<<17)
#define     ASRC1_FIFO_AUDIOOUTFORMAT                                         16
#define     ASRC1_FIFO_FIFO_RD_LEVEL_E                                        9
#define     ASRC1_FIFO_FIFO_RD_LEVEL_SHIFT                                    4
#define     ASRC1_FIFO_FIFO_RD_LEVEL_MASK                                     (0x3F<<4)
#define     ASRC1_FIFO_CHS                                                    3
#define     ASRC1_FIFO_AUDIOIN_CHANS_E                                        2
#define     ASRC1_FIFO_AUDIOIN_CHANS_SHIFT                                    1
#define     ASRC1_FIFO_AUDIOIN_CHANS_MASK                                     (0x3<<1)
#define     ASRC1_FIFO_AUDIOINFORMAT                                          0

#define     ASRC1_CTL_DMA_MODE_OUT                                            31
#define     ASRC1_CTL_DMA_MODE_IN                                             30
#define     ASRC1_CTL_SCLK_RATIO_E                                            29
#define     ASRC1_CTL_SCLK_RATIO_SHIFT                                        28
#define     ASRC1_CTL_SCLK_RATIO_MASK                                         (0x3<<28)
#define     ASRC1_CTL_LAST_FRAME                                              10
#define     ASRC1_CTL_UPDATE_PHASE_EN                                         9
#define     ASRC1_CTL_RESET_FIFO_IN                                           8
#define     ASRC1_CTL_RESET_FIFO_OUT                                          7
#define     ASRC1_CTL_RESET_HISTORY                                           6
#define     ASRC1_CTL_MUTE_EN                                                 5
#define     ASRC1_CTL_UPDATE_DECIMA_EN                                        4
#define     ASRC1_CTL_ASRC_TYPE                                               3
#define     ASRC1_CTL_ASRC_MODE_E                                             2
#define     ASRC1_CTL_ASRC_MODE_SHIFT                                         1
#define     ASRC1_CTL_ASRC_MODE_MASK                                          (0x3<<1)
#define     ASRC1_CTL_FRAME_START                                             0

#define     ASRC1_INTERRUPT_OUTFIFO_EMPTY_PADING                              2
#define     ASRC1_INTERRUPT_INFIFO_FULL_PADING                                1
#define     ASRC1_INTERRUPT_ONE_FRAME_END                                     0

#define     ASRC1_FILTER_COMPRESSEDTABSIZE_E                                  26
#define     ASRC1_FILTER_COMPRESSEDTABSIZE_SHIFT                              16
#define     ASRC1_FILTER_COMPRESSEDTABSIZE_MASK                               (0x7FF<<16)
#define     ASRC1_FILTER_COARSETABSTEPBIT                                     8
#define     ASRC1_FILTER_FILTER_TAPS_E                                        7
#define     ASRC1_FILTER_FILTER_TAPS_SHIFT                                    0
#define     ASRC1_FILTER_FILTER_TAPS_MASK                                     (0xFF<<0)

#define     ASRC1_DECIMATION_RATIO_L_DECI_RATIO_SIGN                          31
#define     ASRC1_DECIMATION_RATIO_L_LOWBIT_E                                 30
#define     ASRC1_DECIMATION_RATIO_L_LOWBIT_SHIFT                             0
#define     ASRC1_DECIMATION_RATIO_L_LOWBIT_MASK                              (0x7FFFFFFF<<0)

#define     ASRC1_DECIMATION_RATIO_H_RATIO_SIZE_BIT_E                         28
#define     ASRC1_DECIMATION_RATIO_H_RATIO_SIZE_BIT_SHIFT                     24
#define     ASRC1_DECIMATION_RATIO_H_RATIO_SIZE_BIT_MASK                      (0x1F<<24)
#define     ASRC1_DECIMATION_RATIO_H_HIGHBIT_E                                21
#define     ASRC1_DECIMATION_RATIO_H_HIGHBIT_SHIFT                            0
#define     ASRC1_DECIMATION_RATIO_H_HIGHBIT_MASK                             (0x3FFFFF<<0)

#define     ASRC1_MUTE_MUTE_SIZE_E                                            28
#define     ASRC1_MUTE_MUTE_SIZE_SHIFT                                        24
#define     ASRC1_MUTE_MUTE_SIZE_MASK                                         (0x1F<<24)
#define     ASRC1_MUTE_MUTE_GAIN_E                                            22
#define     ASRC1_MUTE_MUTE_GAIN_SHIFT                                        1
#define     ASRC1_MUTE_MUTE_GAIN_MASK                                         (0x3FFFFF<<1)
#define     ASRC1_MUTE_MUTE_MODE                                              0

#define     ASRC1_PHASE_DELTA_PHASE_DELT_SIGN                                 31
#define     ASRC1_PHASE_DELTA_PHASE_DELT_E                                    30
#define     ASRC1_PHASE_DELTA_PHASE_DELT_SHIFT                                0
#define     ASRC1_PHASE_DELTA_PHASE_DELT_MASK                                 (0x7FFFFFFF<<0)

#define     ASRC1_PHASE_ACC_L_PHASE_ACC_SIGN                                  31
#define     ASRC1_PHASE_ACC_L_PHASE_ACC_E                                     30
#define     ASRC1_PHASE_ACC_L_PHASE_ACC_SHIFT                                 0
#define     ASRC1_PHASE_ACC_L_PHASE_ACC_MASK                                  (0x7FFFFFFF<<0)

#define     ASRC1_PHASE_ACC_H_PHASE_ACC_E                                     31
#define     ASRC1_PHASE_ACC_H_PHASE_ACC_SHIFT                                 0
#define     ASRC1_PHASE_ACC_H_PHASE_ACC_MASK                                  (0xFFFFFFFF<<0)

#define     ASRC1_PHASE_DIFF_L_PHASE_DIFF_SIGN                                31
#define     ASRC1_PHASE_DIFF_L_PHASE_DIFF_E                                   30
#define     ASRC1_PHASE_DIFF_L_PHASE_DIFF_SHIFT                               0
#define     ASRC1_PHASE_DIFF_L_PHASE_DIFF_MASK                                (0x7FFFFFFF<<0)

#define     ASRC1_PHASE_DIFF_H_PHASE_DIFF_E                                   31
#define     ASRC1_PHASE_DIFF_H_PHASE_DIFF_SHIFT                               0
#define     ASRC1_PHASE_DIFF_H_PHASE_DIFF_MASK                                (0xFFFFFFFF<<0)

#define     ASRC1_PHASE_SHIFTBITS_SAMPPERFRM_SHIFT2_E                         20
#define     ASRC1_PHASE_SHIFTBITS_SAMPPERFRM_SHIFT2_SHIFT                     16
#define     ASRC1_PHASE_SHIFTBITS_SAMPPERFRM_SHIFT2_MASK                      (0x1F<<16)
#define     ASRC1_PHASE_SHIFTBITS_FRAMECNTS_SHIFT1_E                          12
#define     ASRC1_PHASE_SHIFTBITS_FRAMECNTS_SHIFT1_SHIFT                      8
#define     ASRC1_PHASE_SHIFTBITS_FRAMECNTS_SHIFT1_MASK                       (0x1F<<8)
#define     ASRC1_PHASE_SHIFTBITS_FRAMESIZE_BIT_E                             4
#define     ASRC1_PHASE_SHIFTBITS_FRAMESIZE_BIT_SHIFT                         0
#define     ASRC1_PHASE_SHIFTBITS_FRAMESIZE_BIT_MASK                          (0x1F<<0)

#define     ASRC1_FRAMESIZE_OUTSAMPS_E                                        31
#define     ASRC1_FRAMESIZE_OUTSAMPS_SHIFT                                    16
#define     ASRC1_FRAMESIZE_OUTSAMPS_MASK                                     (0xFFFF<<16)
#define     ASRC1_FRAMESIZE_INSAMPS_E                                         15
#define     ASRC1_FRAMESIZE_INSAMPS_SHIFT                                     0
#define     ASRC1_FRAMESIZE_INSAMPS_MASK                                      (0xFFFF<<0)

#define     ASRC1_SHIFT_TABLEBITS_E_SHIFTS_E                                  29
#define     ASRC1_SHIFT_TABLEBITS_E_SHIFTS_SHIFT                              24
#define     ASRC1_SHIFT_TABLEBITS_E_SHIFTS_MASK                               (0x3F<<24)
#define     ASRC1_SHIFT_TABLEBITS_D_SHIFTS_E                                  23
#define     ASRC1_SHIFT_TABLEBITS_D_SHIFTS_SHIFT                              18
#define     ASRC1_SHIFT_TABLEBITS_D_SHIFTS_MASK                               (0x3F<<18)
#define     ASRC1_SHIFT_TABLEBITS_C_SHIFTS_E                                  17
#define     ASRC1_SHIFT_TABLEBITS_C_SHIFTS_SHIFT                              12
#define     ASRC1_SHIFT_TABLEBITS_C_SHIFTS_MASK                               (0x3F<<12)
#define     ASRC1_SHIFT_TABLEBITS_B_SHIFTS_E                                  11
#define     ASRC1_SHIFT_TABLEBITS_B_SHIFTS_SHIFT                              6
#define     ASRC1_SHIFT_TABLEBITS_B_SHIFTS_MASK                               (0x3F<<6)
#define     ASRC1_SHIFT_TABLEBITS_A_SHIFTS_E                                  5
#define     ASRC1_SHIFT_TABLEBITS_A_SHIFTS_SHIFT                              0
#define     ASRC1_SHIFT_TABLEBITS_A_SHIFTS_MASK                               (0x3F<<0)

#define     ASRC1_TABLEADDR_ADDR_E                                            31
#define     ASRC1_TABLEADDR_ADDR_SHIFT                                        0
#define     ASRC1_TABLEADDR_ADDR_MASK                                         (0xFFFFFFFF<<0)

#define     ASRC1_FIFO_IN_DATA_DATA_E                                         31
#define     ASRC1_FIFO_IN_DATA_DATA_SHIFT                                     0
#define     ASRC1_FIFO_IN_DATA_DATA_MASK                                      (0xFFFFFFFF<<0)

#define     ASRC1_FIFO_OUT_DATA_DATA_E                                        31
#define     ASRC1_FIFO_OUT_DATA_DATA_SHIFT                                    0
#define     ASRC1_FIFO_OUT_DATA_DATA_MASK                                     (0xFFFFFFFF<<0)

#define     ASRC2_FIFO_SCLKOUT_RATIO_BIT_E                                    31
#define     ASRC2_FIFO_SCLKOUT_RATIO_BIT_SHIFT                                30
#define     ASRC2_FIFO_SCLKOUT_RATIO_BIT_MASK                                 (0x3<<30)
#define     ASRC2_FIFO_SCLKIN_RATIO_BIT_E                                     29
#define     ASRC2_FIFO_SCLKIN_RATIO_BIT_SHIFT                                 28
#define     ASRC2_FIFO_SCLKIN_RATIO_BIT_MASK                                  (0x3<<28)
#define     ASRC2_FIFO_FIFO_WT_LEVEL_E                                        25
#define     ASRC2_FIFO_FIFO_WT_LEVEL_SHIFT                                    20
#define     ASRC2_FIFO_FIFO_WT_LEVEL_MASK                                     (0x3F<<20)
#define     ASRC2_FIFO_AUDIOOUT_CHANS_E                                       18
#define     ASRC2_FIFO_AUDIOOUT_CHANS_SHIFT                                   17
#define     ASRC2_FIFO_AUDIOOUT_CHANS_MASK                                    (0x3<<17)
#define     ASRC2_FIFO_AUDIOOUTFORMAT                                         16
#define     ASRC2_FIFO_FIFO_RD_LEVEL_E                                        9
#define     ASRC2_FIFO_FIFO_RD_LEVEL_SHIFT                                    4
#define     ASRC2_FIFO_FIFO_RD_LEVEL_MASK                                     (0x3F<<4)
#define     ASRC2_FIFO_CHS                                                    3
#define     ASRC2_FIFO_AUDIOIN_CHANS_E                                        2
#define     ASRC2_FIFO_AUDIOIN_CHANS_SHIFT                                    1
#define     ASRC2_FIFO_AUDIOIN_CHANS_MASK                                     (0x3<<1)
#define     ASRC2_FIFO_AUDIOINFORMAT                                          0

#define     ASRC2_CTL_DMA_MODE_OUT                                            31
#define     ASRC2_CTL_DMA_MODE_IN                                             30
#define     ASRC2_CTL_SCLK_RATIO_E                                            29
#define     ASRC2_CTL_SCLK_RATIO_SHIFT                                        28
#define     ASRC2_CTL_SCLK_RATIO_MASK                                         (0x3<<28)
#define     ASRC2_CTL_LAST_FRAME                                              10
#define     ASRC2_CTL_UPDATE_PHASE_EN                                         9
#define     ASRC2_CTL_RESET_FIFO_IN                                           8
#define     ASRC2_CTL_RESET_FIFO_OUT                                          7
#define     ASRC2_CTL_RESET_HISTORY                                           6
#define     ASRC2_CTL_MUTE_EN                                                 5
#define     ASRC2_CTL_UPDATE_DECIMA_EN                                        4
#define     ASRC2_CTL_ASRC_TYPE                                               3
#define     ASRC2_CTL_ASRC_MODE_E                                             2
#define     ASRC2_CTL_ASRC_MODE_SHIFT                                         1
#define     ASRC2_CTL_ASRC_MODE_MASK                                          (0x3<<1)
#define     ASRC2_CTL_FRAME_START                                             0

#define     ASRC2_INTERRUPT_OUTFIFO_EMPTY_PADING                              2
#define     ASRC2_INTERRUPT_INFIFO_FULL_PADING                                1
#define     ASRC2_INTERRUPT_ONE_FRAME_END                                     0

#define     ASRC2_FILTER_COMPRESSEDTABSIZE_E                                  26
#define     ASRC2_FILTER_COMPRESSEDTABSIZE_SHIFT                              16
#define     ASRC2_FILTER_COMPRESSEDTABSIZE_MASK                               (0x7FF<<16)
#define     ASRC2_FILTER_COARSETABSTEPBIT                                     8
#define     ASRC2_FILTER_FILTER_TAPS_E                                        7
#define     ASRC2_FILTER_FILTER_TAPS_SHIFT                                    0
#define     ASRC2_FILTER_FILTER_TAPS_MASK                                     (0xFF<<0)

#define     ASRC2_DECIMATION_RATIO_L_DECI_RATIO_SIGN                          31
#define     ASRC2_DECIMATION_RATIO_L_LOWBIT_E                                 30
#define     ASRC2_DECIMATION_RATIO_L_LOWBIT_SHIFT                             0
#define     ASRC2_DECIMATION_RATIO_L_LOWBIT_MASK                              (0x7FFFFFFF<<0)

#define     ASRC2_DECIMATION_RATIO_H_RATIO_SIZE_BIT_E                         28
#define     ASRC2_DECIMATION_RATIO_H_RATIO_SIZE_BIT_SHIFT                     24
#define     ASRC2_DECIMATION_RATIO_H_RATIO_SIZE_BIT_MASK                      (0x1F<<24)
#define     ASRC2_DECIMATION_RATIO_H_HIGHBIT_E                                21
#define     ASRC2_DECIMATION_RATIO_H_HIGHBIT_SHIFT                            0
#define     ASRC2_DECIMATION_RATIO_H_HIGHBIT_MASK                             (0x3FFFFF<<0)

#define     ASRC2_MUTE_MUTE_SIZE_E                                            28
#define     ASRC2_MUTE_MUTE_SIZE_SHIFT                                        24
#define     ASRC2_MUTE_MUTE_SIZE_MASK                                         (0x1F<<24)
#define     ASRC2_MUTE_MUTE_GAIN_E                                            22
#define     ASRC2_MUTE_MUTE_GAIN_SHIFT                                        1
#define     ASRC2_MUTE_MUTE_GAIN_MASK                                         (0x3FFFFF<<1)
#define     ASRC2_MUTE_MUTE_MODE                                              0

#define     ASRC2_PHASE_DELTA_PHASE_DELT_SIGN                                 31
#define     ASRC2_PHASE_DELTA_PHASE_DELT_E                                    30
#define     ASRC2_PHASE_DELTA_PHASE_DELT_SHIFT                                0
#define     ASRC2_PHASE_DELTA_PHASE_DELT_MASK                                 (0x7FFFFFFF<<0)

#define     ASRC2_PHASE_ACC_L_PHASE_ACC_SIGN                                  31
#define     ASRC2_PHASE_ACC_L_PHASE_ACC_E                                     30
#define     ASRC2_PHASE_ACC_L_PHASE_ACC_SHIFT                                 0
#define     ASRC2_PHASE_ACC_L_PHASE_ACC_MASK                                  (0x7FFFFFFF<<0)

#define     ASRC2_PHASE_ACC_H_PHASE_ACC_E                                     31
#define     ASRC2_PHASE_ACC_H_PHASE_ACC_SHIFT                                 0
#define     ASRC2_PHASE_ACC_H_PHASE_ACC_MASK                                  (0xFFFFFFFF<<0)

#define     ASRC2_PHASE_DIFF_L_PHASE_DIFF_SIGN                                31
#define     ASRC2_PHASE_DIFF_L_PHASE_DIFF_E                                   30
#define     ASRC2_PHASE_DIFF_L_PHASE_DIFF_SHIFT                               0
#define     ASRC2_PHASE_DIFF_L_PHASE_DIFF_MASK                                (0x7FFFFFFF<<0)

#define     ASRC2_PHASE_DIFF_H_PHASE_DIFF_E                                   31
#define     ASRC2_PHASE_DIFF_H_PHASE_DIFF_SHIFT                               0
#define     ASRC2_PHASE_DIFF_H_PHASE_DIFF_MASK                                (0xFFFFFFFF<<0)

#define     ASRC2_PHASE_SHIFTBITS_SAMPPERFRM_SHIFT2_E                         20
#define     ASRC2_PHASE_SHIFTBITS_SAMPPERFRM_SHIFT2_SHIFT                     16
#define     ASRC2_PHASE_SHIFTBITS_SAMPPERFRM_SHIFT2_MASK                      (0x1F<<16)
#define     ASRC2_PHASE_SHIFTBITS_FRAMECNTS_SHIFT1_E                          12
#define     ASRC2_PHASE_SHIFTBITS_FRAMECNTS_SHIFT1_SHIFT                      8
#define     ASRC2_PHASE_SHIFTBITS_FRAMECNTS_SHIFT1_MASK                       (0x1F<<8)
#define     ASRC2_PHASE_SHIFTBITS_FRAMESIZE_BIT_E                             4
#define     ASRC2_PHASE_SHIFTBITS_FRAMESIZE_BIT_SHIFT                         0
#define     ASRC2_PHASE_SHIFTBITS_FRAMESIZE_BIT_MASK                          (0x1F<<0)

#define     ASRC2_FRAMESIZE_OUTSAMPS_E                                        31
#define     ASRC2_FRAMESIZE_OUTSAMPS_SHIFT                                    16
#define     ASRC2_FRAMESIZE_OUTSAMPS_MASK                                     (0xFFFF<<16)
#define     ASRC2_FRAMESIZE_INSAMPS_E                                         15
#define     ASRC2_FRAMESIZE_INSAMPS_SHIFT                                     0
#define     ASRC2_FRAMESIZE_INSAMPS_MASK                                      (0xFFFF<<0)

#define     ASRC2_SHIFT_TABLEBITS_E_SHIFTS_E                                  29
#define     ASRC2_SHIFT_TABLEBITS_E_SHIFTS_SHIFT                              24
#define     ASRC2_SHIFT_TABLEBITS_E_SHIFTS_MASK                               (0x3F<<24)
#define     ASRC2_SHIFT_TABLEBITS_D_SHIFTS_E                                  23
#define     ASRC2_SHIFT_TABLEBITS_D_SHIFTS_SHIFT                              18
#define     ASRC2_SHIFT_TABLEBITS_D_SHIFTS_MASK                               (0x3F<<18)
#define     ASRC2_SHIFT_TABLEBITS_C_SHIFTS_E                                  17
#define     ASRC2_SHIFT_TABLEBITS_C_SHIFTS_SHIFT                              12
#define     ASRC2_SHIFT_TABLEBITS_C_SHIFTS_MASK                               (0x3F<<12)
#define     ASRC2_SHIFT_TABLEBITS_B_SHIFTS_E                                  11
#define     ASRC2_SHIFT_TABLEBITS_B_SHIFTS_SHIFT                              6
#define     ASRC2_SHIFT_TABLEBITS_B_SHIFTS_MASK                               (0x3F<<6)
#define     ASRC2_SHIFT_TABLEBITS_A_SHIFTS_E                                  5
#define     ASRC2_SHIFT_TABLEBITS_A_SHIFTS_SHIFT                              0
#define     ASRC2_SHIFT_TABLEBITS_A_SHIFTS_MASK                               (0x3F<<0)

#define     ASRC2_TABLEADDR_ADDR_E                                            31
#define     ASRC2_TABLEADDR_ADDR_SHIFT                                        0
#define     ASRC2_TABLEADDR_ADDR_MASK                                         (0xFFFFFFFF<<0)

#define     ASRC2_FIFO_IN_DATA_DATA_E                                         31
#define     ASRC2_FIFO_IN_DATA_DATA_SHIFT                                     0
#define     ASRC2_FIFO_IN_DATA_DATA_MASK                                      (0xFFFFFFFF<<0)

#define     ASRC2_FIFO_OUT_DATA_DATA_E                                        31
#define     ASRC2_FIFO_OUT_DATA_DATA_SHIFT                                    0
#define     ASRC2_FIFO_OUT_DATA_DATA_MASK                                     (0xFFFFFFFF<<0)

#define     ASRC3_FIFO_SCLKOUT_RATIO_BIT_E                                    31
#define     ASRC3_FIFO_SCLKOUT_RATIO_BIT_SHIFT                                30
#define     ASRC3_FIFO_SCLKOUT_RATIO_BIT_MASK                                 (0x3<<30)
#define     ASRC3_FIFO_SCLKIN_RATIO_BIT_E                                     29
#define     ASRC3_FIFO_SCLKIN_RATIO_BIT_SHIFT                                 28
#define     ASRC3_FIFO_SCLKIN_RATIO_BIT_MASK                                  (0x3<<28)
#define     ASRC3_FIFO_FIFO_WT_LEVEL_E                                        25
#define     ASRC3_FIFO_FIFO_WT_LEVEL_SHIFT                                    20
#define     ASRC3_FIFO_FIFO_WT_LEVEL_MASK                                     (0x3F<<20)
#define     ASRC3_FIFO_AUDIOOUT_CHANS_E                                       18
#define     ASRC3_FIFO_AUDIOOUT_CHANS_SHIFT                                   17
#define     ASRC3_FIFO_AUDIOOUT_CHANS_MASK                                    (0x3<<17)
#define     ASRC3_FIFO_AUDIOOUTFORMAT                                         16
#define     ASRC3_FIFO_FIFO_RD_LEVEL_E                                        9
#define     ASRC3_FIFO_FIFO_RD_LEVEL_SHIFT                                    4
#define     ASRC3_FIFO_FIFO_RD_LEVEL_MASK                                     (0x3F<<4)
#define     ASRC3_FIFO_CHS                                                    3
#define     ASRC3_FIFO_AUDIOIN_CHANS_E                                        2
#define     ASRC3_FIFO_AUDIOIN_CHANS_SHIFT                                    1
#define     ASRC3_FIFO_AUDIOIN_CHANS_MASK                                     (0x3<<1)
#define     ASRC3_FIFO_AUDIOINFORMAT                                          0

#define     ASRC3_CTL_DMA_MODE_OUT                                            31
#define     ASRC3_CTL_DMA_MODE_IN                                             30
#define     ASRC3_CTL_SCLK_RATIO_E                                            29
#define     ASRC3_CTL_SCLK_RATIO_SHIFT                                        28
#define     ASRC3_CTL_SCLK_RATIO_MASK                                         (0x3<<28)
#define     ASRC3_CTL_LAST_FRAME                                              10
#define     ASRC3_CTL_UPDATE_PHASE_EN                                         9
#define     ASRC3_CTL_RESET_FIFO_IN                                           8
#define     ASRC3_CTL_RESET_FIFO_OUT                                          7
#define     ASRC3_CTL_RESET_HISTORY                                           6
#define     ASRC3_CTL_MUTE_EN                                                 5
#define     ASRC3_CTL_UPDATE_DECIMA_EN                                        4
#define     ASRC3_CTL_ASRC_TYPE                                               3
#define     ASRC3_CTL_ASRC_MODE_E                                             2
#define     ASRC3_CTL_ASRC_MODE_SHIFT                                         1
#define     ASRC3_CTL_ASRC_MODE_MASK                                          (0x3<<1)
#define     ASRC3_CTL_FRAME_START                                             0

#define     ASRC3_INTERRUPT_OUTFIFO_EMPTY_PADING                              2
#define     ASRC3_INTERRUPT_INFIFO_FULL_PADING                                1
#define     ASRC3_INTERRUPT_ONE_FRAME_END                                     0

#define     ASRC3_FILTER_COMPRESSEDTABSIZE_E                                  26
#define     ASRC3_FILTER_COMPRESSEDTABSIZE_SHIFT                              16
#define     ASRC3_FILTER_COMPRESSEDTABSIZE_MASK                               (0x7FF<<16)
#define     ASRC3_FILTER_COARSETABSTEPBIT                                     8
#define     ASRC3_FILTER_FILTER_TAPS_E                                        7
#define     ASRC3_FILTER_FILTER_TAPS_SHIFT                                    0
#define     ASRC3_FILTER_FILTER_TAPS_MASK                                     (0xFF<<0)

#define     ASRC3_DECIMATION_RATIO_L_DECI_RATIO_SIGN                          31
#define     ASRC3_DECIMATION_RATIO_L_LOWBIT_E                                 30
#define     ASRC3_DECIMATION_RATIO_L_LOWBIT_SHIFT                             0
#define     ASRC3_DECIMATION_RATIO_L_LOWBIT_MASK                              (0x7FFFFFFF<<0)

#define     ASRC3_DECIMATION_RATIO_H_RATIO_SIZE_BIT_E                         28
#define     ASRC3_DECIMATION_RATIO_H_RATIO_SIZE_BIT_SHIFT                     24
#define     ASRC3_DECIMATION_RATIO_H_RATIO_SIZE_BIT_MASK                      (0x1F<<24)
#define     ASRC3_DECIMATION_RATIO_H_HIGHBIT_E                                21
#define     ASRC3_DECIMATION_RATIO_H_HIGHBIT_SHIFT                            0
#define     ASRC3_DECIMATION_RATIO_H_HIGHBIT_MASK                             (0x3FFFFF<<0)

#define     ASRC3_MUTE_MUTE_SIZE_E                                            28
#define     ASRC3_MUTE_MUTE_SIZE_SHIFT                                        24
#define     ASRC3_MUTE_MUTE_SIZE_MASK                                         (0x1F<<24)
#define     ASRC3_MUTE_MUTE_GAIN_E                                            22
#define     ASRC3_MUTE_MUTE_GAIN_SHIFT                                        1
#define     ASRC3_MUTE_MUTE_GAIN_MASK                                         (0x3FFFFF<<1)
#define     ASRC3_MUTE_MUTE_MODE                                              0

#define     ASRC3_PHASE_DELTA_PHASE_DELT_SIGN                                 31
#define     ASRC3_PHASE_DELTA_PHASE_DELT_E                                    30
#define     ASRC3_PHASE_DELTA_PHASE_DELT_SHIFT                                0
#define     ASRC3_PHASE_DELTA_PHASE_DELT_MASK                                 (0x7FFFFFFF<<0)

#define     ASRC3_PHASE_ACC_L_PHASE_ACC_SIGN                                  31
#define     ASRC3_PHASE_ACC_L_PHASE_ACC_E                                     30
#define     ASRC3_PHASE_ACC_L_PHASE_ACC_SHIFT                                 0
#define     ASRC3_PHASE_ACC_L_PHASE_ACC_MASK                                  (0x7FFFFFFF<<0)

#define     ASRC3_PHASE_ACC_H_PHASE_ACC_E                                     31
#define     ASRC3_PHASE_ACC_H_PHASE_ACC_SHIFT                                 0
#define     ASRC3_PHASE_ACC_H_PHASE_ACC_MASK                                  (0xFFFFFFFF<<0)

#define     ASRC3_PHASE_DIFF_L_PHASE_DIFF_SIGN                                31
#define     ASRC3_PHASE_DIFF_L_PHASE_DIFF_E                                   30
#define     ASRC3_PHASE_DIFF_L_PHASE_DIFF_SHIFT                               0
#define     ASRC3_PHASE_DIFF_L_PHASE_DIFF_MASK                                (0x7FFFFFFF<<0)

#define     ASRC3_PHASE_DIFF_H_PHASE_DIFF_E                                   31
#define     ASRC3_PHASE_DIFF_H_PHASE_DIFF_SHIFT                               0
#define     ASRC3_PHASE_DIFF_H_PHASE_DIFF_MASK                                (0xFFFFFFFF<<0)

#define     ASRC3_PHASE_SHIFTBITS_SAMPPERFRM_SHIFT2_E                         20
#define     ASRC3_PHASE_SHIFTBITS_SAMPPERFRM_SHIFT2_SHIFT                     16
#define     ASRC3_PHASE_SHIFTBITS_SAMPPERFRM_SHIFT2_MASK                      (0x1F<<16)
#define     ASRC3_PHASE_SHIFTBITS_FRAMECNTS_SHIFT1_E                          12
#define     ASRC3_PHASE_SHIFTBITS_FRAMECNTS_SHIFT1_SHIFT                      8
#define     ASRC3_PHASE_SHIFTBITS_FRAMECNTS_SHIFT1_MASK                       (0x1F<<8)
#define     ASRC3_PHASE_SHIFTBITS_FRAMESIZE_BIT_E                             4
#define     ASRC3_PHASE_SHIFTBITS_FRAMESIZE_BIT_SHIFT                         0
#define     ASRC3_PHASE_SHIFTBITS_FRAMESIZE_BIT_MASK                          (0x1F<<0)

#define     ASRC3_FRAMESIZE_OUTSAMPS_E                                        31
#define     ASRC3_FRAMESIZE_OUTSAMPS_SHIFT                                    16
#define     ASRC3_FRAMESIZE_OUTSAMPS_MASK                                     (0xFFFF<<16)
#define     ASRC3_FRAMESIZE_INSAMPS_E                                         15
#define     ASRC3_FRAMESIZE_INSAMPS_SHIFT                                     0
#define     ASRC3_FRAMESIZE_INSAMPS_MASK                                      (0xFFFF<<0)

#define     ASRC3_SHIFT_TABLEBITS_E_SHIFTS_E                                  29
#define     ASRC3_SHIFT_TABLEBITS_E_SHIFTS_SHIFT                              24
#define     ASRC3_SHIFT_TABLEBITS_E_SHIFTS_MASK                               (0x3F<<24)
#define     ASRC3_SHIFT_TABLEBITS_D_SHIFTS_E                                  23
#define     ASRC3_SHIFT_TABLEBITS_D_SHIFTS_SHIFT                              18
#define     ASRC3_SHIFT_TABLEBITS_D_SHIFTS_MASK                               (0x3F<<18)
#define     ASRC3_SHIFT_TABLEBITS_C_SHIFTS_E                                  17
#define     ASRC3_SHIFT_TABLEBITS_C_SHIFTS_SHIFT                              12
#define     ASRC3_SHIFT_TABLEBITS_C_SHIFTS_MASK                               (0x3F<<12)
#define     ASRC3_SHIFT_TABLEBITS_B_SHIFTS_E                                  11
#define     ASRC3_SHIFT_TABLEBITS_B_SHIFTS_SHIFT                              6
#define     ASRC3_SHIFT_TABLEBITS_B_SHIFTS_MASK                               (0x3F<<6)
#define     ASRC3_SHIFT_TABLEBITS_A_SHIFTS_E                                  5
#define     ASRC3_SHIFT_TABLEBITS_A_SHIFTS_SHIFT                              0
#define     ASRC3_SHIFT_TABLEBITS_A_SHIFTS_MASK                               (0x3F<<0)

#define     ASRC3_TABLEADDR_ADDR_E                                            31
#define     ASRC3_TABLEADDR_ADDR_SHIFT                                        0
#define     ASRC3_TABLEADDR_ADDR_MASK                                         (0xFFFFFFFF<<0)

#define     ASRC3_FIFO_IN_DATA_DATA_E                                         31
#define     ASRC3_FIFO_IN_DATA_DATA_SHIFT                                     0
#define     ASRC3_FIFO_IN_DATA_DATA_MASK                                      (0xFFFFFFFF<<0)

#define     ASRC3_FIFO_OUT_DATA_DATA_E                                        31
#define     ASRC3_FIFO_OUT_DATA_DATA_SHIFT                                    0
#define     ASRC3_FIFO_OUT_DATA_DATA_MASK                                     (0xFFFFFFFF<<0)

#endif
//--------------UART-------------------------------------------//
//--------------Register Address---------------------------------------//
#define     UART_BASE                                                         0x50020000
#define     UART_CTL                                                          (UART_BASE+0x0000)
#define     UART_RXDAT                                                        (UART_BASE+0x0004)
#define     UART_TXDAT                                                        (UART_BASE+0x0008)
#define     UART_STA                                                          (UART_BASE+0x000c)
#define     UART_BR                                                           (UART_BASE+0x0010)
#define     UART_CTL2                                                         (UART_BASE+0x0014)

//--------------Bits Location------------------------------------------//
#define     UART_CTL_RXENABLE                                                 31
#define     UART_CTL_TXENABLE                                                 30
#define     UART_CTL_TX_FIFO_EN                                               29
#define     UART_CTL_RX_FIFO_EN                                               28
#define     UART_CTL_TX_FIFO_SEL_E                                            27
#define     UART_CTL_TX_FIFO_SEL_SHIFT                                        26
#define     UART_CTL_TX_FIFO_SEL_MASK                                         (0x3<<26)
#define     UART_CTL_RX_FIFO_SEL                                              24
#define     UART_CTL_AFL_E                                                    23
#define     UART_CTL_AFL_SHIFT                                                22
#define     UART_CTL_AFL_MASK                                                 (0x3<<22)
#define     UART_CTL_DBGSEL                                                   21
#define     UART_CTL_LBEN                                                     20
#define     UART_CTL_TXIE                                                     19
#define     UART_CTL_RXIE                                                     18
#define     UART_CTL_TXDE                                                     17
#define     UART_CTL_RXDE                                                     16
#define     UART_CTL_EN                                                       15
#define     UART_CTL_RTSE                                                     13
#define     UART_CTL_AFE                                                      12
#define     UART_CTL_RDIC_E                                                   11
#define     UART_CTL_RDIC_SHIFT                                               10
#define     UART_CTL_RDIC_MASK                                                (0x3<<10)
#define     UART_CTL_TDIC_E                                                   9
#define     UART_CTL_TDIC_SHIFT                                               8
#define     UART_CTL_TDIC_MASK                                                (0x3<<8)
#define     UART_CTL_CTSE                                                     7
#define     UART_CTL_PRS_E                                                    6
#define     UART_CTL_PRS_SHIFT                                                4
#define     UART_CTL_PRS_MASK                                                 (0x7<<4)
#define     UART_CTL_STPS                                                     2
#define     UART_CTL_DWLS_E                                                   1
#define     UART_CTL_DWLS_SHIFT                                               0
#define     UART_CTL_DWLS_MASK                                                (0x3<<0)

#define     UART_RXDAT_RXDAT_E                                                7
#define     UART_RXDAT_RXDAT_SHIFT                                            0
#define     UART_RXDAT_RXDAT_MASK                                             (0xFF<<0)

#define     UART_TXDAT_TXDAT_E                                                7
#define     UART_TXDAT_TXDAT_SHIFT                                            0
#define     UART_TXDAT_TXDAT_MASK                                             (0xFF<<0)

#define     UART_STA_RXTO_PD                                                  24
#define     UART_STA_PAER                                                     23
#define     UART_STA_STER                                                     22
#define     UART_STA_UTBB                                                     21
#define     UART_STA_TXFL_E                                                   20
#define     UART_STA_TXFL_SHIFT                                               16
#define     UART_STA_TXFL_MASK                                                (0x1F<<16)
#define     UART_STA_RXFL_E                                                   15
#define     UART_STA_RXFL_SHIFT                                               11
#define     UART_STA_RXFL_MASK                                                (0x1F<<11)
#define     UART_STA_TFES                                                     10
#define     UART_STA_RFFS                                                     9
#define     UART_STA_RTSS                                                     8
#define     UART_STA_CTSS                                                     7
#define     UART_STA_TFFU                                                     6
#define     UART_STA_RFEM                                                     5
#define     UART_STA_RXST                                                     4
#define     UART_STA_TFER                                                     3
#define     UART_STA_RXER                                                     2
#define     UART_STA_TIP                                                      1
#define     UART_STA_RIP                                                      0

#define     UART_BR_TXBRDIV_E                                                 31
#define     UART_BR_TXBRDIV_SHIFT                                             16
#define     UART_BR_TXBRDIV_MASK                                              (0xFFFF<<16)
#define     UART_BR_RXBRDIV_E                                                 15
#define     UART_BR_RXBRDIV_SHIFT                                             0
#define     UART_BR_RXBRDIV_MASK                                              (0xFFFF<<0)

#define     UART_CTL2_RXTO_IRQ_EN                                             31
#define     UART_CTL2_RXTO_E                                                  7
#define     UART_CTL2_RXTO_SHIFT                                              0
#define     UART_CTL2_RXTO_MASK                                               (0xFF<<0)

//--------------SPI0-------------------------------------------//
//--------------Register Address---------------------------------------//
#define     SPI0_BASE                                                         0x50018000
#define     SPI0_CTL                                                          (SPI0_BASE+0x0000)
#define     SPI0_STA                                                          (SPI0_BASE+0x0004)
#define     SPI0_TXDAT                                                        (SPI0_BASE+0x0008)
#define     SPI0_RXDAT                                                        (SPI0_BASE+0x000C)
#define     SPI0_BC                                                           (SPI0_BASE+0x0010)
#define     SPI0_CHECKRB                                                      (SPI0_BASE+0x0018)
#define     SPI0_CHECKRB_COUNTER                                              (SPI0_BASE+0x001C)

//--------------Bits Location------------------------------------------//
#define     SPI0_CTL_CLKSEL                                                   31
#define     SPI0_CTL_FWS                                                      30
#define     SPI0_CTL_SPI_MODE_SELECT_E                                        29
#define     SPI0_CTL_SPI_MODE_SELECT_SHIFT                                    28
#define     SPI0_CTL_SPI_MODE_SELECT_MASK                                     (0x3<<28)
#define     SPI0_CTL_RX_WRITE_SEL                                             26
#define     SPI0_CTL_DMS                                                      25
#define     SPI0_CTL_TXCEB                                                    24
#define     SPI0_CTL_RXCEB                                                    23
#define     SPI0_CTL_MSS                                                      22
#define     SPI0_CTL_MSB                                                      21
#define     SPI0_CTL_RILS                                                     20
#define     SPI0_CTL_SPI_DELAY_E                                              19
#define     SPI0_CTL_SPI_DELAY_SHIFT                                          15
#define     SPI0_CTL_SPI_DELAY_MASK                                           (0x1F<<15)
#define     SPI0_CTL_SPI_3WIRE                                                12
#define     SPI0_CTL_SPI_IO_MODE_E                                            11
#define     SPI0_CTL_SPI_IO_MODE_SHIFT                                        10
#define     SPI0_CTL_SPI_IO_MODE_MASK                                         (0x3<<10)
#define     SPI0_CTL_SPI_TIRQ_EN                                              9
#define     SPI0_CTL_SPI_RIRQ_EN                                              8
#define     SPI0_CTL_SPI_TDRQ_EN                                              7
#define     SPI0_CTL_SPI_RDRQ_EN                                              6
#define     SPI0_CTL_SPI_TX_FIFO_EN                                           5
#define     SPI0_CTL_SPI_RX_FIFO_EN                                           4
#define     SPI0_CTL_SPI_SS                                                   3
#define     SPI0_CTL_SPI_LOOP                                                 2
#define     SPI0_CTL_SPI_WR_E                                                 1
#define     SPI0_CTL_SPI_WR_SHIFT                                             0
#define     SPI0_CTL_SPI_WR_MASK                                              (0x3<<0)
#define     SPI0_CTL_CLKSEL                                                   31
#define     SPI0_CTL_FWS                                                      30
#define     SPI0_CTL_SPI_MODE_SELECT_E                                        29
#define     SPI0_CTL_SPI_MODE_SELECT_SHIFT                                    28
#define     SPI0_CTL_SPI_MODE_SELECT_MASK                                     (0x3<<28)

#define     SPI0_STA_SPI_RXHF                                                 13
#define     SPI0_STA_SPI_TXHF                                                 12
#define     SPI0_STA_TFWO                                                     11
#define     SPI0_STA_RFWO                                                     9
#define     SPI0_STA_RFRO                                                     8
#define     SPI0_STA_SPI_RXFU                                                 7
#define     SPI0_STA_SPI_RXEM                                                 6
#define     SPI0_STA_SPI_TXFU                                                 5
#define     SPI0_STA_SPI_TXEM                                                 4
#define     SPI0_STA_SPI_TIRQ_PD                                              3
#define     SPI0_STA_SPI_RIRQ_PD                                              2
#define     SPI0_STA_SPI_BUSY                                                 0

#define     SPI0_TXDAT_SPI_TXDAT_E                                            31
#define     SPI0_TXDAT_SPI_TXDAT_SHIFT                                        0
#define     SPI0_TXDAT_SPI_TXDAT_MASK                                         (0xFFFFFFFF<<0)

#define     SPI0_RXDAT_SPI_RXDAT_E                                            31
#define     SPI0_RXDAT_SPI_RXDAT_SHIFT                                        0
#define     SPI0_RXDAT_SPI_RXDAT_MASK                                         (0xFFFFFFFF<<0)

#define     SPI0_BC_REMAIN_CNT_E                                              31
#define     SPI0_BC_REMAIN_CNT_SHIFT                                          16
#define     SPI0_BC_REMAIN_CNT_MASK                                           (0xFFFF<<16)
#define     SPI0_BC_SPI_BC_E                                                  15
#define     SPI0_BC_SPI_BC_SHIFT                                              0
#define     SPI0_BC_SPI_BC_MASK                                               (0xFFFF<<0)

#define     SPI0_CHECKRB_RB                                                   8
#define     SPI0_CHECKRB_CHECKRB_PD                                           7
#define     SPI0_CHECKRB_CHECKRB_IRQ_EN                                       1
#define     SPI0_CHECKRB_CHECKRB                                              0

#define     SPI0_CHECKRB_COUNTER_RBCOUNTER_E                                  11
#define     SPI0_CHECKRB_COUNTER_RBCOUNTER_SHIFT                              0
#define     SPI0_CHECKRB_COUNTER_RBCOUNTER_MASK                               (0xFFF<<0)

//--------------SPI1-------------------------------------------//
//--------------Register Address---------------------------------------//
#define     SPI1_BASE                                                         0x50050000
#define     SPI1_CTL                                                          (SPI1_BASE+0x0000)
#define     SPI1_STA                                                          (SPI1_BASE+0x0004)
#define     SPI1_TXDAT                                                        (SPI1_BASE+0x0008)
#define     SPI1_RXDAT                                                        (SPI1_BASE+0x000C)
#define     SPI1_BC                                                           (SPI1_BASE+0x0010)
#define     SPI1_CHECKRB                                                      (SPI1_BASE+0x0018)
#define     SPI1_CHECKRB_COUNTER                                              (SPI1_BASE+0x001C)

//--------------Bits Location------------------------------------------//
#define     SPI1_CTL_CLKSEL                                                   31
#define     SPI1_CTL_FWS                                                      30
#define     SPI1_CTL_SPI_MODE_SELECT_E                                        29
#define     SPI1_CTL_SPI_MODE_SELECT_SHIFT                                    28
#define     SPI1_CTL_SPI_MODE_SELECT_MASK                                     (0x3<<28)
#define     SPI1_CTL_RX_WRITE_SEL                                             26
#define     SPI1_CTL_DMS                                                      25
#define     SPI1_CTL_TXCEB                                                    24
#define     SPI1_CTL_RXCEB                                                    23
#define     SPI1_CTL_MSS                                                      22
#define     SPI1_CTL_MSB                                                      21
#define     SPI1_CTL_RILS                                                     20
#define     SPI1_CTL_SPI_DELAY_E                                              19
#define     SPI1_CTL_SPI_DELAY_SHIFT                                          15
#define     SPI1_CTL_SPI_DELAY_MASK                                           (0x1F<<15)
#define     SPI1_CTL_SPI_3WIRE                                                12
#define     SPI1_CTL_SPI_IO_MODE_E                                            11
#define     SPI1_CTL_SPI_IO_MODE_SHIFT                                        10
#define     SPI1_CTL_SPI_IO_MODE_MASK                                         (0x3<<10)
#define     SPI1_CTL_SPI_TIRQ_EN                                              9
#define     SPI1_CTL_SPI_RIRQ_EN                                              8
#define     SPI1_CTL_SPI_TDRQ_EN                                              7
#define     SPI1_CTL_SPI_RDRQ_EN                                              6
#define     SPI1_CTL_SPI_TX_FIFO_EN                                           5
#define     SPI1_CTL_SPI_RX_FIFO_EN                                           4
#define     SPI1_CTL_SPI_SS                                                   3
#define     SPI1_CTL_SPI_LOOP                                                 2
#define     SPI1_CTL_SPI_WR_E                                                 1
#define     SPI1_CTL_SPI_WR_SHIFT                                             0
#define     SPI1_CTL_SPI_WR_MASK                                              (0x3<<0)
#define     SPI1_CTL_CLKSEL                                                   31
#define     SPI1_CTL_FWS                                                      30
#define     SPI1_CTL_SPI_MODE_SELECT_E                                        29
#define     SPI1_CTL_SPI_MODE_SELECT_SHIFT                                    28
#define     SPI1_CTL_SPI_MODE_SELECT_MASK                                     (0x3<<28)

#define     SPI1_STA_SPI_RXHF                                                 13
#define     SPI1_STA_SPI_TXHF                                                 12
#define     SPI1_STA_TFWO                                                     11
#define     SPI1_STA_RFWO                                                     9
#define     SPI1_STA_RFRO                                                     8
#define     SPI1_STA_SPI_RXFU                                                 7
#define     SPI1_STA_SPI_RXEM                                                 6
#define     SPI1_STA_SPI_TXFU                                                 5
#define     SPI1_STA_SPI_TXEM                                                 4
#define     SPI1_STA_SPI_TIRQ_PD                                              3
#define     SPI1_STA_SPI_RIRQ_PD                                              2
#define     SPI1_STA_SPI_BUSY                                                 0

#define     SPI1_TXDAT_SPI_TXDAT_E                                            31
#define     SPI1_TXDAT_SPI_TXDAT_SHIFT                                        0
#define     SPI1_TXDAT_SPI_TXDAT_MASK                                         (0xFFFFFFFF<<0)

#define     SPI1_RXDAT_SPI_RXDAT_E                                            31
#define     SPI1_RXDAT_SPI_RXDAT_SHIFT                                        0
#define     SPI1_RXDAT_SPI_RXDAT_MASK                                         (0xFFFFFFFF<<0)

#define     SPI1_BC_REMAIN_CNT_E                                              31
#define     SPI1_BC_REMAIN_CNT_SHIFT                                          16
#define     SPI1_BC_REMAIN_CNT_MASK                                           (0xFFFF<<16)
#define     SPI1_BC_SPI_BC_E                                                  15
#define     SPI1_BC_SPI_BC_SHIFT                                              0
#define     SPI1_BC_SPI_BC_MASK                                               (0xFFFF<<0)

#define     SPI1_CHECKRB_RB                                                   8
#define     SPI1_CHECKRB_CHECKRB_PD                                           7
#define     SPI1_CHECKRB_CHECKRB_IRQ_EN                                       1
#define     SPI1_CHECKRB_CHECKRB                                              0

#define     SPI1_CHECKRB_COUNTER_RBCOUNTER_E                                  11
#define     SPI1_CHECKRB_COUNTER_RBCOUNTER_SHIFT                              0
#define     SPI1_CHECKRB_COUNTER_RBCOUNTER_MASK                               (0xFFF<<0)

//--------------I2C0-------------------------------------------//
//--------------Register Address---------------------------------------//
#define     I2C0_BASE                                                         0x50040000
#define     I2C0_CTL                                                          (I2C0_BASE+0x00)
#define     I2C0_CLKDIV                                                       (I2C0_BASE+0x04)
#define     I2C0_STAT                                                         (I2C0_BASE+0x08)
#define     I2C0_ADDR                                                         (I2C0_BASE+0x0c)
#define     I2C0_TXDAT                                                        (I2C0_BASE+0x10)
#define     I2C0_RXDAT                                                        (I2C0_BASE+0x14)
#define     I2C0_CMD                                                          (I2C0_BASE+0x18)
#define     I2C0_FIFOCTL                                                      (I2C0_BASE+0x1c)
#define     I2C0_FIFOSTAT                                                     (I2C0_BASE+0x20)
#define     I2C0_DATCNT                                                       (I2C0_BASE+0x24)
#define     I2C0_RCNT                                                         (I2C0_BASE+0x28)

//--------------Bits Location------------------------------------------//
#define     I2C0_CTL_CLK_SEL                                                  31
#define     I2C0_CTL_TCP_FIFO_IRQ_EN                                          20
#define     I2C0_CTL_STD_IRQ_EN                                               19
#define     I2C0_CTL_NACK_IRQ_EN                                              17
#define     I2C0_CTL_ADM_IRQ_EN                                               16
#define     I2C0_CTL_IRQC                                                     10
#define     I2C0_CTL_DRQTE                                                    9
#define     I2C0_CTL_DRQRE                                                    8
#define     I2C0_CTL_BUSSEL                                                   7
#define     I2C0_CTL_IRQE                                                     6
#define     I2C0_CTL_EN                                                       5
#define     I2C0_CTL_GBCC_E                                                   3
#define     I2C0_CTL_GBCC_SHIFT                                               2
#define     I2C0_CTL_GBCC_MASK                                                (0x3<<2)
#define     I2C0_CTL_RB                                                       1
#define     I2C0_CTL_GRAS                                                     0

#define     I2C0_CLKDIV_CLKDIV_H_E                                            27
#define     I2C0_CLKDIV_CLKDIV_H_SHIFT                                        16
#define     I2C0_CLKDIV_CLKDIV_H_MASK                                         (0xFFF<<16)
#define     I2C0_CLKDIV_CLKDIV_L_E                                            11
#define     I2C0_CLKDIV_CLKDIV_L_SHIFT                                        0
#define     I2C0_CLKDIV_CLKDIV_L_MASK                                         (0xFFF<<0)

#define     I2C0_STAT_SRGC                                                    10
#define     I2C0_STAT_SAMB                                                    9
#define     I2C0_STAT_LBST                                                    8
#define     I2C0_STAT_TCB                                                     7
#define     I2C0_STAT_BBB                                                     6
#define     I2C0_STAT_STAD                                                    5
#define     I2C0_STAT_STPD                                                    4
#define     I2C0_STAT_IRQP                                                    2
#define     I2C0_STAT_BEB                                                     1
#define     I2C0_STAT_RACK                                                    0

#define     I2C0_ADDR_SDAD_E                                                  7
#define     I2C0_ADDR_SDAD_SHIFT                                              1
#define     I2C0_ADDR_SDAD_MASK                                               (0x7F<<1)

#define     I2C0_TXDAT_DA_E                                                   7
#define     I2C0_TXDAT_DA_SHIFT                                               0
#define     I2C0_TXDAT_DA_MASK                                                (0xFF<<0)

#define     I2C0_RXDAT_DA_E                                                   7
#define     I2C0_RXDAT_DA_SHIFT                                               0
#define     I2C0_RXDAT_DA_MASK                                                (0xFF<<0)

#define     I2C0_CMD_NASO                                                     31
#define     I2C0_CMD_SECL                                                     15
#define     I2C0_CMD_WRS                                                      12
#define     I2C0_CMD_MSS                                                      11
#define     I2C0_CMD_SE                                                       10
#define     I2C0_CMD_NS                                                       9
#define     I2C0_CMD_DE                                                       8
#define     I2C0_CMD_SAS_E                                                    7
#define     I2C0_CMD_SAS_SHIFT                                                5
#define     I2C0_CMD_SAS_MASK                                                 (0x7<<5)
#define     I2C0_CMD_RBE                                                      4
#define     I2C0_CMD_AS_E                                                     3
#define     I2C0_CMD_AS_SHIFT                                                 1
#define     I2C0_CMD_AS_MASK                                                  (0x7<<1)
#define     I2C0_CMD_SBE                                                      0

#define     I2C0_FIFOCTL_TFR                                                  2
#define     I2C0_FIFOCTL_RFR                                                  1
#define     I2C0_FIFOCTL_NIB                                                  0

#define     I2C0_FIFOSTAT_TFD_E                                               15
#define     I2C0_FIFOSTAT_TFD_SHIFT                                           12
#define     I2C0_FIFOSTAT_TFD_MASK                                            (0xF<<12)
#define     I2C0_FIFOSTAT_RFD_E                                               11
#define     I2C0_FIFOSTAT_RFD_SHIFT                                           8
#define     I2C0_FIFOSTAT_RFD_MASK                                            (0xF<<8)
#define     I2C0_FIFOSTAT_WRS                                                 6
#define     I2C0_FIFOSTAT_TFF                                                 5
#define     I2C0_FIFOSTAT_TFE                                                 4
#define     I2C0_FIFOSTAT_RFF                                                 3
#define     I2C0_FIFOSTAT_RFE                                                 2
#define     I2C0_FIFOSTAT_RNB                                                 1
#define     I2C0_FIFOSTAT_CECB                                                0

#define     I2C0_DATCNT_TC_E                                                  15
#define     I2C0_DATCNT_TC_SHIFT                                              0
#define     I2C0_DATCNT_TC_MASK                                               (0xFFFF<<0)

#define     I2C0_RCNT_TC_E                                                    15
#define     I2C0_RCNT_TC_SHIFT                                                0
#define     I2C0_RCNT_TC_MASK                                                 (0xFFFF<<0)

//--------------I2C1-------------------------------------------//
//--------------Register Address---------------------------------------//
#define     I2C1_BASE                                                         0x50048000
#define     I2C1_CTL                                                          (I2C1_BASE+0x00)
#define     I2C1_CLKDIV                                                       (I2C1_BASE+0x04)
#define     I2C1_STAT                                                         (I2C1_BASE+0x08)
#define     I2C1_ADDR                                                         (I2C1_BASE+0x0c)
#define     I2C1_TXDAT                                                        (I2C1_BASE+0x10)
#define     I2C1_RXDAT                                                        (I2C1_BASE+0x14)
#define     I2C1_CMD                                                          (I2C1_BASE+0x18)
#define     I2C1_FIFOCTL                                                      (I2C1_BASE+0x1c)
#define     I2C1_FIFOSTAT                                                     (I2C1_BASE+0x20)
#define     I2C1_DATCNT                                                       (I2C1_BASE+0x24)
#define     I2C1_RCNT                                                         (I2C1_BASE+0x28)

//--------------Bits Location------------------------------------------//
#define     I2C1_CTL_CLK_SEL                                                  31
#define     I2C1_CTL_TCP_FIFO_IRQ_EN                                          20
#define     I2C1_CTL_STD_IRQ_EN                                               19
#define     I2C1_CTL_NACK_IRQ_EN                                              17
#define     I2C1_CTL_ADM_IRQ_EN                                               16
#define     I2C1_CTL_IRQC                                                     10
#define     I2C1_CTL_DRQTE                                                    9
#define     I2C1_CTL_DRQRE                                                    8
#define     I2C1_CTL_BUSSEL                                                   7
#define     I2C1_CTL_IRQE                                                     6
#define     I2C1_CTL_EN                                                       5
#define     I2C1_CTL_GBCC_E                                                   3
#define     I2C1_CTL_GBCC_SHIFT                                               2
#define     I2C1_CTL_GBCC_MASK                                                (0x3<<2)
#define     I2C1_CTL_RB                                                       1
#define     I2C1_CTL_GRAS                                                     0

#define     I2C1_CLKDIV_CLKDIV_H_E                                            27
#define     I2C1_CLKDIV_CLKDIV_H_SHIFT                                        16
#define     I2C1_CLKDIV_CLKDIV_H_MASK                                         (0xFFF<<16)
#define     I2C1_CLKDIV_CLKDIV_L_E                                            11
#define     I2C1_CLKDIV_CLKDIV_L_SHIFT                                        0
#define     I2C1_CLKDIV_CLKDIV_L_MASK                                         (0xFFF<<0)

#define     I2C1_STAT_SRGC                                                    10
#define     I2C1_STAT_SAMB                                                    9
#define     I2C1_STAT_LBST                                                    8
#define     I2C1_STAT_TCB                                                     7
#define     I2C1_STAT_BBB                                                     6
#define     I2C1_STAT_STAD                                                    5
#define     I2C1_STAT_STPD                                                    4
#define     I2C1_STAT_IRQP                                                    2
#define     I2C1_STAT_BEB                                                     1
#define     I2C1_STAT_RACK                                                    0

#define     I2C1_ADDR_SDAD_E                                                  7
#define     I2C1_ADDR_SDAD_SHIFT                                              1
#define     I2C1_ADDR_SDAD_MASK                                               (0x7F<<1)

#define     I2C1_TXDAT_DA_E                                                   7
#define     I2C1_TXDAT_DA_SHIFT                                               0
#define     I2C1_TXDAT_DA_MASK                                                (0xFF<<0)

#define     I2C1_RXDAT_DA_E                                                   7
#define     I2C1_RXDAT_DA_SHIFT                                               0
#define     I2C1_RXDAT_DA_MASK                                                (0xFF<<0)

#define     I2C1_CMD_NASO                                                     31
#define     I2C1_CMD_SECL                                                     15
#define     I2C1_CMD_WRS                                                      12
#define     I2C1_CMD_MSS                                                      11
#define     I2C1_CMD_SE                                                       10
#define     I2C1_CMD_NS                                                       9
#define     I2C1_CMD_DE                                                       8
#define     I2C1_CMD_SAS_E                                                    7
#define     I2C1_CMD_SAS_SHIFT                                                5
#define     I2C1_CMD_SAS_MASK                                                 (0x7<<5)
#define     I2C1_CMD_RBE                                                      4
#define     I2C1_CMD_AS_E                                                     3
#define     I2C1_CMD_AS_SHIFT                                                 1
#define     I2C1_CMD_AS_MASK                                                  (0x7<<1)
#define     I2C1_CMD_SBE                                                      0

#define     I2C1_FIFOCTL_TFR                                                  2
#define     I2C1_FIFOCTL_RFR                                                  1
#define     I2C1_FIFOCTL_NIB                                                  0

#define     I2C1_FIFOSTAT_TFD_E                                               15
#define     I2C1_FIFOSTAT_TFD_SHIFT                                           12
#define     I2C1_FIFOSTAT_TFD_MASK                                            (0xF<<12)
#define     I2C1_FIFOSTAT_RFD_E                                               11
#define     I2C1_FIFOSTAT_RFD_SHIFT                                           8
#define     I2C1_FIFOSTAT_RFD_MASK                                            (0xF<<8)
#define     I2C1_FIFOSTAT_WRS                                                 6
#define     I2C1_FIFOSTAT_TFF                                                 5
#define     I2C1_FIFOSTAT_TFE                                                 4
#define     I2C1_FIFOSTAT_RFF                                                 3
#define     I2C1_FIFOSTAT_RFE                                                 2
#define     I2C1_FIFOSTAT_RNB                                                 1
#define     I2C1_FIFOSTAT_CECB                                                0

#define     I2C1_DATCNT_TC_E                                                  15
#define     I2C1_DATCNT_TC_SHIFT                                              0
#define     I2C1_DATCNT_TC_MASK                                               (0xFFFF<<0)

#define     I2C1_RCNT_TC_E                                                    15
#define     I2C1_RCNT_TC_SHIFT                                                0
#define     I2C1_RCNT_TC_MASK                                                 (0xFFFF<<0)

//--------------GPIO-------------------------------------------//
//--------------Register Address---------------------------------------//
#define     GPIO_BASE                                                         0x50038000
#define     GPIO0_CTL                                                         (GPIO_BASE+0x0000)
#define     GPIO1_CTL                                                         (GPIO_BASE+0x0004)
#define     GPIO2_CTL                                                         (GPIO_BASE+0x0008)
#define     GPIO3_CTL                                                         (GPIO_BASE+0x000C)
#define     GPIO4_CTL                                                         (GPIO_BASE+0x0010)
#define     GPIO5_CTL                                                         (GPIO_BASE+0x0014)
#define     GPIO6_CTL                                                         (GPIO_BASE+0x0018)
#define     GPIO7_CTL                                                         (GPIO_BASE+0x001C)
#define     GPIO8_CTL                                                         (GPIO_BASE+0x0020)
#define     GPIO9_CTL                                                         (GPIO_BASE+0x0024)
#define     GPIO10_CTL                                                        (GPIO_BASE+0x0028)
#define     GPIO11_CTL                                                        (GPIO_BASE+0x002C)
#define     GPIO12_CTL                                                        (GPIO_BASE+0x0030)
#define     GPIO13_CTL                                                        (GPIO_BASE+0x0034)
#define     GPIO14_CTL                                                        (GPIO_BASE+0x0038)
#define     GPIO15_CTL                                                        (GPIO_BASE+0x003C)
#define     GPIO16_CTL                                                        (GPIO_BASE+0x0040)
#define     GPIO17_CTL                                                        (GPIO_BASE+0x0044)
#define     GPIO18_CTL                                                        (GPIO_BASE+0x0048)
#define     GPIO19_CTL                                                        (GPIO_BASE+0x004C)
#define     GPIO20_CTL                                                        (GPIO_BASE+0x0050)
#define     GPIO21_CTL                                                        (GPIO_BASE+0x0054)
#define     GPIO22_CTL                                                        (GPIO_BASE+0x0058)
#define     GPIO23_CTL                                                        (GPIO_BASE+0x005C)
#define     GPIO24_CTL                                                        (GPIO_BASE+0x0060)
#define     GPIO25_CTL                                                        (GPIO_BASE+0x0064)
#define     GPIO26_CTL                                                        (GPIO_BASE+0x0068)
#define     GPIO27_CTL                                                        (GPIO_BASE+0x006C)
#define     GPIO28_CTL                                                        (GPIO_BASE+0x0070)
#define     GPIO29_CTL                                                        (GPIO_BASE+0x0074)
#define     GPIO30_CTL                                                        (GPIO_BASE+0x0078)
#define     GPIO32_CTL                                                        (GPIO_BASE+0x0080)
#define     GPIO33_CTL                                                        (GPIO_BASE+0x0084)
#define     GPIO34_CTL                                                        (GPIO_BASE+0x0088)
#define     GPIO35_CTL                                                        (GPIO_BASE+0x008C)
#define     SDA_SCLK_CTL                                                      (GPIO_BASE+0x00A0)
#define     GPIO_ODAT0                                                        (GPIO_BASE+0x0100)
#define     GPIO_ODAT1                                                        (GPIO_BASE+0x0104)
#define     GPIO_BSR0                                                         (GPIO_BASE+0x0110)
#define     GPIO_BSR1                                                         (GPIO_BASE+0x0114)
#define     GPIO_BRR0                                                         (GPIO_BASE+0x0120)
#define     GPIO_BRR1                                                         (GPIO_BASE+0x0124)
#define     GPIO_IDAT0                                                        (GPIO_BASE+0x0130)
#define     GPIO_IDAT1                                                        (GPIO_BASE+0x0134)
#define     GPIO_IRQ_PD0                                                      (GPIO_BASE+0x0140)
#define     GPIO_IRQ_PD1                                                      (GPIO_BASE+0x0144)
#define     JTAG_CTL                                                          (GPIO_BASE+0x0300)

//--------------Bits Location------------------------------------------//
#define     GPIO0_CTL_GPIO_INTC_MSK                                           25
#define     GPIO0_CTL_GPIO_TRIG_CTL_E                                         23
#define     GPIO0_CTL_GPIO_TRIG_CTL_SHIFT                                     21
#define     GPIO0_CTL_GPIO_TRIG_CTL_MASK                                      (0x7<<21)
#define     GPIO0_CTL_GPIO_INTCEN                                             20
#define     GPIO0_CTL_SMIT                                                    15
#define     GPIO0_CTL_PADDRV_E                                                14
#define     GPIO0_CTL_PADDRV_SHIFT                                            12
#define     GPIO0_CTL_PADDRV_MASK                                             (0x7<<12)
#define     GPIO0_CTL_GPIO50KPUEN                                             11
#define     GPIO0_CTL_GPIO100KPDEN                                            9
#define     GPIO0_CTL_GPIO10KPUEN                                             8
#define     GPIO0_CTL_GPIOINEN                                                7
#define     GPIO0_CTL_GPIOOUTEN                                               6
#define     GPIO0_CTL_MFP_E                                                   5
#define     GPIO0_CTL_MFP_SHIFT                                               0
#define     GPIO0_CTL_MFP_MASK                                                (0x3F<<0)

#define     GPIO1_CTL_GPIO_INTC_MSK                                           25
#define     GPIO1_CTL_GPIO_TRIG_CTL_E                                         23
#define     GPIO1_CTL_GPIO_TRIG_CTL_SHIFT                                     21
#define     GPIO1_CTL_GPIO_TRIG_CTL_MASK                                      (0x7<<21)
#define     GPIO1_CTL_GPIO_INTCEN                                             20
#define     GPIO1_CTL_SMIT                                                    15
#define     GPIO1_CTL_PADDRV_E                                                14
#define     GPIO1_CTL_PADDRV_SHIFT                                            12
#define     GPIO1_CTL_PADDRV_MASK                                             (0x7<<12)
#define     GPIO1_CTL_GPIO50KPUEN                                             11
#define     GPIO1_CTL_GPIO100KPDEN                                            9
#define     GPIO1_CTL_GPIO10KPUEN                                             8
#define     GPIO1_CTL_GPIOINEN                                                7
#define     GPIO1_CTL_GPIOOUTEN                                               6
#define     GPIO1_CTL_MFP_E                                                   5
#define     GPIO1_CTL_MFP_SHIFT                                               0
#define     GPIO1_CTL_MFP_MASK                                                (0x3F<<0)

#define     GPIO2_CTL_GPIO_INTC_MSK                                           25
#define     GPIO2_CTL_GPIO_TRIG_CTL_E                                         23
#define     GPIO2_CTL_GPIO_TRIG_CTL_SHIFT                                     21
#define     GPIO2_CTL_GPIO_TRIG_CTL_MASK                                      (0x7<<21)
#define     GPIO2_CTL_GPIO_INTCEN                                             20
#define     GPIO2_CTL_SMIT                                                    15
#define     GPIO2_CTL_PADDRV_E                                                14
#define     GPIO2_CTL_PADDRV_SHIFT                                            12
#define     GPIO2_CTL_PADDRV_MASK                                             (0x7<<12)
#define     GPIO2_CTL_GPIO50KPUEN                                             11
#define     GPIO2_CTL_GPIO100KPDEN                                            9
#define     GPIO2_CTL_GPIO10KPUEN                                             8
#define     GPIO2_CTL_GPIOINEN                                                7
#define     GPIO2_CTL_GPIOOUTEN                                               6
#define     GPIO2_CTL_MFP_E                                                   5
#define     GPIO2_CTL_MFP_SHIFT                                               0
#define     GPIO2_CTL_MFP_MASK                                                (0x3F<<0)

#define     GPIO3_CTL_GPIO_INTC_MSK                                           25
#define     GPIO3_CTL_GPIO_TRIG_CTL_E                                         23
#define     GPIO3_CTL_GPIO_TRIG_CTL_SHIFT                                     21
#define     GPIO3_CTL_GPIO_TRIG_CTL_MASK                                      (0x7<<21)
#define     GPIO3_CTL_GPIO_INTCEN                                             20
#define     GPIO3_CTL_SMIT                                                    15
#define     GPIO3_CTL_PADDRV_E                                                14
#define     GPIO3_CTL_PADDRV_SHIFT                                            12
#define     GPIO3_CTL_PADDRV_MASK                                             (0x7<<12)
#define     GPIO3_CTL_GPIO50KPUEN                                             11
#define     GPIO3_CTL_GPIO100KPDEN                                            9
#define     GPIO3_CTL_GPIO10KPUEN                                             8
#define     GPIO3_CTL_GPIOINEN                                                7
#define     GPIO3_CTL_GPIOOUTEN                                               6
#define     GPIO3_CTL_MFP_E                                                   5
#define     GPIO3_CTL_MFP_SHIFT                                               0
#define     GPIO3_CTL_MFP_MASK                                                (0x3F<<0)

#define     GPIO4_CTL_GPIO_INTC_MSK                                           25
#define     GPIO4_CTL_GPIO_TRIG_CTL_E                                         23
#define     GPIO4_CTL_GPIO_TRIG_CTL_SHIFT                                     21
#define     GPIO4_CTL_GPIO_TRIG_CTL_MASK                                      (0x7<<21)
#define     GPIO4_CTL_GPIO_INTCEN                                             20
#define     GPIO4_CTL_SMIT                                                    15
#define     GPIO4_CTL_PADDRV_E                                                14
#define     GPIO4_CTL_PADDRV_SHIFT                                            12
#define     GPIO4_CTL_PADDRV_MASK                                             (0x7<<12)
#define     GPIO4_CTL_GPIO50KPUEN                                             11
#define     GPIO4_CTL_GPIO100KPDEN                                            9
#define     GPIO4_CTL_GPIO10KPUEN                                             8
#define     GPIO4_CTL_GPIOINEN                                                7
#define     GPIO4_CTL_GPIOOUTEN                                               6
#define     GPIO4_CTL_MFP_E                                                   5
#define     GPIO4_CTL_MFP_SHIFT                                               0
#define     GPIO4_CTL_MFP_MASK                                                (0x3F<<0)

#define     GPIO5_CTL_GPIO_INTC_MSK                                           25
#define     GPIO5_CTL_GPIO_TRIG_CTL_E                                         23
#define     GPIO5_CTL_GPIO_TRIG_CTL_SHIFT                                     21
#define     GPIO5_CTL_GPIO_TRIG_CTL_MASK                                      (0x7<<21)
#define     GPIO5_CTL_GPIO_INTCEN                                             20
#define     GPIO5_CTL_SMIT                                                    15
#define     GPIO5_CTL_PADDRV_E                                                14
#define     GPIO5_CTL_PADDRV_SHIFT                                            12
#define     GPIO5_CTL_PADDRV_MASK                                             (0x7<<12)
#define     GPIO5_CTL_GPIO50KPUEN                                             11
#define     GPIO5_CTL_GPIO100KPDEN                                            9
#define     GPIO5_CTL_GPIO10KPUEN                                             8
#define     GPIO5_CTL_GPIOINEN                                                7
#define     GPIO5_CTL_GPIOOUTEN                                               6
#define     GPIO5_CTL_MFP_E                                                   5
#define     GPIO5_CTL_MFP_SHIFT                                               0
#define     GPIO5_CTL_MFP_MASK                                                (0x3F<<0)

#define     GPIO6_CTL_GPIO_INTC_MSK                                           25
#define     GPIO6_CTL_GPIO_TRIG_CTL_E                                         23
#define     GPIO6_CTL_GPIO_TRIG_CTL_SHIFT                                     21
#define     GPIO6_CTL_GPIO_TRIG_CTL_MASK                                      (0x7<<21)
#define     GPIO6_CTL_GPIO_INTCEN                                             20
#define     GPIO6_CTL_SMIT                                                    15
#define     GPIO6_CTL_PADDRV_E                                                14
#define     GPIO6_CTL_PADDRV_SHIFT                                            12
#define     GPIO6_CTL_PADDRV_MASK                                             (0x7<<12)
#define     GPIO6_CTL_GPIO50KPUEN                                             11
#define     GPIO6_CTL_GPIO100KPDEN                                            9
#define     GPIO6_CTL_GPIO10KPUEN                                             8
#define     GPIO6_CTL_GPIOINEN                                                7
#define     GPIO6_CTL_GPIOOUTEN                                               6
#define     GPIO6_CTL_MFP_E                                                   5
#define     GPIO6_CTL_MFP_SHIFT                                               0
#define     GPIO6_CTL_MFP_MASK                                                (0x3F<<0)

#define     GPIO7_CTL_GPIO_INTC_MSK                                           25
#define     GPIO7_CTL_GPIO_TRIG_CTL_E                                         23
#define     GPIO7_CTL_GPIO_TRIG_CTL_SHIFT                                     21
#define     GPIO7_CTL_GPIO_TRIG_CTL_MASK                                      (0x7<<21)
#define     GPIO7_CTL_GPIO_INTCEN                                             20
#define     GPIO7_CTL_SMIT                                                    15
#define     GPIO7_CTL_PADDRV_E                                                14
#define     GPIO7_CTL_PADDRV_SHIFT                                            12
#define     GPIO7_CTL_PADDRV_MASK                                             (0x7<<12)
#define     GPIO7_CTL_GPIO50KPUEN                                             11
#define     GPIO7_CTL_GPIO100KPDEN                                            9
#define     GPIO7_CTL_GPIO10KPUEN                                             8
#define     GPIO7_CTL_GPIOINEN                                                7
#define     GPIO7_CTL_GPIOOUTEN                                               6
#define     GPIO7_CTL_MFP_E                                                   5
#define     GPIO7_CTL_MFP_SHIFT                                               0
#define     GPIO7_CTL_MFP_MASK                                                (0x3F<<0)

#define     GPIO8_CTL_GPIO_INTC_MSK                                           25
#define     GPIO8_CTL_GPIO_TRIG_CTL_E                                         23
#define     GPIO8_CTL_GPIO_TRIG_CTL_SHIFT                                     21
#define     GPIO8_CTL_GPIO_TRIG_CTL_MASK                                      (0x7<<21)
#define     GPIO8_CTL_GPIO_INTCEN                                             20
#define     GPIO8_CTL_SMIT                                                    15
#define     GPIO8_CTL_PADDRV_E                                                14
#define     GPIO8_CTL_PADDRV_SHIFT                                            12
#define     GPIO8_CTL_PADDRV_MASK                                             (0x7<<12)
#define     GPIO8_CTL_GPIO50KPUEN                                             11
#define     GPIO8_CTL_GPIO100KPDEN                                            9
#define     GPIO8_CTL_GPIO10KPUEN                                             8
#define     GPIO8_CTL_GPIOINEN                                                7
#define     GPIO8_CTL_GPIOOUTEN                                               6
#define     GPIO8_CTL_MFP_E                                                   5
#define     GPIO8_CTL_MFP_SHIFT                                               0
#define     GPIO8_CTL_MFP_MASK                                                (0x3F<<0)

#define     GPIO9_CTL_GPIO_INTC_MSK                                           25
#define     GPIO9_CTL_GPIO_TRIG_CTL_E                                         23
#define     GPIO9_CTL_GPIO_TRIG_CTL_SHIFT                                     21
#define     GPIO9_CTL_GPIO_TRIG_CTL_MASK                                      (0x7<<21)
#define     GPIO9_CTL_GPIO_INTCEN                                             20
#define     GPIO9_CTL_SMIT                                                    15
#define     GPIO9_CTL_PADDRV_E                                                14
#define     GPIO9_CTL_PADDRV_SHIFT                                            12
#define     GPIO9_CTL_PADDRV_MASK                                             (0x7<<12)
#define     GPIO9_CTL_GPIO50KPUEN                                             11
#define     GPIO9_CTL_GPIO100KPDEN                                            9
#define     GPIO9_CTL_GPIO10KPUEN                                             8
#define     GPIO9_CTL_GPIOINEN                                                7
#define     GPIO9_CTL_GPIOOUTEN                                               6
#define     GPIO9_CTL_MFP_E                                                   5
#define     GPIO9_CTL_MFP_SHIFT                                               0
#define     GPIO9_CTL_MFP_MASK                                                (0x3F<<0)

#define     GPIO10_CTL_GPIO_INTC_MSK                                           25
#define     GPIO10_CTL_GPIO_TRIG_CTL_E                                         23
#define     GPIO10_CTL_GPIO_TRIG_CTL_SHIFT                                     21
#define     GPIO10_CTL_GPIO_TRIG_CTL_MASK                                      (0x7<<21)
#define     GPIO10_CTL_GPIO_INTCEN                                             20
#define     GPIO10_CTL_SMIT                                                    15
#define     GPIO10_CTL_PADDRV_E                                                14
#define     GPIO10_CTL_PADDRV_SHIFT                                            12
#define     GPIO10_CTL_PADDRV_MASK                                             (0x7<<12)
#define     GPIO10_CTL_GPIO50KPUEN                                             11
#define     GPIO10_CTL_GPIO100KPDEN                                            9
#define     GPIO10_CTL_GPIO10KPUEN                                             8
#define     GPIO10_CTL_GPIOINEN                                                7
#define     GPIO10_CTL_GPIOOUTEN                                               6
#define     GPIO10_CTL_MFP_E                                                   5
#define     GPIO10_CTL_MFP_SHIFT                                               0
#define     GPIO10_CTL_MFP_MASK                                                (0x3F<<0)

#define     GPIO11_CTL_GPIO_INTC_MSK                                           25
#define     GPIO11_CTL_GPIO_TRIG_CTL_E                                         23
#define     GPIO11_CTL_GPIO_TRIG_CTL_SHIFT                                     21
#define     GPIO11_CTL_GPIO_TRIG_CTL_MASK                                      (0x7<<21)
#define     GPIO11_CTL_GPIO_INTCEN                                             20
#define     GPIO11_CTL_SMIT                                                    15
#define     GPIO11_CTL_PADDRV_E                                                14
#define     GPIO11_CTL_PADDRV_SHIFT                                            12
#define     GPIO11_CTL_PADDRV_MASK                                             (0x7<<12)
#define     GPIO11_CTL_GPIO50KPUEN                                             11
#define     GPIO11_CTL_GPIO100KPDEN                                            9
#define     GPIO11_CTL_GPIO10KPUEN                                             8
#define     GPIO11_CTL_GPIOINEN                                                7
#define     GPIO11_CTL_GPIOOUTEN                                               6
#define     GPIO11_CTL_MFP_E                                                   5
#define     GPIO11_CTL_MFP_SHIFT                                               0
#define     GPIO11_CTL_MFP_MASK                                                (0x3F<<0)

#define     GPIO12_CTL_GPIO_INTC_MSK                                           25
#define     GPIO12_CTL_GPIO_TRIG_CTL_E                                         23
#define     GPIO12_CTL_GPIO_TRIG_CTL_SHIFT                                     21
#define     GPIO12_CTL_GPIO_TRIG_CTL_MASK                                      (0x7<<21)
#define     GPIO12_CTL_GPIO_INTCEN                                             20
#define     GPIO12_CTL_SMIT                                                    15
#define     GPIO12_CTL_PADDRV_E                                                14
#define     GPIO12_CTL_PADDRV_SHIFT                                            12
#define     GPIO12_CTL_PADDRV_MASK                                             (0x7<<12)
#define     GPIO12_CTL_GPIO50KPUEN                                             11
#define     GPIO12_CTL_GPIO100KPDEN                                            9
#define     GPIO12_CTL_GPIO10KPUEN                                             8
#define     GPIO12_CTL_GPIOINEN                                                7
#define     GPIO12_CTL_GPIOOUTEN                                               6
#define     GPIO12_CTL_MFP_E                                                   5
#define     GPIO12_CTL_MFP_SHIFT                                               0
#define     GPIO12_CTL_MFP_MASK                                                (0x3F<<0)

#define     GPIO13_CTL_GPIO_INTC_MSK                                           25
#define     GPIO13_CTL_GPIO_TRIG_CTL_E                                         23
#define     GPIO13_CTL_GPIO_TRIG_CTL_SHIFT                                     21
#define     GPIO13_CTL_GPIO_TRIG_CTL_MASK                                      (0x7<<21)
#define     GPIO13_CTL_GPIO_INTCEN                                             20
#define     GPIO13_CTL_SMIT                                                    15
#define     GPIO13_CTL_PADDRV_E                                                14
#define     GPIO13_CTL_PADDRV_SHIFT                                            12
#define     GPIO13_CTL_PADDRV_MASK                                             (0x7<<12)
#define     GPIO13_CTL_GPIO50KPUEN                                             11
#define     GPIO13_CTL_GPIO100KPDEN                                            9
#define     GPIO13_CTL_GPIO10KPUEN                                             8
#define     GPIO13_CTL_GPIOINEN                                                7
#define     GPIO13_CTL_GPIOOUTEN                                               6
#define     GPIO13_CTL_MFP_E                                                   5
#define     GPIO13_CTL_MFP_SHIFT                                               0
#define     GPIO13_CTL_MFP_MASK                                                (0x3F<<0)

#define     GPIO14_CTL_GPIO_INTC_MSK                                           25
#define     GPIO14_CTL_GPIO_TRIG_CTL_E                                         23
#define     GPIO14_CTL_GPIO_TRIG_CTL_SHIFT                                     21
#define     GPIO14_CTL_GPIO_TRIG_CTL_MASK                                      (0x7<<21)
#define     GPIO14_CTL_GPIO_INTCEN                                             20
#define     GPIO14_CTL_SMIT                                                    15
#define     GPIO14_CTL_PADDRV_E                                                14
#define     GPIO14_CTL_PADDRV_SHIFT                                            12
#define     GPIO14_CTL_PADDRV_MASK                                             (0x7<<12)
#define     GPIO14_CTL_GPIO50KPUEN                                             11
#define     GPIO14_CTL_GPIO100KPDEN                                            9
#define     GPIO14_CTL_GPIO10KPUEN                                             8
#define     GPIO14_CTL_GPIOINEN                                                7
#define     GPIO14_CTL_GPIOOUTEN                                               6
#define     GPIO14_CTL_MFP_E                                                   5
#define     GPIO14_CTL_MFP_SHIFT                                               0
#define     GPIO14_CTL_MFP_MASK                                                (0x3F<<0)

#define     GPIO15_CTL_GPIO_INTC_MSK                                           25
#define     GPIO15_CTL_GPIO_TRIG_CTL_E                                         23
#define     GPIO15_CTL_GPIO_TRIG_CTL_SHIFT                                     21
#define     GPIO15_CTL_GPIO_TRIG_CTL_MASK                                      (0x7<<21)
#define     GPIO15_CTL_GPIO_INTCEN                                             20
#define     GPIO15_CTL_SMIT                                                    15
#define     GPIO15_CTL_PADDRV_E                                                14
#define     GPIO15_CTL_PADDRV_SHIFT                                            12
#define     GPIO15_CTL_PADDRV_MASK                                             (0x7<<12)
#define     GPIO15_CTL_GPIO50KPUEN                                             11
#define     GPIO15_CTL_GPIO100KPDEN                                            9
#define     GPIO15_CTL_GPIO10KPUEN                                             8
#define     GPIO15_CTL_GPIOINEN                                                7
#define     GPIO15_CTL_GPIOOUTEN                                               6
#define     GPIO15_CTL_MFP_E                                                   5
#define     GPIO15_CTL_MFP_SHIFT                                               0
#define     GPIO15_CTL_MFP_MASK                                                (0x3F<<0)

#define     GPIO16_CTL_GPIO_INTC_MSK                                           25
#define     GPIO16_CTL_GPIO_TRIG_CTL_E                                         23
#define     GPIO16_CTL_GPIO_TRIG_CTL_SHIFT                                     21
#define     GPIO16_CTL_GPIO_TRIG_CTL_MASK                                      (0x7<<21)
#define     GPIO16_CTL_GPIO_INTCEN                                             20
#define     GPIO16_CTL_SMIT                                                    15
#define     GPIO16_CTL_PADDRV_E                                                14
#define     GPIO16_CTL_PADDRV_SHIFT                                            12
#define     GPIO16_CTL_PADDRV_MASK                                             (0x7<<12)
#define     GPIO16_CTL_GPIO50KPUEN                                             11
#define     GPIO16_CTL_GPIO100KPDEN                                            9
#define     GPIO16_CTL_GPIO10KPUEN                                             8
#define     GPIO16_CTL_GPIOINEN                                                7
#define     GPIO16_CTL_GPIOOUTEN                                               6
#define     GPIO16_CTL_MFP_E                                                   5
#define     GPIO16_CTL_MFP_SHIFT                                               0
#define     GPIO16_CTL_MFP_MASK                                                (0x3F<<0)

#define     GPIO17_CTL_GPIO_INTC_MSK                                           25
#define     GPIO17_CTL_GPIO_TRIG_CTL_E                                         23
#define     GPIO17_CTL_GPIO_TRIG_CTL_SHIFT                                     21
#define     GPIO17_CTL_GPIO_TRIG_CTL_MASK                                      (0x7<<21)
#define     GPIO17_CTL_GPIO_INTCEN                                             20
#define     GPIO17_CTL_SMIT                                                    15
#define     GPIO17_CTL_PADDRV_E                                                14
#define     GPIO17_CTL_PADDRV_SHIFT                                            12
#define     GPIO17_CTL_PADDRV_MASK                                             (0x7<<12)
#define     GPIO17_CTL_GPIO50KPUEN                                             11
#define     GPIO17_CTL_GPIO100KPDEN                                            9
#define     GPIO17_CTL_GPIO10KPUEN                                             8
#define     GPIO17_CTL_GPIOINEN                                                7
#define     GPIO17_CTL_GPIOOUTEN                                               6
#define     GPIO17_CTL_MFP_E                                                   5
#define     GPIO17_CTL_MFP_SHIFT                                               0
#define     GPIO17_CTL_MFP_MASK                                                (0x3F<<0)

#define     GPIO18_CTL_GPIO_INTC_MSK                                           25
#define     GPIO18_CTL_GPIO_TRIG_CTL_E                                         23
#define     GPIO18_CTL_GPIO_TRIG_CTL_SHIFT                                     21
#define     GPIO18_CTL_GPIO_TRIG_CTL_MASK                                      (0x7<<21)
#define     GPIO18_CTL_GPIO_INTCEN                                             20
#define     GPIO18_CTL_SMIT                                                    15
#define     GPIO18_CTL_PADDRV_E                                                14
#define     GPIO18_CTL_PADDRV_SHIFT                                            12
#define     GPIO18_CTL_PADDRV_MASK                                             (0x7<<12)
#define     GPIO18_CTL_GPIO50KPUEN                                             11
#define     GPIO18_CTL_GPIO100KPDEN                                            9
#define     GPIO18_CTL_GPIO10KPUEN                                             8
#define     GPIO18_CTL_GPIOINEN                                                7
#define     GPIO18_CTL_GPIOOUTEN                                               6
#define     GPIO18_CTL_MFP_E                                                   5
#define     GPIO18_CTL_MFP_SHIFT                                               0
#define     GPIO18_CTL_MFP_MASK                                                (0x3F<<0)

#define     GPIO19_CTL_GPIO_INTC_MSK                                           25
#define     GPIO19_CTL_GPIO_TRIG_CTL_E                                         23
#define     GPIO19_CTL_GPIO_TRIG_CTL_SHIFT                                     21
#define     GPIO19_CTL_GPIO_TRIG_CTL_MASK                                      (0x7<<21)
#define     GPIO19_CTL_GPIO_INTCEN                                             20
#define     GPIO19_CTL_SMIT                                                    15
#define     GPIO19_CTL_PADDRV_E                                                14
#define     GPIO19_CTL_PADDRV_SHIFT                                            12
#define     GPIO19_CTL_PADDRV_MASK                                             (0x7<<12)
#define     GPIO19_CTL_GPIO50KPUEN                                             11
#define     GPIO19_CTL_GPIO100KPDEN                                            9
#define     GPIO19_CTL_GPIO10KPUEN                                             8
#define     GPIO19_CTL_GPIOINEN                                                7
#define     GPIO19_CTL_GPIOOUTEN                                               6
#define     GPIO19_CTL_MFP_E                                                   5
#define     GPIO19_CTL_MFP_SHIFT                                               0
#define     GPIO19_CTL_MFP_MASK                                                (0x3F<<0)

#define     GPIO20_CTL_GPIO_INTC_MSK                                           25
#define     GPIO20_CTL_GPIO_TRIG_CTL_E                                         23
#define     GPIO20_CTL_GPIO_TRIG_CTL_SHIFT                                     21
#define     GPIO20_CTL_GPIO_TRIG_CTL_MASK                                      (0x7<<21)
#define     GPIO20_CTL_GPIO_INTCEN                                             20
#define     GPIO20_CTL_SMIT                                                    15
#define     GPIO20_CTL_PADDRV_E                                                14
#define     GPIO20_CTL_PADDRV_SHIFT                                            12
#define     GPIO20_CTL_PADDRV_MASK                                             (0x7<<12)
#define     GPIO20_CTL_GPIO50KPUEN                                             11
#define     GPIO20_CTL_GPIO100KPDEN                                            9
#define     GPIO20_CTL_GPIO10KPUEN                                             8
#define     GPIO20_CTL_GPIOINEN                                                7
#define     GPIO20_CTL_GPIOOUTEN                                               6
#define     GPIO20_CTL_MFP_E                                                   5
#define     GPIO20_CTL_MFP_SHIFT                                               0
#define     GPIO20_CTL_MFP_MASK                                                (0x3F<<0)

#define     GPIO21_CTL_GPIO_INTC_MSK                                           25
#define     GPIO21_CTL_GPIO_TRIG_CTL_E                                         23
#define     GPIO21_CTL_GPIO_TRIG_CTL_SHIFT                                     21
#define     GPIO21_CTL_GPIO_TRIG_CTL_MASK                                      (0x7<<21)
#define     GPIO21_CTL_GPIO_INTCEN                                             20
#define     GPIO21_CTL_SMIT                                                    15
#define     GPIO21_CTL_PADDRV_E                                                14
#define     GPIO21_CTL_PADDRV_SHIFT                                            12
#define     GPIO21_CTL_PADDRV_MASK                                             (0x7<<12)
#define     GPIO21_CTL_GPIO50KPUEN                                             11
#define     GPIO21_CTL_GPIO100KPDEN                                            9
#define     GPIO21_CTL_GPIO10KPUEN                                             8
#define     GPIO21_CTL_GPIOINEN                                                7
#define     GPIO21_CTL_GPIOOUTEN                                               6
#define     GPIO21_CTL_MFP_E                                                   5
#define     GPIO21_CTL_MFP_SHIFT                                               0
#define     GPIO21_CTL_MFP_MASK                                                (0x3F<<0)

#define     GPIO22_CTL_GPIO_INTC_MSK                                           25
#define     GPIO22_CTL_GPIO_TRIG_CTL_E                                         23
#define     GPIO22_CTL_GPIO_TRIG_CTL_SHIFT                                     21
#define     GPIO22_CTL_GPIO_TRIG_CTL_MASK                                      (0x7<<21)
#define     GPIO22_CTL_GPIO_INTCEN                                             20
#define     GPIO22_CTL_SMIT                                                    15
#define     GPIO22_CTL_PADDRV_E                                                14
#define     GPIO22_CTL_PADDRV_SHIFT                                            12
#define     GPIO22_CTL_PADDRV_MASK                                             (0x7<<12)
#define     GPIO22_CTL_GPIO50KPUEN                                             11
#define     GPIO22_CTL_GPIO100KPDEN                                            9
#define     GPIO22_CTL_GPIO10KPUEN                                             8
#define     GPIO22_CTL_GPIOINEN                                                7
#define     GPIO22_CTL_GPIOOUTEN                                               6
#define     GPIO22_CTL_MFP_E                                                   5
#define     GPIO22_CTL_MFP_SHIFT                                               0
#define     GPIO22_CTL_MFP_MASK                                                (0x3F<<0)

#define     GPIO23_CTL_GPIO_INTC_MSK                                           25
#define     GPIO23_CTL_GPIO_TRIG_CTL_E                                         23
#define     GPIO23_CTL_GPIO_TRIG_CTL_SHIFT                                     21
#define     GPIO23_CTL_GPIO_TRIG_CTL_MASK                                      (0x7<<21)
#define     GPIO23_CTL_GPIO_INTCEN                                             20
#define     GPIO23_CTL_SMIT                                                    15
#define     GPIO23_CTL_PADDRV_E                                                14
#define     GPIO23_CTL_PADDRV_SHIFT                                            12
#define     GPIO23_CTL_PADDRV_MASK                                             (0x7<<12)
#define     GPIO23_CTL_GPIO50KPUEN                                             11
#define     GPIO23_CTL_GPIO100KPDEN                                            9
#define     GPIO23_CTL_GPIO10KPUEN                                             8
#define     GPIO23_CTL_GPIOINEN                                                7
#define     GPIO23_CTL_GPIOOUTEN                                               6
#define     GPIO23_CTL_MFP_E                                                   5
#define     GPIO23_CTL_MFP_SHIFT                                               0
#define     GPIO23_CTL_MFP_MASK                                                (0x3F<<0)

#define     GPIO24_CTL_GPIO_INTC_MSK                                           25
#define     GPIO24_CTL_GPIO_TRIG_CTL_E                                         23
#define     GPIO24_CTL_GPIO_TRIG_CTL_SHIFT                                     21
#define     GPIO24_CTL_GPIO_TRIG_CTL_MASK                                      (0x7<<21)
#define     GPIO24_CTL_GPIO_INTCEN                                             20
#define     GPIO24_CTL_SMIT                                                    15
#define     GPIO24_CTL_PADDRV_E                                                14
#define     GPIO24_CTL_PADDRV_SHIFT                                            12
#define     GPIO24_CTL_PADDRV_MASK                                             (0x7<<12)
#define     GPIO24_CTL_GPIO50KPUEN                                             11
#define     GPIO24_CTL_GPIO100KPDEN                                            9
#define     GPIO24_CTL_GPIO10KPUEN                                             8
#define     GPIO24_CTL_GPIOINEN                                                7
#define     GPIO24_CTL_GPIOOUTEN                                               6
#define     GPIO24_CTL_MFP_E                                                   5
#define     GPIO24_CTL_MFP_SHIFT                                               0
#define     GPIO24_CTL_MFP_MASK                                                (0x3F<<0)

#define     GPIO25_CTL_GPIO_INTC_MSK                                           25
#define     GPIO25_CTL_GPIO_TRIG_CTL_E                                         23
#define     GPIO25_CTL_GPIO_TRIG_CTL_SHIFT                                     21
#define     GPIO25_CTL_GPIO_TRIG_CTL_MASK                                      (0x7<<21)
#define     GPIO25_CTL_GPIO_INTCEN                                             20
#define     GPIO25_CTL_SMIT                                                    15
#define     GPIO25_CTL_PADDRV_E                                                14
#define     GPIO25_CTL_PADDRV_SHIFT                                            12
#define     GPIO25_CTL_PADDRV_MASK                                             (0x7<<12)
#define     GPIO25_CTL_GPIO50KPUEN                                             11
#define     GPIO25_CTL_GPIO100KPDEN                                            9
#define     GPIO25_CTL_GPIO10KPUEN                                             8
#define     GPIO25_CTL_GPIOINEN                                                7
#define     GPIO25_CTL_GPIOOUTEN                                               6
#define     GPIO25_CTL_MFP_E                                                   5
#define     GPIO25_CTL_MFP_SHIFT                                               0
#define     GPIO25_CTL_MFP_MASK                                                (0x3F<<0)

#define     GPIO26_CTL_GPIO_INTC_MSK                                           25
#define     GPIO26_CTL_GPIO_TRIG_CTL_E                                         23
#define     GPIO26_CTL_GPIO_TRIG_CTL_SHIFT                                     21
#define     GPIO26_CTL_GPIO_TRIG_CTL_MASK                                      (0x7<<21)
#define     GPIO26_CTL_GPIO_INTCEN                                             20
#define     GPIO26_CTL_SMIT                                                    15
#define     GPIO26_CTL_PADDRV_E                                                14
#define     GPIO26_CTL_PADDRV_SHIFT                                            12
#define     GPIO26_CTL_PADDRV_MASK                                             (0x7<<12)
#define     GPIO26_CTL_GPIO50KPUEN                                             11
#define     GPIO26_CTL_GPIO100KPDEN                                            9
#define     GPIO26_CTL_GPIO10KPUEN                                             8
#define     GPIO26_CTL_GPIOINEN                                                7
#define     GPIO26_CTL_GPIOOUTEN                                               6
#define     GPIO26_CTL_MFP_E                                                   5
#define     GPIO26_CTL_MFP_SHIFT                                               0
#define     GPIO26_CTL_MFP_MASK                                                (0x3F<<0)

#define     GPIO27_CTL_GPIO_INTC_MSK                                           25
#define     GPIO27_CTL_GPIO_TRIG_CTL_E                                         23
#define     GPIO27_CTL_GPIO_TRIG_CTL_SHIFT                                     21
#define     GPIO27_CTL_GPIO_TRIG_CTL_MASK                                      (0x7<<21)
#define     GPIO27_CTL_GPIO_INTCEN                                             20
#define     GPIO27_CTL_SMIT                                                    15
#define     GPIO27_CTL_PADDRV_E                                                14
#define     GPIO27_CTL_PADDRV_SHIFT                                            12
#define     GPIO27_CTL_PADDRV_MASK                                             (0x7<<12)
#define     GPIO27_CTL_GPIO50KPUEN                                             11
#define     GPIO27_CTL_GPIO100KPDEN                                            9
#define     GPIO27_CTL_GPIO10KPUEN                                             8
#define     GPIO27_CTL_GPIOINEN                                                7
#define     GPIO27_CTL_GPIOOUTEN                                               6
#define     GPIO27_CTL_MFP_E                                                   5
#define     GPIO27_CTL_MFP_SHIFT                                               0
#define     GPIO27_CTL_MFP_MASK                                                (0x3F<<0)

#define     GPIO28_CTL_GPIO_INTC_MSK                                           25
#define     GPIO28_CTL_GPIO_TRIG_CTL_E                                         23
#define     GPIO28_CTL_GPIO_TRIG_CTL_SHIFT                                     21
#define     GPIO28_CTL_GPIO_TRIG_CTL_MASK                                      (0x7<<21)
#define     GPIO28_CTL_GPIO_INTCEN                                             20
#define     GPIO28_CTL_SMIT                                                    15
#define     GPIO28_CTL_PADDRV_E                                                14
#define     GPIO28_CTL_PADDRV_SHIFT                                            12
#define     GPIO28_CTL_PADDRV_MASK                                             (0x7<<12)
#define     GPIO28_CTL_GPIO50KPUEN                                             11
#define     GPIO28_CTL_GPIO100KPDEN                                            9
#define     GPIO28_CTL_GPIO10KPUEN                                             8
#define     GPIO28_CTL_GPIOINEN                                                7
#define     GPIO28_CTL_GPIOOUTEN                                               6
#define     GPIO28_CTL_MFP_E                                                   5
#define     GPIO28_CTL_MFP_SHIFT                                               0
#define     GPIO28_CTL_MFP_MASK                                                (0x3F<<0)

#define     GPIO29_CTL_GPIO_INTC_MSK                                           25
#define     GPIO29_CTL_GPIO_TRIG_CTL_E                                         23
#define     GPIO29_CTL_GPIO_TRIG_CTL_SHIFT                                     21
#define     GPIO29_CTL_GPIO_TRIG_CTL_MASK                                      (0x7<<21)
#define     GPIO29_CTL_GPIO_INTCEN                                             20
#define     GPIO29_CTL_SMIT                                                    15
#define     GPIO29_CTL_PADDRV_E                                                14
#define     GPIO29_CTL_PADDRV_SHIFT                                            12
#define     GPIO29_CTL_PADDRV_MASK                                             (0x7<<12)
#define     GPIO29_CTL_GPIO50KPUEN                                             11
#define     GPIO29_CTL_GPIO100KPDEN                                            9
#define     GPIO29_CTL_GPIO10KPUEN                                             8
#define     GPIO29_CTL_GPIOINEN                                                7
#define     GPIO29_CTL_GPIOOUTEN                                               6
#define     GPIO29_CTL_MFP_E                                                   5
#define     GPIO29_CTL_MFP_SHIFT                                               0
#define     GPIO29_CTL_MFP_MASK                                                (0x3F<<0)

#define     GPIO30_CTL_GPIO_INTC_MSK                                           25
#define     GPIO30_CTL_GPIO_TRIG_CTL_E                                         23
#define     GPIO30_CTL_GPIO_TRIG_CTL_SHIFT                                     21
#define     GPIO30_CTL_GPIO_TRIG_CTL_MASK                                      (0x7<<21)
#define     GPIO30_CTL_GPIO_INTCEN                                             20
#define     GPIO30_CTL_SMIT                                                    15
#define     GPIO30_CTL_PADDRV_E                                                14
#define     GPIO30_CTL_PADDRV_SHIFT                                            12
#define     GPIO30_CTL_PADDRV_MASK                                             (0x7<<12)
#define     GPIO30_CTL_GPIO50KPUEN                                             11
#define     GPIO30_CTL_GPIO100KPDEN                                            9
#define     GPIO30_CTL_GPIO10KPUEN                                             8
#define     GPIO30_CTL_GPIOINEN                                                7
#define     GPIO30_CTL_GPIOOUTEN                                               6
#define     GPIO30_CTL_MFP_E                                                   5
#define     GPIO30_CTL_MFP_SHIFT                                               0
#define     GPIO30_CTL_MFP_MASK                                                (0x3F<<0)

#define     GPIO32_CTL_GPIO_INTC_MSK                                           25
#define     GPIO32_CTL_GPIO_TRIG_CTL_E                                         23
#define     GPIO32_CTL_GPIO_TRIG_CTL_SHIFT                                     21
#define     GPIO32_CTL_GPIO_TRIG_CTL_MASK                                      (0x7<<21)
#define     GPIO32_CTL_GPIO_INTCEN                                             20
#define     GPIO32_CTL_SMIT                                                    15
#define     GPIO32_CTL_PADDRV_E                                                14
#define     GPIO32_CTL_PADDRV_SHIFT                                            12
#define     GPIO32_CTL_PADDRV_MASK                                             (0x7<<12)
#define     GPIO32_CTL_GPIO50KPUEN                                             11
#define     GPIO32_CTL_GPIO100KPDEN                                            9
#define     GPIO32_CTL_GPIO10KPUEN                                             8
#define     GPIO32_CTL_GPIOINEN                                                7
#define     GPIO32_CTL_GPIOOUTEN                                               6
#define     GPIO32_CTL_MFP_E                                                   5
#define     GPIO32_CTL_MFP_SHIFT                                               0
#define     GPIO32_CTL_MFP_MASK                                                (0x3F<<0)

#define     GPIO33_CTL_GPIO_INTC_MSK                                           25
#define     GPIO33_CTL_GPIO_TRIG_CTL_E                                         23
#define     GPIO33_CTL_GPIO_TRIG_CTL_SHIFT                                     21
#define     GPIO33_CTL_GPIO_TRIG_CTL_MASK                                      (0x7<<21)
#define     GPIO33_CTL_GPIO_INTCEN                                             20
#define     GPIO33_CTL_SMIT                                                    15
#define     GPIO33_CTL_PADDRV_E                                                14
#define     GPIO33_CTL_PADDRV_SHIFT                                            12
#define     GPIO33_CTL_PADDRV_MASK                                             (0x7<<12)
#define     GPIO33_CTL_GPIO50KPUEN                                             11
#define     GPIO33_CTL_GPIO100KPDEN                                            9
#define     GPIO33_CTL_GPIO10KPUEN                                             8
#define     GPIO33_CTL_GPIOINEN                                                7
#define     GPIO33_CTL_GPIOOUTEN                                               6
#define     GPIO33_CTL_MFP_E                                                   5
#define     GPIO33_CTL_MFP_SHIFT                                               0
#define     GPIO33_CTL_MFP_MASK                                                (0x3F<<0)

#define     GPIO34_CTL_GPIO_INTC_MSK                                           25
#define     GPIO34_CTL_GPIO_TRIG_CTL_E                                         23
#define     GPIO34_CTL_GPIO_TRIG_CTL_SHIFT                                     21
#define     GPIO34_CTL_GPIO_TRIG_CTL_MASK                                      (0x7<<21)
#define     GPIO34_CTL_GPIO_INTCEN                                             20
#define     GPIO34_CTL_SMIT                                                    15
#define     GPIO34_CTL_PADDRV_E                                                14
#define     GPIO34_CTL_PADDRV_SHIFT                                            12
#define     GPIO34_CTL_PADDRV_MASK                                             (0x7<<12)
#define     GPIO34_CTL_GPIO50KPUEN                                             11
#define     GPIO34_CTL_GPIO100KPDEN                                            9
#define     GPIO34_CTL_GPIO10KPUEN                                             8
#define     GPIO34_CTL_GPIOINEN                                                7
#define     GPIO34_CTL_GPIOOUTEN                                               6
#define     GPIO34_CTL_MFP_E                                                   5
#define     GPIO34_CTL_MFP_SHIFT                                               0
#define     GPIO34_CTL_MFP_MASK                                                (0x3F<<0)

#define     GPIO35_CTL_GPIO_INTC_MSK                                           25
#define     GPIO35_CTL_GPIO_TRIG_CTL_E                                         23
#define     GPIO35_CTL_GPIO_TRIG_CTL_SHIFT                                     21
#define     GPIO35_CTL_GPIO_TRIG_CTL_MASK                                      (0x7<<21)
#define     GPIO35_CTL_GPIO_INTCEN                                             20
#define     GPIO35_CTL_SMIT                                                    15
#define     GPIO35_CTL_PADDRV_E                                                14
#define     GPIO35_CTL_PADDRV_SHIFT                                            12
#define     GPIO35_CTL_PADDRV_MASK                                             (0x7<<12)
#define     GPIO35_CTL_GPIO50KPUEN                                             11
#define     GPIO35_CTL_GPIO100KPDEN                                            9
#define     GPIO35_CTL_GPIO10KPUEN                                             8
#define     GPIO35_CTL_GPIOINEN                                                7
#define     GPIO35_CTL_GPIOOUTEN                                               6
#define     GPIO35_CTL_MFP_E                                                   5
#define     GPIO35_CTL_MFP_SHIFT                                               0
#define     GPIO35_CTL_MFP_MASK                                                (0x3F<<0)

#define     SDA_SCLK_CTL_SMIT                                                 15
#define     SDA_SCLK_CTL_PADDRV_E                                             14
#define     SDA_SCLK_CTL_PADDRV_SHIFT                                         12
#define     SDA_SCLK_CTL_PADDRV_MASK                                          (0x7<<12)
#define     SDA_SCLK_CTL_GPIO50KPUEN                                          11
#define     SDA_SCLK_CTL_GPIO100KPDEN                                         9
#define     SDA_SCLK_CTL_GPIO10KPUEN                                          8

#define     JTAG_CTL_JTAGEN                                                   4
#define     JTAG_CTL_JTAGMAP_E                                                1
#define     JTAG_CTL_JTAGMAP_SHIFT                                            0
#define     JTAG_CTL_JTAGMAP_MASK                                             (0x3<<0)

//---------------------------------------------------------------------//
#endif
