/* f_0x10270f50 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10270f50 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10270f50(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 puVar2;
    CowU32 puVar3;
    if ((rd32(COW_IMG(COW_ADDR_LIFT_1099B0D8)) & 8) != 0) {
        cow_bridge_10271050(g, COW_IMG(COW_ADDR_LIFT_10270F64), 1u, (const CowU32[]){ g->esi }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10271610(g, COW_IMG(COW_ADDR_LIFT_10270F6A), 1u, (const CowU32[]){ g->esi }, g->ecx, g->edx, g->eax, 0u);
        wr32(COW_IMG(COW_ADDR_LIFT_1099B0D8), rd32(COW_IMG(COW_ADDR_LIFT_1099B0D8)) & 0xfffffff7);
      }
      if ((rd32(COW_IMG(COW_ADDR_LIFT_1099B0D8)) & 0x100) != 0) {
        cow_bridge_10273580(g, COW_IMG(COW_ADDR_LIFT_10270F89), 1u, (const CowU32[]){ param_1 }, g->ecx, g->edx, g->eax, 4u);
      }
      wr32(COW_IMG(COW_ADDR_LIFT_1099B0D8), rd32(COW_IMG(COW_ADDR_LIFT_1099B0D8)) & 0xffffff0f);
      cow_bridge_1026e5b0(g, COW_IMG(COW_ADDR_LIFT_10270FA1), 1u, (const CowU32[]){ param_1 }, g->ecx, g->edx, g->eax, 0u);
      iVar1 = rd32(COW_IMG(COW_ADDR_LIFT_1099B0F4));
      puVar2 = COW_IMG(COW_ADDR_LIFT_1099BF88);
      puVar3 = COW_IMG(COW_ADDR_LIFT_1099C518);
      do {
        if ((rd8((uint32_t)(puVar3 + 4u * (uint32_t)(-1))) & 2) != 0) {
          cow_bridge_1027b190(g, COW_IMG(COW_ADDR_LIFT_10270FF7), 3u, (const CowU32[]){ puVar2 + -0x26c, COW_IMG(COW_ADDR_LIFT_1099B3A4) + iVar1 * 0x7c, puVar3 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_1026e210(g, COW_IMG(COW_ADDR_LIFT_10271003), 1u, (const CowU32[]){ puVar2 + -0x2d4 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_1027b190(g, COW_IMG(COW_ADDR_LIFT_1027100B), 3u, (const CowU32[]){ puVar2, COW_IMG(COW_ADDR_LIFT_1099B3A4) + iVar1 * 0x7c, puVar3 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_1026e210(g, COW_IMG(COW_ADDR_LIFT_10271014), 1u, (const CowU32[]){ puVar2 + -0x68 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_102806d0(g, COW_IMG(COW_ADDR_LIFT_1027102C), 4u, (const CowU32[]){ puVar2 + -0x4c, 0x3e800000, 0x3e800000, 0x3e800000 }, g->ecx, g->edx, g->eax, 48u);
        }
        puVar3 = puVar3 + 4u * (uint32_t)(5);
        puVar2 = puVar2 + 0x7c;
      } while ((int)puVar3 < 0x1099c57c);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10270f50(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    { uint32_t A = (uint32_t)(COW_IMG(COW_ADDR_LIFT_1099B0D8) + RD); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x10270f50: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10270f55: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->esi = (uint32_t)(rd32(A)); }   /* 0x10270f56: register esi, replayed as the entry ran it */
    cow_lift_10270f50(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 5 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
