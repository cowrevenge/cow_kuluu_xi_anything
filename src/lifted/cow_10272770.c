/* f_0x10272770 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10272770 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10272770(Guest* g, int32_t param_1, int32_t param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU8 local_10[16];
    if (param_1 == -1) {
        param_1 = rd32(COW_IMG(COW_ADDR_LIFT_1099B0F8));
      }
      uVar1 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099C514) + param_1 * 0x14));
      if ((uVar1 & 1) != 0) {
        if (param_2 == -1) {
          uVar1 = uVar1 ^ 2;
        }
        else if (param_2 == 0) {
          uVar1 = uVar1 & 0xfffffffd;
        }
        else {
          uVar1 = uVar1 | 2;
        }
        wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099C514) + param_1 * 0x14), uVar1);
        if ((uVar1 & 2) != 0) {
          cow_bridge_1027a720(g, COW_IMG(COW_ADDR_LIFT_102727D5), 2u, (const CowU32[]){ local_10, COW_IMG(COW_ADDR_LIFT_1099B3A4) + rd32(COW_IMG(COW_ADDR_LIFT_1099B0F4)) * 0x7c }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_1027afd0(g, COW_IMG(COW_ADDR_LIFT_102727DF), 1u, (const CowU32[]){ local_10 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_1027b190(g, COW_IMG(COW_ADDR_LIFT_102727FC), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_1099C518) + param_1 * 5, local_10, COW_IMG(COW_ADDR_LIFT_1099BD1C) + param_1 * 0x7c }, g->ecx, g->edx, g->eax, 24u);
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 16 locals, pops [edi, esi], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10272770(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 0x10u;                      /* 0x10272770: 16 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10272773: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10272774: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x1Cu); g->edi = (uint32_t)(rd32(A)); }   /* 0x10272775: register edi, replayed as the entry ran it */
    cow_lift_10272770(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
