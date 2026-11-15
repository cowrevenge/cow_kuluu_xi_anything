/* f_0x101389c0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101389c0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101389c0(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    if ((int8_t)rd8((uint32_t)(param_1 + 0x54)) == '\0') {
        iVar2 = param_1 + 0x2c;
      }
      else {
        iVar2 = cow_bridge_101cc4f0(g, COW_IMG(COW_ADDR_LIFT_101389D0), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
        if (iVar2 == 0) {
          wr8((uint32_t)(param_1 + 0x458), 0);
          goto L_10138a07;
        }
        iVar2 = iVar2 + 0x7c;
      }
      cow_bridge_10312031(g, COW_IMG(COW_ADDR_LIFT_10138A04), 3u, (const CowU32[]){ param_1 + 0x458, COW_IMG(COW_ADDR_LIFT_1034F7E0), iVar2 }, g->ecx, g->edx, g->eax, 12u);
    L_10138a07:
      iVar2 = 1;
      if ((int8_t)rd8((uint32_t)(param_1 + 0x54)) != '\0') {
        do {
          cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10138A1E), 2u, (const CowU32[]){ 5, iVar2 }, g->ecx, g->edx, g->eax, 0u);
          iVar2 = iVar2 + 1;
        } while (iVar2 < 10);
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10138A30), 2u, (const CowU32[]){ 11u, 9u }, g->ecx, g->edx, g->eax, 0u);
        return;
      }
      do {
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10138A3E), 2u, (const CowU32[]){ 0xb, iVar2 }, g->ecx, g->edx, g->eax, 0u);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 10);
      if ((int8_t)rd8((uint32_t)(param_1 + 0x55)) == '\0') {
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10138A57), 2u, (const CowU32[]){ 5u, 9u }, g->ecx, g->edx, g->eax, 0u);
      }
      if (((int8_t)rd8((uint32_t)(param_1 + 0x2c)) == '\0') ||
         (((int8_t)rd8((uint32_t)(param_1 + 0x14)) != -0x24 && ((int8_t)rd8((uint32_t)(param_1 + 0x14)) != -0x22)))) {
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10138A8B), 2u, (const CowU32[]){ 5u, 6u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10138AC1), 2u, (const CowU32[]){ 5u, 7u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10138AFC), 2u, (const CowU32[]){ 5u, 8u }, g->ecx, g->edx, g->eax, 0u);
        return;
      }
      cVar1 = cow_bridge_100e47c0(g, COW_IMG(COW_ADDR_LIFT_10138A78), 1u, (const CowU32[]){ 8u }, g->ecx, g->edx, g->eax, 4u);
      if (cVar1 == '\0') {
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10138B08), 2u, (const CowU32[]){ 5u, 6u }, g->ecx, g->edx, g->eax, 0u);
        iVar2 = cow_bridge_101cc4f0(g, COW_IMG(COW_ADDR_LIFT_10138A90), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (((iVar2 == 0) || (((CowU8)(rd32((uint32_t)(iVar2 + 0x128)) >> 0xb) & 7) < 3)) &&
           ((rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) == 0 || (rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x40dec)) < 6)))) {
          cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10138B17), 2u, (const CowU32[]){ 5u, 6u }, g->ecx, g->edx, g->eax, 0u);
        }
      }
      if ((rd8((uint32_t)(param_1 + 0x15)) & 0x20) != 0) {
        cVar1 = cow_bridge_100e47c0(g, COW_IMG(COW_ADDR_LIFT_10138ACE), 1u, (const CowU32[]){ 8u }, g->ecx, g->edx, g->eax, 4u);
        if (cVar1 != '\0') {
          return;
        }
        if (rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) != 0) {
          cVar1 = (int8_t)rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x40dea));
          if (cVar1 == '\x01') {
            return;
          }
          if (cVar1 == '\x02') {
            return;
          }
          if (cVar1 == '\x03') {
            return;
          }
        }
      }
      cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10138B23), 2u, (const CowU32[]){ 5u, 8u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10138B2F), 2u, (const CowU32[]){ 5u, 7u }, g->ecx, g->edx, g->eax, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101389c0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101389c0: push esi */
    g->esi = g->ecx;   /* 0x101389c1: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101389c3: push edi */
    { uint32_t A = (uint32_t)(g->esi + 0x54u); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x101389c4: register eax, replayed as the entry ran it */
    cow_lift_101389c0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
