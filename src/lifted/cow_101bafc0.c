/* f_0x101bafc0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101bafc0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101bafc0(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU32 pcVar2;
    int iVar3;
    CowU32 this_00;
    cow_bridge_101bb9e0(g, COW_IMG(COW_ADDR_LIFT_101BAFCB), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      this_00 = (CowU32)((int)param_1 + 0x22c);
      wr32((uint32_t)((int)param_1 + 0x204), 0);
      iVar3 = 0x40;
      do {
        cow_bridge_101ba5c0(g, COW_IMG(COW_ADDR_LIFT_101BAFE5), 0u, (const CowU32[]){ 0u }, this_00, g->edx, g->eax, 0u);
        this_00 = (CowU32)((int)this_00 + 0x1f0);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      wr32((uint32_t)((int)param_1 + 4), param_2);
      wr32((uint32_t)((int)param_1 + 0x214), 0xffffffff);
      wr32((uint32_t)((int)param_1 + 0x218), 0xffffffff);
      wr32((uint32_t)((int)param_1 + 0x21c), 0xffffffff);
      wr32((uint32_t)((int)param_1 + 0x220), 0xffffffff);
      pcVar2 = COW_IMG(COW_ADDR_LIFT_103D3C84);
      wr32((uint32_t)((int)param_1 + 0xc), 0);
      wr8((uint32_t)param_1, 0);
      do {
        cVar1 = rd8((uint32_t)pcVar2);
        wr8((uint32_t)(pcVar2 + 1u * (uint32_t)((int)param_1 + -0x103d3c54)), cVar1);
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      wr32((uint32_t)((int)param_1 + 0x208), 0);
      wr32((uint32_t)((int)param_1 + 0x20c), 0);
      wr32((uint32_t)((int)param_1 + 0x210), 0);
      wr32((uint32_t)((int)param_1 + 8), 0);
      wr32((uint32_t)((int)param_1 + 0x200), 0);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101bafc0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101bafc0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x101bafc1: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101bafc2: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101bafc3: push edi */
    g->esi = g->ecx;   /* 0x101bafc4: the value the entry loaded and the decompiler dropped */
    cow_lift_101bafc0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
