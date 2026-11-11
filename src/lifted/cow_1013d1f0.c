/* f_0x1013d1f0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1013d1f0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1013d1f0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    int iVar3;
    iVar1 = rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 8));
      iVar3 = (param_3 & 0xff) - 10;
      iVar2 = rd16((uint32_t)(param_1 + 0x34e)) + 3;
      if ((((rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 0x18)) < '\0') && ((iVar1 == 2 || (iVar1 == 3)))) || (iVar1 != 0))
         || (param_2 < 3)) {
        iVar2 = rd16((uint32_t)(param_1 + 0x34e)) + 0x33;
      }
      iVar1 = cow_bridge_1015b1f0(g, COW_IMG(COW_ADDR_LIFT_1013D242), 2u, (const CowU32[]){ 0, iVar3 }, g->ecx, g->edx, g->eax, 0u);
      if (iVar1 != 0) {
        iVar3 = cow_bridge_1015b240(g, COW_IMG(COW_ADDR_LIFT_1013D255), 2u, (const CowU32[]){ 0, iVar3 }, g->ecx, g->edx, g->eax, 0u);
        if (0 < iVar3) {
          cow_bridge_10129f00(g, COW_IMG(COW_ADDR_LIFT_1013D27F), 5u, (const CowU32[]){ iVar2, rd16((uint32_t)(param_1 + 0x350)) + 4 + (CowU32)param_2 * 0x10, iVar1, iVar3, 0x80808080 }, g->ecx, g->edx, g->eax, 20u);
        }
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
void cow_adapter_1013d1f0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1013d1f0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1013d1f1: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1013d1f2: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x14u); g->esi = (uint32_t)(rd32(A)); }   /* 0x1013d1f3: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1013d1f7: push edi */
    g->edi = g->ecx;   /* 0x1013d1f8: the value the entry loaded and the decompiler dropped */
    g->ecx = rd32(COW_IMG(COW_ADDR_LIFT_10456A28));   /* 0x1013d1fa: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->esi; uint32_t b = (uint32_t)0xFFu; uint32_t r = (uint32_t)(a & b); g->esi = (uint32_t)(r); }   /* 0x1013d200: register esi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->edi + 0x34Eu); g->eax = (uint32_t)((uint32_t)(int32_t)((int16_t)rd16(A))); }   /* 0x1013d206: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->ecx + 0x18u); g->ebx = (g->ebx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x1013d20d: register ebx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->ecx + 0x8u); g->edx = (uint32_t)(rd32(A)); }   /* 0x1013d210: register edx, replayed as the entry ran it */
    { uint32_t a = g->esi; uint32_t b = (uint32_t)0xAu; uint32_t r = (uint32_t)(a - b); g->esi = (uint32_t)(r); }   /* 0x1013d213: register esi, replayed as the entry ran it */
    { g->ebp = (uint32_t)((uint32_t)(g->eax + 0x3u)); }   /* 0x1013d216: register ebp, replayed as the entry ran it */
    cow_lift_1013d1f0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
