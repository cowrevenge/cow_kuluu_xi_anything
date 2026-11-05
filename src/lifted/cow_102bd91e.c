/* f_0x102bd91e - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102bd91e (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102bd91e(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 uVar2;
    if (param_2 == (CowU32)0x0) {
        if (param_3 != (CowU32)0x0) {
          for (; param_4 != 0; param_4 = param_4 + -1) {
            cow_bridge_102bd511(g, COW_IMG(COW_ADDR_LIFT_102BD94D), 3u, (const CowU32[]){ param_1, 0, rd32((uint32_t)param_3) }, 0u, g->edx, g->eax, 12u);
            param_3 = param_3 + 1;
          }
        }
      }
      else if (param_3 == (CowU32)0x0) {
        for (; param_4 != 0; param_4 = param_4 + -1) {
          cow_bridge_102bd511(g, COW_IMG(COW_ADDR_LIFT_102BD968), 3u, (const CowU32[]){ param_1, rd32((uint32_t)param_2), 0 }, 0u, g->edx, g->eax, 12u);
          param_2 = param_2 + 1;
        }
      }
      else {
        for (; param_4 != 0; param_4 = param_4 + -1) {
          uVar1 = rd32((uint32_t)param_3);
          uVar2 = rd32((uint32_t)param_2);
          param_2 = param_2 + 1;
          param_3 = param_3 + 1;
          cow_bridge_102bd511(g, COW_IMG(COW_ADDR_LIFT_102BD98A), 3u, (const CowU32[]){ param_1, uVar2, uVar1 }, 0u, g->edx, g->eax, 12u);
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 4 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebx, ebp], ret 0.
   Arguments: 0 register argument(s) [-], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102bd91e(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102bd91e: push ebp */
    g->ebp = g->esp;                       /* 0x102bd91f: mov ebp, esp */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102bd921: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102bd922: push esi */
    g->esi = param_2;   /* 0x102bd923: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102bd926: push edi */
    g->edi = param_3;   /* 0x102bd927: the value the entry loaded and the decompiler dropped */
    cow_lift_102bd91e(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
