/* f_0x102a8760 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102a8760 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102a8760(Guest* g, int32_t param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU8 local_28[6];
    CowU16 local_22;
    CowU16 uStack_20;
    CowU16 local_1e;
    iVar1 = cow_bridge_102a8890(g, COW_IMG(COW_ADDR_LIFT_102A8775), 2u, (const CowU32[]){ g->ebx, g->eax }, g->ecx, g->edx, g->eax, 8u);
      if (iVar1 == 0) {
        wr32((uint32_t)(param_1 + 0x1c), 0);
        wr32((uint32_t)(param_1 + 0x20), 0);
        wr32((uint32_t)(param_1 + 0x24), 0);
        wr32((uint32_t)(param_1 + 0x28), 0);
        g->eax = (CowU32)(0); return;
      }
      iVar1 = cow_bridge_10275da0(g, COW_IMG(COW_ADDR_LIFT_102A87CC), 4u, (const CowU32[]){ 1, (CowU32)local_1e * (CowU32)uStack_20 * (CowU32)local_22, COW_IMG(COW_ADDR_LIFT_103BE560), 0x15e }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(param_1 + 0x28), iVar1);
      if (iVar1 == 0) {
        cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102A87F0), 3u, (const CowU32[]){ 272316316u, 272360800u, 352u }, g->ecx, g->edx, g->eax, 0u)
        ;
        cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102A87FA), 1u, (const CowU32[]){ 272360784u }, g->ecx, g->edx, g->eax, 16u);
        g->eax = (CowU32)(0); return;
      }
      iVar1 = cow_bridge_102a8960(g, COW_IMG(COW_ADDR_LIFT_102A8811), 2u, (const CowU32[]){ param_2, local_28 }, g->ecx, g->edx, g->eax, 8u);
      if (iVar1 == 0) {
        cow_bridge_10276110(g, COW_IMG(COW_ADDR_LIFT_102A882B), 3u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x28)), COW_IMG(COW_ADDR_LIFT_103BE560), 0x167 }, g->ecx, g->edx, g->eax, 12u);
        wr32((uint32_t)(param_1 + 0x28), 0);
        g->eax = (CowU32)(0); return;
      }
      wr32((uint32_t)(param_1 + 0x1c), (CowU32)local_22);
      wr32((uint32_t)(param_1 + 0x20), (CowU32)uStack_20);
      wr32((uint32_t)(param_1 + 0x24), (CowU32)local_1e);
      cow_bridge_102a8bb0(g, COW_IMG(COW_ADDR_LIFT_102A886B), 2u, (const CowU32[]){ local_28, param_1 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_102a8b50(g, COW_IMG(COW_ADDR_LIFT_102A8875), 1u, (const CowU32[]){ local_28 }, g->ecx, g->edx, g->eax, 12u);
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0xff) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 40 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102a8760(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 0x28u;                      /* 0x102a8760: 40 bytes of locals */
    { g->eax = (uint32_t)((uint32_t)(g->esp)); }   /* 0x102a8763: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102a8767: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0x34u); g->ebx = (uint32_t)(rd32(A)); }   /* 0x102a8768: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102a876c: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102a876d: push edi */
    cow_lift_102a8760(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
