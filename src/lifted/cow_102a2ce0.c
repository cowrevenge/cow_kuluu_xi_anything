/* f_0x102a2ce0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102a2ce0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102a2ce0(Guest* g, int32_t param_1, CowU32 param_2, int32_t param_3, int32_t param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    int iVar2;
    int iVar3;
    iVar3 = (int32_t)rd32((uint32_t)(param_1 + 0x40));
      iVar2 = cow_bridge_102a1ee0(g, COW_IMG(COW_ADDR_LIFT_102A2D04), 1u, (const CowU32[]){ g->eax }, g->ecx, g->edx, g->eax, 0u);
      uVar1 = rd32((uint32_t)(iVar2 + 0x20));
      iVar2 = cow_bridge_102a1ee0(g, COW_IMG(COW_ADDR_LIFT_102A2D14), 1u, (const CowU32[]){ rd32((uint32_t)(param_2 + 4u * (uint32_t)(6))) }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(iVar2 + 0x20), 0);
      cow_bridge_10283e20(g, COW_IMG(COW_ADDR_LIFT_102A2D24), 1u, (const CowU32[]){ rd32((uint32_t)(param_2 + 4u * (uint32_t)(1))) }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_1028f610(g, COW_IMG(COW_ADDR_LIFT_102A2D33), 3u, (const CowU32[]){ param_1, rd32((uint32_t)(param_3 * 0x30 + (int32_t)rd32((uint32_t)(param_1 + 0x40)))), 1 }, g->ecx, g->edx, g->eax, 0u);
      if (param_4 == 1) {
        cow_bridge_102a2a70(g, COW_IMG(COW_ADDR_LIFT_102A2D4B), 3u, (const CowU32[]){ param_1, param_3, param_2 }, g->ecx, g->edx, g->eax, 12u);
      }
      else if (param_4 == 0) {
        cow_bridge_102a2a50(g, COW_IMG(COW_ADDR_LIFT_102A2D5F), 2u, (const CowU32[]){ param_1, param_3 }, g->ecx, g->edx, g->eax, 8u);
      }
      cow_bridge_10283f90(g, COW_IMG(COW_ADDR_LIFT_102A2D69), 1u, (const CowU32[]){ 10u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_102824e0(g, COW_IMG(COW_ADDR_LIFT_102A2D7F), 4u, (const CowU32[]){ 255u, 255u, 255u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10282490(g, COW_IMG(COW_ADDR_LIFT_102A2D86), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_102972f0(g, COW_IMG(COW_ADDR_LIFT_102A2D9C), 1u, (const CowU32[]){ rd32((uint32_t)((int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x24)) + (int32_t)rd32((uint32_t)(iVar3 + param_3 * 0x30)) * 0xc)) + 0x24)) }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10284b40(g, COW_IMG(COW_ADDR_LIFT_102A2DA8), 2u, (const CowU32[]){ 536870912u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10285870(g, COW_IMG(COW_ADDR_LIFT_102A2DB2), 2u, (const CowU32[]){ rd32((uint32_t)param_2), 4 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10281c40(g, COW_IMG(COW_ADDR_LIFT_102A2DB9), 1u, (const CowU32[]){ 0xffffffff }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_102824e0(g, COW_IMG(COW_ADDR_LIFT_102A2DC9), 4u, (const CowU32[]){ 0u, 0u, 0u, 255u }, g->ecx, g->edx, g->eax, 64u);
      cow_bridge_10297310(g, COW_IMG(COW_ADDR_LIFT_102A2DD3), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10297ee0(g, COW_IMG(COW_ADDR_LIFT_102A2DDA), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_102826e0(g, COW_IMG(COW_ADDR_LIFT_102A2DE4), 1u, (const CowU32[]){ 1065353216u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_102a1f40(g, COW_IMG(COW_ADDR_LIFT_102A2DFB), 3u, (const CowU32[]){ rd32((uint32_t)(param_2 + 4u * (uint32_t)(6))), param_2, (int32_t)rd32((uint32_t)(param_1 + 0x18)) + (int32_t)rd32((uint32_t)(param_1 + 0x1c)) * 0xc }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_102824e0(g, COW_IMG(COW_ADDR_LIFT_102A2E08), 4u, (const CowU32[]){ 0u, 0u, 0u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10283240(g, COW_IMG(COW_ADDR_LIFT_102A2E0D), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10297ee0(g, COW_IMG(COW_ADDR_LIFT_102A2E14), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10297310(g, COW_IMG(COW_ADDR_LIFT_102A2E1B), 1u, (const CowU32[]){ 0xffffffff }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10283f90(g, COW_IMG(COW_ADDR_LIFT_102A2E22), 1u, (const CowU32[]){ 0xfffffff6 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10282490(g, COW_IMG(COW_ADDR_LIFT_102A2E29), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u);
      iVar3 = cow_bridge_102a1ee0(g, COW_IMG(COW_ADDR_LIFT_102A2E32), 1u, (const CowU32[]){ rd32((uint32_t)(param_2 + 4u * (uint32_t)(6))) }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(iVar3 + 0x20), uVar1);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 4 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102a2ce0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102a2ce0: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->ebx = (uint32_t)(rd32(A)); }   /* 0x102a2ce1: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102a2ce5: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102a2ce6: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x14u); g->esi = (uint32_t)(rd32(A)); }   /* 0x102a2ce7: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102a2ceb: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x14u); g->edi = (uint32_t)(rd32(A)); }   /* 0x102a2cec: register edi, replayed as the entry ran it */
    { g->ebx = (uint32_t)((uint32_t)(g->ebx + g->ebx * 2)); }   /* 0x102a2cf0: register ebx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esi + 0x18u); g->eax = (uint32_t)(rd32(A)); }   /* 0x102a2cf3: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->edi + 0x40u); g->ebp = (uint32_t)(rd32(A)); }   /* 0x102a2cf6: register ebp, replayed as the entry ran it */
    { { unsigned c = (unsigned)(0x4u) & 31u; if (c) { uint32_t a = g->ebx; uint32_t r; r = (uint32_t)((uint32_t)a << c); g->ebx = (uint32_t)(r); } }; }   /* 0x102a2cfa: register ebx, replayed as the entry ran it */
    { uint32_t a = g->ebp; uint32_t b = (uint32_t)g->ebx; uint32_t r = (uint32_t)(a + b); g->ebp = (uint32_t)(r); }   /* 0x102a2cfd: register ebp, replayed as the entry ran it */
    cow_lift_102a2ce0(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
