/* f_0x100b9140 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100b9140 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100b9140(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    char cVar2;
    int iVar3;
    cVar2 = rd32(COW_IMG(COW_ADDR_LIFT_1048557A));
      cVar1 = rd8((uint32_t)(rd32((uint32_t)(param_1 + 0x20)) + 1 + (CowU32)rd16((uint32_t)(param_1 + 0x256))));
      if (cVar1 == '\0') {
        iVar3 = cow_bridge_100fc3c0(g, COW_IMG(COW_ADDR_LIFT_100B9177), 3u, (const CowU32[]){ 27u, 0u, 0u }, g->ecx, g->edx, ((g->eax - 1u) - 1u), 12u);
        if (iVar3 != 0) {
          wr16((uint32_t)(iVar3 + 4), 0);
          cow_bridge_100fc4d0(g, COW_IMG(COW_ADDR_LIFT_100B9192), 3u, (const CowU32[]){ iVar3, 0x1c, 0 }, g->ecx, g->edx, g->eax, 0u);
          wr32(COW_IMG(COW_ADDR_LIFT_1048557A), 1);
          wr16((uint32_t)(param_1 + 0x256), rd16((uint32_t)(param_1 + 0x256)) + 2);
          wr8((uint32_t)(param_1 + 0x25a), 1);
          return;
        }
      }
      else {
        if (cVar1 == '\x01') {
          wr8((uint32_t)(param_1 + 0x25a), 1);
          if (cVar2 == '\0') {
            wr16((uint32_t)(param_1 + 0x256), rd16((uint32_t)(param_1 + 0x256)) + 2);
            return;
          }
          return;
        }
        if ((cVar1 == '\x02') && (iVar3 = cow_bridge_100fc3c0(g, COW_IMG(COW_ADDR_LIFT_100B91D5), 3u, (const CowU32[]){ 27u, 0u, 0u }, g->ecx, g->edx, g->eax, 12u), iVar3 != 0)) {
          wr16((uint32_t)(iVar3 + 4), 2);
          cow_bridge_100fc4d0(g, COW_IMG(COW_ADDR_LIFT_100B91EC), 3u, (const CowU32[]){ iVar3, 0x1c, 0 }, g->ecx, g->edx, g->eax, 0u);
          wr32(COW_IMG(COW_ADDR_LIFT_1048557A), 1);
          wr16((uint32_t)(param_1 + 0x256), rd16((uint32_t)(param_1 + 0x256)) + 2);
          wr8((uint32_t)(param_1 + 0x25a), 1);
          return;
        }
      }
      wr8((uint32_t)(param_1 + 0x25a), 1);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [ebx, esi], frame pointer no, 0 locals, pops [esi, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100b9140(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100b9140: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100b9141: push esi */
    g->esi = g->ecx;   /* 0x100b9142: the value the entry loaded and the decompiler dropped */
    g->ebx = 0u;   /* 0x100b9144: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x256u); g->ecx = (g->ecx & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x100b9146: register ecx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esi + 0x20u); g->edx = (uint32_t)(rd32(A)); }   /* 0x100b914d: register edx, replayed as the entry ran it */
    g->eax = g->ecx;   /* 0x100b9150: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0xFFFFu; uint32_t r = (uint32_t)(a & b); g->eax = (uint32_t)(r); }   /* 0x100b9152: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->edx + g->eax + 0x1u); g->ebx = (g->ebx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x100b9157: register ebx, replayed as the entry ran it */
    g->eax = g->ebx;   /* 0x100b915b: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0x0u; uint32_t r = (uint32_t)(a - b); g->eax = (uint32_t)(r); }   /* 0x100b915d: register eax, replayed as the entry ran it */
    cow_lift_100b9140(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
