/* f_0x101e0d90 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101e0d90 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101e0d90(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5)
{
    CowU32 uVar1;
    CowU32 psVar2;
    param_2 = param_2 & 0xff;
      if (param_2 < 10) {
        uVar1 = 0;
        psVar2 = (CowU32)(param_1 + 0x22);
        do {
          if ((rd16((uint32_t)psVar2) == param_4) && (rd8((uint32_t)(uVar1 + 0x15 + param_1)) == param_3)) {
            wr16((uint32_t)psVar2, 0);
            wr8((uint32_t)(uVar1 + 0x15 + param_1), 0);
            wr8((uint32_t)(uVar1 + 0x36 + param_1), 0);
            if (uVar1 == param_2) {
              return;
            }
          }
          uVar1 = uVar1 + 1;
          psVar2 = psVar2 + 1;
        } while ((int)uVar1 < 10);
        wr16((uint32_t)(param_1 + 0x22 + param_2 * 2), param_4);
        wr8((uint32_t)(param_2 + 0x15 + param_1), param_3);
        wr8((uint32_t)(param_2 + 0x36 + param_1), param_5);
      }
      return;
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), stdcall, 5 parameter(s), cleanup 16 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 16.
   Arguments: 2 register argument(s) [ecx, edx], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101e0d90(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101e0d90: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x101e0d91: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101e0d92: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101e0d93: push edi */
    cow_lift_101e0d90(g, param_1, param_2, param_3, param_4, param_5);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
