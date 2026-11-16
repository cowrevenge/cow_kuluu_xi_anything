/* f_0x102036f0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102036f0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102036f0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU8 uVar2;
    char cVar3;
    int iVar4;
    CowU32 local_4;
    _Bool bVar5;
      
      iVar1 = rd32(COW_IMG(COW_ADDR_LIFT_106643E0));
      bVar5 = rd32(COW_IMG(COW_ADDR_LIFT_106643FC)) == 0;
      uVar2 = cow_bridge_10202c20(g, COW_IMG(COW_ADDR_LIFT_1020370E), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      local_4 = (((uint32_t)(((CowU32)param_1 >> 8)) & 0xffffffu) << 8 | ((uint32_t)(uVar2) & 0xffu));
      switch(param_2) {
      case 1:
        if (bVar5) {
          wr32(COW_IMG(COW_ADDR_LIFT_106643E0), cow_bridge_10203570(g, COW_IMG(COW_ADDR_LIFT_102037D6), 4u, (const CowU32[]){ g->edx, (int)rd32(COW_IMG(COW_ADDR_LIFT_106643F4)), (int)rd32(COW_IMG(COW_ADDR_LIFT_106643F3)), local_4 }, g->ecx, g->edx, g->eax, 0u));
          cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x48u))), COW_IMG(COW_ADDR_LIFT_10203753), 2u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_106643E0)), 1 }, param_1, g->edx, g->eax, 0u);
        }
        else {
          wr32(COW_IMG(COW_ADDR_LIFT_106643E0), cow_bridge_102035c0(g, COW_IMG(COW_ADDR_LIFT_102037A5), 3u, (const CowU32[]){ g->edx, (int)rd32(COW_IMG(COW_ADDR_LIFT_106643F6)), (int)rd32(COW_IMG(COW_ADDR_LIFT_106643F5)) }, g->ecx, g->edx, g->eax, 0u));
          cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x48u))), COW_IMG(COW_ADDR_LIFT_10203784), 2u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_106643E0)), 1 }, g->ecx, g->edx, g->eax, 0u);
        }
        break;
      case 2:
        if (bVar5) {
          wr32(COW_IMG(COW_ADDR_LIFT_106643E0), cow_bridge_10203630(g, COW_IMG(COW_ADDR_LIFT_10203775), 4u, (const CowU32[]){ g->edx, (int)rd32(COW_IMG(COW_ADDR_LIFT_106643F4)), (int)rd32(COW_IMG(COW_ADDR_LIFT_106643F3)), local_4 }, g->ecx, g->edx, g->eax, 0u));
          cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x48u))), COW_IMG(COW_ADDR_LIFT_102037B4), 2u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_106643E0)), 1 }, g->ecx, g->edx, g->eax, 0u);
        }
        else {
          wr32(COW_IMG(COW_ADDR_LIFT_106643E0), cow_bridge_10203680(g, COW_IMG(COW_ADDR_LIFT_10203744), 3u, (const CowU32[]){ g->edx, (int)rd32(COW_IMG(COW_ADDR_LIFT_106643F6)), (int)rd32(COW_IMG(COW_ADDR_LIFT_106643F5)) }, param_1, g->edx, g->eax, 0u));
          cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x48u))), COW_IMG(COW_ADDR_LIFT_102037E5), 2u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_106643E0)), 1 }, g->ecx, g->edx, g->eax, 0u);
        }
        break;
      default:
        goto switchD_10203721_caseD_3;
      case 5:
        if (rd32(COW_IMG(COW_ADDR_LIFT_106643E4)) == 0) {
          return;
        }
        cVar3 = cow_bridge_10202fe0(g, COW_IMG(COW_ADDR_LIFT_10203875), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (cVar3 != '\0') {
          if (rd32(COW_IMG(COW_ADDR_LIFT_106643EC)) != 0) {
            cow_bridge_1015db80(g, COW_IMG(COW_ADDR_LIFT_10203892), 2u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_106643EC)) + 8)), 1 }, COW_IMG(COW_ADDR_LIFT_10621838), g->edx, g->eax, 0u);
            if (rd32(COW_IMG(COW_ADDR_LIFT_106643F0)) != '\0') {
              cow_bridge_1015e530(g, COW_IMG(COW_ADDR_LIFT_102038AE), 1u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_106643EC)) + 8)) }, 274864184u, g->edx, g->eax, 0u);
              cow_bridge_10202d10(g, COW_IMG(COW_ADDR_LIFT_102038B3), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
              break;
            }
            if (rd32(COW_IMG(COW_ADDR_LIFT_106643F1)) != '\0') {
              cow_bridge_1015e790(g, COW_IMG(COW_ADDR_LIFT_102038D4), 2u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_106643EC)) + 8)), 1 }, 274864184u, g->edx, g->eax, 0u);
            }
          }
          cow_bridge_10202d10(g, COW_IMG(COW_ADDR_LIFT_102038D9), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        }
        break;
      case 6:
        cow_bridge_10202f00(g, COW_IMG(COW_ADDR_LIFT_102038E2), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        break;
      case 9:
        if (rd32(COW_IMG(COW_ADDR_LIFT_106643E4)) == 0) {
          return;
        }
        if (bVar5) {
          iVar4 = cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x44u))), COW_IMG(COW_ADDR_LIFT_10203818), 3u, (const CowU32[]){ (int)param_3, (int)rd32(COW_IMG(COW_ADDR_LIFT_106643F4)), (int)rd32(COW_IMG(COW_ADDR_LIFT_106643F3)) }, g->ecx, g->edx, g->eax, 0u);
        }
        else {
          iVar4 = cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x44u))), COW_IMG(COW_ADDR_LIFT_10203837), 3u, (const CowU32[]){ (int)param_3, (int)rd32(COW_IMG(COW_ADDR_LIFT_106643F6)), (int)rd32(COW_IMG(COW_ADDR_LIFT_106643F5)) }, g->ecx, g->edx, g->eax, 0u);
        }
        if ((-1 < iVar4) && (rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10663B52) + 4u * (uint32_t)(iVar4 * 0x7c))) != '\0')) {
          wr32(COW_IMG(COW_ADDR_LIFT_106643E0), iVar4);
        }
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_106643E0)) != iVar1) {
        cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_102038EF), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      }
    switchD_10203721_caseD_3:
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ecx, ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx, ecx], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102036f0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x102036f0: push ecx */
    g->edx = rd32(COW_IMG(COW_ADDR_LIFT_106643E0));   /* 0x102036f1: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102036f7: push ebx */
    g->ebx = rd32(COW_IMG(COW_ADDR_LIFT_106643FC));   /* 0x102036f8: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102036fe: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* push edi (from the epilogue's pops) */
    cow_lift_102036f0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
