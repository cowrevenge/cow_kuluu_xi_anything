/* f_0x10197470 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10197470 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10197470(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    CowU16 uVar3;
    CowU32 uVar4;
    CowU32 uVar5;
    if ((((int8_t)rd8((uint32_t)(param_1 + 0x20)) == '\0') && ((int8_t)rd8((uint32_t)(param_1 + 0x21)) == '\0')) &&
         ((int8_t)rd8((uint32_t)(param_1 + 0x48)) == '\0')) {
        if (param_2 == 5) {
          switch(param_3) {
          case 1:
            cow_bridge_10193830(g, COW_IMG(COW_ADDR_LIFT_101974DB), 2u, (const CowU32[]){ 7u, 0u }, g->ecx, g->edx, g->eax, 8u);
            return;
          case 2:
            cow_bridge_10193830(g, COW_IMG(COW_ADDR_LIFT_101974ED), 2u, (const CowU32[]){ 7u, 1u }, g->ecx, g->edx, g->eax, 8u);
            return;
          case 3:
            wr8((uint32_t)(param_1 + 0x20), 1);
            wr32((uint32_t)(param_1 + 0x24), rd32((uint32_t)(param_1 + 0x40)));
            wr32((uint32_t)(param_1 + 0x28), (int)(int16_t)rd16((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x4c)));
            wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x62), 0);
            wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x85), 0);
            return;
          case 4:
            wr8((uint32_t)(param_1 + 0x21), 1);
            wr32((uint32_t)(param_1 + 0x24), rd32((uint32_t)(param_1 + 0x44)));
            wr32((uint32_t)(param_1 + 0x28), (int)(int16_t)rd16((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x4c)));
            wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x62), 0);
            wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x85), 0);
            return;
          case 5:
            wr8((uint32_t)(param_1 + 0x48), 1);
            wr32((uint32_t)(param_1 + 0x24), rd32((uint32_t)(param_1 + 0x4c)));
            wr32((uint32_t)(param_1 + 0x28), (int)(int16_t)rd16((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x4c)));
            wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x62), 0);
            wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x85), 0);
            return;
          case 6:
            wr8((uint32_t)(param_1 + 0x48), 2);
            wr32((uint32_t)(param_1 + 0x24), rd32((uint32_t)(param_1 + 0x50)));
            wr32((uint32_t)(param_1 + 0x28), (int)(int16_t)rd16((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x4c)));
            wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x62), 0);
            wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x85), 0);
            return;
          case 7:
            wr8((uint32_t)(param_1 + 0x48), 3);
            wr32((uint32_t)(param_1 + 0x24), rd32((uint32_t)(param_1 + 0x54)));
            wr32((uint32_t)(param_1 + 0x28), (int)(int16_t)rd16((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x4c)));
            wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x62), 0);
            wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x85), 0);
            return;
          case 8:
            cow_bridge_10193830(g, COW_IMG(COW_ADDR_LIFT_101975CA), 2u, (const CowU32[]){ 154u, 1u }, g->ecx, g->edx, g->eax, 8u);
            return;
          case 9:
            cow_bridge_10193830(g, COW_IMG(COW_ADDR_LIFT_101975DF), 2u, (const CowU32[]){ 154u, 0u }, g->ecx, g->edx, g->eax, 8u);
            return;
          case 10:
            cow_bridge_10193830(g, COW_IMG(COW_ADDR_LIFT_101975F4), 2u, (const CowU32[]){ 202u, 0u }, g->ecx, g->edx, g->eax, 8u);
            return;
          case 0xb:
            cow_bridge_10193830(g, COW_IMG(COW_ADDR_LIFT_10197609), 2u, (const CowU32[]){ 202u, 1u }, g->ecx, g->edx, g->eax, 8u);
            return;
          default:
            return;
          }
        }
        if (param_2 == 6) {
          cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101974B6), 1u, (const CowU32[]){ 272082616u }, 274864184u, g->edx, g->eax, 0u);
          return;
        }
        return;
      }
      if ((int8_t)rd8((uint32_t)(param_1 + 0x20)) == '\x01') {
        switch(param_2) {
        case 1:
        case 2:
          goto switchD_1019762b_caseD_1;
        case 3:
          if (((int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x24))) < (int32_t)(100))) {
            iVar2 = (int32_t)rd32((uint32_t)(param_1 + 0x24)) + 1;
            wr32((uint32_t)(param_1 + 0x24), iVar2);
            uVar4 = 9;
    L_1019768b:
            cow_bridge_10193830(g, COW_IMG(COW_ADDR_LIFT_1019763D), 2u, (const CowU32[]){ uVar4, iVar2 }, g->ecx, g->edx, g->eax, 0u);
          }
          break;
        case 4:
          if (((int32_t)(0) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x24))))) {
            iVar2 = (int32_t)rd32((uint32_t)(param_1 + 0x24)) + -1;
            wr32((uint32_t)(param_1 + 0x24), iVar2);
            cow_bridge_10193830(g, COW_IMG(COW_ADDR_LIFT_10197670), 2u, (const CowU32[]){ 9, iVar2 }, g->ecx, g->edx, g->eax, 0u);
            uVar3 = rd16((uint32_t)(param_1 + 0x28));
            goto L_1019769a;
          }
          goto L_1019783b;
        case 5:
        case 6:
          cow_bridge_10193830(g, COW_IMG(COW_ADDR_LIFT_10197690), 2u, (const CowU32[]){ 9, rd32((uint32_t)(param_1 + 0x24)) }, g->ecx, g->edx, g->eax, 8u);
          wr8((uint32_t)(param_1 + 0x20), 0);
          wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x62), 1);
          wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x85), 1);
          return;
        default:
          goto switchD_101974cb_default;
        }
    switchD_10197744_caseD_1:
        uVar3 = rd16((uint32_t)(param_1 + 0x28));
      }
      else {
        if ((int8_t)rd8((uint32_t)(param_1 + 0x21)) == '\x01') {
          switch(param_2) {
          case 1:
          case 2:
            goto switchD_1019762b_caseD_1;
          case 3:
            if (((int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x24))) < (int32_t)(100))) {
              iVar2 = (int32_t)rd32((uint32_t)(param_1 + 0x24)) + 1;
              wr32((uint32_t)(param_1 + 0x24), iVar2);
              uVar4 = 10;
              goto L_1019768b;
            }
            break;
          case 4:
            if (((int32_t)(0) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x24))))) {
              iVar2 = (int32_t)rd32((uint32_t)(param_1 + 0x24)) + -1;
              wr32((uint32_t)(param_1 + 0x24), iVar2);
              cow_bridge_10193830(g, COW_IMG(COW_ADDR_LIFT_101976D3), 2u, (const CowU32[]){ 10, iVar2 }, g->ecx, g->edx, g->eax, 0u);
              uVar3 = rd16((uint32_t)(param_1 + 0x28));
              goto L_1019769a;
            }
            goto L_1019783b;
          case 5:
          case 6:
            cow_bridge_10193830(g, COW_IMG(COW_ADDR_LIFT_10197706), 2u, (const CowU32[]){ 10, rd32((uint32_t)(param_1 + 0x24)) }, g->ecx, g->edx, g->eax, 0u);
            wr8((uint32_t)(param_1 + 0x21), 0);
            wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x62), 1);
            wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x85), 1);
            return;
          default:
            goto switchD_101974cb_default;
          }
          goto switchD_10197744_caseD_1;
        }
        cVar1 = (int8_t)rd8((uint32_t)(param_1 + 0x48));
        if (cVar1 < '\x01') {
          return;
        }
        switch(param_2) {
        case 1:
        case 2:
          goto switchD_10197744_caseD_1;
        case 3:
          if (((int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x24))) < (int32_t)(100))) {
            iVar2 = (int32_t)rd32((uint32_t)(param_1 + 0x24)) + 1;
            wr32((uint32_t)(param_1 + 0x24), iVar2);
            if (cVar1 == '\x01') {
              cow_bridge_10193830(g, COW_IMG(COW_ADDR_LIFT_10197772), 2u, (const CowU32[]){ 0x37, iVar2 }, g->ecx, g->edx, g->eax, 8u);
              uVar3 = rd16((uint32_t)(param_1 + 0x28));
            }
            else {
              if (cVar1 != '\x02') {
                if (cVar1 == '\x03') {
                  cow_bridge_10193830(g, COW_IMG(COW_ADDR_LIFT_101977A5), 2u, (const CowU32[]){ 0x39, iVar2 }, g->ecx, g->edx, g->eax, 8u);
                }
                goto L_1019783b;
              }
              cow_bridge_10193830(g, COW_IMG(COW_ADDR_LIFT_101977C0), 2u, (const CowU32[]){ 0x38, iVar2 }, g->ecx, g->edx, g->eax, 0u);
              uVar3 = rd16((uint32_t)(param_1 + 0x28));
            }
          }
          else {
    L_1019783b:
            uVar3 = rd16((uint32_t)(param_1 + 0x28));
          }
          break;
        case 4:
          if (((int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x24))) < (int32_t)(1))) {
    switchD_1019762b_caseD_1:
            uVar3 = rd16((uint32_t)(param_1 + 0x28));
          }
          else {
            iVar2 = (int32_t)rd32((uint32_t)(param_1 + 0x24)) + -1;
            wr32((uint32_t)(param_1 + 0x24), iVar2);
            if (cVar1 == '\x01') {
              cow_bridge_10193830(g, COW_IMG(COW_ADDR_LIFT_101977DB), 2u, (const CowU32[]){ 0x37, iVar2 }, g->ecx, g->edx, g->eax, 8u);
              uVar3 = rd16((uint32_t)(param_1 + 0x28));
            }
            else {
              if (cVar1 != '\x02') {
                if (cVar1 == '\x03') {
                  cow_bridge_10193830(g, COW_IMG(COW_ADDR_LIFT_10197802), 2u, (const CowU32[]){ 0x39, iVar2 }, g->ecx, g->edx, g->eax, 0u);
                }
                goto switchD_1019762b_caseD_1;
              }
              cow_bridge_10193830(g, COW_IMG(COW_ADDR_LIFT_1019781D), 2u, (const CowU32[]){ 0x38, iVar2 }, g->ecx, g->edx, g->eax, 0u);
              uVar3 = rd16((uint32_t)(param_1 + 0x28));
            }
          }
          break;
        case 5:
        case 6:
          if (cVar1 == '\x01') {
            uVar4 = rd32((uint32_t)(param_1 + 0x24));
            uVar5 = 0x37;
          }
          else if (cVar1 == '\x02') {
            uVar4 = rd32((uint32_t)(param_1 + 0x24));
            uVar5 = 0x38;
          }
          else {
            if (cVar1 != '\x03') goto L_10197775;
            uVar4 = rd32((uint32_t)(param_1 + 0x24));
            uVar5 = 0x39;
          }
          cow_bridge_10193830(g, COW_IMG(COW_ADDR_LIFT_10197838), 2u, (const CowU32[]){ uVar5, uVar4 }, g->ecx, g->edx, g->eax, 8u);
    L_10197775:
          wr8((uint32_t)(param_1 + 0x48), 0);
          wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x62), 1);
          wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x85), 1);
          return;
        default:
          goto switchD_101974cb_default;
        }
      }
    L_1019769a:
      cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_101976A4), 2u, (const CowU32[]){ uVar3, 0 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_101976AB), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
    switchD_101974cb_default:
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10197470(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10197470: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10197471: push esi */
    g->esi = g->ecx;   /* 0x10197472: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10197474: push edi */
    { uint32_t A = (uint32_t)(g->esi + 0x20u); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x10197475: register eax, replayed as the entry ran it */
    cow_lift_10197470(g, param_1, param_2, param_3);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 14 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
