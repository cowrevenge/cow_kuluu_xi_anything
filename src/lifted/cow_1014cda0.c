/* f_0x1014cda0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1014cda0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1014cda0(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    char cVar2;
    int iVar3;
    CowU32 uVar4;
    iVar3 = (int)rd16((uint32_t)(rd32((uint32_t)(param_1 + 8)) + 0x4c));
      if (param_2 == 5) {
        if ((iVar3 < 1) || (8 < iVar3)) {
          cow_bridge_10037c50(g, COW_IMG(COW_ADDR_LIFT_1014CE72), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        }
        else {
          iVar1 = rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x2c9dc + iVar3 * 0x48));
          if ((((iVar1 == 7) || (iVar1 == 0xb)) || (iVar1 == 0xd)) &&
             ((rd32(COW_IMG(COW_ADDR_LIFT_10578458)) != 0 && (rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10578458)) + 8)) != 0)))) {
            cVar2 = cow_bridge_1014ca10(g, COW_IMG(COW_ADDR_LIFT_1014CE16), 1u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x2c9dc + iVar3 * 0x48 }, g->ecx, g->edx, g->eax, 4u);
            if (cVar2 == '\0') {
              uVar4 = 0xb;
            }
            else {
              uVar4 = 5;
            }
            cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_1014CE3B), 1u, (const CowU32[]){ 3 }, uVar4, g->edx, g->eax, 0u);
            cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_1014CE4D), 2u, (const CowU32[]){ 1u, 0u }, g->ecx, g->edx, g->eax, 0u);
            cow_bridge_1015db80(g, COW_IMG(COW_ADDR_LIFT_1014CE62), 2u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10578458)) + 8)), 0 }, 274864184u, g->edx, g->eax, 0u);
            wr32((uint32_t)(param_1 + 0x14), 7);
            return;
          }
        }
      }
      else if (param_2 == 6) {
        cow_bridge_100f7fa0(g, COW_IMG(COW_ADDR_LIFT_1014CDC2), 1u, (const CowU32[]){ 15u }, (g->ecx - 1u), g->edx, g->eax, 4u);
        return;
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 8.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1014cda0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1014cda0: push esi */
    g->esi = g->ecx;   /* 0x1014cda1: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->ecx = (uint32_t)((uint32_t)(int32_t)((int16_t)rd16(A))); }   /* 0x1014cda3: register ecx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esi + 0x8u); g->eax = (uint32_t)(rd32(A)); }   /* 0x1014cda8: register eax, replayed as the entry ran it */
    { uint32_t a = g->ecx; uint32_t b = (uint32_t)0x5u; uint32_t r = (uint32_t)(a - b); g->ecx = (uint32_t)(r); }   /* 0x1014cdab: register ecx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->eax + 0x4Cu); g->eax = (uint32_t)((uint32_t)(int32_t)((int16_t)rd16(A))); }   /* 0x1014cdae: register eax, replayed as the entry ran it */
    cow_lift_1014cda0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
