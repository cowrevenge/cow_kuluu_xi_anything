/* f_0x102bca6b - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102bca6b (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102bca6b(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
    CowU8 bVar1;
    int iVar2;
    int iVar3;
    CowU32 uVar4;
    int iVar5;
    iVar2 = 0;
      iVar5 = 0;
      do {
        iVar5 = iVar5 + 1;
        bVar1 = rd8((uint32_t)(param_1 + 0x11b + iVar5));
        uVar4 = (CowU32)bVar1;
        if (((uVar4 < 0x29) || (0x7a < uVar4)) || ((0x5a < uVar4 && (uVar4 < 0x61)))) {
          wr8((uint32_t)(iVar2 + param_2), 0x5b);
          wr8((uint32_t)(iVar2 + 1 + param_2), "0123456789ABCDEF"[(int)uVar4 >> 4]);
          wr8((uint32_t)(iVar2 + 2 + param_2), "0123456789ABCDEF"[uVar4 & 0xf]);
          iVar3 = iVar2 + 3;
          wr8((uint32_t)(iVar3 + param_2), 0x5d);
        }
        else {
          wr8((uint32_t)(iVar2 + param_2), bVar1);
          iVar3 = iVar2;
        }
        iVar2 = iVar3 + 1;
      } while (iVar5 < 4);
      if (param_3 == 0) {
        wr8((uint32_t)(iVar2 + param_2), 0);
      }
      else {
        wr8((uint32_t)(iVar2 + param_2), 0x3a);
        iVar2 = iVar3 + 3 + param_2;
        wr8((uint32_t)(iVar3 + 2 + param_2), 0x20);
        cow_bridge_103169e0(g, COW_IMG(COW_ADDR_LIFT_102BCAF0), 3u, (const CowU32[]){ iVar2, param_3, 0x40 }, 0u, 0u, 0u, 12u);
        wr8((uint32_t)(iVar2 + 0x3f), 0);
      }
      return;
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102bca6b(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->ecx = param_2;   /* 0x102bca6b: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102bca6f: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102bca70: push esi */
    g->eax = 0u;   /* 0x102bca71: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102bca73: push edi */
    g->esi = 0u;   /* 0x102bca74: the value the entry loaded and the decompiler dropped */
    cow_lift_102bca6b(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
