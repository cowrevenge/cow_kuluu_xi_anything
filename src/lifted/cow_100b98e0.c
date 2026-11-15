/* f_0x100b98e0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100b98e0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100b98e0(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU16 uVar1;
    int iVar2;
    switch(rd8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x20)) + 1 + (CowU32)rd16((uint32_t)(param_1 + 0x256))))) {
      case 0:
        iVar2 = cow_bridge_100fc3c0(g, COW_IMG(COW_ADDR_LIFT_100B991F), 3u, (const CowU32[]){ 88u, 0u, 0u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar2 != 0) {
          wr16((uint32_t)(iVar2 + 10), 1);
          uVar1 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100B9939), 1u, (const CowU32[]){ 2u }, g->esi, g->edx, g->eax, 0u);
          wr16((uint32_t)(iVar2 + 4), uVar1);
          uVar1 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100B9946), 1u, (const CowU32[]){ 4u }, g->esi, g->edx, g->eax, 0u);
          wr16((uint32_t)(iVar2 + 6), uVar1);
          uVar1 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100B9953), 1u, (const CowU32[]){ 6u }, g->esi, g->edx, g->eax, 0u);
          wr16((uint32_t)(iVar2 + 8), uVar1);
          cow_bridge_100fc4d0(g, COW_IMG(COW_ADDR_LIFT_100B9961), 3u, (const CowU32[]){ iVar2, 0x14, 0 }, g->ecx, g->edx, g->eax, 12u);
          wr32(COW_IMG(COW_ADDR_LIFT_10480A90), 1);
          wr16((uint32_t)(param_1 + 0x256), (int16_t)rd16((uint32_t)(param_1 + 0x256)) + 8);
          wr8((uint32_t)(param_1 + 0x25a), 1);
          return;
        }
        break;
      case 1:
        if (rd32(COW_IMG(COW_ADDR_LIFT_10480A90)) == '\0') {
          wr8((uint32_t)(param_1 + 0x25a), 1);
          wr16((uint32_t)(param_1 + 0x256), rd16((uint32_t)(param_1 + 0x256)) + 2);
          return;
        }
        break;
      case 2:
        iVar2 = cow_bridge_100fc3c0(g, COW_IMG(COW_ADDR_LIFT_100B99A9), 3u, (const CowU32[]){ 88u, 0u, 0u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar2 != 0) {
          wr16((uint32_t)(iVar2 + 10), 2);
          uVar1 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100B99C5), 1u, (const CowU32[]){ 2u }, g->ecx, g->edx, g->eax, 0u);
          wr16((uint32_t)(iVar2 + 4), uVar1);
          uVar1 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100B99D2), 1u, (const CowU32[]){ 4u }, g->ecx, g->edx, g->eax, 0u);
          wr16((uint32_t)(iVar2 + 6), uVar1);
          wr16((uint32_t)(iVar2 + 8), 0);
          uVar1 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100B99E5), 1u, (const CowU32[]){ 6u }, g->ecx, g->edx, g->eax, 0u);
          wr16((uint32_t)(iVar2 + 0x12), uVar1);
          uVar1 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100B99F2), 1u, (const CowU32[]){ 8u }, g->ecx, g->edx, g->eax, 0u);
          wr16((uint32_t)(iVar2 + 0xc), uVar1);
          uVar1 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100B99FF), 1u, (const CowU32[]){ 10u }, g->ecx, g->edx, g->eax, 0u);
          wr16((uint32_t)(iVar2 + 0xe), uVar1);
          cow_bridge_100fc4d0(g, COW_IMG(COW_ADDR_LIFT_100B9A0D), 3u, (const CowU32[]){ iVar2, 0x14, 0 }, g->ecx, g->edx, g->eax, 12u);
          wr32(COW_IMG(COW_ADDR_LIFT_10480A90), 1);
          wr16((uint32_t)(param_1 + 0x256), (int16_t)rd16((uint32_t)(param_1 + 0x256)) + 0xc);
          wr8((uint32_t)(param_1 + 0x25a), 1);
          return;
        }
        break;
      case 3:
        iVar2 = cow_bridge_100fc3c0(g, COW_IMG(COW_ADDR_LIFT_100B9A33), 3u, (const CowU32[]){ 88u, 0u, 0u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar2 != 0) {
          wr16((uint32_t)(iVar2 + 10), 3);
    L_100b9a46:
          uVar1 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100B9A4F), 1u, (const CowU32[]){ 2u }, g->ecx, g->edx, g->eax, 0u);
          wr16((uint32_t)(iVar2 + 4), uVar1);
          uVar1 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100B9A5C), 1u, (const CowU32[]){ 4u }, g->ecx, g->edx, g->eax, 0u);
          wr16((uint32_t)(iVar2 + 6), uVar1);
          wr16((uint32_t)(iVar2 + 8), 0);
          uVar1 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100B9A6F), 1u, (const CowU32[]){ 6u }, g->ecx, g->edx, g->eax, 0u);
          wr16((uint32_t)(iVar2 + 0x12), uVar1);
          uVar1 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100B9A7C), 1u, (const CowU32[]){ 8u }, g->ecx, g->edx, g->eax, 0u);
          wr16((uint32_t)(iVar2 + 0x10), uVar1);
          cow_bridge_100fc4d0(g, COW_IMG(COW_ADDR_LIFT_100B9A8A), 3u, (const CowU32[]){ iVar2, 0x14, 0 }, g->ecx, g->edx, g->eax, 12u);
          wr32(COW_IMG(COW_ADDR_LIFT_10480A90), 1);
          wr16((uint32_t)(param_1 + 0x256), (int16_t)rd16((uint32_t)(param_1 + 0x256)) + 10);
          wr8((uint32_t)(param_1 + 0x25a), 1);
          return;
        }
        break;
      case 4:
        iVar2 = cow_bridge_100fc3c0(g, COW_IMG(COW_ADDR_LIFT_100B9AB0), 3u, (const CowU32[]){ 88u, 0u, 0u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar2 != 0) {
          wr16((uint32_t)(iVar2 + 10), 4);
          goto L_100b9a46;
        }
        break;
      case 5:
        iVar2 = cow_bridge_100fc3c0(g, COW_IMG(COW_ADDR_LIFT_100B9AD0), 3u, (const CowU32[]){ 88u, 0u, 0u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar2 != 0) {
          wr16((uint32_t)(iVar2 + 10), 5);
          uVar1 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100B9AE8), 1u, (const CowU32[]){ 2u }, g->ecx, g->edx, g->eax, 0u);
          wr16((uint32_t)(iVar2 + 0xc), uVar1);
          uVar1 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100B9AF5), 1u, (const CowU32[]){ 4u }, g->ecx, g->edx, g->eax, 0u);
          wr16((uint32_t)(iVar2 + 4), uVar1);
          uVar1 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100B9B02), 1u, (const CowU32[]){ 6u }, g->ecx, g->edx, g->eax, 0u);
          wr16((uint32_t)(iVar2 + 6), uVar1);
          uVar1 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100B9B0F), 1u, (const CowU32[]){ 8u }, g->ecx, g->edx, g->eax, 0u);
          wr16((uint32_t)(iVar2 + 0x12), uVar1);
          uVar1 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100B9B1C), 1u, (const CowU32[]){ 10u }, g->ecx, g->edx, g->eax, 0u);
          wr16((uint32_t)(iVar2 + 0x10), uVar1);
          uVar1 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100B9B29), 1u, (const CowU32[]){ 12u }, g->ecx, g->edx, g->eax, 0u);
          wr16((uint32_t)(iVar2 + 8), uVar1);
          cow_bridge_100fc4d0(g, COW_IMG(COW_ADDR_LIFT_100B9B37), 3u, (const CowU32[]){ iVar2, 0x14, 0 }, g->ecx, g->edx, g->eax, 12u);
          wr16((uint32_t)(param_1 + 0x256), (int16_t)rd16((uint32_t)(param_1 + 0x256)) + 0xe);
        }
      }
      wr8((uint32_t)(param_1 + 0x25a), 1);
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
void cow_adapter_100b98e0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100b98e0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100b98e1: push esi */
    g->esi = g->ecx;   /* 0x100b98e2: the value the entry loaded and the decompiler dropped */
    g->ebx = 0u;   /* 0x100b98e4: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100b98e6: push edi */
    { uint32_t A = (uint32_t)(g->esi + 0x256u); g->eax = (g->eax & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x100b98e7: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esi + 0x20u); g->edx = (uint32_t)(rd32(A)); }   /* 0x100b98ee: register edx, replayed as the entry ran it */
    g->ecx = g->eax;   /* 0x100b98f1: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->ecx; uint32_t b = (uint32_t)0xFFFFu; uint32_t r = (uint32_t)(a & b); g->ecx = (uint32_t)(r); }   /* 0x100b98f3: register ecx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->edx + g->ecx + 0x1u); g->ebx = (g->ebx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x100b98f9: register ebx, replayed as the entry ran it */
    g->ecx = g->ebx;   /* 0x100b98fd: the value the entry loaded and the decompiler dropped */
    g->ebx = 1u;   /* 0x100b98ff: the value the entry loaded and the decompiler dropped */
    cow_lift_100b98e0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
