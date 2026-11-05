/* f_0x1009ade0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1009ade0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1009ade0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5, CowU32 param_6, CowU32 param_7)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU16 uVar1;
    CowU32 uVar2;
    int iVar3;
    CowU32 uVar4;
    if ((((param_2 != 0) && ((rd32((uint32_t)(param_1 + 0x134)) >> 0x14 & 1) == param_2)) &&
          (param_3 != (rd32((uint32_t)(param_1 + 0x134)) >> 0x15 & 0xf))) &&
         (param_4 != (rd32((uint32_t)(param_1 + 0x138)) & 0xff))) {
        cow_bridge_10092710(g, COW_IMG(COW_ADDR_LIFT_1009AE29), 0u, (const CowU32[]){ 0u }, param_1, 0u, g->eax, 0u);
      }
      wr8((uint32_t)(param_1 + 0x138), (char)param_4);
      uVar4 = (param_2 << 0x14 ^ rd32((uint32_t)(param_1 + 0x134))) & 0x100000 ^ rd32((uint32_t)(param_1 + 0x134));
      uVar2 = (param_5 << 8 ^ rd32((uint32_t)(param_1 + 0x138))) & 0xf00 ^ rd32((uint32_t)(param_1 + 0x138));
      wr32((uint32_t)(param_1 + 0x134), (param_3 << 0x15 ^ uVar4) & 0x1e00000 ^ uVar4);
      wr32((uint32_t)(param_1 + 0x138), (param_6 << 0xc ^ uVar2) & 0x3ff000 ^ uVar2);
      uVar1 = cow_bridge_10086fe0(g, COW_IMG(COW_ADDR_LIFT_1009AE8C), 1u, (const CowU32[]){ param_7 }, 0u, 0u, g->eax, 4u);
      wr16((uint32_t)(param_1 + 0x2a6), uVar1);
      iVar3 = cow_bridge_100983a0(g, COW_IMG(COW_ADDR_LIFT_1009AE9D), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
      if (iVar3 == 0) {
        wr32((uint32_t)(param_1 + 0x134), rd32((uint32_t)(param_1 + 0x134)) & 0xffefffff);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 7 parameter(s), cleanup 24 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 24.
   Arguments: 1 register argument(s) [ecx], 6 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1009ade0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    CowU32 param_7 = rd32((uint32_t)(sp0 + 4u + 0x14u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1009ade0: push ebx */
    cow_lift_1009ade0(g, param_1, param_2, param_3, param_4, param_5, param_6, param_7);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 24u);
}
/* COW_ADAPTER END */
