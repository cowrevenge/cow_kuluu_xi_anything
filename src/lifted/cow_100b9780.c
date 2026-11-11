/* f_0x100b9780 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100b9780 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100b9780(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    short sVar2;
    short sVar3;
    bVar1 = rd8((uint32_t)(rd32((uint32_t)(param_1 + 0x20)) + 1 + (CowU32)rd16((uint32_t)(param_1 + 0x256))));
      if (bVar1 < 2) {
        sVar2 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100B97B2), 1u, (const CowU32[]){ 2u }, g->ecx, g->edx, g->eax, 0u);
        sVar3 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100B97BD), 1u, (const CowU32[]){ 4u }, g->ecx, g->edx, g->eax, 0u);
        if (rd32(COW_IMG(COW_ADDR_LIFT_10663888)) != 0) {
          if (bVar1 != 1) {
            cow_bridge_100b2570(g, COW_IMG(COW_ADDR_LIFT_100B97DD), 5u, (const CowU32[]){ 4, (int)sVar2, 0xffffffff, 0, 0 }, g->ecx, g->edx, g->eax, 20u);
          }
          cow_bridge_101f8da0(g, COW_IMG(COW_ADDR_LIFT_100B97F1), 2u, (const CowU32[]){ 1, (int)sVar3 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_101f8e30(g, COW_IMG(COW_ADDR_LIFT_100B9804), 3u, (const CowU32[]){ 1, (int)sVar3, COW_IMG(COW_ADDR_LIFT_103D3C84) }, g->ecx, g->edx, g->eax, 0u);
          if (bVar1 != 1) {
            cow_bridge_100b2a60(g, COW_IMG(COW_ADDR_LIFT_100B980D), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          }
        }
      }
      wr16((uint32_t)(param_1 + 0x256), rd16((uint32_t)(param_1 + 0x256)) + 6);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100b9780(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100b9780: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x100b9781: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100b9782: push esi */
    g->esi = g->ecx;   /* 0x100b9783: the value the entry loaded and the decompiler dropped */
    g->eax = 0u;   /* 0x100b9785: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100b9787: push edi */
    { uint32_t A = (uint32_t)(g->esi + 0x256u); g->eax = (g->eax & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x100b9788: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esi + 0x20u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x100b978f: register ecx, replayed as the entry ran it */
    { g->ebx = (g->ebx & 0xFFFFFF00u) | (uint8_t)(0x1u); }   /* 0x100b9792: register ebx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->ecx + g->eax + 0x1u); g->ecx = (g->ecx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x100b9794: register ecx, replayed as the entry ran it */
    g->eax = g->ecx;   /* 0x100b9798: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0xFFu; uint32_t r = (uint32_t)(a & b); g->eax = (uint32_t)(r); }   /* 0x100b979a: register eax, replayed as the entry ran it */
    { { uint32_t a = g->eax; uint32_t r = (uint32_t)(a - 1u); g->eax = (uint32_t)(r); }; }   /* 0x100b979f: register eax, replayed as the entry ran it */
    cow_lift_100b9780(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
