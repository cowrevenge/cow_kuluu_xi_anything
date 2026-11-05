/* f_0x100b5b70 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100b5b70 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100b5b70(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 piVar2;
    if (rd32(COW_IMG(COW_ADDR_LIFT_10489910)) == 0) {
        piVar2 = COW_IMG(COW_ADDR_LIFT_10480AF0);
        do {
          if (rd32((uint32_t)piVar2) != 0) {
            cow_bridge_10092900(g, COW_IMG(COW_ADDR_LIFT_100B5BFF), 0u, (const CowU32[]){ 0u }, 0u, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10489910)), 0u);
          }
          piVar2 = piVar2 + 1;
        } while ((int)piVar2 < 0x10482ef0);
        wr32(COW_IMG(COW_ADDR_LIFT_10489910), rd32(COW_IMG(COW_ADDR_LIFT_10489910)) + 1);
        wr32(COW_IMG(COW_ADDR_LIFT_104898F9), 1);
        wr8((uint32_t)(param_1 + 0x25a), 1);
        return;
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_10489910)) != 300) {
        wr32(COW_IMG(COW_ADDR_LIFT_10489910), 300);
        wr32(COW_IMG(COW_ADDR_LIFT_104898F9), 1);
        wr8((uint32_t)(param_1 + 0x25a), 1);
        return;
      }
      wr32(COW_IMG(COW_ADDR_LIFT_10489910), 0);
      if (rd32(COW_IMG(COW_ADDR_LIFT_10489918)) == 0) {
        cow_bridge_100b5c30(g, COW_IMG(COW_ADDR_LIFT_100B5BBC), 0u, (const CowU32[]){ 0u }, 0u, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10489910)), 0u);
        uVar1 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100B5BC4), 1u, (const CowU32[]){ 1 }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_10489910)), 0u);
        cow_bridge_1018b3a0(g, COW_IMG(COW_ADDR_LIFT_100B5BCA), 1u, (const CowU32[]){ uVar1 }, 0u, 0u, rd32(COW_IMG(COW_ADDR_LIFT_10489910)), 4u);
        wr32(COW_IMG(COW_ADDR_LIFT_104898F9), 1);
      }
      wr32(COW_IMG(COW_ADDR_LIFT_10489918), 0);
      wr16((uint32_t)(param_1 + 0x256), rd16((uint32_t)(param_1 + 0x256)) + 3);
      wr8((uint32_t)(param_1 + 0x25a), 1);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100b5b70(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_10489910));   /* 0x100b5b70: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100b5b75: push ebx */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100b5b76: push edi */
    g->edi = g->ecx;   /* 0x100b5b77: the value the entry loaded and the decompiler dropped */
    cow_lift_100b5b70(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
