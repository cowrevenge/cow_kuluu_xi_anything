/* f_0x10101070 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10101070 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10101070(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU16 uVar1;
    int iVar2;
    CowU32 puVar3;
    CowU32 puVar4;
    wr8((uint32_t)param_2, 2);
      wr8((uint32_t)((int)param_2 + 1), 0x83);
      iVar2 = 3;
      puVar3 = param_1;
      puVar4 = param_2;
      do {
        puVar4 = puVar4 + 2u * (uint32_t)(1);
        uVar1 = (rd16((uint32_t)puVar3) ^ rd16((uint32_t)puVar4)) & 0x7ff ^ rd16((uint32_t)puVar4);
        wr16((uint32_t)puVar4, uVar1);
        iVar2 = iVar2 + -1;
        wr16((uint32_t)puVar4, ((CowU8)rd16((uint32_t)(puVar3 + 2u * (uint32_t)(2))) & 0xf) << 0xb ^ uVar1 & 0x7ff);
        puVar3 = puVar3 + 2u * (uint32_t)(10);
      } while (iVar2 != 0);
      uVar1 = (CowU8)((CowU8)rd16((uint32_t)(param_1 + 2u * (uint32_t)(4))) ^ (CowU8)rd16((uint32_t)(param_2 + 2u * (uint32_t)(4)))) & 0xf ^ rd16((uint32_t)(param_2 + 2u * (uint32_t)(4)));
      wr16((uint32_t)(param_2 + 2u * (uint32_t)(4)), uVar1);
      uVar1 = (CowU8)((char)rd16((uint32_t)(param_1 + 2u * (uint32_t)(0xe))) << 4 ^ (CowU8)uVar1) & 0xf0 ^ uVar1;
      wr16((uint32_t)(param_2 + 2u * (uint32_t)(4)), uVar1);
      uVar1 = ((CowU16)(CowU8)rd16((uint32_t)(param_1 + 2u * (uint32_t)(0x18))) << 8 ^ uVar1) & 0xf00 ^ uVar1;
      wr16((uint32_t)(param_2 + 2u * (uint32_t)(4)), uVar1);
      wr16((uint32_t)(param_2 + 2u * (uint32_t)(4)), uVar1 & 0xfff ^ rd16((uint32_t)(param_1 + 2u * (uint32_t)(8))) << 0xc);
      uVar1 = (CowU8)((CowU8)rd16((uint32_t)(param_1 + 2u * (uint32_t)(0x12))) ^ (CowU8)rd16((uint32_t)(param_2 + 2u * (uint32_t)(5)))) & 0xf ^ rd16((uint32_t)(param_2 + 2u * (uint32_t)(5)));
      wr16((uint32_t)(param_2 + 2u * (uint32_t)(5)), uVar1);
      uVar1 = (CowU8)((char)rd16((uint32_t)(param_1 + 2u * (uint32_t)(0x1c))) << 4 ^ (CowU8)uVar1) & 0xf0 ^ uVar1;
      wr16((uint32_t)(param_2 + 2u * (uint32_t)(5)), uVar1);
      uVar1 = ((CowU16)(CowU8)rd16((uint32_t)(param_1 + 2u * (uint32_t)(6))) << 8 ^ uVar1) & 0x700 ^ uVar1;
      wr16((uint32_t)(param_2 + 2u * (uint32_t)(5)), uVar1);
      uVar1 = (rd16((uint32_t)(param_1 + 2u * (uint32_t)(0x10))) << 0xb ^ uVar1) & 0x3800 ^ uVar1;
      wr16((uint32_t)(param_2 + 2u * (uint32_t)(5)), uVar1);
      wr16((uint32_t)(param_2 + 2u * (uint32_t)(5)), uVar1 & 0x3fff ^ rd16((uint32_t)(param_1 + 2u * (uint32_t)(0x1a))) << 0xe);
      wr16((uint32_t)(param_2 + 2u * (uint32_t)(3)), rd16((uint32_t)(param_2 + 2u * (uint32_t)(3))) & 0x7fff ^ (CowU16)((rd32((uint32_t)(param_1 + 2u * (uint32_t)(0x1a))) >> 2) << 0xf));
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), cdecl, 4 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 2 register argument(s) [ecx, edx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10101070(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->eax = param_4;   /* 0x10101070: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10101074: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10101075: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10101076: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->esi = (uint32_t)(rd32(A)); }   /* 0x10101077: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1010107b: push edi */
    cow_lift_10101070(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->eax = (CowU32)(param_4);   /* what eax holds at every ret of the entry */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
