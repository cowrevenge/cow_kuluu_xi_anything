/* f_0x101d22d0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101d22d0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101d22d0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 uVar2;
    CowU32 uVar3;
    iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D22E0), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_10358130) }, g->ecx, g->edx, g->eax, 8u);
      if (iVar1 == 0) {
        uVar2 = 1;
        uVar3 = 0;
      }
      else {
        iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D22FA), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037EB60) }, g->ecx, g->edx, g->eax, 8u);
        if (iVar1 == 0) {
          uVar2 = 4;
          uVar3 = 0;
        }
        else {
          iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D2314), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037EB54) }, g->ecx, g->edx, g->eax, 8u);
          if (iVar1 == 0) {
            uVar2 = 2;
            uVar3 = 0;
          }
          else {
            iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D232E), 2u, (const CowU32[]){ param_1, 0x1037eb4c }, g->ecx, g->edx, g->eax, 8u);
            if (iVar1 == 0) {
              uVar2 = 8;
              uVar3 = 0;
            }
            else {
              iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D2348), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037EB40) }, g->ecx, g->edx, g->eax, 8u);
              if (iVar1 == 0) {
                uVar2 = 0x10;
                uVar3 = 0;
              }
              else {
                iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D2362), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037EB34) }, g->ecx, g->edx, g->eax, 8u);
                if (iVar1 == 0) {
                  uVar2 = 0x20;
                  uVar3 = 0;
                }
                else {
                  iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D237C), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037EB28) }, g->ecx, g->edx, g->eax, 8u);
                  if (iVar1 == 0) {
                    uVar2 = 0x40;
                    uVar3 = 0;
                  }
                  else {
                    iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D2396), 2u, (const CowU32[]){ param_1, 0x1037eb24 }, g->ecx, g->edx, g->eax, 8u);
                    if (iVar1 == 0) {
                      uVar2 = 0x80;
                      uVar3 = 0;
                    }
                    else {
                      iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D23B3), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037EB18) }, g->ecx, g->edx, g->eax, 8u);
                      if (iVar1 == 0) {
                        uVar2 = 0x100;
                        uVar3 = 0;
                      }
                      else {
                        iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D23D0), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037EB10) }, g->ecx, g->edx, g->eax, 8u);
                        if (iVar1 == 0) {
                          uVar2 = 0x200;
                          uVar3 = 0;
                        }
                        else {
                          iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D23ED), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037EB08) }, g->ecx, g->edx, g->eax, 8u);
                          if (iVar1 == 0) {
                            uVar2 = 0x400;
                            uVar3 = 0;
                          }
                          else {
                            iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D240A), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037EB00) }, g->ecx, g->edx, g->eax, 8u);
                            if (iVar1 == 0) {
                              uVar2 = 0x2000;
                              uVar3 = 0;
                            }
                            else {
                              iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D2427), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037EAF0) }, g->ecx, g->edx, g->eax, 8u);
                              if (iVar1 == 0) {
                                uVar2 = 0x800;
                                uVar3 = 0;
                              }
                              else {
                                iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D2444), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037EAE4) }, g->ecx, g->edx, g->eax, 8u);
                                if (iVar1 == 0) {
                                  uVar2 = 0x1000;
                                  uVar3 = 0;
                                }
                                else {
                                  iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D2461), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037EADC) }, g->ecx, g->edx, g->eax, 8u);
                                  if (iVar1 == 0) {
                                    uVar2 = 0x4000;
                                    uVar3 = 0;
                                  }
                                  else {
                                    iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D247E), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037EAD4) }, g->ecx, g->edx, g->eax, 8u);
                                    if (iVar1 == 0) {
                                      uVar2 = 0x8000;
                                      uVar3 = 0;
                                    }
                                    else {
                                      iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D249B), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037EACC) }, g->ecx, g->edx, g->eax, 8u);
                                      if (iVar1 == 0) {
                                        uVar2 = 0x10000;
                                        uVar3 = 0;
                                      }
                                      else {
                                        iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D24B8), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037EAC0) }, g->ecx, g->edx, g->eax, 8u);
                                        if (iVar1 == 0) {
                                          uVar2 = 0x20000;
                                          uVar3 = 0;
                                        }
                                        else {
                                          iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D24D5), 2u, (const CowU32[]){ param_1, 0x1037eab8 }, g->ecx, g->edx, g->eax, 8u);
                                          if (iVar1 == 0) {
                                            uVar2 = 0x40000;
                                            uVar3 = 0;
                                          }
                                          else {
                                            iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D24F2), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037EAB0) }, g->ecx, g->edx, g->eax, 8u);
                                            if (iVar1 == 0) {
                                              uVar2 = 0x80000;
                                              uVar3 = 0;
                                            }
                                            else {
                                              iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D250F), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037EAA8) }, g->ecx, g->edx, g->eax, 8u);
                                              if (iVar1 == 0) {
                                                uVar2 = 0x100000;
                                                uVar3 = 0;
                                              }
                                              else {
                                                iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D252C), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037EAA0) }, g->ecx, g->edx, g->eax, 8u);
                                                if (iVar1 == 0) {
                                                  uVar2 = 0x200000;
                                                  uVar3 = 0;
                                                }
                                                else {
                                                  iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D2549), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037EA94) }, g->ecx, g->edx, g->eax, 8u);
                                                  if (iVar1 == 0) {
                                                    uVar2 = 0x400000;
                                                    uVar3 = 0;
                                                  }
                                                  else {
                                                    iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D2566), 2u, (const CowU32[]){ param_1, 0x1037ea8c }, g->ecx, g->edx, g->eax, 8u);
                                                    if (iVar1 == 0) {
                                                      uVar2 = 0x800000;
                                                      uVar3 = 0;
                                                    }
                                                    else {
                                                      iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D2583), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037EA7C) }, g->ecx, g->edx, g->eax, 8u);
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x1000000;
                                                        uVar3 = 0;
                                                      }
                                                      else {
                                                        iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D25A0), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037EA70) }, g->ecx, g->edx, g->eax, 8u);
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x2000000;
                                                          uVar3 = 0;
                                                        }
                                                        else {
                                                          iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D25BD), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037EA60) }, g->ecx, g->edx, g->eax, 8u);
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x4000000;
                                                        uVar3 = 0;
                                                      }
                                                      else {
                                                        iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D25DA), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037EA58) }, g->ecx, g->edx, g->eax, 8u)
                                                        ;
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x80000000;
                                                          uVar3 = 0;
                                                        }
                                                        else {
                                                          iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D25F7), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037EA54) }, g->ecx, g->edx, g->eax, 8u);
                                                          if (iVar1 == 0) {
                                                            uVar2 = 0x8000000;
                                                            uVar3 = 0;
                                                          }
                                                          else {
                                                            iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D2614), 2u, (const CowU32[]){ param_1, 0x1037ea50 }, g->ecx, g->edx, g->eax, 8u);
                                                            if (iVar1 == 0) {
                                                              uVar2 = 0x10000000;
                                                              uVar3 = 0;
                                                            }
                                                            else {
                                                              iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D2631), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037EA44) }, g->ecx, g->edx, g->eax, 8u);
                                                      if (iVar1 == 0) {
                                                        uVar2 = 0x20000000;
                                                        uVar3 = 0;
                                                      }
                                                      else {
                                                        iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D264E), 2u, (const CowU32[]){ param_1, 0x1037ea40 }, g->ecx, g->edx, g->eax, 8u);
                                                        if (iVar1 == 0) {
                                                          uVar2 = 0x40000000;
                                                          uVar3 = 0;
                                                        }
                                                        else {
                                                          iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D266B), 2u, (const CowU32[]){ param_1, 0x1037ea38 }, g->ecx, g->edx, g->eax, 8u);
                                                          if (iVar1 == 0) {
                                                            uVar3 = 1;
                                                          }
                                                          else {
                                                            iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D2684), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037EA2C) }, g->ecx, g->edx, g->eax, 8u);
                                                      if (iVar1 == 0) {
                                                        uVar3 = 2;
                                                      }
                                                      else {
                                                        iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D269D), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037EA20) }, g->ecx, g->edx, g->eax, 8u);
                                                      if (iVar1 == 0) {
                                                        uVar3 = 4;
                                                      }
                                                      else {
                                                        iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D26B6), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037EA18) }, g->ecx, g->edx, g->eax, 8u)
                                                        ;
                                                        if (iVar1 == 0) {
                                                          uVar3 = 8;
                                                        }
                                                        else {
                                                          iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D26CF), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037EA08) }, g->ecx, g->edx, g->eax, 8u);
                                                      if (iVar1 == 0) {
                                                        uVar3 = 0x10;
                                                      }
                                                      else {
                                                        iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D26E8), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037E9FC) }, g->ecx, g->edx, g->eax, 8u);
                                                      if (iVar1 == 0) {
                                                        uVar3 = 0x20;
                                                      }
                                                      else {
                                                        iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D2701), 2u, (const CowU32[]){ param_1, 0x1037e9f4 }, g->ecx, g->edx, g->eax, 8u);
                                                        if (iVar1 == 0) {
                                                          uVar3 = 0x40;
                                                        }
                                                        else {
                                                          iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D271A), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037E9EC) }, g->ecx, g->edx, g->eax, 8u);
                                                      if (iVar1 == 0) {
                                                        uVar3 = 0x80;
                                                      }
                                                      else {
                                                        iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D2736), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037E9DC) }, g->ecx, g->edx, g->eax, 8u);
                                                      if (iVar1 == 0) {
                                                        uVar3 = 0x100;
                                                      }
                                                      else {
                                                        iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D2752), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037E9D0) }, g->ecx, g->edx, g->eax, 8u);
                                                      if (iVar1 == 0) {
                                                        uVar3 = 0x400;
                                                      }
                                                      else {
                                                        iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D276E), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037E9C8) }, g->ecx, g->edx, g->eax, 8u);
                                                        if (iVar1 == 0) {
                                                          uVar3 = 0x200;
                                                        }
                                                        else {
                                                          iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D278A), 2u, (const CowU32[]){ param_1, 0x1037e9c4 }, g->ecx, g->edx, g->eax, 8u);
                                                          if (iVar1 == 0) {
                                                            uVar3 = 0x1000;
                                                          }
                                                          else {
                                                            iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D27A6), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037E9B8) }, g->ecx, g->edx, g->eax, 8u);
                                                      if (iVar1 == 0) {
                                                        uVar3 = 0x2000;
                                                      }
                                                      else {
                                                        iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D27C2), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037E9B0) }, g->ecx, g->edx, g->eax, 8u)
                                                        ;
                                                        if (iVar1 == 0) {
                                                          uVar3 = 0x4000;
                                                        }
                                                        else {
                                                          iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D27DE), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037E9A4) }, g->ecx, g->edx, g->eax, 8u);
                                                      if (iVar1 == 0) {
                                                        uVar3 = 0x8000;
                                                      }
                                                      else {
                                                        iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D27FA), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037E998) }, g->ecx, g->edx, g->eax, 8u);
                                                      if (iVar1 == 0) {
                                                        uVar3 = 0x10000;
                                                      }
                                                      else {
                                                        iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D2816), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037E990) }, g->ecx, g->edx, g->eax, 8u);
                                                        if (iVar1 == 0) {
                                                          uVar3 = 0x20000;
                                                        }
                                                        else {
                                                          iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D2832), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037E984) }, g->ecx, g->edx, g->eax, 8u);
                                                      if (iVar1 == 0) {
                                                        uVar3 = 0x40000;
                                                      }
                                                      else {
                                                        iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D284E), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037E978) }, g->ecx, g->edx, g->eax, 8u);
                                                        if (iVar1 == 0) {
                                                          uVar3 = 0x80000;
                                                        }
                                                        else {
                                                          iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D286A), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037E96C) }, g->ecx, g->edx, g->eax, 8u);
                                                      if (iVar1 == 0) {
                                                        uVar3 = 0x100000;
                                                      }
                                                      else {
                                                        iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D2886), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037E960) }, g->ecx, g->edx, g->eax, 8u);
                                                        if (iVar1 == 0) {
                                                          uVar3 = 0x200000;
                                                        }
                                                        else {
                                                          iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D28A2), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037E954) }, g->ecx, g->edx, g->eax, 8u);
                                                      if (iVar1 == 0) {
                                                        uVar3 = 0x400000;
                                                      }
                                                      else {
                                                        iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D28BE), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037E948) }, g->ecx, g->edx, g->eax, 8u);
                                                        if (iVar1 == 0) {
                                                          uVar3 = 0x800000;
                                                        }
                                                        else {
                                                          iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D28DA), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037E93C) }, g->ecx, g->edx, g->eax, 8u);
                                                      if (iVar1 == 0) {
                                                        uVar3 = 0x1000000;
                                                      }
                                                      else {
                                                        iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D28F6), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037E92C) }, g->ecx, g->edx, g->eax, 8u);
                                                      if (iVar1 == 0) {
                                                        uVar3 = 0x2000000;
                                                      }
                                                      else {
                                                        iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D290F), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037E920) }, g->ecx, g->edx, g->eax, 8u);
                                                      if (iVar1 == 0) {
                                                        uVar3 = 0x4000000;
                                                      }
                                                      else {
                                                        iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D2928), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037E914) }, g->ecx, g->edx, g->eax, 8u);
                                                      if (iVar1 == 0) {
                                                        uVar3 = 0x8000000;
                                                      }
                                                      else {
                                                        iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D2941), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037E90C) }, g->ecx, g->edx, g->eax, 8u);
                                                        if (iVar1 == 0) {
                                                          uVar3 = 0x10000000;
                                                        }
                                                        else {
                                                          iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D295A), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037E900) }, g->ecx, g->edx, g->eax, 8u);
                                                      if (iVar1 == 0) {
                                                        uVar3 = 0x20000000;
                                                      }
                                                      else {
                                                        iVar1 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101D2973), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1037E8F4) }, g->ecx, g->edx, g->eax, 8u);
                                                      if (iVar1 != 0) {
                                                        g->eax = (CowU32)(0); return;
                                                      }
                                                      uVar3 = 0x40000000;
                                                      }
                                                      }
                                                      }
                                                      }
                                                      }
                                                      }
                                                      }
                                                      }
                                                      }
                                                      }
                                                      }
                                                      }
                                                      }
                                                      }
                                                      }
                                                      }
                                                      }
                                                      }
                                                      }
                                                      }
                                                      }
                                                      }
                                                      }
                                                      }
                                                      }
                                                      }
                                                      }
                                                      }
                                                      }
                                                      uVar2 = 0;
                                                      }
                                                      }
                                                      }
                                                      }
                                                      }
                                                      }
                                                      }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      cow_bridge_101d2260(g, COW_IMG(COW_ADDR_LIFT_101D2986), 2u, (const CowU32[]){ uVar2, uVar3 }, g->ecx, g->edx, g->eax, 8u);
      wr32(COW_IMG(COW_ADDR_LIFT_10663190), 0);
      g->eax = (CowU32)(1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101d22d0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101d22d0: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->esi = (uint32_t)(rd32(A)); }   /* 0x101d22d1: register esi, replayed as the entry ran it */
    cow_lift_101d22d0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 32 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
