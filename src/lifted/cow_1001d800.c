/* f_0x1001d800 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1001d800 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1001d800(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    CowU32 pvVar2;
    CowU8 local_10[16];
    switch((rd8((uint32_t)((int)param_1 + 0x30)) & 0x70) >> 4) {
      case 0:
        cow_bridge_10017d50(g, COW_IMG(COW_ADDR_LIFT_1001D825), 1u, (const CowU32[]){ g->esi }, param_1, g->edx, g->eax, 0u);
        bVar1 = rd8((uint32_t)((int)param_1 + 0x30));
        break;
      case 1:
      case 2:
      case 3:
        goto switchD_1001d818_caseD_1;
      default:
        cow_bridge_10017d50(g, COW_IMG(COW_ADDR_LIFT_1001D837), 1u, (const CowU32[]){ param_1 }, g->ecx, g->edx, g->eax, 0u);
        bVar1 = rd8((uint32_t)((int)param_1 + 0x30));
      }
      cow_bridge_10017d20(g, COW_IMG(COW_ADDR_LIFT_1001D84B), 2u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103511CC) + 0x28, (bVar1 & 0x70) >> 4 }, g->ecx, g->edx, g->eax, 12u);
    switchD_1001d818_caseD_1:
      cow_bridge_10039810(g, COW_IMG(COW_ADDR_LIFT_1001D858), 1u, (const CowU32[]){ (int)param_1 + 0x31 }, local_10, g->edx, g->eax, 0u);
      pvVar2 = (CowU32)cow_bridge_1003aea0(g, COW_IMG(COW_ADDR_LIFT_1001D86B), 3u, (const CowU32[]){ local_10, param_1, 0 }, g->ecx, g->edx, g->eax, 0u);
      if (pvVar2 == (CowU32)0x0) {
        pvVar2 = (CowU32)cow_bridge_1002c890(g, COW_IMG(COW_ADDR_LIFT_1001D878), 1u, (const CowU32[]){ 72u }, g->ecx, g->edx, g->eax, 4u);
        if (pvVar2 == (CowU32)0x0) {
          return;
        }
        pvVar2 = (CowU32)cow_bridge_10039920(g, COW_IMG(COW_ADDR_LIFT_1001D886), 0u, (const CowU32[]){ 0u }, pvVar2, g->edx, g->eax, 0u);
        if (pvVar2 == (CowU32)0x0) {
          return;
        }
        cow_bridge_1001d8e0(g, COW_IMG(COW_ADDR_LIFT_1001D894), 1u, (const CowU32[]){ pvVar2 }, param_1, g->edx, g->eax, 0u);
        cow_bridge_1003ab80(g, COW_IMG(COW_ADDR_LIFT_1001D8A0), 1u, (const CowU32[]){ pvVar2 }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10071f50(g, COW_IMG(COW_ADDR_LIFT_1001D8A7), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if ((int8_t)rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1047B970)) + 0x10)) == '\x01') {
          cow_bridge_10039a30(g, COW_IMG(COW_ADDR_LIFT_1001D8B9), 0u, (const CowU32[]){ 0u }, pvVar2, g->edx, g->eax, 0u);
        }
      }
      wr32((uint32_t)((int)pvVar2 + 4), (int32_t)rd32((uint32_t)((int)pvVar2 + 4)) + 1);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 16 locals, pops [edi, esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1001d800(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 0x10u;                      /* 0x1001d800: 16 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1001d803: push esi */
    g->esi = g->ecx;   /* 0x1001d804: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1001d806: push edi */
    { uint32_t A = (uint32_t)(g->esi + 0x30u); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x1001d807: register eax, replayed as the entry ran it */
    { g->edi = (uint32_t)((uint32_t)(g->esi + 0x31u)); }   /* 0x1001d80a: register edi, replayed as the entry ran it */
    { { unsigned c = (unsigned)(0x4u) & 31u; if (c) { uint32_t a = g->eax; uint32_t r; r = (uint32_t)((uint32_t)a >> c); g->eax = (uint32_t)(r); } }; }   /* 0x1001d80d: register eax, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0x7u; uint32_t r = (uint32_t)(a & b); g->eax = (uint32_t)(r); }   /* 0x1001d810: register eax, replayed as the entry ran it */
    cow_lift_1001d800(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
