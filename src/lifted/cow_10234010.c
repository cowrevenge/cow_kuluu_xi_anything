/* f_0x10234010 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10234010 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10234010(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU8 bVar2;
    CowU32 uVar3;
    CowU32 puVar4;
    bVar2 = 0;
      uVar3 = 0;
      puVar4 = (CowU32)((int)param_1 + 0x68);
      do {
        iVar1 = cow_bridge_1015b9e0(g, COW_IMG(COW_ADDR_LIFT_1023402F), 1u, (const CowU32[]){ uVar3 + 0xf620 }, rd32(COW_IMG(COW_ADDR_LIFT_10621808)), g->edx, g->eax, 0u);
        if ((((iVar1 == 0) || (rd16((uint32_t)(iVar1 + 0x1594)) == (CowU32)0x0)) ||
            (rd16((uint32_t)rd32((uint32_t)((iVar1 + 0x1594)))) == 0)) || (bVar2 != uVar3)) {
          wr32((uint32_t)puVar4, 0);
        }
        else {
          bVar2 = (char)uVar3 + 1;
          wr32((uint32_t)puVar4, rd32((uint32_t)rd32((uint32_t)((iVar1 + 0x14b8)))));
        }
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 4u * (uint32_t)(1);
      } while ((int)uVar3 < 8);
      g->eax = (CowU32)(bVar2); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ecx, ebx, esi], frame pointer no, 0 locals, pops [esi, ebx, ecx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10234010(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x10234010: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10234011: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10234012: push esi */
    cow_lift_10234010(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
