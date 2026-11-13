/* f_0x1010c000 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1010c000 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1010c000(Guest* g, int32_t param_1, int32_t param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 puVar2;
    CowU32 puVar3;
    CowU32 uVar4;
    int iVar5;
    CowU32 piVar6;
    CowU8 local_20[8];
    CowU8 local_18[8];
    CowU8 local_10[12];
    int local_4;
    piVar6 = rd32((uint32_t)(param_1 + 0x54));
      while ((rd32((uint32_t)(piVar6 + 4u * (uint32_t)(1))) != 0 && (rd32((uint32_t)(piVar6 + 4u * (uint32_t)(2))) != 0))) {
        cow_bridge_10109110(g, COW_IMG(COW_ADDR_LIFT_1010C037), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_1010c4d0(g, COW_IMG(COW_ADDR_LIFT_1010C043), 1u, (const CowU32[]){ local_18 }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_101091b0(g, COW_IMG(COW_ADDR_LIFT_1010C051), 1u, (const CowU32[]){ local_18 }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_101090a0(g, COW_IMG(COW_ADDR_LIFT_1010C05A), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_101093b0(g, COW_IMG(COW_ADDR_LIFT_1010C068), 1u, (const CowU32[]){ 271925332u }, g->ecx, g->edx, g->eax, 0u);
        if ((int32_t)rd32((uint32_t)(rd32((uint32_t)piVar6) + 0xc)) == 0) {
          cow_bridge_101093b0(g, COW_IMG(COW_ADDR_LIFT_1010C07F), 1u, (const CowU32[]){ 271924748u }, g->ecx, g->edx, g->eax, 0u);
        }
        else {
          cow_bridge_10109110(g, COW_IMG(COW_ADDR_LIFT_1010C08C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_1010c4d0(g, COW_IMG(COW_ADDR_LIFT_1010C099), 1u, (const CowU32[]){ local_10 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_101091b0(g, COW_IMG(COW_ADDR_LIFT_1010C0A7), 1u, (const CowU32[]){ local_10 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_101090a0(g, COW_IMG(COW_ADDR_LIFT_1010C0B0), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          if (local_4 == 0) {
            uVar1 = 0;
          }
          else {
            uVar1 = rd32((uint32_t)(local_4 + 4));
          }
          cow_bridge_101093b0(g, COW_IMG(COW_ADDR_LIFT_1010C0C9), 1u, (const CowU32[]){ uVar1 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_101090a0(g, COW_IMG(COW_ADDR_LIFT_1010C0D2), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        }
        puVar2 = (CowU32)cow_bridge_1010c7c0(g, COW_IMG(COW_ADDR_LIFT_1010C0DD), 2u, (const CowU32[]){ 0u, 8u }, g->ecx, g->edx, g->eax, 0u);
        if (puVar2 != (CowU32)0x0) {
          if ((int32_t)rd32((uint32_t)(param_2 + 8)) == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = (int)puVar2 - (int32_t)rd32((uint32_t)(param_2 + 8));
          }
          wr32((uint32_t)puVar2, 0xff000200);
          puVar3 = (CowU32)cow_bridge_1010c7c0(g, COW_IMG(COW_ADDR_LIFT_1010C105), 2u, (const CowU32[]){ 0u, 4u }, g->ecx, g->edx, g->eax, 0u);
          if (puVar3 != (CowU32)0x0) {
            uVar4 = cow_bridge_1010bda0(g, COW_IMG(COW_ADDR_LIFT_1010C11E), 2u, (const CowU32[]){ param_3, local_20 }, g->ecx, g->edx, g->eax, 0u);
            uVar4 = (rd32((uint32_t)puVar3) ^ uVar4) & 0x7fffffff ^ rd32((uint32_t)puVar3);
            wr32((uint32_t)puVar3, uVar4);
            wr32((uint32_t)puVar3, uVar4 & 0x7fffffff ^ (CowU32)((int8_t)rd8((uint32_t)(rd32((uint32_t)piVar6) + 0x18)) == '\0') << 0x1f);
          }
          puVar2 = (CowU32)cow_bridge_1010c7c0(g, COW_IMG(COW_ADDR_LIFT_1010C154), 2u, (const CowU32[]){ 0u, 4u }, g->ecx, g->edx, g->eax, 0u);
          if (puVar2 != (CowU32)0x0) {
            wr32((uint32_t)puVar2, 0xff00ff00);
          }
          wr32((uint32_t)(iVar5 + 4 + (int32_t)rd32((uint32_t)(param_2 + 8))), (int32_t)rd32((uint32_t)(param_2 + 4)) - iVar5);
        }
        cow_bridge_101090a0(g, COW_IMG(COW_ADDR_LIFT_1010C173), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if ((CowU32)rd32((uint32_t)(piVar6 + 4u * (uint32_t)(2))) != (CowU32)0x0) {
          piVar6 = (CowU32)rd32((uint32_t)(piVar6 + 4u * (uint32_t)(2)));
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 12 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 36 locals, pops [edi, esi, ebp, ebx], ret 12.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1010c000(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 0x24u;                      /* 0x1010c000: 36 bytes of locals */
    { uint32_t A = (uint32_t)(g->esp + 0x28u); g->eax = (uint32_t)(rd32(A)); }   /* 0x1010c003: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1010c007: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1010c008: push ebp */
    { uint32_t A = (uint32_t)(g->esp + 0x34u); g->ebp = (uint32_t)(rd32(A)); }   /* 0x1010c009: register ebp, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1010c00d: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1010c00e: push edi */
    { uint32_t A = (uint32_t)(g->eax + 0x54u); g->edi = (uint32_t)(rd32(A)); }   /* 0x1010c00f: register edi, replayed as the entry ran it */
    cow_lift_1010c000(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
