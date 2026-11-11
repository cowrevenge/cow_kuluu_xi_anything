/* f_0x10157660 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10157660 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10157660(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    int iVar3;
    CowU32 uVar4;
    if ((rd32((uint32_t)(param_1 + 0x5c)) & 3) == param_2) {
        return;
      }
      if (param_2 == 0) {
        uVar4 = 1;
      }
      else {
        if (param_2 == 1) {
          uVar4 = 0;
        }
        else {
          if (param_2 != 2) {
            return;
          }
          uVar4 = 4;
        }
        if (rd8((uint32_t)(param_1 + 0x20)) == '\0') {
          return;
        }
        cVar1 = cow_bridge_101576f0(g, COW_IMG(COW_ADDR_LIFT_10157692), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (cVar1 == '\x01') {
          return;
        }
        if (rd8((uint32_t)(param_1 + 0x22)) == '\x01') {
          return;
        }
        iVar2 = cow_bridge_10081550(g, COW_IMG(COW_ADDR_LIFT_101576A6), 0u, (const CowU32[]){ 0u }, 273143296u, g->edx, g->eax, 0u);
        iVar3 = cow_bridge_101598a0(g, COW_IMG(COW_ADDR_LIFT_101576AF), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar2 == 0) {
          return;
        }
        if (iVar2 == iVar3) {
          return;
        }
      }
      cow_bridge_10159420(g, COW_IMG(COW_ADDR_LIFT_101576BF), 2u, (const CowU32[]){ uVar4, 0 }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(param_1 + 0x5c), (rd32((uint32_t)(param_1 + 0x5c)) ^ param_2) & 3 ^ rd32((uint32_t)(param_1 + 0x5c)));
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
void cow_adapter_10157660(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10157660: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10157661: push ebp */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->ebp = (uint32_t)(rd32(A)); }   /* 0x10157662: register ebp, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10157666: push esi */
    g->esi = g->ecx;   /* 0x10157667: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10157669: push edi */
    { uint32_t A = (uint32_t)(g->esi + 0x5Cu); g->eax = (uint32_t)(rd32(A)); }   /* 0x1015766a: register eax, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0x3u; uint32_t r = (uint32_t)(a & b); g->eax = (uint32_t)(r); }   /* 0x1015766d: register eax, replayed as the entry ran it */
    cow_lift_10157660(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
