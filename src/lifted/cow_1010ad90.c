/* f_0x1010ad90 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1010ad90 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1010ad90(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    int iVar2;
    int iVar3;
    CowU8 local_8[8];
    _Bool bVar4;
      
      bVar4 = 0;
      if (rd32((uint32_t)(param_1 + 0x18)) == 0) {
        cow_bridge_10109110(g, COW_IMG(COW_ADDR_LIFT_1010AE80), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (param_2 != 0) {
          cow_bridge_10109260(g, COW_IMG(COW_ADDR_LIFT_1010AE92), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, g->eax, 0u);
        }
        switch(rd32((uint32_t)(param_1 + 0x1c))) {
        case 0:
          iVar2 = cow_bridge_101095d0(g, COW_IMG(COW_ADDR_LIFT_1010AEB2), 1u, (const CowU32[]){ local_8 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_101090a0(g, COW_IMG(COW_ADDR_LIFT_1010AEC0), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          g->eax = (CowU32)(iVar2 == 0); return;
        case 1:
          iVar2 = cow_bridge_101095d0(g, COW_IMG(COW_ADDR_LIFT_1010AED8), 1u, (const CowU32[]){ local_8 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_101090a0(g, COW_IMG(COW_ADDR_LIFT_1010AEE6), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          g->eax = (CowU32)(iVar2 != 0); return;
        case 2:
          iVar2 = cow_bridge_101095d0(g, COW_IMG(COW_ADDR_LIFT_1010AEFE), 1u, (const CowU32[]){ local_8 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_101090a0(g, COW_IMG(COW_ADDR_LIFT_1010AF0C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          g->eax = (CowU32)(0 < iVar2); return;
        case 3:
          iVar2 = cow_bridge_101095d0(g, COW_IMG(COW_ADDR_LIFT_1010AF24), 1u, (const CowU32[]){ local_8 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_101090a0(g, COW_IMG(COW_ADDR_LIFT_1010AF32), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          g->eax = (CowU32)(-1 < iVar2); return;
        case 4:
          iVar2 = cow_bridge_101095d0(g, COW_IMG(COW_ADDR_LIFT_1010AF4A), 1u, (const CowU32[]){ local_8 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_101090a0(g, COW_IMG(COW_ADDR_LIFT_1010AF58), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          g->eax = (CowU32)(iVar2 < 0); return;
        case 5:
          iVar2 = cow_bridge_101095d0(g, COW_IMG(COW_ADDR_LIFT_1010AF70), 1u, (const CowU32[]){ local_8 }, g->ecx, g->edx, g->eax, 0u);
          bVar4 = iVar2 < 1;
        }
        cow_bridge_101090a0(g, COW_IMG(COW_ADDR_LIFT_1010AF7E), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      else if (rd32((uint32_t)(param_1 + 0x18)) == 1) {
        if ((rd32((uint32_t)(param_1 + 0x24)) == 0) ||
           (puVar1 = rd8((uint32_t)(rd32((uint32_t)(param_1 + 0x24)) + 4)), puVar1 == (CowU32)0x0)) {
          puVar1 = COW_IMG(COW_ADDR_LIFT_103D3C84);
        }
        iVar2 = cow_bridge_103128b2(g, COW_IMG(COW_ADDR_LIFT_1010ADCA), 1u, (const CowU32[]){ puVar1 }, g->ecx, g->edx, g->eax, 0u);
        if (param_2 == 0) {
          iVar3 = 0;
        }
        else if ((rd32((uint32_t)(param_2 + 4)) == 0) ||
                (iVar3 = rd32((uint32_t)(rd32((uint32_t)(param_2 + 4)) + 4)), iVar3 == 0)) {
          iVar3 = cow_bridge_103128b2(g, COW_IMG(COW_ADDR_LIFT_1010ADED), 1u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103D3C84) }, g->ecx, g->edx, g->eax, 4u);
        }
        else {
          iVar3 = cow_bridge_103128b2(g, COW_IMG(COW_ADDR_LIFT_1010ADFD), 1u, (const CowU32[]){ 272448644u }, g->ecx, g->edx, 272448644u, 4u);
        }
        switch(rd32((uint32_t)(param_1 + 0x1c))) {
        case 0:
          g->eax = (CowU32)(iVar2 == iVar3); return;
        case 1:
          g->eax = (CowU32)(iVar2 != iVar3); return;
        case 2:
          g->eax = (CowU32)(iVar3 < iVar2); return;
        case 3:
          g->eax = (CowU32)(iVar3 <= iVar2); return;
        case 4:
          g->eax = (CowU32)(iVar2 < iVar3); return;
        case 5:
          g->eax = (CowU32)(iVar2 <= iVar3); return;
        }
      }
      g->eax = (CowU32)(bVar4); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 8 locals, pops [edi, esi, ebx], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1010ad90(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 0x8u;                      /* 0x1010ad90: 8 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1010ad93: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1010ad94: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1010ad95: push edi */
    g->edi = g->ecx;   /* 0x1010ad96: the value the entry loaded and the decompiler dropped */
    { uint8_t a = (uint8_t)g->ebx; uint8_t b = (uint8_t)(uint8_t)g->ebx; uint8_t r = (uint8_t)(a ^ b); g->ebx = (g->ebx & 0xFFFFFF00u) | (uint8_t)(r); }   /* 0x1010ad98: register ebx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->edi + 0x18u); g->eax = (uint32_t)(rd32(A)); }   /* 0x1010ad9a: register eax, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0x0u; uint32_t r = (uint32_t)(a - b); g->eax = (uint32_t)(r); }   /* 0x1010ad9d: register eax, replayed as the entry ran it */
    cow_lift_1010ad90(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
