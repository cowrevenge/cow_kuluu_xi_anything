/* f_0x1012db00 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1012db00 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1012db00(Guest* g, int32_t param_1, int32_t param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    CowU32 pcVar3;
    int aiStack_28[4];
    int local_18;
    int local_14;
    int local_10;
    int local_c;
    int local_8;
    CowU32 local_4;
    aiStack_28[1] = param_1 + 0x16;
      aiStack_28[2] = param_1 + 0x36;
      aiStack_28[3] = param_1 + 0x56;
      local_18 = param_1 + 0x76;
      local_14 = param_1 + 0x96;
      local_10 = param_1 + 0xb6;
      local_8 = param_1 + 0xf6;
      local_c = param_1 + 0xd6;
      local_4 = 0;
      iVar2 = aiStack_28[param_2];
      pcVar3 = COW_IMG(COW_ADDR_LIFT_103D3C84);
      do {
        cVar1 = rd8((uint32_t)pcVar3);
        wr8((uint32_t)(pcVar3 + 1u * (uint32_t)(iVar2 + -0x103d3c84)), cVar1);
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 36 locals, pops [-], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1012db00(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 0x24u;                      /* 0x1012db00: 36 bytes of locals */
    { g->eax = (uint32_t)((uint32_t)(g->ecx + 0x16u)); }   /* 0x1012db03: register eax, replayed as the entry ran it */
    { g->edx = (uint32_t)((uint32_t)(g->ecx + 0x36u)); }   /* 0x1012db06: register edx, replayed as the entry ran it */
    cow_lift_1012db00(g, param_1, param_2);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
