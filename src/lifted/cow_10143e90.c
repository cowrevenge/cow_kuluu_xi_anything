/* f_0x10143e90 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10143e90 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10143e90(Guest* g, CowU32 param_1, int32_t param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 this_00;
    CowU32 uVar1;
    CowU16 extraout_var;
    int iVar2;
    cow_bridge_1015db80(g, COW_IMG(COW_ADDR_LIFT_10143EAA), 2u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10578294)) + 8)), 0 }, COW_IMG(COW_ADDR_LIFT_10621838), param_2, rd32(COW_IMG(COW_ADDR_LIFT_10578294)), 0u);
      if (0 < param_2) {
        iVar2 = 0;
        while( 1 ) {
          uVar1 = cow_bridge_10141c20(g, COW_IMG(COW_ADDR_LIFT_10143EBA), 1u, (const CowU32[]){ iVar2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10578294)), 0u);
          if ((uVar1 & 0xffff) + 0x7400 == param_2) break;
          iVar2 = iVar2 + 1;
          if (0xb < iVar2) {
            return;
          }
        }
        this_00 = rd32((uint32_t)((int)param_1 + 8));
        cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_10143EED), 2u, (const CowU32[]){ (((uint32_t)(extraout_var) & 0xffffu) << 16 | ((uint32_t)((CowU16)rd8((uint32_t)(iVar2 + 0x168 + (int)param_1))) & 0xffffu)), 0 }, this_00, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10578294)), 0u);
        cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_10143EF4), 0u, (const CowU32[]){ 0u }, this_00, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10578294)), 0u);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 4.
   Arguments: 2 register argument(s) [ecx, edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10143e90(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_10578294));   /* 0x10143e90: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10143e95: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10143e96: push esi */
    g->ebx = g->ecx;   /* 0x10143e97: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->eax + 0x8u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x10143e99: register ecx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10143e9c: push edi */
    cow_lift_10143e90(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
