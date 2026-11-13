/* f_0x1009b3f0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1009b3f0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1009b3f0(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 piVar1;
    short sVar2;
    int iVar3;
    iVar3 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(param_1 & 0xffff)));
      piVar1 = COW_IMG(COW_ADDR_LIFT_10480AF0) + (param_1 & 0xffff);
      if (iVar3 != 0) {
        if ((CowU32)rd8((uint32_t)(iVar3 + 0xef)) != (int)(char)rd16((uint32_t)param_2)) {
          wr8((uint32_t)(iVar3 + 0xef), (char)rd16((uint32_t)param_2));
          wr32((uint32_t)(iVar3 + 0x120), rd32((uint32_t)(iVar3 + 0x120)) | 1);
        }
        iVar3 = rd32((uint32_t)piVar1);
        sVar2 = rd16((uint32_t)param_2);
        if ((int16_t)rd16((uint32_t)(iVar3 + 0xfc)) != sVar2) {
          wr8((uint32_t)(iVar3 + 0xf4), rd8((uint32_t)(iVar3 + 0xf4)) | 1);
          wr16((uint32_t)(iVar3 + 0xfc), sVar2);
        }
        iVar3 = rd32((uint32_t)piVar1);
        sVar2 = rd16((uint32_t)(param_2 + 2u * (uint32_t)(1)));
        if ((int16_t)rd16((uint32_t)(iVar3 + 0xfe)) != sVar2) {
          wr8((uint32_t)(iVar3 + 0xf4), rd8((uint32_t)(iVar3 + 0xf4)) | 2);
          wr16((uint32_t)(iVar3 + 0xfe), sVar2);
        }
        iVar3 = rd32((uint32_t)piVar1);
        sVar2 = rd16((uint32_t)(param_2 + 2u * (uint32_t)(2)));
        if ((int16_t)rd16((uint32_t)(iVar3 + 0x100)) != sVar2) {
          wr8((uint32_t)(iVar3 + 0xf4), rd8((uint32_t)(iVar3 + 0xf4)) | 4);
          wr16((uint32_t)(iVar3 + 0x100), sVar2);
        }
        iVar3 = rd32((uint32_t)piVar1);
        sVar2 = rd16((uint32_t)(param_2 + 2u * (uint32_t)(3)));
        if ((int16_t)rd16((uint32_t)(iVar3 + 0x102)) != sVar2) {
          wr8((uint32_t)(iVar3 + 0xf4), rd8((uint32_t)(iVar3 + 0xf4)) | 8);
          wr16((uint32_t)(iVar3 + 0x102), sVar2);
        }
        iVar3 = rd32((uint32_t)piVar1);
        sVar2 = rd16((uint32_t)(param_2 + 2u * (uint32_t)(4)));
        if ((int16_t)rd16((uint32_t)(iVar3 + 0x104)) != sVar2) {
          wr8((uint32_t)(iVar3 + 0xf4), rd8((uint32_t)(iVar3 + 0xf4)) | 0x10);
          wr16((uint32_t)(iVar3 + 0x104), sVar2);
        }
        iVar3 = rd32((uint32_t)piVar1);
        sVar2 = rd16((uint32_t)(param_2 + 2u * (uint32_t)(5)));
        if ((int16_t)rd16((uint32_t)(iVar3 + 0x106)) != sVar2) {
          wr8((uint32_t)(iVar3 + 0xf4), rd8((uint32_t)(iVar3 + 0xf4)) | 0x20);
          wr16((uint32_t)(iVar3 + 0x106), sVar2);
        }
        iVar3 = rd32((uint32_t)piVar1);
        sVar2 = rd16((uint32_t)(param_2 + 2u * (uint32_t)(6)));
        if ((int16_t)rd16((uint32_t)(iVar3 + 0x108)) != sVar2) {
          wr8((uint32_t)(iVar3 + 0xf4), rd8((uint32_t)(iVar3 + 0xf4)) | 0x40);
          wr16((uint32_t)(iVar3 + 0x108), sVar2);
        }
        iVar3 = rd32((uint32_t)piVar1);
        sVar2 = rd16((uint32_t)(param_2 + 2u * (uint32_t)(7)));
        if ((int16_t)rd16((uint32_t)(iVar3 + 0x10a)) != sVar2) {
          wr8((uint32_t)(iVar3 + 0xf4), rd8((uint32_t)(iVar3 + 0xf4)) | 0x80);
          wr16((uint32_t)(iVar3 + 0x10a), sVar2);
        }
        iVar3 = rd32((uint32_t)piVar1);
        sVar2 = rd16((uint32_t)(param_2 + 2u * (uint32_t)(8)));
        if ((int16_t)rd16((uint32_t)(iVar3 + 0x10c)) != sVar2) {
          wr8((uint32_t)(iVar3 + 0xf5), rd8((uint32_t)(iVar3 + 0xf5)) | 1);
          wr16((uint32_t)(iVar3 + 0x10c), sVar2);
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(edx), cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 1 register argument(s) [edx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1009b3f0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->edx;   /* edx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->eax = param_2;   /* 0x1009b3f0: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1009b3f4: push esi */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0xFFFFu; uint32_t r = (uint32_t)(a & b); g->eax = (uint32_t)(r); }   /* 0x1009b3f5: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->eax * 4 + COW_IMG(COW_ADDR_LIFT_10480AF0) + RD); g->esi = (uint32_t)(rd32(A)); }   /* 0x1009b3fa: register esi, replayed as the entry ran it */
    { g->ecx = (uint32_t)((uint32_t)(g->eax * 4 + COW_IMG(COW_ADDR_LIFT_10480AF0) + RD)); }   /* 0x1009b401: register ecx, replayed as the entry ran it */
    cow_lift_1009b3f0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
