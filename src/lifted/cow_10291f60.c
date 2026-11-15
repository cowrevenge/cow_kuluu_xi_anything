/* f_0x10291f60 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10291f60 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10291f60(Guest* g, int32_t param_1, int32_t param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    char cVar2;
    cVar2 = '\0';
      iVar1 = (int32_t)rd32((uint32_t)(param_1 + 0x6c));
      if (iVar1 != 0) {
        do {
          if (iVar1 == param_2) {
            cVar2 = -1;
            if ((int32_t)rd32((uint32_t)(iVar1 + 0x70)) == 0) {
              wr32((uint32_t)(iVar1 + 0x70), 0);
            }
            else {
              wr32((uint32_t)(iVar1 + 0x70), rd32((uint32_t)((int32_t)rd32((uint32_t)(iVar1 + 0x70)) + 0x70)));
            }
          }
          iVar1 = (int32_t)rd32((uint32_t)(iVar1 + 0x70));
        } while (iVar1 != 0);
        if (cVar2 != '\0') {
          wr32((uint32_t)(param_2 + 0x68), 0);
          wr32((uint32_t)(param_2 + 0x70), 0);
          return;
        }
      }
      cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_10291FAE), 3u, (const CowU32[]){ 272316316u, 272346932u, 321u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_10291FBA), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103BB0A4), param_1, param_2 }, g->ecx, g->edx, g->eax, 24u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(edx), cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 1 register argument(s) [edx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10291f60(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->edx;   /* edx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10291f60: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10291f61: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->esi = (uint32_t)(rd32(A)); }   /* 0x10291f62: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10291f66: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->edi = (uint32_t)(rd32(A)); }   /* 0x10291f67: register edi, replayed as the entry ran it */
    g->ebx = 0u;   /* 0x10291f6b: the value the entry loaded and the decompiler dropped */
    { uint8_t a = (uint8_t)g->edx; uint8_t b = (uint8_t)(uint8_t)g->edx; uint8_t r = (uint8_t)(a ^ b); g->edx = (g->edx & 0xFFFFFF00u) | (uint8_t)(r); }   /* 0x10291f6d: register edx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->edi + 0x6Cu); g->eax = (uint32_t)(rd32(A)); }   /* 0x10291f6f: register eax, replayed as the entry ran it */
    cow_lift_10291f60(g, param_1, param_2);

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
