/* f_0x1026ec10 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1026ec10 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1026ec10(Guest* g, int32_t param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 pcVar1;
    int iVar2;
    CowU32 uVar3;
    if ((char)((CowU32)rd32((uint32_t)(param_1 + 0xa8)) >> 8) < '\0') {
        uVar3 = 2;
      }
      else {
        uVar3 = 1;
      }
      cow_bridge_10273700(g, COW_IMG(COW_ADDR_LIFT_1026EC2C), 2u, (const CowU32[]){ param_1, uVar3 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10273830(g, COW_IMG(COW_ADDR_LIFT_1026EC3A), 2u, (const CowU32[]){ param_1, param_2 }, g->ecx, g->edx, g->eax, 0u);
      iVar2 = rd32(COW_IMG(COW_ADDR_LIFT_1099AECC));
      wr32(COW_IMG(COW_ADDR_LIFT_1099AECC), rd32(COW_IMG(COW_ADDR_LIFT_1099AECC)) + 1);
      if (rd32(COW_IMG(COW_ADDR_LIFT_1099AEC8)) < rd32(COW_IMG(COW_ADDR_LIFT_1099AECC))) {
        cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_1026EC5F), 2u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103B19D0), rd32(COW_IMG(COW_ADDR_LIFT_1099AEC8)) }, g->ecx, g->edx, g->eax, 8u);
        g->eax = (CowU32)(-1); return;
      }
      cow_bridge_102703e0(g, COW_IMG(COW_ADDR_LIFT_1026EC72), 3u, (const CowU32[]){ iVar2, 6, 1 }, g->ecx, g->edx, g->eax, 0u);
      iVar2 = iVar2 * 0xac;
      pcVar1 = (CowU32)(iVar2 + 4 + rd32(COW_IMG(COW_ADDR_LIFT_1099AED0)));
      wr32((uint32_t)pcVar1, (((uint64_t)(COW_IMG(COW_ADDR_LIFT_103B19C0))) & 0xffffffffu));
      wr32((uint32_t)(pcVar1 + 4), (((uint64_t)(COW_IMG(COW_ADDR_LIFT_103B19C0)) << 32) & 0xffffffffu));
      wr32((uint32_t)(pcVar1 + 8), (((uint64_t)(COW_IMG(COW_ADDR_LIFT_103B19C0)) << 64) & 0xffffffffu));
      wr32((uint32_t)(pcVar1 + 0xc), (((uint64_t)(COW_IMG(COW_ADDR_LIFT_103B19C0)) << 96) & 0xffffffffu));
      wr32((uint32_t)(iVar2 + 0xa8 + rd32(COW_IMG(COW_ADDR_LIFT_1099AED0))), param_1);
      g->eax = (CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_1099AECC)) + -1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1026ec10(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1026ec10: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1026ec11: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->edi = (uint32_t)(rd32(A)); }   /* 0x1026ec12: register edi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->edi + 0xA8u); g->eax = (uint32_t)(rd32(A)); }   /* 0x1026ec16: register eax, replayed as the entry ran it */
    cow_lift_1026ec10(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
