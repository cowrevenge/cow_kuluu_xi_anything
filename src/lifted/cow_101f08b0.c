/* f_0x101f08b0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101f08b0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101f08b0(Guest* g, CowU32 param_1, CowU32 param_2)
{
    int iVar1;
    char cVar2;
    CowU32 uVar3;
    CowU32 uStack_4;
    iVar1 = param_2;
      if ((rd8((uint32_t)(param_1 + 4)) != '\0') && (rd8((uint32_t)(param_1 + 6)) == rd8((uint32_t)(param_2 + 2)))) {
        g->eax = (CowU32)(0x80804020); return;
      }
      uStack_4 = param_1;
      cVar2 = cow_bridge_10131f10(g, COW_IMG(COW_ADDR_LIFT_101F08E2), 2u, (const CowU32[]){ rd8((uint32_t)(param_2 + 2)), 0 }, 0u, 0u, g->eax, 0u);
      if (cVar2 != '\0') {
        g->eax = (CowU32)(0x80804020); return;
      }
      cVar2 = cow_bridge_100e9730(g, COW_IMG(COW_ADDR_LIFT_101F0903), 4u, (const CowU32[]){ 0, &param_2, &uStack_4, 1 }, 0u, 0u, g->eax, 16u);
      if (((cVar2 != '\0') && ((char)param_2 == rd8((uint32_t)(iVar1 + 2)))) &&
         ((uStack_4 & 0xff) == rd32(COW_IMG(COW_ADDR_LIFT_10663780)))) {
        g->eax = (CowU32)(0x80804020); return;
      }
      cVar2 = cow_bridge_100e9730(g, COW_IMG(COW_ADDR_LIFT_101F0945), 4u, (const CowU32[]){ 0, &param_2, &uStack_4, 2 }, 0u, 0u, g->eax, 16u);
      if (((cVar2 == '\0') || ((char)param_2 != rd8((uint32_t)(iVar1 + 2)))) ||
         (uVar3 = 0x80509050, (uStack_4 & 0xff) != rd32(COW_IMG(COW_ADDR_LIFT_10663780)))) {
        uVar3 = 0x80808080;
      }
      g->eax = (CowU32)(0x80804020); return;
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [esi, ecx], ret 8.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101f08b0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x101f08b0: push ecx */
    cow_lift_101f08b0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
