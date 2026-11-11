/* f_0x101d3910 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101d3910 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101d3910(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU16 uVar1;
    CowU32 piVar2;
    int iVar3;
    _Bool bVar4;
      
      bVar4 = param_3 == 9;
      piVar2 = (CowU32)(param_1 + 0x4c);
      param_3 = 2;
      do {
        iVar3 = 0x51;
        do {
          if (rd32((uint32_t)piVar2) != 0) {
            cow_bridge_101ce1e0(g, COW_IMG(COW_ADDR_LIFT_101D3943), 2u, (const CowU32[]){ 0u, 5u }, g->ecx, g->edx, 0u, 0u);
          }
          piVar2 = piVar2 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      if (rd32((uint32_t)(param_1 + 0x4c + ((CowU32)bVar4 * 0x51 + (param_2 & 0xff)) * 4)) != 0) {
        cow_bridge_101ce1e0(g, COW_IMG(COW_ADDR_LIFT_101D397D), 2u, (const CowU32[]){ 4u, 0u }, g->ecx, g->edx, 0u, 0u);
        cow_bridge_101ce9e0(g, COW_IMG(COW_ADDR_LIFT_101D3986), 1u, (const CowU32[]){ 4u }, g->ecx, g->edx, 0u, 0u);
        uVar1 = cow_bridge_101cd990(g, COW_IMG(COW_ADDR_LIFT_101D398D), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, 0u, 0u);
        wr16((uint32_t)(param_1 + 0x7e6), uVar1);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101d3910(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101d3910: push ebx */
    g->ebx = g->ecx;   /* 0x101d3911: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->ecx = (uint32_t)(rd32(A)); }   /* 0x101d3913: register ecx, replayed as the entry ran it */
    g->eax = 0u;   /* 0x101d3917: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* push ebp (from the epilogue's pops) */
    g->esp -= 4u; wr32(g->esp, g->esi); /* push esi (from the epilogue's pops) */
    g->esp -= 4u; wr32(g->esp, g->edi); /* push edi (from the epilogue's pops) */
    cow_lift_101d3910(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
