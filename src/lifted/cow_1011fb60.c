/* f_0x1011fb60 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1011fb60 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1011fb60(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5, int32_t param_6)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    int iVar3;
    CowU32 local_4;
    iVar1 = (int32_t)rd32((uint32_t)((int)param_1 + 0x14));
      local_4 = param_1;
      local_4 = (CowU32)cow_bridge_10126500(g, COW_IMG(COW_ADDR_LIFT_1011FB72), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      iVar3 = 0;
      if (0 < param_6) {
        iVar2 = param_6;
        do {
          cow_bridge_10126520(g, COW_IMG(COW_ADDR_LIFT_1011FB90), 1u, (const CowU32[]){ (g->esp + 16u) }, g->ecx, g->edx, (g->esp + 16u), 0u);
          iVar2 = iVar2 + -1;
          iVar3 = param_6;
        } while (iVar2 != 0);
      }
      if (iVar3 < iVar1) {
        param_6 = iVar1 - iVar3;
        do {
          iVar1 = cow_bridge_10126520(g, COW_IMG(COW_ADDR_LIFT_1011FBB5), 1u, (const CowU32[]){ (g->esp + 16u) }, g->ecx, g->edx, g->eax, 0u);
          if (iVar1 != 0) {
            cow_bridge_1011e980(g, COW_IMG(COW_ADDR_LIFT_1011FBD2), 6u, (const CowU32[]){ param_2, param_3, 0x3f800000, 0x3f800000, param_4, param_5 }, g->ecx, g->edx, g->eax, 0u);
          }
          param_6 = param_6 + -1;
        } while (param_6 != 0);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 6 parameter(s), cleanup 20 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 5 push(es) [ecx, ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx, ecx], ret 20.
   Arguments: 1 register argument(s) [ecx], 5 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1011fb60(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x1011fb60: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1011fb61: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1011fb62: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1011fb63: push esi */
    { uint32_t A = (uint32_t)(g->ecx + 0x14u); g->esi = (uint32_t)(rd32(A)); }   /* 0x1011fb64: register esi, replayed as the entry ran it */
    { g->ebx = (uint32_t)((uint32_t)(g->ecx + 0x4u)); }   /* 0x1011fb67: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1011fb6a: push edi */
    g->ecx = g->ebx;   /* 0x1011fb6b: the value the entry loaded and the decompiler dropped */
    cow_lift_1011fb60(g, param_1, param_2, param_3, param_4, param_5, param_6);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 20u);
}
/* COW_ADAPTER END */
