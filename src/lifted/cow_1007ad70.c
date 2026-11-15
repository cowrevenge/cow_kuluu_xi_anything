/* f_0x1007ad70 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1007ad70 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1007ad70(Guest* g, int32_t param_1, int32_t param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    char cVar2;
    char cVar3;
    CowU32 piVar4;
    CowU32 puVar5;
    int iVar6;
    int iVar7;
    CowU8 bVar8;
    short sVar9;
    short sVar10;
    piVar4 = (CowU32)cow_bridge_1007a1c0(g, COW_IMG(COW_ADDR_LIFT_1007AD80), 4u, (const CowU32[]){ g->eax, 0u, 0u, 0u }, g->ecx, param_1, param_4, 16u);
      if (((piVar4 == (CowU32)0x0) || (param_2 < 1)) || (0x50 < param_2)) {
        g->eax = (CowU32)(0); return;
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_1047D498)) != '\0') {
        g->eax = (CowU32)(1); return;
      }
      if (((piVar4 != (CowU32)0x0) && (bVar8 = (CowU8)param_2, bVar8 != 0)) &&
         (bVar1 = cow_bridge_100eb940(g, COW_IMG(COW_ADDR_LIFT_101F0289), 1u, (const CowU32[]){ param_1 }, g->ecx, g->edx, param_4, 4u), bVar8 < bVar1)) {
        sVar10 = 0;
        puVar5 = (CowU32)cow_bridge_100eb490(g, COW_IMG(COW_ADDR_LIFT_101F02A3), 2u, (const CowU32[]){ param_1, param_2 }, g->ecx, g->edx, param_4, 0u);
        iVar7 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(rd32((uint32_t)piVar4))));
        if ((puVar5 != (CowU32)0x0) && (iVar7 != 0)) {
          cVar2 = cow_bridge_101cc3a0(g, COW_IMG(COW_ADDR_LIFT_101F02D2), 2u, (const CowU32[]){ puVar5, param_1 }, g->ecx, g->edx, param_4, 0u);
          iVar6 = cow_bridge_1015bc40(g, COW_IMG(COW_ADDR_LIFT_101F02EA), 1u, (const CowU32[]){ rd16((uint32_t)puVar5) }, g->ecx, g->edx, param_4, 0u);
          cVar3 = (int8_t)rd8((uint32_t)(iVar6 + 0x1b3));
          wr8((uint32_t)(iVar6 + 0x1b3), cVar3 + '\x01');
          sVar9 = (int16_t)rd16((uint32_t)(iVar6 + 0x26));
          if ((int16_t)rd16((uint32_t)(iVar6 + 0x26)) == 0) {
            sVar9 = sVar10;
          }
          bVar1 = rd8((uint32_t)(iVar6 + 8));
          wr8((uint32_t)(iVar6 + 0x1b3), cVar3);
          if ((int8_t)rd8((uint32_t)(iVar6 + 0x2d)) == '\0') {
            if (((rd32((uint32_t)(piVar4 + 4u * (uint32_t)(1))) & 0xff000000U) == 0x1000000) && ((rd32((uint32_t)(iVar7 + 0x120)) >> 0xd & 1) == 0)
               ) {
              cVar3 = cow_bridge_10152490(g, COW_IMG(COW_ADDR_LIFT_101F035E), 2u, (const CowU32[]){ piVar4, 1 }, g->ecx, g->edx, param_4, 8u);
              if (cVar3 == '\0') {
                g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
              }
              if (param_1 != 0) {
                g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
              }
              iVar7 = cow_bridge_100fc3c0(g, COW_IMG(COW_ADDR_LIFT_101F0380), 3u, (const CowU32[]){ 54u, 0u, 0u }, g->ecx, g->edx, param_4, 12u);
              if (iVar7 == 0) {
                g->eax = (CowU32)(0); return;
              }
              wr32((uint32_t)(iVar7 + 8), 1);
              wr8((uint32_t)(iVar7 + 0x30), bVar8);
              wr16((uint32_t)(iVar7 + 0x3a), (short)rd32((uint32_t)piVar4));
              wr32((uint32_t)(iVar7 + 4), rd32((uint32_t)(piVar4 + 4u * (uint32_t)(1))));
              wr8((uint32_t)(iVar7 + 0x3c), 1);
              cow_bridge_100fc4d0(g, COW_IMG(COW_ADDR_LIFT_101F03B4), 3u, (const CowU32[]){ iVar7, 0x40, 0 }, g->ecx, g->edx, param_4, 12u);
              g->eax = (CowU32)(1); return;
            }
          }
          else if (cVar2 == '\0') {
            g->eax = (CowU32)(0); return;
          }
          cVar3 = cow_bridge_101cc1b0(g, COW_IMG(COW_ADDR_LIFT_101F03CE), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, param_4, 0u);
          if ((cVar3 == '\0') || ((bVar1 & 8) != 0)) {
            if ((rd32(COW_IMG(COW_ADDR_LIFT_1057817C)) != 0) && (sVar9 != 0)) {
              cow_bridge_1012c1d0(g, COW_IMG(COW_ADDR_LIFT_101F03FD), 2u, (const CowU32[]){ 1, (CowU32)rd16((uint32_t)(iVar6 + 0x26)) * 0x14 }, g->ecx, g->edx, param_4, 0u);
            }
            if (param_1 == 3) {
              cVar3 = cow_bridge_100eb660(g, COW_IMG(COW_ADDR_LIFT_101F0418), 3u, (const CowU32[]){ param_2, rd32((uint32_t)(piVar4 + 4u * (uint32_t)(1))), (short)rd32((uint32_t)piVar4) }, g->ecx, g->edx, param_4, 12u);
              if (cVar3 != '\0') {
                g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
              }
            }
            else {
              cVar3 = cow_bridge_100eb5e0(g, COW_IMG(COW_ADDR_LIFT_101F0436), 4u, (const CowU32[]){ param_2, rd32((uint32_t)(piVar4 + 4u * (uint32_t)(1))), (short)rd32((uint32_t)piVar4), param_1 }, g->ecx, g->edx, param_4, 16u);
              if (cVar3 != '\0') {
                g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
              }
            }
          }
        }
      }
      g->eax = (CowU32)((g->eax & 0xffff0000u) | ((CowU32)(0) & 0xffffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(edx), cdecl, 4 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 1 register argument(s) [edx], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1007ad70(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->edx;   /* edx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    g->eax = param_4;   /* 0x1007ad70: the value the entry loaded and the decompiler dropped */
    cow_lift_1007ad70(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
