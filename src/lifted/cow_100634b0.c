/* f_0x100634b0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100634b0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100634b0(Guest* g, CowU32 param_1, int32_t param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    int iVar2;
    CowU32 puVar3;
    int iVar4;
    cow_bridge_10063550(g, COW_IMG(COW_ADDR_LIFT_100634BB), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      iVar4 = param_2 + (CowU32)((char)param_4 != '\0');
      wr8((uint32_t)((int)param_1 + 0x24), (char)param_4);
      wr32((uint32_t)((int)param_1 + 4), iVar4);
      iVar4 = iVar4 + 2;
      wr8((uint32_t)((int)param_1 + 0x25), (CowU8)param_5);
      iVar2 = 0;
      puVar3 = (CowU32)((int)param_1 + 0xc);
      do {
        if ((param_3 & 1 << ((CowU8)iVar2 & 0x1f)) != 0) {
          uVar1 = cow_bridge_10028640(g, COW_IMG(COW_ADDR_LIFT_10063501), 2u, (const CowU32[]){ iVar4 * 4, 4 }, g->ecx, g->edx, g->eax, 8u);
          wr32((uint32_t)puVar3, uVar1);
        }
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 4u * (uint32_t)(1);
      } while (iVar2 < 3);
      uVar1 = cow_bridge_10028640(g, COW_IMG(COW_ADDR_LIFT_1006351F), 2u, (const CowU32[]){ iVar4 * 4 + -4, 4 }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)((int)param_1 + 0x18), uVar1);
      iVar2 = cow_bridge_10028640(g, COW_IMG(COW_ADDR_LIFT_10063533), 2u, (const CowU32[]){ iVar4 * 0x40 + -0xb4, 4 }, g->ecx, g->edx, g->eax, 16u);
      wr32((uint32_t)((int)param_1 + 0x20), iVar2);
      wr32((uint32_t)((int)param_1 + 0x1c), iVar2 + 0xc);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 5 parameter(s), cleanup 16 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 16.
   Arguments: 1 register argument(s) [ecx], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100634b0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100634b0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x100634b1: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100634b2: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100634b3: push edi */
    g->esi = g->ecx;   /* 0x100634b4: the value the entry loaded and the decompiler dropped */
    cow_lift_100634b0(g, param_1, param_2, param_3, param_4, param_5);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
