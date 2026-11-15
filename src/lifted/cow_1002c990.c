/* f_0x1002c990 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1002c990 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1002c990(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    int iVar3;
    CowU32 piVar4;
    _Bool bVar2;
      
      bVar2 = 0;
      iVar3 = cow_bridge_10081550(g, COW_IMG(COW_ADDR_LIFT_1002C9A2), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if (((iVar3 != 0) && ((int32_t)rd32((uint32_t)(iVar3 + 0x70)) != 0)) &&
         ((uVar1 = rd32((uint32_t)((int32_t)rd32((uint32_t)(iVar3 + 0x70)) + 0x120)), (uVar1 >> 7 & 1) != 0 ||
          ((uVar1 >> 8 & 1) != 0)))) {
        bVar2 = 1;
      }
      piVar4 = rd32((uint32_t)((int)param_1 + 0x34));
      if ((piVar4 == (CowU32)0x0) || (iVar3 = rd32((uint32_t)piVar4), iVar3 == 0)) goto switchD_1002c9ed_default;
      piVar4 = rd32((uint32_t)((int)param_1 + 0x38));
      switch(piVar4) {
      case (CowU32)0x0:
        piVar4 = (CowU32)0x0;
        if (bVar2) {
    L_1002ca0f:
          wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045B650) + 4u * (uint32_t)((int)piVar4)), param_1);
          wr32((uint32_t)((int)param_1 + 0x38), 1);
          wr32((uint32_t)((int)param_1 + 0x3c), 0);
        }
        else {
          do {
            if (rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045B650) + 4u * (uint32_t)((int)piVar4))) == 0) break;
            piVar4 = (CowU32)((int)piVar4 + 1);
          } while ((int)piVar4 < 0x10);
          if (piVar4 != (CowU32)0x10) goto L_1002ca0f;
        }
        if (!bVar2) goto switchD_1002c9ed_default;
      case (CowU32)0x1:
        piVar4 = (CowU32)cow_bridge_1002cb80(g, COW_IMG(COW_ADDR_LIFT_1002CA38), 2u, (const CowU32[]){ rd32((uint32_t)(iVar3 + 0x36)), (int)param_1 + 0x58 }, param_1, g->edx, g->eax, 0u);
        wr32((uint32_t)((int)param_1 + 0x3c), 0);
        if ((char)piVar4 == '\0') {
          wr32((uint32_t)((int)param_1 + 0x38), 7);
        }
        else {
          wr32((uint32_t)((int)param_1 + 0x38), 2);
        }
        if (!bVar2) goto switchD_1002c9ed_default;
    switchD_1002c9ed_caseD_2:
        piVar4 = (CowU32)cow_bridge_1002ccb0(g, COW_IMG(COW_ADDR_LIFT_1002CA67), 1u, (const CowU32[]){ rd32((uint32_t)(iVar3 + 0x36)) }, g->ecx, g->edx, g->eax, 0u);
        if ((char)piVar4 == '\0') goto switchD_1002c9ed_default;
        wr32((uint32_t)((int)param_1 + 0x38), 3);
        wr32((uint32_t)((int)param_1 + 0x3c), 0);
        if (!bVar2) goto switchD_1002c9ed_default;
    switchD_1002c9ed_caseD_3:
        piVar4 = (CowU32)cow_bridge_1002ce20(g, COW_IMG(COW_ADDR_LIFT_1002CA91), 1u, (const CowU32[]){ rd32((uint32_t)(iVar3 + 0x36)) }, param_1, g->edx, g->eax, 0u);
        if ((char)piVar4 == '\0') goto switchD_1002c9ed_default;
        wr32((uint32_t)((int)param_1 + 0x38), 4);
        wr32((uint32_t)((int)param_1 + 0x3c), 0);
        if (!bVar2) goto switchD_1002c9ed_default;
    switchD_1002c9ed_caseD_4:
        piVar4 = (CowU32)cow_bridge_1002d310(g, COW_IMG(COW_ADDR_LIFT_1002CAB4), 1u, (const CowU32[]){ 0 }, g->ecx, g->edx, g->eax, 0u);
        if ((char)piVar4 == '\0') goto switchD_1002c9ed_default;
        wr32((uint32_t)((int)param_1 + 0x38), 5);
        wr32((uint32_t)((int)param_1 + 0x3c), 0);
        wr32((uint32_t)((int)param_1 + 0x8a), 0);
        if (!bVar2) goto switchD_1002c9ed_default;
    switchD_1002c9ed_caseD_5:
        if (((rd8((uint32_t)(iVar3 + 0x34)) & 1) != 0) &&
           (piVar4 = (CowU32)cow_bridge_1002d340(g, COW_IMG(COW_ADDR_LIFT_1002CADF), 1u, (const CowU32[]){ 0 }, g->ecx, g->edx, g->eax, 0u), (char)piVar4 == '\0')) goto switchD_1002c9ed_default;
        wr32((uint32_t)((int)param_1 + 0x38), 6);
        wr32((uint32_t)((int)param_1 + 0x3c), 0);
        wr32((uint32_t)((int)param_1 + 0x8a), 0);
        if (!bVar2) goto switchD_1002c9ed_default;
        break;
      case (CowU32)0x2:
        goto switchD_1002c9ed_caseD_2;
      case (CowU32)0x3:
        goto switchD_1002c9ed_caseD_3;
      case (CowU32)0x4:
        goto switchD_1002c9ed_caseD_4;
      case (CowU32)0x5:
        goto switchD_1002c9ed_caseD_5;
      case (CowU32)0x6:
        if (!bVar2) {
          piVar4 = (CowU32)((int32_t)rd32((uint32_t)((int)param_1 + 0x8a)) + 1);
          wr32((uint32_t)((int)param_1 + 0x8a), piVar4);
          if (2 < (int)piVar4) {
            wr32((uint32_t)((int)param_1 + 0x3c), 0);
            wr32((uint32_t)((int)param_1 + 0x38), 7);
            g->eax = (CowU32)((CowU32)piVar4 & 0xffffff00); return;
          }
          goto switchD_1002c9ed_default;
        }
        break;
      case (CowU32)0x7:
        break;
      default:
        goto switchD_1002c9ed_default;
      }
      cow_bridge_10071f60(g, COW_IMG(COW_ADDR_LIFT_1002CB01), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      wr8((uint32_t)((int)param_1 + 0x68), 1);
      wr32((uint32_t)((int)param_1 + 0x38), 8);
      wr32((uint32_t)((int)param_1 + 0x3c), 0);
      piVar4 = (CowU32)0x0;
      do {
        if ((CowU32)rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045B650) + 4u * (uint32_t)((int)piVar4))) == param_1) break;
        piVar4 = (CowU32)((int)piVar4 + 1);
      } while ((int)piVar4 < 0x10);
      if (piVar4 != (CowU32)0x10) {
        wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045B650) + 4u * (uint32_t)((int)piVar4)), 0);
      }
    switchD_1002c9ed_default:
      g->eax = (CowU32)((CowU32)piVar4 & 0xffffff00); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ecx, ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx, ecx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1002c990(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x1002c990: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1002c991: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1002c992: push esi */
    g->esi = g->ecx;   /* 0x1002c993: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1002c995: push edi */
    g->ecx = COW_IMG(COW_ADDR_LIFT_1047D600);   /* 0x1002c996: the value the entry loaded and the decompiler dropped */
    { uint8_t a = (uint8_t)g->ebx; uint8_t b = (uint8_t)(uint8_t)g->ebx; uint8_t r = (uint8_t)(a ^ b); g->ebx = (g->ebx & 0xFFFFFF00u) | (uint8_t)(r); }   /* 0x1002c99b: register ebx, replayed as the entry ran it */
    cow_lift_1002c990(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
