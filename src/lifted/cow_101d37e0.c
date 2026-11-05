/* f_0x101d37e0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101d37e0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101d37e0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
    CowU16 uVar1;
    CowU32 piVar2;
    int iVar3;
    if (rd32((uint32_t)(param_1 + 0x4c + ((CowU32)(param_3 == 9) * 0x51 + (param_2 & 0xff)) * 4)) != 0) {
        piVar2 = (CowU32)(param_1 + 0x4c);
        param_3 = 2;
        do {
          iVar3 = 0x51;
          do {
            if (rd32((uint32_t)piVar2) != 0) {
              cow_bridge_101ce1e0(g, COW_IMG(COW_ADDR_LIFT_101D382F), 2u, (const CowU32[]){ 1, 5 }, 0u, 0u, g->eax, 0u);
            }
            piVar2 = piVar2 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
          param_3 = param_3 + -1;
        } while (param_3 != 0);
        cow_bridge_101d39a0(g, COW_IMG(COW_ADDR_LIFT_101D384C), 1u, (const CowU32[]){ 0x80606060 }, 0u, 0u, g->eax, 0u);
        cow_bridge_101ce1e0(g, COW_IMG(COW_ADDR_LIFT_101D3858), 2u, (const CowU32[]){ 2, 0 }, 0u, 0u, g->eax, 0u);
        cow_bridge_101ce9e0(g, COW_IMG(COW_ADDR_LIFT_101D3862), 1u, (const CowU32[]){ 0xffffffff }, 0u, 0u, g->eax, 0u);
        uVar1 = cow_bridge_101cd990(g, COW_IMG(COW_ADDR_LIFT_101D386A), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
        wr16((uint32_t)(param_1 + 0x7e6), uVar1);
      }
      return;
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [esi, edi, ebp, ebx], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101d37e0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101d37e0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x101d37e1: push ebp */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101d37e2: push edi */
    cow_lift_101d37e0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
