/* f_0x1020ef00 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1020ef00 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1020ef00(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU16 uVar2;
    CowU32 piVar3;
    int iVar4;
    CowU16 extraout_var;
    CowU16 extraout_var_00;
    int iVar5;
    CowU32 uVar6;
    if ((rd32(COW_IMG(COW_ADDR_LIFT_10664494)) == 0) || (rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) == 0)) {
        g->eax = (CowU32)(0); return;
      }
      piVar3 = (CowU32)cow_bridge_1020e4f0(g, COW_IMG(COW_ADDR_LIFT_1020EF24), 0u, (const CowU32[]){ 0u }, param_1, param_2, rd32(COW_IMG(COW_ADDR_LIFT_10664494)), 0u);
      if (piVar3 == (CowU32)0x0) {
        g->eax = (CowU32)(0); return;
      }
      if ((short)param_2 != 5) {
        if ((short)param_2 == 6) {
          if ((int16_t)rd16((uint32_t)((int)param_1 + 0x58)) == 0) {
            cow_bridge_1020eed0(g, COW_IMG(COW_ADDR_LIFT_1020EFA7), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10664494)), 0u);
            g->eax = (CowU32)(1); return;
          }
          wr16((uint32_t)((int)param_1 + 0x58), 0);
          cow_bridge_1020ebf0(g, COW_IMG(COW_ADDR_LIFT_1020EF81), 0u, (const CowU32[]){ 0u }, param_1, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10664494)), 0u);
          cow_bridge_101f7080(g, COW_IMG(COW_ADDR_LIFT_1020EF8C), 2u, (const CowU32[]){ 0u, 0u }, param_1, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10664494)), 0u);
          g->eax = (CowU32)(1); return;
        }
        if ((short)param_2 != 8) {
          g->eax = (CowU32)(1); return;
        }
        cVar1 = (int8_t)rd8((uint32_t)((int)param_1 + 0x6c));
        if (cVar1 == '\x02') {
          g->eax = (CowU32)(1); return;
        }
        if (cVar1 == '\x03') {
          g->eax = (CowU32)(1); return;
        }
        if (cVar1 == '\x04') {
          g->eax = (CowU32)(1); return;
        }
        if ((int8_t)rd8((uint32_t)((int)param_1 + 0x5c)) == '\0') {
          wr8((uint32_t)((int)param_1 + 0x5c), 1);
        }
        else {
          wr8((uint32_t)((int)param_1 + 0x5c), 0);
          wr16((uint32_t)((int)param_1 + 0x58), 0);
        }
        cow_bridge_1020ebf0(g, COW_IMG(COW_ADDR_LIFT_1020EFBA), 0u, (const CowU32[]){ 0u }, param_1, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10664494)), 0u);
        cow_bridge_101f7080(g, COW_IMG(COW_ADDR_LIFT_1020EFC8), 2u, (const CowU32[]){ 0, 0 }, param_1, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10664494)), 0u);
        cow_bridge_10037e90(g, COW_IMG(COW_ADDR_LIFT_1020EF91), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10664494)), 0u);
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
      }
      cVar1 = cow_bridge_1020f280(g, COW_IMG(COW_ADDR_LIFT_1020EFD7), 0u, (const CowU32[]){ 0u }, param_1, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10664494)), 0u);
      if (cVar1 != '\0') {
        cow_bridge_1020f440(g, COW_IMG(COW_ADDR_LIFT_1020EFE6), 1u, (const CowU32[]){ (((uint32_t)(extraout_var) & 0xffffu) << 16 | ((uint32_t)((short)rd32((uint32_t)piVar3)) & 0xffffu)) }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10664494)), 0u);
        cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_1020EFEB), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10664494)), 0u);
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
      }
      iVar4 = rd32((uint32_t)piVar3);
      if (iVar4 < 0) {
        if (iVar4 != -1) {
          wr16((uint32_t)((int)param_1 + 0x58), -(short)rd32((uint32_t)piVar3));
          uVar2 = cow_bridge_101f7100(g, COW_IMG(COW_ADDR_LIFT_1020F19D), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10664494)), 0u);
          wr16((uint32_t)((int)param_1 + 0x5a), uVar2);
          cow_bridge_1020ebf0(g, COW_IMG(COW_ADDR_LIFT_1020F1A8), 0u, (const CowU32[]){ 0u }, param_1, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10664494)), 0u);
          cow_bridge_101f7080(g, COW_IMG(COW_ADDR_LIFT_1020F1B3), 2u, (const CowU32[]){ 0u, 0u }, param_1, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10664494)), 0u);
          goto L_1020f1b3;
        }
        iVar4 = cow_bridge_1020a680(g, COW_IMG(COW_ADDR_LIFT_1020F0DD), 1u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x3c350)) }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10664494)), 0u);
        if (iVar4 < 0) {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
        }
        cVar1 = cow_bridge_1020f250(g, COW_IMG(COW_ADDR_LIFT_1020F00B), 0u, (const CowU32[]){ 0u }, param_1, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10664494)), 0u);
        if (cVar1 == '\0') {
          cVar1 = cow_bridge_1020f230(g, COW_IMG(COW_ADDR_LIFT_1020F054), 0u, (const CowU32[]){ 0u }, param_1, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10664494)), 0u);
          if (cVar1 == '\0') {
            iVar5 = rd32(COW_IMG(COW_ADDR_LIFT_10664494)) + 0x5c;
            cow_bridge_10107b40(g, COW_IMG(COW_ADDR_LIFT_1020F01D), 1u, (const CowU32[]){ iVar5 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10664494)), 0u);
            cow_bridge_1020a6e0(g, COW_IMG(COW_ADDR_LIFT_1020F10A), 2u, (const CowU32[]){ iVar5, iVar4 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10664494)), 0u);
            uVar6 = 0;
            goto L_1020f14c;
          }
        }
        else {
          iVar5 = rd32(COW_IMG(COW_ADDR_LIFT_10664494)) + 0x5c;
          cow_bridge_10107b40(g, COW_IMG(COW_ADDR_LIFT_1020F067), 1u, (const CowU32[]){ iVar5 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10664494)), 0u);
          cow_bridge_1020a6e0(g, COW_IMG(COW_ADDR_LIFT_1020F145), 2u, (const CowU32[]){ iVar5, iVar4 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10664494)), 12u);
          cow_bridge_10107ea0(g, COW_IMG(COW_ADDR_LIFT_1020F039), 1u, (const CowU32[]){ iVar5 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10664494)), 0u);
          cow_bridge_10107e70(g, COW_IMG(COW_ADDR_LIFT_1020F044), 2u, (const CowU32[]){ iVar5, 0x300000 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10664494)), 12u);
          uVar6 = 1;
    L_1020f14c:
          cow_bridge_1020a9d0(g, COW_IMG(COW_ADDR_LIFT_1020F090), 6u, (const CowU32[]){ 1, iVar5, 1, 0, uVar6, 0 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10664494)), 0u);
        }
        cVar1 = cow_bridge_1020f250(g, COW_IMG(COW_ADDR_LIFT_1020F097), 0u, (const CowU32[]){ 0u }, param_1, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10664494)), 0u);
        if (cVar1 == '\0') {
          cow_bridge_1020eed0(g, COW_IMG(COW_ADDR_LIFT_1020F0A6), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10664494)), 0u);
          cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_1020F0B5), 1u, (const CowU32[]){ 272128612u }, 274864184u, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10664494)), 0u);
          cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_1020F0BA), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10664494)), 0u);
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
        }
        goto L_1020f1b3;
      }
      wr16((uint32_t)((int)param_1 + 0x6e), (short)iVar4);
      cVar1 = cow_bridge_1020f250(g, COW_IMG(COW_ADDR_LIFT_1020F0F1), 0u, (const CowU32[]){ 0u }, param_1, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10664494)), 0u);
      if (cVar1 == '\0') {
        cVar1 = cow_bridge_1020f230(g, COW_IMG(COW_ADDR_LIFT_1020F12B), 0u, (const CowU32[]){ 0u }, param_1, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10664494)), 0u);
        if (cVar1 == '\0') {
          iVar4 = rd32(COW_IMG(COW_ADDR_LIFT_10664494)) + 0x5c;
          cow_bridge_10107b40(g, COW_IMG(COW_ADDR_LIFT_1020F103), 1u, (const CowU32[]){ iVar4 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10664494)), 0u);
          if (0 < rd32((uint32_t)piVar3)) {
            cow_bridge_10107b00(g, COW_IMG(COW_ADDR_LIFT_1020F030), 2u, (const CowU32[]){ iVar4, rd32((uint32_t)piVar3) }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10664494)), 8u);
          }
          uVar6 = 0;
          goto L_1020f07e;
        }
      }
      else {
        iVar4 = rd32(COW_IMG(COW_ADDR_LIFT_10664494)) + 0x5c;
        cow_bridge_10107b40(g, COW_IMG(COW_ADDR_LIFT_1020F13E), 1u, (const CowU32[]){ iVar4 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10664494)), 0u);
        if (0 < rd32((uint32_t)piVar3)) {
          cow_bridge_10107b00(g, COW_IMG(COW_ADDR_LIFT_1020F077), 2u, (const CowU32[]){ iVar4, (((uint32_t)(extraout_var_00) & 0xffffu) << 16 | ((uint32_t)((short)rd32((uint32_t)piVar3)) & 0xffffu)) }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10664494)), 8u);
        }
        cow_bridge_10107ea0(g, COW_IMG(COW_ADDR_LIFT_1020F110), 1u, (const CowU32[]){ iVar4 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10664494)), 0u);
        cow_bridge_10107e70(g, COW_IMG(COW_ADDR_LIFT_1020F11B), 2u, (const CowU32[]){ iVar4, 0x300000 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10664494)), 24u);
        uVar6 = 1;
    L_1020f07e:
        cow_bridge_1020a9d0(g, COW_IMG(COW_ADDR_LIFT_1020F15E), 6u, (const CowU32[]){ 1, iVar4, 1, 0, uVar6, 0 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10664494)), 0u);
      }
      cVar1 = cow_bridge_1020f250(g, COW_IMG(COW_ADDR_LIFT_1020F165), 0u, (const CowU32[]){ 0u }, param_1, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10664494)), 0u);
      if (cVar1 == '\0') {
        cow_bridge_1020eed0(g, COW_IMG(COW_ADDR_LIFT_1020F170), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10664494)), 0u);
        cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_1020F17F), 1u, (const CowU32[]){ 272128612u }, 274864184u, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10664494)), 0u);
        cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_1020F184), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10664494)), 0u);
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
      }
    L_1020f1b3:
      cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_1020F1B8), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10664494)), 0u);
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebp], frame pointer no, 0 locals, pops [ebp], ret 8.
   Arguments: 2 register argument(s) [ecx, edx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1020ef00(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_10664494));   /* 0x1020ef00: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1020ef05: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1020ef06: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1020ef07: push edi */
    cow_lift_1020ef00(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
