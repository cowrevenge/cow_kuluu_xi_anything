/* f_0x10161b10 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10161b10 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10161b10(Guest* g, int32_t param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    short sVar1;
    short sVar2;
    sVar2 = (short)(((int)(short)(((short)rd32(COW_IMG(COW_ADDR_LIFT_106218B8)) - (short)rd32(COW_IMG(COW_ADDR_LIFT_106218B4))) + -0x200) * (int)param_2
                      ) / 100) + 0x160;
      sVar1 = (short)rd32(COW_IMG(COW_ADDR_LIFT_106218B8)) - (short)rd32(COW_IMG(COW_ADDR_LIFT_106218B4));
      if (sVar1 + -0xa0 < (int)sVar2) {
        sVar2 = sVar1 + -0xa0;
      }
      if (sVar2 < 0x160) {
        wr16((uint32_t)(param_1 + 0x52), 0x160);
        return;
      }
      wr16((uint32_t)(param_1 + 0x52), sVar2);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10161b10(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10161b10: push esi */
    g->esi = rd32(COW_IMG(COW_ADDR_LIFT_106218B8));   /* 0x10161b11: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10161b17: push edi */
    g->edi = rd32(COW_IMG(COW_ADDR_LIFT_106218B4));   /* 0x10161b18: the value the entry loaded and the decompiler dropped */
    g->eax = g->esi;   /* 0x10161b1e: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)g->edi; uint32_t r = (uint32_t)(a - b); g->eax = (uint32_t)(r); }   /* 0x10161b20: register eax, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0x200u; uint32_t r = (uint32_t)(a - b); g->eax = (uint32_t)(r); }   /* 0x10161b22: register eax, replayed as the entry ran it */
    { g->edx = (uint32_t)((uint32_t)(int32_t)((int16_t)(uint16_t)g->eax)); }   /* 0x10161b27: register edx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->eax = (uint32_t)((uint32_t)(int32_t)((int16_t)rd16(A))); }   /* 0x10161b2a: register eax, replayed as the entry ran it */
    cow_lift_10161b10(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
