/* f_0x10205ba0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10205ba0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10205ba0(Guest* g, int32_t param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 uVar2;
    uVar2 = 1 << (rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10385388) + 4u * (uint32_t)(param_2 + -1 + (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 8)) * 5))) & 0x1f);
      uVar1 = rd32((uint32_t)(param_1 + 0x2c));
      if ((uVar2 & uVar1) == 0) {
        wr32((uint32_t)(param_1 + 0x2c), uVar1 | uVar2);
      }
      else {
        wr32((uint32_t)(param_1 + 0x2c), ~uVar2 & uVar1);
      }
      if ((int32_t)rd32((uint32_t)(param_1 + 0x2c)) == 0) {
        if (param_2 + -1 == 0) {
          cow_bridge_10037c50(g, COW_IMG(COW_ADDR_LIFT_10205BE8), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        }
        wr32((uint32_t)(param_1 + 0x2c), rd32((uint32_t)(param_1 + 0x2c)) | 1 << (rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10385388) + 4u * (uint32_t)((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 8)) * 5))) & 0x1f));
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10205ba0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    { uint32_t A = (uint32_t)(g->esp + 0x4u); g->edx = (uint32_t)((uint32_t)(int32_t)((int16_t)rd16(A))); }   /* 0x10205ba0: register edx, replayed as the entry ran it */
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_10456A28));   /* 0x10205ba5: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10205baa: push esi */
    g->esi = g->ecx;   /* 0x10205bab: the value the entry loaded and the decompiler dropped */
    { { uint32_t a = g->edx; uint32_t r = (uint32_t)(a - 1u); g->edx = (uint32_t)(r); }; }   /* 0x10205bad: register edx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->eax + 0x8u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x10205bae: register ecx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10205bb1: push edi */
    g->eax = 1u;   /* 0x10205bb2: the value the entry loaded and the decompiler dropped */
    { g->edi = (uint32_t)((uint32_t)(g->edx + g->ecx * 4)); }   /* 0x10205bb7: register edi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->ecx + g->edi + COW_IMG(COW_ADDR_LIFT_10385388) + RD); g->ecx = (g->ecx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x10205bba: register ecx, replayed as the entry ran it */
    { { unsigned c = (unsigned)((uint8_t)g->ecx) & 31u; if (c) { uint32_t a = g->eax; uint32_t r; r = (uint32_t)((uint32_t)a << c); g->eax = (uint32_t)(r); } }; }   /* 0x10205bc1: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esi + 0x2Cu); g->ecx = (uint32_t)(rd32(A)); }   /* 0x10205bc3: register ecx, replayed as the entry ran it */
    cow_lift_10205ba0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
