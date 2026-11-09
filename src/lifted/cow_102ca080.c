/* f_0x102ca080 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102ca080 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102ca080(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    int iVar2;
    CowU32 uVar3;
    puVar1 = rd32((uint32_t)(param_1 + 0x24));
      uVar3 = 0;
      iVar2 = 0;
      do {
        if ((rd32((uint32_t)(param_1 + 0xc)) == rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_103438D0) + 4u * (uint32_t)(iVar2)))) &&
           (rd32((uint32_t)(param_1 + 8)) == rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10343890) + 4u * (uint32_t)(iVar2))))) break;
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x10);
      if (iVar2 == 0x10) {
        g->eax = (CowU32)(0xffffffff); return;
      }
      wr32((uint32_t)(param_1 + 8), rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10343890) + 4u * (uint32_t)(iVar2))));
      wr32((uint32_t)(param_1 + 0xc), rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_103438D0) + 4u * (uint32_t)(iVar2))));
      wr32((uint32_t)(param_1 + 0x10), rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10343910) + iVar2 * 4)) + 4);
      wr32((uint32_t)(param_1 + 0x14), 0x1000);
      wr32((uint32_t)(param_1 + 0x28), rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10343910) + iVar2 * 4)));
      wr32((uint32_t)(param_1 + 0x2c), 0x1000);
      iVar2 = cow_bridge_102cd350(g, COW_IMG(COW_ADDR_LIFT_102CA114), 4u, (const CowU32[]){ 2, rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10343850) + iVar2 * 4)), rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10343950) + iVar2 * 4)), (int)puVar1 + 0x1003U & 0xfffff000 }, g->ecx, g->edx, 0u, 16u);
      if (iVar2 == 0) {
        uVar3 = 0x80000005;
      }
      wr32((uint32_t)puVar1, 0);
      g->eax = (CowU32)(uVar3); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102ca080(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->ecx = param_1;   /* 0x102ca080: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102ca084: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102ca085: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102ca086: push esi */
    { uint32_t A = (uint32_t)(g->ecx + 0xCu); g->esi = (uint32_t)(rd32(A)); }   /* 0x102ca087: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102ca08a: push edi */
    { uint32_t A = (uint32_t)(g->ecx + 0x24u); g->edi = (uint32_t)(rd32(A)); }   /* 0x102ca08b: register edi, replayed as the entry ran it */
    g->ebx = 0u;   /* 0x102ca08e: the value the entry loaded and the decompiler dropped */
    { g->edx = (uint32_t)((uint32_t)(g->edi + 0x1003u)); }   /* 0x102ca090: register edx, replayed as the entry ran it */
    { uint32_t a = g->edx; uint32_t b = (uint32_t)0xFFFFF000u; uint32_t r = (uint32_t)(a & b); g->edx = (uint32_t)(r); }   /* 0x102ca096: register edx, replayed as the entry ran it */
    g->eax = 0u;   /* 0x102ca09c: the value the entry loaded and the decompiler dropped */
    cow_lift_102ca080(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
