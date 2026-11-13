/* f_0x101fe930 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101fe930 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101fe930(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    iVar2 = -1;
      cVar1 = (int8_t)rd8((uint32_t)(param_1 + 0x10));
      wr32((uint32_t)(param_1 + 4), 0);
      if (cVar1 == '\0') {
        iVar2 = cow_bridge_101fe650(g, COW_IMG(COW_ADDR_LIFT_101FE965), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      else if (cVar1 == '\x01') {
        cow_bridge_101fe760(g, COW_IMG(COW_ADDR_LIFT_101FE95C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      else if (cVar1 == '\x02') {
        cow_bridge_101fe890(g, COW_IMG(COW_ADDR_LIFT_101FE953), 0u, (const CowU32[]){ 0u }, param_1, g->edx, ((g->eax - 1u) - 1u), 0u);
      }
      cow_bridge_101f7020(g, COW_IMG(COW_ADDR_LIFT_101FE97D), 3u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0xc)), rd16((uint32_t)(param_1 + 4)), 1 }, g->ecx, g->edx, g->eax, 0u);
      if ((int8_t)rd8((uint32_t)(param_1 + 0x12)) != '\0') {
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        cow_bridge_101f7080(g, COW_IMG(COW_ADDR_LIFT_101FE994), 2u, (const CowU32[]){ iVar2, 0 }, g->ecx, g->edx, g->eax, 0u);
        wr8((uint32_t)(param_1 + 0x12), 0);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 1 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp], ret 4.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101fe930(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x101fe930: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101fe931: push esi */
    g->esi = g->ecx;   /* 0x101fe932: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101fe934: push edi */
    { uint32_t a = g->edi; uint32_t b = (uint32_t)0xFFFFFFFFu; uint32_t r = (uint32_t)(a | b); g->edi = (uint32_t)(r); }   /* 0x101fe935: register edi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esi + 0x10u); g->eax = (uint32_t)((uint32_t)(int32_t)((int8_t)rd8(A))); }   /* 0x101fe938: register eax, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0x0u; uint32_t r = (uint32_t)(a - b); g->eax = (uint32_t)(r); }   /* 0x101fe93c: register eax, replayed as the entry ran it */
    cow_lift_101fe930(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
