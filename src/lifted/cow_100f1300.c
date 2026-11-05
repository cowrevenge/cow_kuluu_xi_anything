/* f_0x100f1300 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100f1300 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100f1300(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 pcVar1;
    int iVar2;
    iVar2 = 0;
      pcVar1 = (CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_104DF774)) + 4);
      do {
        if (rd8((uint32_t)pcVar1) == '\0') {
          wr32((uint32_t)(pcVar1 + 8), param_1);
          wr32((uint32_t)(pcVar1 + 0xc), param_2);
          wr8((uint32_t)pcVar1, '\x01');
          wr32((uint32_t)(pcVar1 + 0x10), param_3);
          wr32((uint32_t)(pcVar1 + 0x14), param_4);
          g->eax = (CowU32)(pcVar1); return;
        }
        iVar2 = iVar2 + 1;
        pcVar1 = pcVar1 + 0x2c;
      } while (iVar2 < 0x40);
      g->eax = (CowU32)(pcVar1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), cdecl, 4 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 2 register argument(s) [ecx, edx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100f1300(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_104DF774));   /* 0x100f1300: the value the entry loaded and the decompiler dropped */
    g->edx = 0u;   /* 0x100f1305: the value the entry loaded and the decompiler dropped */
    g->ecx = 0u;   /* 0x100f1307: the value the entry loaded and the decompiler dropped */
    cow_lift_100f1300(g, param_1, param_2, param_3, param_4);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
