/* f_0x101ec140 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101ec140 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101ec140(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    CowU16 extraout_var;
    short local_c;
    CowU16 uStack_a;
    short sStack_8;
    CowU16 uStack_6;
    CowU16 uStack_4;
    local_c = 0;
      uStack_a = 0;
      sStack_8 = 0;
      uStack_6 = 0;
      cow_bridge_10118f70(g, COW_IMG(COW_ADDR_LIFT_101EC16B), 1u, (const CowU32[]){ g->eax }, rd32((uint32_t)((int)param_1 + 8)), g->edx, g->eax, 0u);
      iVar1 = (((uint32_t)(sStack_8) & 0xffffu) << 16 | ((uint32_t)(uStack_a) & 0xffffu));
      iVar2 = (((uint32_t)(uStack_4) & 0xffffu) << 16 | ((uint32_t)(uStack_6) & 0xffffu)) - iVar1;
      wr16((uint32_t)((int)param_1 + 0x28), (short)iVar2);
      if ((int8_t)rd8((uint32_t)((int)param_1 + 0x44)) == '\0') {
        if ((int8_t)rd8((uint32_t)((int)param_1 + 0x40)) == '\0') {
          wr16((uint32_t)((int)param_1 + 0x42), sStack_8 - local_c);
        }
        else {
          wr16((uint32_t)((int)param_1 + 0x42), 0xfd);
          cow_bridge_1011a5a0(g, COW_IMG(COW_ADDR_LIFT_101EC1A5), 7u, (const CowU32[]){ (((uint32_t)(uStack_a) & 0xffffu) << 16 | ((uint32_t)(local_c) & 0xffffu)), iVar1, 0xfd, iVar2, 1, 1, 0 }, rd32((uint32_t)((int)param_1 + 8)), g->edx, g->eax, 0u);
        }
      }
      else {
        wr16((uint32_t)((int)param_1 + 0x28), rd16((uint32_t)((int)param_1 + 0x4c)));
        wr16((uint32_t)((int)param_1 + 0x42), rd16((uint32_t)((int)param_1 + 0x48)));
        cow_bridge_1011a5a0(g, COW_IMG(COW_ADDR_LIFT_101EC1CB), 7u, (const CowU32[]){ (((uint32_t)(uStack_a) & 0xffffu) << 16 | ((uint32_t)(local_c) & 0xffffu)), iVar1, (((uint32_t)((short)((CowU32)iVar2 >> 0x10)) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)((int)param_1 + 0x48))) & 0xffffu)), (((uint32_t)(extraout_var) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)((int)param_1 + 0x4c))) & 0xffffu)), 1, 1, 0 }, rd32((uint32_t)((int)param_1 + 8)), g->edx, g->eax, 0u);
      }
      if (((int32_t)rd32((uint32_t)((int)param_1 + 0x14)) != -999) || ((int32_t)rd32((uint32_t)((int)param_1 + 0x18)) != -999)) {
        if ((int8_t)rd8((uint32_t)((int)param_1 + 0x44)) == '\0') {
          cow_bridge_101602f0(g, COW_IMG(COW_ADDR_LIFT_101EC203), 3u, (const CowU32[]){ (CowU32)((int)param_1 + 0x14), 0, 0 }, 274864184u, g->edx, g->eax, 0u);
        }
        cow_bridge_10119110(g, COW_IMG(COW_ADDR_LIFT_101EC212), 2u, (const CowU32[]){ rd32((uint32_t)((int)param_1 + 0x14)), rd32((uint32_t)((int)param_1 + 0x18)) }, rd32((uint32_t)((int)param_1 + 8)), g->edx, g->eax, 0u);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 12 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101ec140(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 0xcu;                      /* 0x101ec140: 12 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101ec143: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101ec144: push esi */
    g->esi = g->ecx;   /* 0x101ec145: the value the entry loaded and the decompiler dropped */
    { g->eax = (uint32_t)((uint32_t)(g->esp + 0x8u)); }   /* 0x101ec147: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101ec14b: push edi */
    g->ebx = 0u;   /* 0x101ec14c: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x8u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x101ec14e: register ecx, replayed as the entry ran it */
    cow_lift_101ec140(g, param_1);

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
