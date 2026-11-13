/* f_0x1011b220 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1011b220 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1011b220(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU16 uVar2;
    uVar1 = (CowU32)param_2;
      if ((((int)(uVar1 - 1) < (int)(int16_t)rd16((uint32_t)(param_1 + 0x18))) && (param_2 != 0)) &&
         (uVar1 = rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 4)) + -0x14 + uVar1 * 0x14)),
         (int16_t)rd16((uint32_t)(uVar1 + 0x12)) == param_2)) {
        uVar2 = (CowU16)(uVar1 >> 0x10);
        switch(param_3) {
        case 1:
          g->eax = (CowU32)((((uint32_t)(uVar2) & 0xffffu) << 16 | ((uint32_t)((short)(int8_t)rd8((uint32_t)(uVar1 + 0x18))) & 0xffffu))); return;
        case 2:
          g->eax = (CowU32)((((uint32_t)(uVar2) & 0xffffu) << 16 | ((uint32_t)((short)(int8_t)rd8((uint32_t)(uVar1 + 0x17))) & 0xffffu))); return;
        case 3:
          g->eax = (CowU32)((((uint32_t)(uVar2) & 0xffffu) << 16 | ((uint32_t)((short)(int8_t)rd8((uint32_t)(uVar1 + 0x19))) & 0xffffu))); return;
        case 4:
          g->eax = (CowU32)((((uint32_t)(uVar2) & 0xffffu) << 16 | ((uint32_t)((short)(int8_t)rd8((uint32_t)(uVar1 + 0x1a))) & 0xffffu))); return;
        }
      }
      g->eax = (CowU32)((g->eax & 0xffff0000u) | ((CowU32)(uVar1 & 0xffff0000) & 0xffffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 8.
   Arguments: 2 register argument(s) [ecx, edx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1011b220(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    { uint32_t A = (uint32_t)(g->esp + 0x4u); g->edx = (g->edx & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x1011b220: register edx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1011b225: push esi */
    { uint32_t A = (uint32_t)(g->ecx + 0x18u); g->esi = (uint32_t)((uint32_t)(int32_t)((int16_t)rd16(A))); }   /* 0x1011b226: register esi, replayed as the entry ran it */
    { g->eax = (uint32_t)((uint32_t)(int32_t)((int16_t)(uint16_t)g->edx)); }   /* 0x1011b22a: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1011b22d: push edi */
    { g->edi = (uint32_t)((uint32_t)(g->eax + 0xFFFFFFFFu)); }   /* 0x1011b22e: register edi, replayed as the entry ran it */
    cow_lift_1011b220(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
