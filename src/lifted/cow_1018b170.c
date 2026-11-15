/* f_0x1018b170 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1018b170 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1018b170(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    cow_bridge_10187380(g, COW_IMG(COW_ADDR_LIFT_1018B17A), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      cow_bridge_1018bbb0(g, COW_IMG(COW_ADDR_LIFT_1018B187), 0u, (const CowU32[]){ 0u }, (g->esi + 456u), g->edx, g->eax, 0u);
      wr32((uint32_t)param_1, COW_IMG(COW_ADDR_LIFT_10336838));
      wr32(COW_IMG(COW_ADDR_LIFT_1065CB08), 0);
      wr32((uint32_t)((int)param_1 + 0x1c4), 0);
      wr8((uint32_t)((int)param_1 + 0x1ce), 0);
      cow_bridge_1018bc40(g, COW_IMG(COW_ADDR_LIFT_1018B1AA), 1u, (const CowU32[]){ 0xffffffff }, (CowU32)((int)param_1 + 0x1c8), g->edx, g->eax, 0u);
      wr16((uint32_t)((int)param_1 + 0x1cc), 0);
      wr32((uint32_t)((int)param_1 + 0x1d0), 0x422c0000);
      wr32((uint32_t)((int)param_1 + 0x1d4), 0);
      wr32((uint32_t)((int)param_1 + 0x1c0), param_1);
      wr32((uint32_t)((int)param_1 + 0x1ac), 0);
      wr32((uint32_t)((int)param_1 + 4), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA58), rd32(COW_IMG(COW_ADDR_LIFT_1065CA58)) & 0xfffffffc);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA60), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA64), 0x80);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA65), 0x80);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA66), 0x80);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA67), 0x80);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA68), 0x80);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA69), 0x80);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA6A), 0x80);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA6B), 0x80);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA6C), 0x80);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA6D), 0x80);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA6E), 0x80);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA6F), 0x80);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA70), 0x80);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA71), 0x80);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA72), 0x80);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA73), 0x80);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA74), 0x42c80000);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA78), 0x42a00000);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA7C), 0x3f800000);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA84), 0x80);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA85), 0x80);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA86), 0x80);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA87), 0x80);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA88), 0x80);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA89), 0x80);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA8A), 0x80);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA8B), 0x80);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA8C), 0x80);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA8D), 0x80);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA8E), 0x80);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA8F), 0x80);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA90), 0x80);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA91), 0x80);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA92), 0x80);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA93), 0x80);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA94), 0x42c80000);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA98), 0x42a00000);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CA9C), 0x3f800000);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CAA4), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CAA5), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CAA6), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CAA7), 0x80);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CAA8), 0x42a00000);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CAAC), 0x42a00000);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CAB0), 0x42c80000);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CAB4), 1);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CAB5), 1);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CAB6), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CAB8), 0x80);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CAB9), 0x80);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CABA), 0x80);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CABB), 0x80);
      wr32(COW_IMG(COW_ADDR_LIFT_1065CABC), 0);
      cow_bridge_101880c0(g, COW_IMG(COW_ADDR_LIFT_1018B32F), 1u, (const CowU32[]){ 275106392u }, param_1, g->edx, 128u, 0u);
      cow_bridge_1018bae0(g, COW_IMG(COW_ADDR_LIFT_1018B337), 1u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      g->eax = (CowU32)(param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1018b170(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1018b170: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1018b171: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1018b172: push edi */
    g->esi = g->ecx;   /* 0x1018b173: the value the entry loaded and the decompiler dropped */
    cow_lift_1018b170(g, param_1);

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
