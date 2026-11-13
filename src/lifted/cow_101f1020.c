/* f_0x101f1020 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101f1020 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101f1020(Guest* g, CowU32 param_1, int32_t param_2, int32_t param_3, CowU32 param_4, int32_t param_5)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    const CowU32 cow_eax_base = (CowU32)(param_2);   /* what the guest left in the rest of eax when it wrote only the low part */
    char cVar1;
    CowU32 psVar2;
    CowU32 uVar3;
    CowU32 uVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    iVar6 = 0;
      iVar7 = 0;
      iVar9 = 8;
      psVar2 = param_4;
      do {
        if (-1 < rd16((uint32_t)psVar2)) {
          iVar6 = iVar6 + rd16((uint32_t)psVar2);
          iVar7 = iVar7 + (int16_t)rd16((uint32_t)((param_5 - (int)param_4) + (int)psVar2));
        }
        psVar2 = psVar2 + 2u * (uint32_t)(1);
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      if ((param_2 < iVar6) || (iVar7 < 1)) {
        g->eax = (CowU32)((cow_eax_base & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
      }
      iVar7 = 0;
      iVar8 = 0;
      iVar9 = cow_bridge_101effd0(g, COW_IMG(COW_ADDR_LIFT_101F1076), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if (0 < iVar9) {
        do {
          if (-1 < rd16((uint32_t)(param_4 + 2u * (uint32_t)(iVar8)))) {
            uVar3 = cow_bridge_101effe0(g, COW_IMG(COW_ADDR_LIFT_101F1092), 1u, (const CowU32[]){ iVar8 }, g->ecx, g->edx, g->eax, 0u);
            uVar4 = cow_bridge_100eb940(g, COW_IMG(COW_ADDR_LIFT_101F109A), 1u, (const CowU32[]){ uVar3 }, g->ecx, g->edx, g->eax, 0u);
            iVar7 = iVar7 + -1 + (uVar4 & 0xff);
            cVar1 = cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x18u))), COW_IMG(COW_ADDR_LIFT_101F10AF), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            if (cVar1 != '\0') {
              iVar5 = cow_bridge_100eb8d0(g, COW_IMG(COW_ADDR_LIFT_101F10B9), 1u, (const CowU32[]){ uVar3 }, g->ecx, g->edx, g->eax, 4u);
              iVar7 = iVar7 - iVar5;
            }
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar9);
      }
      cow_bridge_101cb590(g, COW_IMG(COW_ADDR_LIFT_101F10D8), 2u, (const CowU32[]){ param_3 - iVar6, iVar7 }, g->ecx, g->edx, g->eax, 8u);
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 5 parameter(s), cleanup 16 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 8 locals, pops [edi, esi, ebp, ebx], ret 16.
   Arguments: 1 register argument(s) [ecx], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101f1020(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    g->esp -= 0x8u;                      /* 0x101f1020: 8 bytes of locals */
    { uint32_t A = (uint32_t)(g->esp + 0x18u); g->edx = (uint32_t)(rd32(A)); }   /* 0x101f1023: register edx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101f1027: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x101f1028: push ebp */
    { uint32_t A = (uint32_t)(g->esp + 0x1Cu); g->ebp = (uint32_t)(rd32(A)); }   /* 0x101f1029: register ebp, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101f102d: push esi */
    g->ebx = 0u;   /* 0x101f102e: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101f1030: push edi */
    g->esi = 0u;   /* 0x101f1031: the value the entry loaded and the decompiler dropped */
    cow_lift_101f1020(g, param_1, param_2, param_3, param_4, param_5);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
