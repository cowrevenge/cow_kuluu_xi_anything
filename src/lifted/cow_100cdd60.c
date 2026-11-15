/* f_0x100cdd60 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100cdd60 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100cdd60(Guest* g, int32_t param_1, int32_t param_2, int32_t param_3, float param_4, CowU32 param_5, CowU32 param_6, CowU32 param_7, CowU32 param_8, CowU32 param_9, int32_t param_10)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU32 uVar2;
    if ((int32_t)rd32((uint32_t)(param_1 + 0x70)) != 0) {
        cVar1 = cow_bridge_10097a60(g, COW_IMG(COW_ADDR_LIFT_100CDD70), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (cVar1 != '\0') {
          return;
        }
        if (param_10 == 0) {
          return;
        }
        if (param_10 < 4) goto L_100cdd8e;
      }
      param_10 = 3;
    L_100cdd8e:
      uVar2 = cow_bridge_10084390(g, COW_IMG(COW_ADDR_LIFT_100CDD95), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      cVar1 = cow_bridge_10084350(g, COW_IMG(COW_ADDR_LIFT_100CDD9D), 1u, (const CowU32[]){ uVar2 }, g->ecx, g->edx, g->eax, 0u);
      if (cVar1 == '\0') {
        uVar2 = cow_bridge_10084390(g, COW_IMG(COW_ADDR_LIFT_100CDDAC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cVar1 = cow_bridge_10084370(g, COW_IMG(COW_ADDR_LIFT_100CDDB4), 1u, (const CowU32[]){ uVar2 }, g->ecx, g->edx, g->eax, 0u);
        if ((cVar1 == '\0') && ((int32_t)rd32((uint32_t)(param_1 + 0x80)) == 0)) {
          if ((int8_t)rd8((uint32_t)(param_1 + 0xf8)) == '\0') {
            if (param_2 == 0) {
              if (param_3 == 0) {
                uVar2 = 0x3f696664;
              }
              else if (param_3 == 1) {
                uVar2 = 0x3f696264;
              }
              else {
                uVar2 = 0;
              }
            }
            else {
              uVar2 = 0x3f696664;
              if (param_2 == 2) {
                uVar2 = 0x3f696264;
              }
            }
          }
          else {
            uVar2 = 0x3f6d6664;
            if ((param_2 != 0) && (param_2 == 2)) {
              uVar2 = 0x3f6d6264;
            }
          }
          cow_bridge_100cd920(g, COW_IMG(COW_ADDR_LIFT_100CDE5E), 11u, (const CowU32[]){ uVar2, param_4 * rdf32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1035D730) + param_10 * 4 + 8)), param_5, param_6, param_7, param_8, param_9, 0, 0, 0, 0 }, g->ecx, g->edx, g->eax, 0u);
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 10 parameter(s), cleanup 36 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 36.
   Arguments: 1 register argument(s) [ecx], 9 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100cdd60(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    float param_4 = rdf32((uint32_t)(sp0 + 4u + 0x8u));   /* float argument */
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    CowU32 param_7 = rd32((uint32_t)(sp0 + 4u + 0x14u));
    CowU32 param_8 = rd32((uint32_t)(sp0 + 4u + 0x18u));
    CowU32 param_9 = rd32((uint32_t)(sp0 + 4u + 0x1cu));
    CowU32 param_10 = rd32((uint32_t)(sp0 + 4u + 0x20u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100cdd60: push esi */
    g->esi = g->ecx;   /* 0x100cdd61: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100cdd63: push edi */
    { uint32_t A = (uint32_t)(g->esi + 0x70u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x100cdd64: register ecx, replayed as the entry ran it */
    cow_lift_100cdd60(g, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9, param_10);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 36u);
}
/* COW_ADAPTER END */
