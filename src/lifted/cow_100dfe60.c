/* f_0x100dfe60 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100dfe60 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100dfe60(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    if ((((param_1 != 0) && (-1 < param_2)) && (param_2 < 8)) && (param_3 != 0)) {
        puVar1 = (CowU32)(param_1 + (param_2 * 5 + 5) * 8);
        wr8((uint32_t)puVar1, rd8((uint32_t)(param_3 + 0x14)));
        wr32((uint32_t)(puVar1 + 4), rd32((uint32_t)(param_3 + 0x18)));
        wr32((uint32_t)(puVar1 + 8), rd32((uint32_t)(param_3 + 0x1c)));
        wr32((uint32_t)(puVar1 + 0xc), rd32((uint32_t)(param_3 + 0x20)));
        wr32((uint32_t)(puVar1 + 0x10), rd32((uint32_t)(param_3 + 0x24)));
        wr16((uint32_t)(puVar1 + 0x14), rd16((uint32_t)(param_3 + 0x28)));
        wr8((uint32_t)(puVar1 + 1u * (uint32_t)(0x16)), rd8((uint32_t)(param_3 + 0x2a)));
        wr8((uint32_t)(puVar1 + 1u * (uint32_t)(0x17)), rd8((uint32_t)(param_3 + 0x2b)));
        wr32((uint32_t)(puVar1 + 0x18), rd32((uint32_t)(param_3 + 0x2c)));
        wr32((uint32_t)(puVar1 + 0x1c), rd32((uint32_t)(param_3 + 0x30)));
        wr32((uint32_t)(puVar1 + 0x20), rd32((uint32_t)(param_3 + 0x34)));
        wr32((uint32_t)(puVar1 + 0x24), rd32((uint32_t)(param_3 + 0x38)));
        wr32((uint32_t)(param_1 + 0xc), rd32((uint32_t)(param_1 + 0xc)) | 1 << ((CowU8)param_2 & 0x1f));
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [esi, edi, ebx, ebp], frame pointer no, 0 locals, pops [ebp, ebx, edi, esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100dfe60(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100dfe60: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100dfe61: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->edi = (uint32_t)(rd32(A)); }   /* 0x100dfe62: register edi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* push ebx (from the epilogue's pops) */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* push ebp (from the epilogue's pops) */
    cow_lift_100dfe60(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
