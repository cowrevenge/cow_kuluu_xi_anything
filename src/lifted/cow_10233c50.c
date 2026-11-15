/* f_0x10233c50 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10233c50 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10233c50(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    CowU32 puVar3;
    cow_bridge_10221ef0(g, COW_IMG(COW_ADDR_LIFT_10233C5A), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      wr8((uint32_t)((int)param_1 + 100), 0);
      wr8((uint32_t)((int)param_1 + 0x65), 0);
      cVar1 = cow_bridge_1011ba40(g, COW_IMG(COW_ADDR_LIFT_10233C6D), 0u, (const CowU32[]){ 0u }, rd32(COW_IMG(COW_ADDR_LIFT_1057823C)), g->edx, g->eax, 0u);
      if (cVar1 != '\0') {
        wr8((uint32_t)((int)param_1 + 100), 1);
        cow_bridge_1015e790(g, COW_IMG(COW_ADDR_LIFT_10233C8A), 2u, (const CowU32[]){ rd32((uint32_t)((int)rd32(COW_IMG(COW_ADDR_LIFT_1057823C)) + 8)), 1 }, 274864184u, g->edx, g->eax, 0u);
      }
      cVar1 = cow_bridge_1011ba40(g, COW_IMG(COW_ADDR_LIFT_10233C95), 0u, (const CowU32[]){ 0u }, rd32(COW_IMG(COW_ADDR_LIFT_10578468)), g->edx, g->eax, 0u);
      if (cVar1 != '\0') {
        wr8((uint32_t)((int)param_1 + 0x65), 1);
        cow_bridge_1015e790(g, COW_IMG(COW_ADDR_LIFT_10233CB3), 2u, (const CowU32[]){ rd32((uint32_t)((int)rd32(COW_IMG(COW_ADDR_LIFT_10578468)) + 8)), 1 }, 274864184u, g->edx, g->eax, 0u);
      }
      wr8((uint32_t)((int)param_1 + 0x66), 0);
      if (rd32(COW_IMG(COW_ADDR_LIFT_105781F8)) != 0) {
        cow_bridge_1013a320(g, COW_IMG(COW_ADDR_LIFT_10233CC8), 2u, (const CowU32[]){ 0, 2 }, g->ecx, g->edx, g->eax, 0u);
      }
      puVar3 = (CowU32)((int)param_1 + 0x68);
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        wr32((uint32_t)puVar3, 0);
        puVar3 = puVar3 + 4u * (uint32_t)(1);
      }
      cow_bridge_10234010(g, COW_IMG(COW_ADDR_LIFT_10233CDB), 0u, (const CowU32[]){ 0u }, param_1, g->edx, 0u, 0u);
      wr8((uint32_t)((int)param_1 + 0x88), 0);
      wr32((uint32_t)((int)param_1 + 0x8c), 0);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10233c50(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10233c50: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10233c51: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10233c52: push edi */
    g->esi = g->ecx;   /* 0x10233c53: the value the entry loaded and the decompiler dropped */
    cow_lift_10233c50(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
