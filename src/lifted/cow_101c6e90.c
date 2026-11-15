/* f_0x101c6e90 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101c6e90 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101c6e90(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU32 uVar2;
    CowU32 this_00;
    int iVar3;
    CowU32 puVar4;
    int iVar5;
    CowU32 local_28;
    CowU8 local_20[32];
    iVar5 = 0;
      uVar2 = cow_bridge_100dc080(g, COW_IMG(COW_ADDR_LIFT_101C6EA4), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      this_00 = (CowU32)cow_bridge_1002c890(g, COW_IMG(COW_ADDR_LIFT_101C6EAD), 1u, (const CowU32[]){ 16u }, g->ecx, g->edx, g->eax, 4u);
      if (this_00 == (CowU32)0x0) {
        local_28 = (CowU32)0x0;
      }
      else {
        local_28 = (CowU32)cow_bridge_101c7290(g, COW_IMG(COW_ADDR_LIFT_101C6EC3), 3u, (const CowU32[]){ 160u, 120u, g->ebx }, this_00, g->edx, g->eax, 0u);
      }
      cow_bridge_10312031(g, COW_IMG(COW_ADDR_LIFT_101C6EE8), 6u, (const CowU32[]){ local_20, COW_IMG(COW_ADDR_LIFT_1037CE54), param_2, uVar2, 0, COW_IMG(COW_ADDR_LIFT_1037CE68) }, g->ecx, g->edx, g->eax, 24u);
      cVar1 = cow_bridge_101c4c90(g, COW_IMG(COW_ADDR_LIFT_101C6EFC), 2u, (const CowU32[]){ local_20, 0 }, g->ecx, g->edx, g->eax, 0u);
      while (cVar1 != '\0') {
        iVar5 = iVar5 + 1;
        cow_bridge_10312031(g, COW_IMG(COW_ADDR_LIFT_101C6F18), 6u, (const CowU32[]){ local_20, COW_IMG(COW_ADDR_LIFT_1037CE54), param_2, uVar2, iVar5, COW_IMG(COW_ADDR_LIFT_1037CE68) }, g->ecx, g->edx, g->eax, 0u);
        cVar1 = cow_bridge_101c4c90(g, COW_IMG(COW_ADDR_LIFT_101C6F2D), 2u, (const CowU32[]){ local_20, 0 }, g->ecx, g->edx, g->eax, 0u);
      }
      iVar3 = cow_bridge_101c73d0(g, COW_IMG(COW_ADDR_LIFT_101C6F41), 1u, (const CowU32[]){ local_20 }, local_28, g->edx, g->eax, 0u);
      if (iVar3 == 0) {
        cow_bridge_101c76c0(g, COW_IMG(COW_ADDR_LIFT_101C6F53), 2u, (const CowU32[]){ 160u, 120u }, local_28, g->edx, g->eax, 0u);
        cow_bridge_10312031(g, COW_IMG(COW_ADDR_LIFT_101C6F6A), 6u, (const CowU32[]){ local_20, COW_IMG(COW_ADDR_LIFT_1037CE54), param_2, uVar2, iVar5, COW_IMG(COW_ADDR_LIFT_1037CE4C) }, g->ecx, g->edx, g->eax, 24u);
        iVar3 = cow_bridge_101c73d0(g, COW_IMG(COW_ADDR_LIFT_101C6F79), 1u, (const CowU32[]){ local_20 }, local_28, g->edx, g->eax, 0u);
        if (iVar3 == 0) {
          if (local_28 != (CowU32)0x0) {
            cow_bridge_101c72d0(g, COW_IMG(COW_ADDR_LIFT_101C6F88), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            cow_bridge_1002c8b0(g, COW_IMG(COW_ADDR_LIFT_101C6F8E), 1u, (const CowU32[]){ local_28 }, g->ecx, g->edx, g->eax, 4u);
          }
          puVar4 = (CowU32)cow_bridge_101c6c50(g, COW_IMG(COW_ADDR_LIFT_101C6FBF), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
          wr16((uint32_t)((int)puVar4 + 6), (short)param_2);
          wr32((uint32_t)puVar4, uVar2);
          wr16((uint32_t)(puVar4 + 4u * (uint32_t)(1)), (short)iVar5);
          iVar5 = (int32_t)rd32((uint32_t)((int)param_1 + 4)) + 1;
          wr32((uint32_t)((int)param_1 + 4), iVar5);
          if (99 < iVar5) {
            wr32((uint32_t)((int)param_1 + 4), 100);
          }
          g->eax = (CowU32)(0); return;
        }
      }
      if (local_28 != (CowU32)0x0) {
        cow_bridge_101c72d0(g, COW_IMG(COW_ADDR_LIFT_101C6FAB), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_1002c8b0(g, COW_IMG(COW_ADDR_LIFT_101C6FB1), 1u, (const CowU32[]){ local_28 }, g->ecx, g->edx, g->eax, 4u);
      }
      g->eax = (CowU32)(4); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 40 locals, pops [edi, esi, ebp, ebx], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101c6e90(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 0x28u;                      /* 0x101c6e90: 40 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101c6e93: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x101c6e94: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101c6e95: push esi */
    g->ebx = g->ecx;   /* 0x101c6e96: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101c6e98: push edi */
    cow_lift_101c6e90(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
