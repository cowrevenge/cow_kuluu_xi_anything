/* f_0x102f0829 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102f0829 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102f0829(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    if ((rd8((uint32_t)(param_1 + 0x61)) & 0x10) == 0) goto L_102f0875;
      if (rd8((uint32_t)((int)param_2 + 0x19)) == 3) {
        wr8((uint32_t)((int)param_2 + 0x19), ((int16_t)rd16((uint32_t)(param_1 + 0x10a)) != 0) * '\x04' + '\x02');
    L_102f086d:
        wr8((uint32_t)(param_2 + 4u * (uint32_t)(6)), 8);
      }
      else {
        if ((int16_t)rd16((uint32_t)(param_1 + 0x10a)) != 0) {
          wr8((uint32_t)((int)param_2 + 0x19), rd8((uint32_t)((int)param_2 + 0x19)) | 4);
        }
        if (rd8((uint32_t)(param_2 + 4u * (uint32_t)(6))) < 8) goto L_102f086d;
      }
      wr16((uint32_t)((int)param_2 + 0x16), 0);
    L_102f0875:
      if ((rd8((uint32_t)(param_1 + 0x61)) & 0x20) != 0) {
        wr32((uint32_t)(param_2 + 4u * (uint32_t)(10)), (int32_t)rd32((uint32_t)(param_1 + 0x130)));
      }
      if (((rd8((uint32_t)(param_1 + 0x61)) & 4) != 0) && ((char)rd32((uint32_t)(param_2 + 4u * (uint32_t)(6))) == '\x10')) {
        wr8((uint32_t)(param_2 + 4u * (uint32_t)(6)), 8);
      }
      if (((rd8((uint32_t)(param_1 + 0x60)) & 0x40) != 0) &&
         (((((int8_t)rd8((uint32_t)((int)param_2 + 0x19)) == '\x02' || ((int8_t)rd8((uint32_t)((int)param_2 + 0x19)) == '\x06')) &&
           ((int32_t)rd32((uint32_t)(param_1 + 0x174)) != 0)) && ((char)rd32((uint32_t)(param_2 + 4u * (uint32_t)(6))) == '\b')))) {
        wr8((uint32_t)((int)param_2 + 0x19), 3);
      }
      if (((rd8((uint32_t)(param_1 + 0x60)) & 4) != 0) && (rd8((uint32_t)(param_2 + 4u * (uint32_t)(6))) < 8)) {
        wr8((uint32_t)(param_2 + 4u * (uint32_t)(6)), 8);
      }
      bVar1 = rd8((uint32_t)((int)param_2 + 0x19));
      if ((bVar1 == 3) || ((bVar1 & 2) == 0)) {
        wr8((uint32_t)((int)param_2 + 0x1d), 1);
      }
      else {
        wr8((uint32_t)((int)param_2 + 0x1d), 3);
      }
      if ((bVar1 & 4) != 0) {
        wr8((uint32_t)((int)param_2 + 0x1d), (int8_t)rd8((uint32_t)((int)param_2 + 0x1d)) + '\x01');
      }
      if (((rd8((uint32_t)(param_1 + 0x61)) & 0x80) != 0) && ((bVar1 == 2 || (bVar1 == 0)))) {
        wr8((uint32_t)((int)param_2 + 0x1d), (int8_t)rd8((uint32_t)((int)param_2 + 0x1d)) + '\x01');
      }
      bVar1 = (char)rd32((uint32_t)(param_2 + 4u * (uint32_t)(6))) * (int8_t)rd8((uint32_t)((int)param_2 + 0x1d));
      wr8((uint32_t)((int)param_2 + 0x1e), bVar1);
      wr32((uint32_t)(param_2 + 4u * (uint32_t)(3)), (CowU32)bVar1 * rd32((uint32_t)param_2) + 7 >> 3);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(edx), cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 1 register argument(s) [edx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102f0829(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->edx;   /* edx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    g->eax = param_2;   /* 0x102f0829: the value the entry loaded and the decompiler dropped */
    g->ecx = param_3;   /* 0x102f082d: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102f0831: push ebx */
    g->ebx = 0u;   /* 0x102f0832: the value the entry loaded and the decompiler dropped */
    cow_lift_102f0829(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
