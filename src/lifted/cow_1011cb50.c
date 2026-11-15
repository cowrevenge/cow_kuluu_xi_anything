/* f_0x1011cb50 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1011cb50 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1011cb50(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU16 uVar2;
    CowU32 uVar3;
    CowU32 uVar4;
    int iVar5;
    char cVar6;
    iVar1 = 0;
      wr8((uint32_t)param_2, '\0');
      wr8((uint32_t)(param_2 + 1u * (uint32_t)(1)), '\0');
      if (param_1 == 0xcb) {
        uVar3 = 0x8181;
      }
      else if (param_1 < 0x1fbe) {
        if (param_1 < 0x1517) {
          if (param_1 < 0xf95) {
            if (param_1 < 0x400) {
              if (param_1 < 0x3dd) {
                if (param_1 < 0x3c6) {
                  if (param_1 < 0x3a8) {
                    if (param_1 < 0x2c0) {
                      if (param_1 < 0x26e) {
                        if (param_1 < 0x2e5) {
                          if (param_1 < 0x24c) {
                            if (param_1 < 0x22b) {
                              if (param_1 < 0x20a) {
                                if (param_1 < 0x1f2) {
                                  if (param_1 < 0x1da) {
                                    if (param_1 < 0x184) {
                                      if (param_1 < 0x131) {
                                        if (param_1 < 0x117) {
                                          if (param_1 < 0xfd) {
                                            if (param_1 < 0xf3) {
                                              if (param_1 == 0xf2) {
                                                iVar1 = 0;
                                                uVar3 = 0x819b;
                                              }
                                              else if (param_1 < 0xea) {
                                                if (param_1 < 0xdb) {
                                                  if (param_1 < 0xd4) {
                                                    if (param_1 < 0xcc) {
                                                      if (param_1 < 0x60) {
                                                        wr8((uint32_t)param_2, (char)param_1 + ' ');
                                                        g->eax = (CowU32)(1); return;
                                                      }
                                                      iVar1 = param_1 + -0x60;
                                                      uVar3 = 0x8140;
                                                    }
                                                    else {
                                                      iVar1 = param_1 + -0xcc;
                                                      uVar3 = 0x81b8;
                                                    }
                                                  }
                                                  else {
                                                    iVar1 = param_1 + -0xd4;
                                                    uVar3 = 0x81c8;
                                                  }
                                                }
                                                else {
                                                  iVar1 = param_1 + -0xdb;
                                                  uVar3 = 0x81da;
                                                }
                                              }
                                              else {
                                                iVar1 = param_1 + -0xea;
                                                uVar3 = 0x81f0;
                                              }
                                            }
                                            else {
                                              iVar1 = param_1 + -0xf3;
                                              uVar3 = 0x824f;
                                            }
                                          }
                                          else {
                                            iVar1 = param_1 + -0xfd;
                                            uVar3 = 0x8260;
                                          }
                                        }
                                        else {
                                          iVar1 = param_1 + -0x117;
                                          uVar3 = 0x8281;
                                        }
                                      }
                                      else {
                                        iVar1 = param_1 + -0x131;
                                        uVar3 = 0x829f;
                                      }
                                    }
                                    else {
                                      iVar1 = param_1 + -0x184;
                                      uVar3 = 0x8340;
                                    }
                                  }
                                  else {
                                    iVar1 = param_1 + -0x1da;
                                    uVar3 = 0x839f;
                                  }
                                }
                                else {
                                  iVar1 = param_1 + -0x1f2;
                                  uVar3 = 0x83bf;
                                }
                              }
                              else {
                                iVar1 = param_1 + -0x20a;
                                uVar3 = 0x8440;
                              }
                            }
                            else {
                              iVar1 = param_1 + -0x22b;
                              uVar3 = 0x8470;
                            }
                          }
                          else {
                            iVar1 = param_1 + -0x24c;
                            uVar3 = 0x849f;
                          }
                        }
                        else {
                          iVar1 = param_1 + -0x2e5;
                          uVar3 = 0x815f;
                        }
                      }
                      else {
                        iVar1 = param_1 + -0x26e;
                        uVar3 = 0x859f;
                      }
                    }
                    else {
                      iVar1 = param_1 + -0x2c0;
                      uVar3 = 0x8540;
                    }
                  }
                  else {
                    iVar1 = param_1 + -0x3a8;
                    uVar3 = 0x8740;
                  }
                }
                else {
                  iVar1 = param_1 + -0x3c6;
                  uVar3 = 0x875f;
                }
              }
              else {
                iVar1 = param_1 + -0x3dd;
                uVar3 = 0x877e;
              }
            }
            else {
              iVar1 = param_1 + -0x400;
              uVar3 = 0x889f;
            }
          }
          else {
            iVar1 = param_1 + -0xf95;
            uVar3 = 0x989f;
          }
        }
        else {
          iVar1 = param_1 + -0x1517;
          uVar3 = 0xe040;
        }
      }
      else {
        iVar1 = param_1 + -0x1fbe;
        uVar3 = 0xed3f;
      }
      uVar4 = uVar3 & 0xff;
      cVar6 = (char)(uVar3 >> 8);
      if (0 < iVar1) {
        uVar2 = (CowU16)uVar4;
        iVar5 = 0;
        if (0xfc - (short)uVar2 < iVar1) {
          iVar5 = 1;
          iVar1 = iVar1 + -0xfd + (int)(short)uVar2;
          if (uVar2 < 0x80) {
            iVar1 = iVar1 + 1;
          }
        }
        iVar5 = iVar5 + iVar1 / 0xbc;
        cVar6 = (char)iVar5 + cVar6;
        if (iVar5 < 1) {
          uVar4 = iVar1 % 0xbc + uVar4;
          if (((short)uVar4 < 0x7f) || (0x7e < uVar2)) goto L_1011ce64;
        }
        else {
          uVar4 = iVar1 % 0xbc + 0x40;
          if ((short)uVar4 < 0x7f) goto L_1011ce64;
        }
        if ((short)uVar4 == 0xfc) {
          wr8((uint32_t)param_2, cVar6 + '\x01');
          wr8((uint32_t)(param_2 + 1u * (uint32_t)(1)), '@');
          g->eax = (CowU32)(2); return;
        }
        uVar4 = uVar4 + 1;
      }
    L_1011ce64:
      wr8((uint32_t)param_2, cVar6);
      wr8((uint32_t)(param_2 + 1u * (uint32_t)(1)), (char)uVar4);
      g->eax = (CowU32)(2); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebp], frame pointer no, 0 locals, pops [ebp], ret 0.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1011cb50(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    { uint32_t A = (uint32_t)(g->esp + 0x4u); g->ecx = (g->ecx & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x1011cb50: register ecx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1011cb55: push ebp */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->ebp = (uint32_t)(rd32(A)); }   /* 0x1011cb56: register ebp, replayed as the entry ran it */
    g->eax = 0u;   /* 0x1011cb5a: the value the entry loaded and the decompiler dropped */
    cow_lift_1011cb50(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
