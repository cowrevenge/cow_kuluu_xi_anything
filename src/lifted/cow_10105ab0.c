/* f_0x10105ab0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10105ab0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10105ab0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 piVar1;
    CowU32 pcVar2;
    char cVar3;
    CowU32 uVar4;
    int iVar5;
    CowU32 puVar6;
    puVar6 = COW_IMG(COW_ADDR_LIFT_10364880);
      cVar3 = rd8((uint32_t)param_2);
      if (cVar3 != '\0') {
        if (rd32(COW_IMG(COW_ADDR_LIFT_103D023C)) < 2) {
          uVar4 = (CowU8)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_103D0030)) + 4u * (uint32_t)(cVar3 * 2))) & 8;
        }
        else {
          uVar4 = cow_bridge_10315180(g, COW_IMG(COW_ADDR_LIFT_10105ADC), 2u, (const CowU32[]){ (int)cVar3, 8 }, g->ecx, g->edx, g->eax, 8u);
        }
        if (uVar4 == 0) {
          if (rd32(COW_IMG(COW_ADDR_LIFT_10364884)) == (CowU32)0x0) {
            wr32((uint32_t)param_3, 0);
            g->eax = (CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_10364880))); return;
          }
          do {
            iVar5 = cow_bridge_10105520(g, COW_IMG(COW_ADDR_LIFT_10105B0C), 3u, (const CowU32[]){ param_1, param_2, rd32((uint32_t)(puVar6 + 4u * (uint32_t)(1))) }, g->ecx, g->edx, g->eax, 12u);
            if (iVar5 != 0) break;
            piVar1 = puVar6 + 4u * (uint32_t)(3);
            puVar6 = puVar6 + 4u * (uint32_t)(2);
          } while (rd32((uint32_t)piVar1) != 0);
          wr32((uint32_t)param_3, iVar5);
          g->eax = (CowU32)(rd32((uint32_t)puVar6)); return;
        }
        cVar3 = rd8((uint32_t)param_2);
        while (cVar3 != '\0') {
          if (rd32(COW_IMG(COW_ADDR_LIFT_103D023C)) < 2) {
            uVar4 = (CowU8)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_103D0030)) + 4u * (uint32_t)(cVar3 * 2))) & 8;
          }
          else {
            uVar4 = cow_bridge_10315180(g, COW_IMG(COW_ADDR_LIFT_10105B43), 2u, (const CowU32[]){ (int)cVar3, 8 }, g->ecx, g->edx, g->eax, 8u);
          }
          if (uVar4 == 0) break;
          pcVar2 = param_2 + 1;
          param_2 = param_2 + 1;
          cVar3 = rd8((uint32_t)pcVar2);
        }
      }
      wr32((uint32_t)param_3, (int)param_2);
      g->eax = (CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_10364880))); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10105ab0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10105ab0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10105ab1: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10105ab2: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x14u); g->edi = (uint32_t)(rd32(A)); }   /* 0x10105ab3: register edi, replayed as the entry ran it */
    g->ebx = 0u;   /* 0x10105ab7: the value the entry loaded and the decompiler dropped */
    g->esi = COW_IMG(COW_ADDR_LIFT_10364880);   /* 0x10105ab9: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->edi); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x10105abe: register eax, replayed as the entry ran it */
    cow_lift_10105ab0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
